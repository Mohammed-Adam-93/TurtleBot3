# TurtleBot3
![TurtleBot3_Image](Images/TurtleBot3.png)
# Goal
The goal of this project is to program TurtleBot3 to follow walls inside a confined square area. This autonomous navigation should run in Gazebo simulation and in a real Mobile robot. It should do the following:<br>
- Use a service to find a suitable starting point.<br>
- Have a algorithm to following the walls, make the turnings and descide when to stop<br>
- Use an action to record all the world cartesian coordinates it came across. Beside calculating the length travelled by TurtleBot3<br>

# High Level Control Logic
![TurtleBot3_Follow_Algorithm](Images/Follower_Algorithm.png)

# Wall Following Function
![TurtleBot3_Wall_Following_Function](Images/wallFollow_Function.png)

# PID Controller
The PID controller will intervene when called by the wall following functioning to correct the orientation of TurtleBot3 to ensure it navigates along the ideal desired path(in Green Line)<b>
![TurtleBot3_PID_Controller](Images/PID_Controller.png)

# Service Server
The service enables TurtelBot3 to find a suitable start point close to the nearsest wall<b>
![TurtleBot3_Service_server](Images/service_server.png)

# Action Server
The action records the [x, y, z] coordinates, each second, that the robot came across. It also claulates the distance travelled by the robot from the starting point.<b>
![TurtleBot3_Action_server](Images/Action_Server.png)

# Challenges 
-Procedural programming was messy and hard to debug. Object oriented programmign was the solution to orginze the code and make eay to be understood.<b>  
-PID controller proved to be hard to be tuned manually. A better approach would be to use PID-Tuner software.<b>

# Demo in simulation
https://github.com/user-attachments/assets/ae10a0d1-7d69-4f9b-94b2-501f9c5f5312

# Demo in real robot
https://github.com/user-attachments/assets/60fa9316-c072-4670-b1e6-fdf333311a35