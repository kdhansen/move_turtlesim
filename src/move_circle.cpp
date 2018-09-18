#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

int main(int argc, char *argv[]) {
  ros::init(argc, argv, "move_circle");

  ros::NodeHandle nh;
  ros::Publisher cmd_vel_pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 10);

  geometry_msgs::Twist msg;
  msg.linear.x = 1.0;
  msg.angular.z = 1.0;

  while(ros::ok())
  {
    cmd_vel_pub.publish(msg);
    ros::Duration(0.2).sleep();
  }

  return 0;
}
