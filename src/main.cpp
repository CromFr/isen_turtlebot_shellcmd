#include <unistd.h>

#include <ros/ros.h>
#include <std_msgs/String.h>


void rcv(const std_msgs::String::ConstPtr& msg)
{
  ROS_INFO("exec: ", msg->data.c_str());
  system(msg->data.c_str());
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "itb_shellcmd");

  ros::NodeHandle n;

  ros::Subscriber sub = n.subscribe("itb_shellcmd_topic", 1000, rcv);
  ros::spin();

  return 0;
}


