#include "ros/ros.h"
#include "ros/console.h"
#include "std_msgs/String.h"
#include "std_msgs/Float32.h"
#include "std_msgs/Float32MultiArray.h"
#include <vector>

#include <sstream>

float lr, ud;

void manualCallback(const std_msgs::Float32::ConstPtr& msg) {

  /* Get drive intensities */
  //lr=msg->data[0];
  ud=msg->data;

  ROS_INFO("test");
   
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "manual_receive");
  
  ros::NodeHandle n;

  ros::Subscriber sub = n.subscribe("UpDown", 1000, manualCallback);

  ros::spin();
  return 0;
}
