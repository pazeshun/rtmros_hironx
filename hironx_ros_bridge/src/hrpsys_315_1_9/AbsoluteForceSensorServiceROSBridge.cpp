// -*- C++ -*-
/*!
 * @file  AbsoluteForceSensorServiceROSBridge.cpp * @brief  * $Date$ 
 *
 * $Id$ 
 */
#include "AbsoluteForceSensorServiceROSBridge.h"

// Module specification
// <rtc-template block="module_spec">
static const char* absoluteforcesensorservicerosbridge_spec[] =
  {
    "implementation_id", "AbsoluteForceSensorServiceROSBridge",
    "type_name",         "AbsoluteForceSensorServiceROSBridge",
    "description",       "",
    "version",           "1.0.0",
    "vendor",            "",
    "category",          "",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    // Configuration variables
    ""
  };
// </rtc-template>

AbsoluteForceSensorServiceROSBridge::AbsoluteForceSensorServiceROSBridge(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_AbsoluteForceSensorServicePort("AbsoluteForceSensorService")

    // </rtc-template>
{
}

AbsoluteForceSensorServiceROSBridge::~AbsoluteForceSensorServiceROSBridge()
{
}


RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers

  // Set OutPort buffer

  // Set service provider to Ports

  // Set service consumers to Ports
  nh = ros::NodeHandle("~");
  std::string port_name = "service0";
  nh.getParam("service_port", port_name);
  m_AbsoluteForceSensorServicePort.registerConsumer(port_name.c_str(), "AbsoluteForceSensorService", m_service0);

  // Set CORBA Service Ports
  addPort(m_AbsoluteForceSensorServicePort);

  // </rtc-template>

  // <rtc-template block="bind_config">
  // Bind variables and configuration variable

  // </rtc-template>
  return RTC::RTC_OK;
}


