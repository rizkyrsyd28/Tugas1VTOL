#include "../include/rizky_pkg/myListener.h"


myListener::myListener(ros::NodeHandle n) : nh(n)
{
    sub = nh.subscribe("chatter", 10, &myListener::chatterCallback, this);
}

void myListener::chatterCallback(const rizky_pkg::TestConstPtr& msg)
{
    ostringstream oss; 
    oss << "\nI heard Test : \n\t num : " << msg->num << "\nname : " << msg->name
    << "\nlist : [" << msg->listofnum[0] << ", " << msg->listofnum[1] << ", " << msg->listofnum[2]
    << "\nnested\n" << "nested name : " << msg->nested.name1 << "\nnested num : " << msg->nested.num1;    
    ROS_INFO("\n========================\nI heard: [%s]\n==========================", oss.str().c_str());
}
