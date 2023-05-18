#ifndef RIZKY_PKG_MYLISTENER_H
#define RIZKY_PKG_MYLISTENER_H

#include "ros/ros.h"
#include <rizky_pkg/Test.h>
#include <sstream>

using namespace std;

class myListener {
    public:
    myListener(ros::NodeHandle n);
    void chatterCallback(const rizky_pkg::TestConstPtr& msg);

    private:
    ros::NodeHandle nh; 
    ros::Subscriber sub;
};


#endif //RIZKY_PKG_MYTALKER_H
