#ifndef MYTURTLECONTROL
#define MYTURTLECONTROL

#include "ros/ros.h"
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Pose.h>
#include <turtlesim/Pose.h>
#include <math.h>

#define PI 3.14159265358979323846

class myTurtleControl {
public:
    myTurtleControl(ros::NodeHandle n);
    void runNode();

private:
    ros::NodeHandle nh_;
    ros::Subscriber pose_sub_;
    ros::Publisher vel_pub_;
    double x_, y_, theta_;

    void poseCallback(const turtlesim::Pose::ConstPtr& msg);
    void moveForward();
    void rotate(double angle);
    void stopMovement();
};

#endif