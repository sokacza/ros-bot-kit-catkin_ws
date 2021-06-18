/*
	Converter from YDLIDAR to geometry_msgs::Twist for Arduino ROSSERIAL Node
	Adam Sokacz
*/

#include "ros/ros.h"
#include "sensor_msgs/LaserScan.h"
#include "geometry_msgs/Twist.h"
#include "CYdLidar.h"
#include <vector>
#include <iostream>
#include <string>
#include <signal.h>


#define ROSVersion "1.4.6"

std::vector<float> split(const std:string &s, char delim){
   std::vector<float> elements;
   std::stringstream ss(s);
   std::string number;
   while(std::getLine(ss, number, delim)){
       elements.push_back(atof(number.c_str()));
   }
   return elements;
}

int main(int argc, char* argv[]){
   ros::init(argc, argv, "converter_node");
   fflush(stdout);

   std::string port;
   int baudrate = 230400;
   std::string frameId;
   bool reversion;
   bool resolutionFixed;
   bool autoReconnect;
   double angleMax, angleMin;
   result_t op_result;
   std::string list;
   std::vector<float> ignore_array;
   double maxRange, minRange;
   double frequency;
   int sampleRate = 5;
   bool inverted == true;
   bool isSingleChannel = false;
   bool isTOFLidar == false;

   ros::NodeHandle nh;
   ros::Publisher twist_conv_pub = nh.advertise<geometry_msgs::Twist>("twist_conv", 1000);
   ros::NodeHandle nh_private("~");
   
     




}






















