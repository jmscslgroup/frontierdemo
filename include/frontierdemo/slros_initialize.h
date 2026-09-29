#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "frontierdemo_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block frontierdemo/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_frontierdemo_std_msgs_Float64> Sub_frontierdemo_1;

// For Block frontierdemo/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_frontierdemo_std_msgs_Float64> Sub_frontierdemo_2;

// For Block frontierdemo/Subscribe2
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_frontierdemo_std_msgs_Float64> Sub_frontierdemo_37;

// For Block frontierdemo/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_frontierdemo_std_msgs_Float64> Pub_frontierdemo_9;

// For Block frontierdemo/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_frontierdemo_19;

void slros_node_init(int argc, char** argv);

#endif
