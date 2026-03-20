# Importing the necessary libraries  
import rclpy
import signal
from rclpy.node import Node
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
from std_msgs.msg import Float32
from rclpy.qos import ReliabilityPolicy, QoSProfile
from project_interfaces.srv import FindWall
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from project_interfaces.action import OdomRecord
from rclpy.action import ActionClient, ActionServer
from geometry_msgs.msg import Point
from rclpy.executors import MultiThreadedExecutor
from action_msgs.msg import GoalStatus

class RoboFollower_2(Node):
    def __init__(self, node_name="Follower_Robot"):
        self._node_name = node_name
        super().__init__(self._node_name)
        self.get_logger().info(self._node_name +" Ready...")
        # Executor to manage callbacks
        self.mutuallyexclusive_group = MutuallyExclusiveCallbackGroup()
        self.reentrant_group = ReentrantCallbackGroup()
        # Calling the service
        name_service = '/find_wall'
        self.client = self.create_client(FindWall, name_service, callback_group=self.mutuallyexclusive_group)
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service'+name_service+' not available, waiting again...')
        self.req = FindWall.Request()
        # Calling the action
        self._action_client = ActionClient(self, OdomRecord, '/record_odom', callback_group=self.reentrant_group)
        ## Subscriber to LaserScan ##
        self.subscriber_laser = self.create_subscription(
            LaserScan,
            '/scan',
            self.laser_callback,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.RELIABLE), 
            callback_group=self.reentrant_group 
        )
        #distances
        self.front_distance = 0.0
        self.side_distance  = 0.0
        self.closest_dis = 0.0
        self.ranges = None
        ## Publisher for movement commands ##
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        self.move = Twist()
        ## PID parameters ##
        self.kp = 1.5
        self.kd = 0.5
        #self.ki = 0.1
        self.target_dis = 0.25
        self.prev_err = 0
        self.last_time = self.get_clock().now().to_msg()
        self.last_time = self.last_time.sec
        self.rate = self.create_rate(75)
        self.service_done = False
        self.feedback = None
        self.goal_staus = 0
        ## run ##
        self.client_call()        
        self.create_timer(0.01, self.follow_walls,self.reentrant_group)
        #Stop
        
       

    def laser_callback(self, msg): 
        if not self.service_done:
            #self.get_logger().info('Laser sensor waits for the service to finish')
            return
        self.ranges = msg.ranges
        self.front_distance  = msg.ranges[360]#360
        self.side_distance  = msg.ranges[180]#180
        self.closest_dis = min(msg.ranges)
       
        #self.get_logger().info(f'Front distance = {self.front_distance} m')
        #self.get_logger().info(f'Side distance = {self.side_distance} m')
        

    def turn(self):
        self.move.angular.z = 1.75
        self.move.linear.x = 0.075
        self.publisher_.publish(self.move) 
        #self.rate.sleep()

            

    def PD_corr(self):
        if not self.ranges:
            return
        current_distance = self.side_distance
        err = self.target_dis - current_distance
        current_time = self.get_clock().now().to_msg()
        current_time = current_time.nanosec
        dt = current_time - self.last_time
        #self.get_logger().info(f'time difference = {dt:.2f} sec')
        if dt == 0.0:
            output = 0.0
        else: 
            derivative = (err - self.prev_err)/dt      
            output = self.kp*err +  self.kd*derivative  #self.ki*self.integral 
        self.prev_err = err
        self.last_time = current_time
        self.move.linear.x = 0.075
        self.move.angular.z = output
        #self.get_logger().info(f'rotating by = {(output)*180/3.14} deg')
        self.publisher_.publish(self.move)


    def forward(self):
        self.move.linear.x = 0.09
        self.move.angular.z = 0.0
        self.publisher_.publish(self.move) 


    def stop(self):
        self.move.linear.x = 0.0
        self.move.angular.z = 0.0
        self.publisher_.publish(self.move) 
 
    
    def follow_walls(self):
        #self.get_logger().info("[TIMER] Waiting for service to complete...")
        if not self.ranges:
            
            return
        elif not self.service_done:
            #self.get_logger().info("[TIMER] Waiting for service to complete...")
            return
        front = self.ranges[0]
        side =  self.ranges[540]
        #self.get_logger().info(f'Front distance = {len(self.ranges)} m')
        #self.get_logger().info(f'Side distance = {self.side_distance} m') 
        #while self.goal_staus < 4 :
        if  self.goal_staus == 4:
            self.stop()
        elif  self.front_distance < 0.5:
            self.turn()
            #self.get_logger().info(f'Trappend in turning...!') 
        elif self.side_distance < 0.28 and self.side_distance > 0.23:
            self.forward()
            #self.get_logger().info(f'Trappend in forward...!')
        else:
            self.PD_corr()
            #self.get_logger().info(f'Trappend in PID...!')  
        #self.stop()

    def client_call(self):
        future = self.client.call_async(self.req)    
        rclpy.spin_until_future_complete(self, future)
        response = future.result()
        self.service_done = True
        self.send_goal()
        if future.done():
            self.get_logger().info('End of the service')
            #self.get_logger().info(f'Success: {response.wallfound}')
        else:
            self.get_logger().info('Service call failed')
        
        return response

    def send_goal(self):
        if not self.service_done:
            #self.get_logger().info("Action Client stuck.")
            return
        goal_msg = OdomRecord.Goal()
        #goal_msg.rotation_time = seconds

        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg, feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return
        self.get_logger().info('Starting recording Odometry sensor readings...')
        #self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result.list_of_odoms 
        status = future.result().status 
        status = future.result().status
        self.goal_staus = status
        #if status == GoalStatus.STATUS_SUCCEEDED:
            #self.get_logger().info(f'Goal Succeed = {status}')
        #result_cleaned = [{"x": p.x, "y": p.y, "theta": p.z} for p in result]
        self.get_logger().info('Listing the Odometry readings recorded:')
        for i, p in enumerate(result):
            self.get_logger().info(f'x:     {p.x:.3f} m')
            self.get_logger().info(f'y:     {p.y:.3f} m')
            self.get_logger().info(f'theta: {p.z:.3f} (quaterion)')
            self.get_logger().info('---') 
        #self.stop_flag = True
        self.get_logger().info(f'Distance traveled =  {self.feedback.current_total} m')   
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        self.feedback = feedback_msg.feedback
        #self.get_logger().info(
           #'Received feedback: {0}'.format(feedback_msg.feedback.current_total))


def main(args=None):
    rclpy.init(args=args)
    FollowerBot = RoboFollower_2()

    # Use MultiThreadedExecutor
    executor = MultiThreadedExecutor(num_threads=3)
    executor.add_node(FollowerBot)

    def signal_handler(sig, frame):
        FollowerBot.stop()
        FollowerBot.destroy_node()
        rclpy.shutdown()

    # Register the signal handler for CTRL+C
    signal.signal(signal.SIGINT, signal_handler) #signal.SIGINT == CTRL+C

    
    executor.spin()

if __name__ == '__main__':
    main()