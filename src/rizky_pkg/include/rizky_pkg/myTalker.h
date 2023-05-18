//
// Created by rasyid on 11/05/23.
//

#ifndef RIZKY_PKG_MYTALKER_H
#define RIZKY_PKG_MYTALKER_H

#include "ros/ros.h"
#include <rizky_pkg/Test.h>

using namespace std;

class myTalker {
    public:
    myTalker(ros::NodeHandle n);
    void run();

    private:
    ros::NodeHandle nh; 
    ros::Publisher pub;
    rizky_pkg::Test msg;
};


#endif //RIZKY_PKG_MYTALKER_H
