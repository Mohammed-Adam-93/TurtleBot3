#! /usr/bin/env python

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
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

class RoboFollower_2(Node):
    def __init__(self, node_name="Follower_Robot"):
        self._node_name = node_name
        super().__init__(self._node_name)
        self.get_logger().info(self._node_name +" Ready...")
        # Executor to manage callbacks
        self.mutuallyexclusive_group_1 = MutuallyExclusiveCallbackGroup()
        self.mutuallyexclusive_group_2 = MutuallyExclusiveCallbackGroup()
        # Calling the service
        name_service = '/find_wall'
        self.client = self.create_client(FindWall, name_service, callback_group=self.mutuallyexclusive_group_1)
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service'+name_service+' not available, waiting again...')
        self.req = FindWall.Request()

        ## Subscriber to LaserScan ##
        self.subscriber_laser = self.create_subscription(
            LaserScan,
            '/scan',
            self.laser_callback,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.RELIABLE), 
            callback_group=self.mutuallyexclusive_group_2
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
        ## run ##


        self.client_call()
        self.create_timer(0.01, self.follow_walls)

    def laser_callback(self, msg): 
        self.ranges = msg.ranges
        self.front_distance  = msg.ranges[0]
        self.side_distance  = msg.ranges[540]
        self.closest_dis = min(msg.ranges)
        self.get_logger().info(f'Front distance = {self.front_distance} m')
        self.get_logger().info(f'Side distance = {self.side_distance} m')
        

    def turn(self):
        self.move.angular.z = 2.0
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
        self.get_logger().info(f'time difference = {dt:.2f} sec')
        if dt == 0.0:
            output = 0.0
        else: 
            derivative = (err - self.prev_err)/dt      
            output = self.kp*err +  self.kd*derivative  #self.ki*self.integral 
        self.prev_err = err
        self.last_time = current_time
        self.move.linear.x = 0.075
        self.move.angular.z = output
        self.get_logger().info(f'rotating by = {(output)*180/3.14} deg')
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
        if not self.ranges:
            return
  
        front = self.ranges[0]
        side =  self.ranges[540]
        #self.get_logger().info(f'Front distance = {len(self.ranges)} m')
        #self.get_logger().info(f'Side distance = {self.side_distance} m')        
        if  front < 0.5:
            self.turn()
            self.get_logger().info(f'Trappend in turning...!') 
        elif side < 0.3 and side > 0.2:
            self.forward()
            self.get_logger().info(f'Trappend in forward...!') 
        else:
            self.PD_corr()
            self.get_logger().info(f'Trappend in PID...!')    

    def client_call(self):
        future = self.client.call_async(self.req)    
        rclpy.spin_until_future_complete(self, future)
        
        if self.future.done():
            response = self.future.result()
            self.get_logger().info(f'Success: {response.wallfound}')
        else:
            self.get_logger().info(f'Service call failed')
        
        return response




def main(args=None):
    rclpy.init(args=args)
    FollowerBot = RoboFollower_2()

    # Use MultiThreadedExecutor
    executor = MultiThreadedExecutor(num_threads=2)
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