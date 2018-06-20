// -*- C++ -*-
/*!
 * @file  ImpedanceControllerServiceROSBridge.cpp * @brief  * $Date$ 
 *
 * $Id$ 
 */
#include "ImpedanceControllerServiceROSBridge.h"

// Module specification
// <rtc-template block="module_spec">
static const char* impedancecontrollerservicerosbridge_spec[] =
  {
    "implementation_id", "ImpedanceControllerServiceROSBridge",
    "type_name",         "ImpedanceControllerServiceROSBridge",
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

ImpedanceControllerServiceROSBridge::ImpedanceControllerServiceROSBridge(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_ImpedanceControllerServicePort("ImpedanceControllerService")

    // </rtc-template>
{
}

ImpedanceControllerServiceROSBridge::~ImpedanceControllerServiceROSBridge()
{
}


RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onInitialize()
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
  m_ImpedanceControllerServicePort.registerConsumer(port_name.c_str(), "ImpedanceControllerService", m_service0);

  // Set CORBA Service Ports
  addPort(m_ImpedanceControllerServicePort);

  // </rtc-template>

  // <rtc-template block="bind_config">
  // Bind variables and configuration variable

  // </rtc-template>
  return RTC::RTC_OK;
}


/*
RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onFinalize()
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/
/*
RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


extern "C"
{
 
  void ImpedanceControllerServiceROSBridgeInit(RTC::Manager* manager)
  {
    coil::Properties profile(impedancecontrollerservicerosbridge_spec);
    manager->registerFactory(profile,
                             RTC::Create<ImpedanceControllerServiceROSBridge>,
                             RTC::Delete<ImpedanceControllerServiceROSBridge>);
  }
  
};




RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onExecute(RTC::UniqueId ec_id) {
  ros::spinOnce();
  return RTC::RTC_OK;
}

RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onActivated(RTC::UniqueId ec_id) {
  _srv0 = nh.advertiseService("setImpedanceControllerParam", &ImpedanceControllerServiceROSBridge::setImpedanceControllerParam, this);
  _srv1 = nh.advertiseService("getImpedanceControllerParam", &ImpedanceControllerServiceROSBridge::getImpedanceControllerParam, this);
  _srv2 = nh.advertiseService("deleteImpedanceController", &ImpedanceControllerServiceROSBridge::deleteImpedanceController, this);
  _srv3 = nh.advertiseService("waitDeletingImpedanceController", &ImpedanceControllerServiceROSBridge::waitDeletingImpedanceController, this);
  _srv4 = nh.advertiseService("deleteImpedanceControllerAndWait", &ImpedanceControllerServiceROSBridge::deleteImpedanceControllerAndWait, this);
  return RTC::RTC_OK;
}

RTC::ReturnCode_t ImpedanceControllerServiceROSBridge::onDeactivated(RTC::UniqueId ec_id) {
  _srv0.shutdown();
  _srv1.shutdown();
  _srv2.shutdown();
  _srv3.shutdown();
  _srv4.shutdown();
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
template<> void convert(OpenHRP::ImpedanceControllerService::impedanceParam& in, hironx_ros_bridge::OpenHRP_ImpedanceControllerService_impedanceParam& out){
  convert(in.name, out.name);
  convert(in.base_name, out.base_name);
  convert(in.target_name, out.target_name);
  convert(in.M_p, out.M_p);
  convert(in.D_p, out.D_p);
  convert(in.K_p, out.K_p);
  convert(in.M_r, out.M_r);
  convert(in.D_r, out.D_r);
  convert(in.K_r, out.K_r);
  convert(in.ref_force, out.ref_force);
  convert(in.force_gain, out.force_gain);
  convert(in.ref_moment, out.ref_moment);
  convert(in.moment_gain, out.moment_gain);
  convert(in.sr_gain, out.sr_gain);
  convert(in.avoid_gain, out.avoid_gain);
  convert(in.reference_gain, out.reference_gain);
  convert(in.manipulability_limit, out.manipulability_limit);
}
template<> void convert(hironx_ros_bridge::OpenHRP_ImpedanceControllerService_impedanceParam& in, OpenHRP::ImpedanceControllerService::impedanceParam& out){
  convert(in.name, out.name);
  convert(in.base_name, out.base_name);
  convert(in.target_name, out.target_name);
  convert(in.M_p, out.M_p);
  convert(in.D_p, out.D_p);
  convert(in.K_p, out.K_p);
  convert(in.M_r, out.M_r);
  convert(in.D_r, out.D_r);
  convert(in.K_r, out.K_r);
  convert(in.ref_force, out.ref_force);
  convert(in.force_gain, out.force_gain);
  convert(in.ref_moment, out.ref_moment);
  convert(in.moment_gain, out.moment_gain);
  convert(in.sr_gain, out.sr_gain);
  convert(in.avoid_gain, out.avoid_gain);
  convert(in.reference_gain, out.reference_gain);
  convert(in.manipulability_limit, out.manipulability_limit);
}
bool ImpedanceControllerServiceROSBridge::setImpedanceControllerParam(hironx_ros_bridge::OpenHRP_ImpedanceControllerService_setImpedanceControllerParam::Request &req, hironx_ros_bridge::OpenHRP_ImpedanceControllerService_setImpedanceControllerParam::Response &res){
  OpenHRP::ImpedanceControllerService::impedanceParam i_param;

  ROS_INFO_STREAM("ImpedanceControllerServiceROSBridge::setImpedanceControllerParam() called");

  convert(req.i_param, i_param);

  try {
    res.operation_return = m_service0->setImpedanceControllerParam(i_param);
  } catch(CORBA::COMM_FAILURE& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::setImpedanceControllerParam : Caught system exception COMM_FAILURE -- unable to contact the object [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between ImpedanceControllerServiceROSBridge and ImpedanceController. So please check IDL versions are consistent. Another possibility is that Service-Port function, setImpedanceControllerParam of ImpedanceController, called but ImpedanceController died becase of it. So please check ImpedanceController is still alive.");
      return false;
  } catch(CORBA::MARSHAL& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::setImpedanceControllerParam : Caught CORBA::SystemException::MARSHAL [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between ImpedanceControllerServiceROSBridge and ImpedanceController. So please check IDL versions are consistent.");
      return false;
  } catch(CORBA::BAD_PARAM& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::setImpedanceControllerParam : Caught CORBA::SystemException::BAD_PARAM [minor code = " << ex.minor() << "]. One possibility is that Service-Port function, setImpedanceControllerParam of ImpedanceController, called and some problem has occurred within it and ImpedanceController keeps alive. So please check setImpedanceControllerParam of ImpedanceController is correctly finished.");
      return false;
  } catch(CORBA::OBJECT_NOT_EXIST& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::setImpedanceControllerParam : Caught CORBA::SystemException::OBJECT_NOT_EXIST [minor code = " << ex.minor() << "]. One possibility is that ImpedanceController RTC is not found. So please check ImpedanceController is still alive.");
      return false;
  } catch(CORBA::SystemException& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::setImpedanceControllerParam : Caught CORBA::SystemException [minor code = " << ex.minor() << "].");
      return false;
  } catch(CORBA::Exception&) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::setImpedanceControllerParam : Caught CORBA::Exception.");
      return false;
  } catch(omniORB::fatalException& fe) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::setImpedanceControllerParam : Caught omniORB::fatalException:");
      ROS_ERROR_STREAM("  file: " << fe.file());
      ROS_ERROR_STREAM("  line: " << fe.line());
      ROS_ERROR_STREAM("  mesg: " << fe.errmsg());
      return false;
  }
  catch(...) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::setImpedanceControllerParam : Caught unknown exception.");
      return false;
  }
  ROS_INFO_STREAM("ImpedanceControllerServiceROSBridge::setImpedanceControllerParam() succeeded");

  return true;
};

bool ImpedanceControllerServiceROSBridge::getImpedanceControllerParam(hironx_ros_bridge::OpenHRP_ImpedanceControllerService_getImpedanceControllerParam::Request &req, hironx_ros_bridge::OpenHRP_ImpedanceControllerService_getImpedanceControllerParam::Response &res){
  const char* name;
  OpenHRP::ImpedanceControllerService::impedanceParam* i_param;

  ROS_INFO_STREAM("ImpedanceControllerServiceROSBridge::getImpedanceControllerParam() called");

  convert(req.name, name);

  try {
    res.operation_return = m_service0->getImpedanceControllerParam(name, i_param);
  } catch(CORBA::COMM_FAILURE& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::getImpedanceControllerParam : Caught system exception COMM_FAILURE -- unable to contact the object [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between ImpedanceControllerServiceROSBridge and ImpedanceController. So please check IDL versions are consistent. Another possibility is that Service-Port function, getImpedanceControllerParam of ImpedanceController, called but ImpedanceController died becase of it. So please check ImpedanceController is still alive.");
      return false;
  } catch(CORBA::MARSHAL& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::getImpedanceControllerParam : Caught CORBA::SystemException::MARSHAL [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between ImpedanceControllerServiceROSBridge and ImpedanceController. So please check IDL versions are consistent.");
      return false;
  } catch(CORBA::BAD_PARAM& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::getImpedanceControllerParam : Caught CORBA::SystemException::BAD_PARAM [minor code = " << ex.minor() << "]. One possibility is that Service-Port function, getImpedanceControllerParam of ImpedanceController, called and some problem has occurred within it and ImpedanceController keeps alive. So please check getImpedanceControllerParam of ImpedanceController is correctly finished.");
      return false;
  } catch(CORBA::OBJECT_NOT_EXIST& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::getImpedanceControllerParam : Caught CORBA::SystemException::OBJECT_NOT_EXIST [minor code = " << ex.minor() << "]. One possibility is that ImpedanceController RTC is not found. So please check ImpedanceController is still alive.");
      return false;
  } catch(CORBA::SystemException& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::getImpedanceControllerParam : Caught CORBA::SystemException [minor code = " << ex.minor() << "].");
      return false;
  } catch(CORBA::Exception&) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::getImpedanceControllerParam : Caught CORBA::Exception.");
      return false;
  } catch(omniORB::fatalException& fe) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::getImpedanceControllerParam : Caught omniORB::fatalException:");
      ROS_ERROR_STREAM("  file: " << fe.file());
      ROS_ERROR_STREAM("  line: " << fe.line());
      ROS_ERROR_STREAM("  mesg: " << fe.errmsg());
      return false;
  }
  catch(...) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::getImpedanceControllerParam : Caught unknown exception.");
      return false;
  }
  convert(*i_param, res.i_param);
  delete i_param;
  ROS_INFO_STREAM("ImpedanceControllerServiceROSBridge::getImpedanceControllerParam() succeeded");

  return true;
};

bool ImpedanceControllerServiceROSBridge::deleteImpedanceController(hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceController::Request &req, hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceController::Response &res){
  const char* name;

  ROS_INFO_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceController() called");

  convert(req.name, name);

  try {
    res.operation_return = m_service0->deleteImpedanceController(name);
  } catch(CORBA::COMM_FAILURE& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceController : Caught system exception COMM_FAILURE -- unable to contact the object [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between ImpedanceControllerServiceROSBridge and ImpedanceController. So please check IDL versions are consistent. Another possibility is that Service-Port function, deleteImpedanceController of ImpedanceController, called but ImpedanceController died becase of it. So please check ImpedanceController is still alive.");
      return false;
  } catch(CORBA::MARSHAL& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceController : Caught CORBA::SystemException::MARSHAL [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between ImpedanceControllerServiceROSBridge and ImpedanceController. So please check IDL versions are consistent.");
      return false;
  } catch(CORBA::BAD_PARAM& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceController : Caught CORBA::SystemException::BAD_PARAM [minor code = " << ex.minor() << "]. One possibility is that Service-Port function, deleteImpedanceController of ImpedanceController, called and some problem has occurred within it and ImpedanceController keeps alive. So please check deleteImpedanceController of ImpedanceController is correctly finished.");
      return false;
  } catch(CORBA::OBJECT_NOT_EXIST& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceController : Caught CORBA::SystemException::OBJECT_NOT_EXIST [minor code = " << ex.minor() << "]. One possibility is that ImpedanceController RTC is not found. So please check ImpedanceController is still alive.");
      return false;
  } catch(CORBA::SystemException& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceController : Caught CORBA::SystemException [minor code = " << ex.minor() << "].");
      return false;
  } catch(CORBA::Exception&) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceController : Caught CORBA::Exception.");
      return false;
  } catch(omniORB::fatalException& fe) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceController : Caught omniORB::fatalException:");
      ROS_ERROR_STREAM("  file: " << fe.file());
      ROS_ERROR_STREAM("  line: " << fe.line());
      ROS_ERROR_STREAM("  mesg: " << fe.errmsg());
      return false;
  }
  catch(...) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceController : Caught unknown exception.");
      return false;
  }
  ROS_INFO_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceController() succeeded");

  return true;
};

bool ImpedanceControllerServiceROSBridge::waitDeletingImpedanceController(hironx_ros_bridge::OpenHRP_ImpedanceControllerService_waitDeletingImpedanceController::Request &req, hironx_ros_bridge::OpenHRP_ImpedanceControllerService_waitDeletingImpedanceController::Response &res){
  const char* name;

  ROS_INFO_STREAM("ImpedanceControllerServiceROSBridge::waitDeletingImpedanceController() called");

  convert(req.name, name);

  try {
    m_service0->waitDeletingImpedanceController(name);
  } catch(CORBA::COMM_FAILURE& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::waitDeletingImpedanceController : Caught system exception COMM_FAILURE -- unable to contact the object [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between ImpedanceControllerServiceROSBridge and ImpedanceController. So please check IDL versions are consistent. Another possibility is that Service-Port function, waitDeletingImpedanceController of ImpedanceController, called but ImpedanceController died becase of it. So please check ImpedanceController is still alive.");
      return false;
  } catch(CORBA::MARSHAL& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::waitDeletingImpedanceController : Caught CORBA::SystemException::MARSHAL [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between ImpedanceControllerServiceROSBridge and ImpedanceController. So please check IDL versions are consistent.");
      return false;
  } catch(CORBA::BAD_PARAM& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::waitDeletingImpedanceController : Caught CORBA::SystemException::BAD_PARAM [minor code = " << ex.minor() << "]. One possibility is that Service-Port function, waitDeletingImpedanceController of ImpedanceController, called and some problem has occurred within it and ImpedanceController keeps alive. So please check waitDeletingImpedanceController of ImpedanceController is correctly finished.");
      return false;
  } catch(CORBA::OBJECT_NOT_EXIST& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::waitDeletingImpedanceController : Caught CORBA::SystemException::OBJECT_NOT_EXIST [minor code = " << ex.minor() << "]. One possibility is that ImpedanceController RTC is not found. So please check ImpedanceController is still alive.");
      return false;
  } catch(CORBA::SystemException& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::waitDeletingImpedanceController : Caught CORBA::SystemException [minor code = " << ex.minor() << "].");
      return false;
  } catch(CORBA::Exception&) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::waitDeletingImpedanceController : Caught CORBA::Exception.");
      return false;
  } catch(omniORB::fatalException& fe) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::waitDeletingImpedanceController : Caught omniORB::fatalException:");
      ROS_ERROR_STREAM("  file: " << fe.file());
      ROS_ERROR_STREAM("  line: " << fe.line());
      ROS_ERROR_STREAM("  mesg: " << fe.errmsg());
      return false;
  }
  catch(...) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::waitDeletingImpedanceController : Caught unknown exception.");
      return false;
  }
  ROS_INFO_STREAM("ImpedanceControllerServiceROSBridge::waitDeletingImpedanceController() succeeded");

  return true;
};

bool ImpedanceControllerServiceROSBridge::deleteImpedanceControllerAndWait(hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait::Request &req, hironx_ros_bridge::OpenHRP_ImpedanceControllerService_deleteImpedanceControllerAndWait::Response &res){
  const char* name;

  ROS_INFO_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceControllerAndWait() called");

  convert(req.name, name);

  try {
    res.operation_return = m_service0->deleteImpedanceControllerAndWait(name);
  } catch(CORBA::COMM_FAILURE& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceControllerAndWait : Caught system exception COMM_FAILURE -- unable to contact the object [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between ImpedanceControllerServiceROSBridge and ImpedanceController. So please check IDL versions are consistent. Another possibility is that Service-Port function, deleteImpedanceControllerAndWait of ImpedanceController, called but ImpedanceController died becase of it. So please check ImpedanceController is still alive.");
      return false;
  } catch(CORBA::MARSHAL& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceControllerAndWait : Caught CORBA::SystemException::MARSHAL [minor code = " << ex.minor() << "]. One possibility is IDL version mismatch between ImpedanceControllerServiceROSBridge and ImpedanceController. So please check IDL versions are consistent.");
      return false;
  } catch(CORBA::BAD_PARAM& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceControllerAndWait : Caught CORBA::SystemException::BAD_PARAM [minor code = " << ex.minor() << "]. One possibility is that Service-Port function, deleteImpedanceControllerAndWait of ImpedanceController, called and some problem has occurred within it and ImpedanceController keeps alive. So please check deleteImpedanceControllerAndWait of ImpedanceController is correctly finished.");
      return false;
  } catch(CORBA::OBJECT_NOT_EXIST& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceControllerAndWait : Caught CORBA::SystemException::OBJECT_NOT_EXIST [minor code = " << ex.minor() << "]. One possibility is that ImpedanceController RTC is not found. So please check ImpedanceController is still alive.");
      return false;
  } catch(CORBA::SystemException& ex) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceControllerAndWait : Caught CORBA::SystemException [minor code = " << ex.minor() << "].");
      return false;
  } catch(CORBA::Exception&) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceControllerAndWait : Caught CORBA::Exception.");
      return false;
  } catch(omniORB::fatalException& fe) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceControllerAndWait : Caught omniORB::fatalException:");
      ROS_ERROR_STREAM("  file: " << fe.file());
      ROS_ERROR_STREAM("  line: " << fe.line());
      ROS_ERROR_STREAM("  mesg: " << fe.errmsg());
      return false;
  }
  catch(...) {
      ROS_ERROR_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceControllerAndWait : Caught unknown exception.");
      return false;
  }
  ROS_INFO_STREAM("ImpedanceControllerServiceROSBridge::deleteImpedanceControllerAndWait() succeeded");

  return true;
};

