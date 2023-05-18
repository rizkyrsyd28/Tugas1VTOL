#include <ros/ros.h>
#include "myTurtle.cpp"

int main(int argc, char **argv) {
    ros::init(argc, argv, "turtle");
    ros::NodeHandle n;
    myTurtleControl tb(n);
    while (ros::ok())
        tb.runNode();
    return 0;
}
