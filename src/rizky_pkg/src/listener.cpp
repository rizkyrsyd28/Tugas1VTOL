//
// Created by rasyid on 11/05/23.
//
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "myListener.cpp"
#include "../include/rizky_pkg/myListener.h"

/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */
int main(int argc, char **argv)
{

    ros::init(argc, argv, "listener");
    ros::NodeHandle n;
    myListener talk(n);
    ros::spin();

    return 0;
}
