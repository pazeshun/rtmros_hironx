// Generated by gencpp from file hironx_ros_bridge/OpenHRP_AbsoluteForceSensorService.msg
// DO NOT EDIT!


#ifndef HIRONX_ROS_BRIDGE_MESSAGE_OPENHRP_ABSOLUTEFORCESENSORSERVICE_H
#define HIRONX_ROS_BRIDGE_MESSAGE_OPENHRP_ABSOLUTEFORCESENSORSERVICE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hironx_ros_bridge
{
template <class ContainerAllocator>
struct OpenHRP_AbsoluteForceSensorService_
{
  typedef OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> Type;

  OpenHRP_AbsoluteForceSensorService_()
    {
    }
  OpenHRP_AbsoluteForceSensorService_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> const> ConstPtr;

}; // struct OpenHRP_AbsoluteForceSensorService_

typedef ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<std::allocator<void> > OpenHRP_AbsoluteForceSensorService;

typedef boost::shared_ptr< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService > OpenHRP_AbsoluteForceSensorServicePtr;
typedef boost::shared_ptr< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService const> OpenHRP_AbsoluteForceSensorServiceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hironx_ros_bridge

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'hironx_ros_bridge': ['/home/pazeshun/test_ws/src/rtmros_hironx/hironx_ros_bridge/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hironx_ros_bridge/OpenHRP_AbsoluteForceSensorService";
  }

  static const char* value(const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OpenHRP_AbsoluteForceSensorService_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // HIRONX_ROS_BRIDGE_MESSAGE_OPENHRP_ABSOLUTEFORCESENSORSERVICE_H
