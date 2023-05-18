//
// Created by rasyid on 11/05/23.
//

#include "../include/rizky_pkg/myTalker.h"


myTalker::myTalker(ros::NodeHandle n) : nh(n)
{
    pub = nh.advertise<rizky_pkg::Test>("chatter", 10);
}

void myTalker::run()
{
    ros::Rate loop_rate(10);

    string name = "rizky";
    int num = 23; 
    vector<double> list = {1.2, 3.4, 6.5};
    rizky_pkg::subTest sub; 
    sub.name1 = "sub rizky";
    sub.num1 = 231;

    while (ros::ok())
    {
        msg.name = name;
        msg.num = num;
        msg.listofnum = list;
        msg.nested = sub; 

        pub.publish(msg);
        ros::spinOnce();
        loop_rate.sleep();
    }
}
