// -*- C++ -*-
/*!
 * @file  AbsoluteForceSensorServiceROSBridge.h * @brief  * @date  $Date$ 
 *
 * $Id$ 
 */
#ifndef ABSOLUTEFORCESENSORSERVICEROSBRIDGE_H
#define ABSOLUTEFORCESENSORSERVICEROSBRIDGE_H

// ROS
#include <ros/ros.h>
#include <hironx_ros_bridge/OpenHRP_AbsoluteForceSensorService_setForceMomentOffsetParam.h>
#include <hironx_ros_bridge/OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam.h>

#include <rtm/idl/BasicDataTypeSkel.h>
#include <rtm/Manager.h>
#include <rtm/DataFlowComponentBase.h>
#include <rtm/CorbaPort.h>
#include <rtm/DataInPort.h>
#include <rtm/DataOutPort.h>

// Service implementation headers
// <rtc-template block="service_impl_h">

// </rtc-template>

// Service Consumer stub headers
// <rtc-template block="consumer_stub_h">
#include "hironx_ros_bridge/idl/AbsoluteForceSensorServiceStub.h"

// </rtc-template>

using namespace RTC;

class AbsoluteForceSensorServiceROSBridge  : public RTC::DataFlowComponentBase
{
 public:
  bool setForceMomentOffsetParam(hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_setForceMomentOffsetParam::Request &req, hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_setForceMomentOffsetParam::Response &res);
  bool getForceMomentOffsetParam(hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam::Request &req, hironx_ros_bridge::OpenHRP_AbsoluteForceSensorService_getForceMomentOffsetParam::Response &res);
  AbsoluteForceSensorServiceROSBridge(RTC::Manager* manager);
  ~AbsoluteForceSensorServiceROSBridge();

  // The initialize action (on CREATED->ALIVE transition)
  // formaer rtc_init_entry() 
 virtual RTC::ReturnCode_t onInitialize();

  // The finalize action (on ALIVE->END transition)
  // formaer rtc_exiting_entry()
  // virtual RTC::ReturnCode_t onFinalize();

  // The startup action when ExecutionContext startup
  // former rtc_starting_entry()
  // virtual RTC::ReturnCode_t onStartup(RTC::UniqueId ec_id);

  // The shutdown action when ExecutionContext stop
  // former rtc_stopping_entry()
  // virtual RTC::ReturnCode_t onShutdown(RTC::UniqueId ec_id);

  // The activated action (Active state entry action)
  // former rtc_active_entry()
   virtual RTC::ReturnCode_t onActivated(RTC::UniqueId ec_id);

  // The deactivated action (Active state exit action)
  // former rtc_active_exit()
   virtual RTC::ReturnCode_t onDeactivated(RTC::UniqueId ec_id);

  // The execution action that is invoked periodically
  // former rtc_active_do()
   virtual RTC::ReturnCode_t onExecute(RTC::UniqueId ec_id);

  // The aborting action when main logic error occurred.
  // former rtc_aborting_entry()
  // virtual RTC::ReturnCode_t onAborting(RTC::UniqueId ec_id);

  // The error action in ERROR state
  // former rtc_error_do()
  // virtual RTC::ReturnCode_t onError(RTC::UniqueId ec_id);

  // The reset action that is invoked resetting
  // This is same but different the former rtc_init_entry()
  // virtual RTC::ReturnCode_t onReset(RTC::UniqueId ec_id);
  
  // The state update action that is invoked after onExecute() action
  // no corresponding operation exists in OpenRTm-aist-0.2.0
  // virtual RTC::ReturnCode_t onStateUpdate(RTC::UniqueId ec_id);

  // The action that is invoked when execution context's rate is changed
  // no corresponding operation exists in OpenRTm-aist-0.2.0
  // virtual RTC::ReturnCode_t onRateChanged(RTC::UniqueId ec_id);


 protected:
  // Configuration variable declaration
  // <rtc-template block="config_declare">
  
  // </rtc-template>

  // DataInPort declaration
  // <rtc-template block="inport_declare">

  // </rtc-template>

  // DataOutPort declaration
  // <rtc-template block="outport_declare">

  // </rtc-template>

  // CORBA Port declaration
  // <rtc-template block="corbaport_declare">
  RTC::CorbaPort m_AbsoluteForceSensorServicePort;

  // </rtc-template>

  // Service declaration
  // <rtc-template block="service_declare">

  // </rtc-template>

  // Consumer declaration
  // <rtc-template block="consumer_declare">
  RTC::CorbaConsumer<OpenHRP::AbsoluteForceSensorService> m_service0;

  // </rtc-template>

 private:
  ros::NodeHandle nh;
  ros::ServiceServer _srv0, _srv1;

};


extern "C"
{
  DLL_EXPORT void AbsoluteForceSensorServiceROSBridgeInit(RTC::Manager* manager);
};

#endif // ABSOLUTEFORCESENSORSERVICEROSBRIDGE_H
