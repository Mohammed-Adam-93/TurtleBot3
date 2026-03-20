import rclpy
from rclpy.node import Node
from project_interfaces.action import OdomRecord
from rclpy.action import ActionClient, ActionServer
from action_msgs.msg import GoalStatus
import time
from std_msgs.msg import Float32
from geometry_msgs.msg import Point
from nav_msgs.msg import Odometry
from rclpy.qos import ReliabilityPolicy, QoSProfile
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup


class MyActionServer(Node):
    def __init__(self):
        super().__init__('action_server')
        self.reentrant_group_1 = ReentrantCallbackGroup()
        # Action server to accept goals
        self.action_server = ActionServer(self, OdomRecord, '/record_odom', self.execute_callback, callback_group=self.reentrant_group_1)

        self.subscriber = self.create_subscription(Odometry,'/odom',self.odom_callback,
            QoSProfile(depth=10, reliability=ReliabilityPolicy.RELIABLE), callback_group=self.reentrant_group_1)
        self.last_odom = Point()
        self.first_odom = Point()
        self.odom_record = []
        self.flag = 0
        self.total_distance = 0
        self.last_x = 0.0
        self.last_y = 0.0

        self.starting_point = False

    def odom_callback(self, msg):
        position = msg.pose.pose.position
        linear = msg.twist.twist.linear
        if (position.x == 0.0 and position.y == 0.0 and position.z == 0.0 and
            linear.x == 0.0 and linear.y == 0.0 and linear.z == 0.0):
            self.get_logger().info('Received odometry message with no motion or pose data.')
            return
        self.last_odom = Point(x=msg.pose.pose.position.x, y=msg.pose.pose.position.y, z=msg.pose.pose.orientation.z)  
        if self.flag == 0:  
            if self.last_odom.x == 0.0 and self.last_odom.y == 0.0:
                self.flag = 0
            else:
                self.first_odom = Point(x=self.last_odom.x, y=self.last_odom.y, z=self.last_odom.z)
                self.last_x = self.last_odom.x
                self.last_y = self.last_odom.y
                self.flag = 1
        else:
            length_to_start = ((self.last_odom.x - self.first_odom.x)**2 + (self.last_odom.y - self.first_odom.y)**2)**0.5
            if length_to_start < 0.2 and self.total_distance < 0.1:
                self.starting_point = False
                #self.get_logger().info('The robot stops..!')
            elif length_to_start < 0.2 and self.total_distance > 3:
                #self.get_logger().info('Staring point reached..!')
                self.starting_point = True

        
    def execute_callback(self, goal_handle):
        #self.get_logger().info('Starting recording Odometry sensor readings...')
        
        while self.total_distance < 5.7 : 
            self.total_distance = self.total_distance +  ((self.last_odom.x - self.last_x)**2 + (self.last_odom.y - self.last_y)**2)**0.5
            new_odom = self.last_odom           
            self.last_x = new_odom.x
            self.last_y = new_odom.y
            self.get_logger().info(f'Total length recorded = {self.total_distance:.2f} m')
            feedback_msg = OdomRecord.Feedback()
            feedback_msg.current_total = self.total_distance
            goal_handle.publish_feedback(feedback_msg)
            self.odom_record.append(Point(x=new_odom.x,y=new_odom.y, z=new_odom.z))
            time.sleep(1)
            if self.starting_point:
                self.get_logger().info('Stop looping we have reached the starting point')
                break
            
        goal_handle.succeed()
        result = OdomRecord.Result()
        result.list_of_odoms = self.odom_record
        return result

def main(args=None):
    rclpy.init(args=args)
    node = MyActionServer()
    executor = MultiThreadedExecutor(num_threads=2)
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()