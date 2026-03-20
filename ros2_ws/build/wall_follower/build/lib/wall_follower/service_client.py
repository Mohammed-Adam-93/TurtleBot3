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



class MyActionClient(Node):

    def __init__(self):
        super().__init__('action_client')
        self._action_client = ActionClient(self, OdomRecord, '/record_odom')

    def send_goal(self):
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

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result.list_of_odoms

        #result_cleaned = [{"x": p.x, "y": p.y, "theta": p.z} for p in result]
        for i, p in enumerate(result):
            self.get_logger().info(f'x:     {p.x:.3f}')
            self.get_logger().info(f'y:     {p.y:.3f}')
            self.get_logger().info(f'theta: {p.z:.3f}')
            self.get_logger().info('---')
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(
           'Received feedback: {0}'.format(feedback_msg.feedback.current_total))


def main(args=None):
    rclpy.init(args=args)

    action_client = MyActionClient()

    action_client.send_goal()

    rclpy.spin(action_client)


if __name__ == '__main__':
    main()