/*
RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onFinalize()
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


extern "C"
{
 
  void AbsoluteForceSensorServiceROSBridgeInit(RTC::Manager* manager)
  {
    coil::Properties profile(absoluteforcesensorservicerosbridge_spec);
    manager->registerFactory(profile,
                             RTC::Create<AbsoluteForceSensorServiceROSBridge>,
                             RTC::Delete<AbsoluteForceSensorServiceROSBridge>);
  }
  
};




RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onExecute(RTC::UniqueId ec_id) {
  ros::spinOnce();
  return RTC::RTC_OK;
}

RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onActivated(RTC::UniqueId ec_id) {
  _srv0 = nh.advertiseService("setForceMomentOffsetParam", &AbsoluteForceSensorServiceROSBridge::setForceMomentOffsetParam, this);
  _srv1 = nh.advertiseService("getForceMomentOffsetParam", &AbsoluteForceSensorServiceROSBridge::getForceMomentOffsetParam, this);
  return RTC::RTC_OK;
}

RTC::ReturnCode_t AbsoluteForceSensorServiceROSBridge::onDeactivated(RTC::UniqueId ec_id) {
  _srv0.shutdown();
  _srv1.shutdown();
  return RTC::RTC_OK;
}



template<typename T,typename S>
void genseq(S& s, int size, _CORBA_Unbounded_Sequence<T>* p){
  s = S(size,size,S::allocbuf(size), 1);}
template<typename T,typename S,int n>
void genseq(S& s, int size, _CORBA_Bounded_Sequence<T,n>* p){
  s = S(size,S::allocbuf(size), 1);}
template<class T1, class T2> inline
void convert(T1& in, T2& out){ out = static_cast<T2>(in); }
template<typename T>
void convert(T& in, std::string& out){ out = std::string(in); }
template<typename T>
void convert(std::string& in, T& out){ out = static_cast<T>(in.c_str()); }
void convert(_CORBA_String_element in, std::string& out){ out = std::string(in); }
void convert(std::string& in, _CORBA_String_element out){ out = (const char*)in.c_str(); }
template<class S,class T>
void convert(S& s, std::vector<T>& v){
  int size = s.length();
  v = std::vector<T>(s.length());
  for(int i=0; i<size; i++) convert(s[i],v[i]);}
template<class S,class T>
void convert(std::vector<T>& v, S& s){
  int size = v.size();
  s = S(size, size, S::allocbuf(size), 1);
  for(int i=0; i<size; i++) convert(v[i],s[i]);}
template<class S,class T,std::size_t n>
void convert(S& s, boost::array<T,n>& v){
  for(std::size_t i=0; i<n; i++) convert(s[i],v[i]);}
template<class S,class T,std::size_t n>
void convert(boost::array<T,n>& v, S& s){
  s = S(n, S::allocbuf(n), 1);
  for(std::size_t i=0; i<n; i++) convert(v[i],s[i]);}
template<typename S,class T,std::size_t n>
void convert(boost::array<T,n>& v, S (&s)[n]){
  for(std::size_t i=0; i<n; i++) convert(v[i],s[i]);}

// special case for RTC::LightweightRTObject_var
template<class T> void convert(T& in, RTC::LightweightRTObject_var out){ std::cerr << "convert from RTC::LightweightRTObject_var is not supported" << std::endl; }
template<> void convert(OpenHRP::AbsoluteForceSensorService::forcemomentOffsetParam& in, hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam& out){
  convert(in.force_offset, out.force_offset);
  convert(in.moment_offset, out.moment_offset);
  convert(in.link_offset_centroid, out.link_offset_centroid);
  convert(in.link_offset_mass, out.link_offset_mass);
}
template<> void convert(hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_forcemomentOffsetParam& in, OpenHRP::AbsoluteForceSensorService::forcemomentOffsetParam& out){
  convert(in.force_offset, out.force_offset);
  convert(in.moment_offset, out.moment_offset);
  convert(in.link_offset_centroid, out.link_offset_centroid);
  convert(in.link_offset_mass, out.link_offset_mass);
}
bool AbsoluteForceSensorServiceROSBridge::setForceMomentOffsetParam(hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_setForceMomentOffsetParam::Request &req, hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_setForceMomentOffsetParam::Response &res){
  const char* name;
  OpenHRP::AbsoluteForceSensorService::forcemomentOffsetParam i_param;

  ROS_INFO_STREAM("AbsoluteForceSensorServiceROSBridge::setForceMomentOffsetParam() called");

  convert(req.name, name);
  convert(req.i_param, i_param);

  try {
    res.operation_return = m_service0->setForceMomentOffsetParam(name, i_param);
  } catch(CORBA::COMM_FAILURE& ex) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::setForceMomentOffsetParam : Caught system exception COMM_FAILURE -- unable to contact the object [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between AbsoluteForceSensorServiceROSBridge and AbsoluteForceSensor. So please check IDL versions are consistent. Another possibility is that Service-Port function, setForceMomentOffsetParam of AbsoluteForceSensor, called but AbsoluteForceSensor died becase of it. So please check AbsoluteForceSensor is still alive.");
      return false;
  } catch(CORBA::MARSHAL& ex) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::setForceMomentOffsetParam : Caught CORBA::SystemException::MARSHAL [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between AbsoluteForceSensorServiceROSBridge and AbsoluteForceSensor. So please check IDL versions are consistent.");
      return false;
  } catch(CORBA::BAD_PARAM& ex) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::setForceMomentOffsetParam : Caught CORBA::SystemException::BAD_PARAM [minor code = " << ex.minor() << "]. One possibility is that Service-Port function, setForceMomentOffsetParam of AbsoluteForceSensor, called and some problem has occurred within it and AbsoluteForceSensor keeps alive. So please check setForceMomentOffsetParam of AbsoluteForceSensor is correctly finished.");
      return false;
  } catch(CORBA::OBJECT_NOT_EXIST& ex) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::setForceMomentOffsetParam : Caught CORBA::SystemException::OBJECT_NOT_EXIST [minor code = " << ex.minor() << "]. One possibility is that AbsoluteForceSensor RTC is not found. So please check AbsoluteForceSensor is still alive.");
      return false;
  } catch(CORBA::SystemException& ex) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::setForceMomentOffsetParam : Caught CORBA::SystemException [minor code = " << ex.minor() << "].");
      return false;
  } catch(CORBA::Exception&) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::setForceMomentOffsetParam : Caught CORBA::Exception.");
      return false;
  } catch(omniORB::fatalException& fe) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::setForceMomentOffsetParam : Caught omniORB::fatalException:");
      ROS_ERROR_STREAM("  file: " << fe.file());
      ROS_ERROR_STREAM("  line: " << fe.line());
      ROS_ERROR_STREAM("  mesg: " << fe.errmsg());
      return false;
  }
  catch(...) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::setForceMomentOffsetParam : Caught unknown exception.");
      return false;
  }
  ROS_INFO_STREAM("AbsoluteForceSensorServiceROSBridge::setForceMomentOffsetParam() succeeded");

  return true;
};

bool AbsoluteForceSensorServiceROSBridge::getForceMomentOffsetParam(hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam::Request &req, hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam::Response &res){
  const char* name;
  OpenHRP::AbsoluteForceSensorService::forcemomentOffsetParam* i_param;

  ROS_INFO_STREAM("AbsoluteForceSensorServiceROSBridge::getForceMomentOffsetParam() called");

  convert(req.name, name);

  try {
    res.operation_return = m_service0->getForceMomentOffsetParam(name, i_param);
  } catch(CORBA::COMM_FAILURE& ex) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::getForceMomentOffsetParam : Caught system exception COMM_FAILURE -- unable to contact the object [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between AbsoluteForceSensorServiceROSBridge and AbsoluteForceSensor. So please check IDL versions are consistent. Another possibility is that Service-Port function, getForceMomentOffsetParam of AbsoluteForceSensor, called but AbsoluteForceSensor died becase of it. So please check AbsoluteForceSensor is still alive.");
      return false;
  } catch(CORBA::MARSHAL& ex) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::getForceMomentOffsetParam : Caught CORBA::SystemException::MARSHAL [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between AbsoluteForceSensorServiceROSBridge and AbsoluteForceSensor. So please check IDL versions are consistent.");
      return false;
  } catch(CORBA::BAD_PARAM& ex) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::getForceMomentOffsetParam : Caught CORBA::SystemException::BAD_PARAM [minor code = " << ex.minor() << "]. One possibility is that Service-Port function, getForceMomentOffsetParam of AbsoluteForceSensor, called and some problem has occurred within it and AbsoluteForceSensor keeps alive. So please check getForceMomentOffsetParam of AbsoluteForceSensor is correctly finished.");
      return false;
  } catch(CORBA::OBJECT_NOT_EXIST& ex) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::getForceMomentOffsetParam : Caught CORBA::SystemException::OBJECT_NOT_EXIST [minor code = " << ex.minor() << "]. One possibility is that AbsoluteForceSensor RTC is not found. So please check AbsoluteForceSensor is still alive.");
      return false;
  } catch(CORBA::SystemException& ex) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::getForceMomentOffsetParam : Caught CORBA::SystemException [minor code = " << ex.minor() << "].");
      return false;
  } catch(CORBA::Exception&) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::getForceMomentOffsetParam : Caught CORBA::Exception.");
      return false;
  } catch(omniORB::fatalException& fe) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::getForceMomentOffsetParam : Caught omniORB::fatalException:");
      ROS_ERROR_STREAM("  file: " << fe.file());
      ROS_ERROR_STREAM("  line: " << fe.line());
      ROS_ERROR_STREAM("  mesg: " << fe.errmsg());
      return false;
  }
  catch(...) {
      ROS_ERROR_STREAM("AbsoluteForceSensorServiceROSBridge::getForceMomentOffsetParam : Caught unknown exception.");
      return false;
  }
  convert(*i_param, res.i_param);
  delete i_param;
  ROS_INFO_STREAM("AbsoluteForceSensorServiceROSBridge::getForceMomentOffsetParam() succeeded");

  return true;
};

