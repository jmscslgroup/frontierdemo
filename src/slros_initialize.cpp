#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "frontierdemo";

// For Block frontierdemo/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_frontierdemo_std_msgs_Float64> Sub_frontierdemo_1;

// For Block frontierdemo/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_frontierdemo_std_msgs_Float64> Sub_frontierdemo_2;

// For Block frontierdemo/Subscribe2
SimulinkSubscriber<std_msgs::Float64, SL_Bus_frontierdemo_std_msgs_Float64> Sub_frontierdemo_37;

// For Block frontierdemo/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_frontierdemo_std_msgs_Float64> Pub_frontierdemo_9;

// For Block frontierdemo/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_frontierdemo_19;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

