//
// Created by rasyid on 11/05/23.
//

#include "ros/ros.h"
#include "std_msgs/String.h"
#include "myTalker.cpp"
#include "../include/rizky_pkg/myTalker.h"
#include <sstream>

/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */
int main(int argc, char **argv)
{

    ros::init(argc, argv, "talker");
    ros::NodeHandle n;
    myTalker talk(n);
    while (ros::ok())
    {
        talk.run();
        ros::spinOnce();
    }


    return 0;
}
