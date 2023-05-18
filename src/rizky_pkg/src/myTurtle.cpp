#include "../include/rizky_pkg/myTurtle.h"

myTurtleControl::myTurtleControl(ros::NodeHandle n) : nh_(n) {
    pose_sub_ = nh_.subscribe("/turtle1/pose", 1, &myTurtleControl::poseCallback, this);
    vel_pub_ = nh_.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 10);
}

void myTurtleControl::runNode() {
    // Menggerakkan ke depan
    moveForward();

    // Putar 90 derajat ke kanan
//    rotate(90.0);
    ros::Duration(10.0).sleep();

    // Menggerakkan ke depan
    moveForward();
    ros::Duration(10.0).sleep();

    // Putar 90 derajat ke kanan
//    rotate(90.0);

    // Menggerakkan ke depan
    moveForward();
    ros::Duration(10.0).sleep();

    // Putar 90 derajat ke kanan
//    rotate(90.0);

    // Menggerakkan ke depan
    moveForward();
    ros::Duration(10.0).sleep();

    // Menghentikan gerakan
    stopMovement();
}

void myTurtleControl::poseCallback(const turtlesim::Pose::ConstPtr& msg) {
    this->x_ = msg->x;
    this->y_ = msg->y;
    this->theta_ = msg->theta;
    std::cout << "Theta : " << theta_ << std::endl;
    std::cout << "X : " << x_ << std::endl;
    std::cout << "Y : " << y_ << std::endl;
}

void myTurtleControl::moveForward() {
    geometry_msgs::Twist twistMsg;
    twistMsg.linear.x = 2;
    vel_pub_.publish(twistMsg);
    ros::Duration(1.0).sleep();
}

void myTurtleControl::rotate(double angle) {
    geometry_msgs::Twist twistMsg;
    twistMsg.angular.z = 1;
    double radians = 1.57;
    double initialAngle = this->theta_;
    double currentAngle = initialAngle;
    ros::Rate rate(10);

    while (currentAngle - initialAngle < radians) {
        vel_pub_.publish(twistMsg);
        rate.sleep();
        currentAngle = this->theta_;
    }
}

void myTurtleControl::stopMovement() {
    geometry_msgs::Twist twistMsg;
    vel_pub_.publish(twistMsg);
}
