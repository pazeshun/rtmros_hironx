// Generated by gencpp from file hironx_ros_bridge/OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam.msg
// DO NOT EDIT!


#ifndef HIRONX_ROS_BRIDGE_MESSAGE_OPENHRP_ABSOLUTEFORCESENSORSERVICE_GETFORCEMOMENTOFFSETPARAM_H
#define HIRONX_ROS_BRIDGE_MESSAGE_OPENHRP_ABSOLUTEFORCESENSORSERVICE_GETFORCEMOMENTOFFSETPARAM_H

#include <ros/service_traits.h>


#include <hironx_ros_bridge/OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamRequest.h>
#include <hironx_ros_bridge/OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamResponse.h>


namespace hironx_ros_bridge
{

struct OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam
{

typedef OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamRequest Request;
typedef OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam
} // namespace hironx_ros_bridge


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam > {
  static const char* value()
  {
    return "edeb687473d4f600ee2d6b3331eacb66";
  }

  static const char* value(const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam&) { return value(); }
};

template<>
struct DataType< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam > {
  static const char* value()
  {
    return "hironx_ros_bridge/OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam";
  }

  static const char* value(const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam&) { return value(); }
};


// service_traits::MD5Sum< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamRequest> should match 
// service_traits::MD5Sum< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam > 
template<>
struct MD5Sum< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamRequest>
{
  static const char* value()
  {
    return MD5Sum< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam >::value();
  }
  static const char* value(const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamRequest> should match 
// service_traits::DataType< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam > 
template<>
struct DataType< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamRequest>
{
  static const char* value()
  {
    return DataType< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam >::value();
  }
  static const char* value(const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamResponse> should match 
// service_traits::MD5Sum< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam > 
template<>
struct MD5Sum< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamResponse>
{
  static const char* value()
  {
    return MD5Sum< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam >::value();
  }
  static const char* value(const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamResponse> should match 
// service_traits::DataType< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam > 
template<>
struct DataType< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamResponse>
{
  static const char* value()
  {
    return DataType< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam >::value();
  }
  static const char* value(const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParamResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // HIRONX_ROS_BRIDGE_MESSAGE_OPENHRP_ABSOLUTEFORCESENSORSERVICE_GETFORCEMOMENTOFFSETPARAM_H