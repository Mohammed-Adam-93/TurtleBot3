#!/usr/bin/env python

import rclpy
from rclpy.node import Node
# import the LaserScan module from sensor_msgs interface
from sensor_msgs.msg import LaserScan
# import Quality of Service library, to set the correct profile and reliability to read sensor data.
from rclpy.qos import ReliabilityPolicy, QoSProfile

class ObstacleDetectorNode(Node):
    def __init__(self, node_name="obstacle_detector_node"):
        self._node_name = node_name
        super().__init__(self._node_name)

                # create the subscriber object
        # in this case, the subscriptor will be subscribed on /scan topic with a queue size of 10 messages.
        # use the LaserScan module for /scan topic
        # send the received info to the laserscan_callback method.
        self.subscriber = self.create_subscription(
            LaserScan,
            'scan',
            self.laserscan_callback,
            QoSProfile(depth=2, reliability=ReliabilityPolicy.RELIABLE))  # is the most used to read LaserScan data

        self.get_logger().info(self._node_name +" Ready...")

    def laserscan_callback(self, msg):
        # Find the minimum distance in the ranges array
        min_distance = min(msg.ranges)
        idx_min = msg.ranges.index(min_distance)
        max_distance = max(msg.ranges)
        idx_max = msg.ranges.index(max_distance)
        self.front_distance  = msg.ranges[360]#0
        self.side_distance  = msg.ranges[180]#540
        self.get_logger().info(f'Front distance = {self.front_distance:.4f} m')
        self.get_logger().info(f'Side distance = {self.side_distance:.4f} m')
        self.get_logger().info(f'Minimum distance: {min_distance:.4f} meters')
        self.get_logger().info(f'Minimum distance index: {idx_min}')
        
        self.get_logger().info(f'Maximum distance: {max_distance:.4f} meters')
        self.get_logger().info(f'Maximum distance index: {idx_max}')       
        #min_angle = msg.angle_min
        #min_angle = min_angle * 180 / 3.14
        #max_angle = msg.angle_max
        #max_angle = max_angle * 180 / 3.14
        #increment = msg.angle_increment
        #increment = increment * 180 / 3.14
        #self.get_logger().info(f'Max angle = {max_angle:.2f} degree')
        #self.get_logger().info(f'Min_angle = {min_angle:.2f} degree')
        #self.get_logger().info(f'Angle increment = {increment:.2f} degree')
        
def main(args=None):
    rclpy.init(args=args)
    node = ObstacleDetectorNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()