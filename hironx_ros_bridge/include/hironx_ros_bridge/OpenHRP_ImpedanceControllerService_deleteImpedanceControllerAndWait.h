// Generated by gencpp from file hironx_ros_bridge/OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait.msg
// DO NOT EDIT!


#ifndef HIRONX_ROS_BRIDGE_MESSAGE_OPENHRP_IMPEDANCECONTROLLERSERVICE_DELETEIMPEDANCECONTROLLERANDWAIT_H
#define HIRONX_ROS_BRIDGE_MESSAGE_OPENHRP_IMPEDANCECONTROLLERSERVICE_DELETEIMPEDANCECONTROLLERANDWAIT_H

#include <ros/service_traits.h>


#include <hironx_ros_bridge/OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitRequest.h>
#include <hironx_ros_bridge/OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitResponse.h>


namespace hironx_ros_bridge
{

struct OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait
{

typedef OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitRequest Request;
typedef OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait
} // namespace hironx_ros_bridge


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait > {
  static const char* value()
  {
    return "1906743241be63b67d1f045d0cabf4cc";
  }

  static const char* value(const ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait&) { return value(); }
};

template<>
struct DataType< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait > {
  static const char* value()
  {
    return "hironx_ros_bridge/OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait";
  }

  static const char* value(const ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait&) { return value(); }
};


// service_traits::MD5Sum< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitRequest> should match 
// service_traits::MD5Sum< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait > 
template<>
struct MD5Sum< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitRequest>
{
  static const char* value()
  {
    return MD5Sum< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait >::value();
  }
  static const char* value(const ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitRequest> should match 
// service_traits::DataType< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait > 
template<>
struct DataType< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitRequest>
{
  static const char* value()
  {
    return DataType< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait >::value();
  }
  static const char* value(const ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitResponse> should match 
// service_traits::MD5Sum< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait > 
template<>
struct MD5Sum< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitResponse>
{
  static const char* value()
  {
    return MD5Sum< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait >::value();
  }
  static const char* value(const ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitResponse> should match 
// service_traits::DataType< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait > 
template<>
struct DataType< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitResponse>
{
  static const char* value()
  {
    return DataType< ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait >::value();
  }
  static const char* value(const ::hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWaitResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // HIRONX_ROS_BRIDGE_MESSAGE_OPENHRP_IMPEDANCECONTROLLERSERVICE_DELETEIMPEDANCECONTROLLERANDWAIT_H