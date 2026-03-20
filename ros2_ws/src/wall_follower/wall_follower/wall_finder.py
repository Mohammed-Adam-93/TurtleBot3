import rclpy
import signal
from rclpy.node import Node
from project_interfaces.srv import FindWall
from geometry_msgs.msg import Twist
from sensor_msgs.msg import LaserScan
import time
from rclpy.qos import ReliabilityPolicy, QoSProfile
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup

class SearchServer(Node):
    def __init__(self):
        super().__init__("service_server_node")

        self.reentrant_group_1 = ReentrantCallbackGroup()

        name_service = '/find_wall'
        self.srv = self.create_service(FindWall, name_service, self.server_callback, callback_group=self.reentrant_group_1)

        self.subscriber = self.create_subscription(LaserScan,'/scan',self.laser_callback, QoSProfile(depth=20, reliability=ReliabilityPolicy.RELIABLE), callback_group=self.reentrant_group_1)

        self.pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.var = Twist()
        self.front_distance = 0.0
        self.side_distance  = 0.0
        self.closest_dis = 0.0
        self.flag = 0

    def laser_callback(self,msg): 
        if not msg.ranges :
            self.get_logger().info('Double check your sensor')
            return

        self.front_distance  = msg.ranges[360]#360
        self.side_distance  = msg.ranges[180]#180
        self.closest_dis = min(msg.ranges)
        #self.get_logger().info(f'distance 360= {msg.ranges[359]} m')
        #self.get_logger().info(f'distance 0= {msg.ranges[0]} m')
        #self.get_logger().info(f'Front distance = {self.front_distance:.4f} m')
        #self.get_logger().info(f'Side distance = {self.side_distance:.4f} m')
        #self.get_logger().info(f'closest distance = {self.closest_dis:.4f} m')
        #self.get_logger().info(f'farest ditance 360= {max(msg.ranges)} m')

    def server_callback(self, request, response):
        time.sleep(2)
        self.get_logger().info('Starting searching for the nearst wall')
           
        #self.var.angular.z = 0
        while True:

            self.get_logger().info(f'Front distance = {self.front_distance:.4f} m')
            self.get_logger().info(f'Side distance = {self.side_distance:.4f} m')
            #self.get_logger().info(f'closest distance = {self.closest_dis} m')
            #if self.front_distance == 0.0 and self.side_distance == 0.0:
                #return
            #if self.front_distance <= self.closest_dis + 0.01:
                #self.flag = 1
                #self.get_logger().info('a wall has been found')

            if self.front_distance > self.closest_dis + 0.04 :#and self.flag == 0
                self.var.linear.x = 0.0
                self.var.angular.z = 0.2
                self.pub.publish(self.var)
                #time.sleep(0.001)
            else:
                #self.get_logger().info('a wall has been found')
                self.var.linear.x = 0.0
                self.var.angular.z = 0.0
                self.pub.publish(self.var)
                self.get_logger().info('moving twords wall')
                front_distance  = self.front_distance
                self.get_logger().info('Before moving forward')
                while  self.front_distance > 0.30:
                    self.get_logger().info('start moving forward') 
                    self.var.linear.x = 0.1
                    self.var.angular.z = 0.0
                    self.pub.publish(self.var)
                    #time.sleep(0.002)
                    self.get_logger().info(f'Front distance = {self.front_distance:.4f} m')
                    front_distance  = self.front_distance
                    
                self.get_logger().info('Finding the right direction')
                while  self.side_distance >  self.closest_dis + 0.04:
                    
                    self.var.linear.x = 0.0
                    self.var.angular.z = 0.2
                    self.pub.publish(self.var)
                    #time.sleep(0.001)

                self.var.linear.x = 0.0
                self.var.angular.z = 0.0
                self.pub.publish(self.var)
                break
        #self.get_logger().info('End of the service')
        response.wallfound = True
        return response


def main(args=None):
    rclpy.init(args=args)

    robot_service = SearchServer()
        
    executor = MultiThreadedExecutor(num_threads=2)
    executor.add_node(robot_service)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass

    # Destroy the node explicitly
    robot_service.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()