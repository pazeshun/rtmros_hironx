// Generated by gencpp from file hironx_ros_bridge/OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam.msg
// DO NOT EDIT!


#ifndef HIRONX_ROS_BRIDGE_MESSAGE_OPENHRP_ABSOLUTEFORCESENSORSERVICE_FORCEMOMENTOFFSETPARAM_H
#define HIRONX_ROS_BRIDGE_MESSAGE_OPENHRP_ABSOLUTEFORCESENSORSERVICE_FORCEMOMENTOFFSETPARAM_H


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
struct OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_
{
  typedef OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> Type;

  OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_()
    : force_offset()
    , moment_offset()
    , link_offset_centroid()
    , link_offset_mass(0.0)  {
      force_offset.assign(0.0);

      moment_offset.assign(0.0);

      link_offset_centroid.assign(0.0);
  }
  OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_(const ContainerAllocator& _alloc)
    : force_offset()
    , moment_offset()
    , link_offset_centroid()
    , link_offset_mass(0.0)  {
  (void)_alloc;
      force_offset.assign(0.0);

      moment_offset.assign(0.0);

      link_offset_centroid.assign(0.0);
  }



   typedef boost::array<double, 3>  _force_offset_type;
  _force_offset_type force_offset;

   typedef boost::array<double, 3>  _moment_offset_type;
  _moment_offset_type moment_offset;

   typedef boost::array<double, 3>  _link_offset_centroid_type;
  _link_offset_centroid_type link_offset_centroid;

   typedef double _link_offset_mass_type;
  _link_offset_mass_type link_offset_mass;




  typedef boost::shared_ptr< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> const> ConstPtr;

}; // struct OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_

typedef ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<std::allocator<void> > OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam;

typedef boost::shared_ptr< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam > OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParamPtr;
typedef boost::shared_ptr< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam const> OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParamConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "65a8bdda0c275a081765814539fb2401";
  }

  static const char* value(const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x65a8bdda0c275a08ULL;
  static const uint64_t static_value2 = 0x1765814539fb2401ULL;
};

template<class ContainerAllocator>
struct DataType< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hironx_ros_bridge/OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam";
  }

  static const char* value(const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64[3] force_offset\n\
float64[3] moment_offset\n\
float64[3] link_offset_centroid\n\
float64 link_offset_mass\n\
";
  }

  static const char* value(const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.force_offset);
      stream.next(m.moment_offset);
      stream.next(m.link_offset_centroid);
      stream.next(m.link_offset_mass);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam_<ContainerAllocator>& v)
  {
    s << indent << "force_offset[]" << std::endl;
    for (size_t i = 0; i < v.force_offset.size(); ++i)
    {
      s << indent << "  force_offset[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.force_offset[i]);
    }
    s << indent << "moment_offset[]" << std::endl;
    for (size_t i = 0; i < v.moment_offset.size(); ++i)
    {
      s << indent << "  moment_offset[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.moment_offset[i]);
    }
    s << indent << "link_offset_centroid[]" << std::endl;
    for (size_t i = 0; i < v.link_offset_centroid.size(); ++i)
    {
      s << indent << "  link_offset_centroid[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.link_offset_centroid[i]);
    }
    s << indent << "link_offset_mass: ";
    Printer<double>::stream(s, indent + "  ", v.link_offset_mass);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HIRONX_ROS_BRIDGE_MESSAGE_OPENHRP_ABSOLUTEFORCESENSORSERVICE_FORCEMOMENTOFFSETPARAM_H