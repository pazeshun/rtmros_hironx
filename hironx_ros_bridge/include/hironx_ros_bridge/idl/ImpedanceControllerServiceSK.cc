// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.

#include "ImpedanceControllerService.hh"
#include <omniORB4/IOP_S.h>
#include <omniORB4/IOP_C.h>
#include <omniORB4/callDescriptor.h>
#include <omniORB4/callHandle.h>
#include <omniORB4/objTracker.h>


OMNI_USING_NAMESPACE(omni)

static const char* _0RL_library_version = omniORB_4_1;



void
OpenHRP::ImpedanceControllerService::impedanceParam::operator>>= (cdrStream &_n) const
{
  _n.marshalString(name,0);
  _n.marshalString(base_name,0);
  _n.marshalString(target_name,0);
  M_p >>= _n;
  D_p >>= _n;
  K_p >>= _n;
  M_r >>= _n;
  D_r >>= _n;
  K_r >>= _n;
  (const DblSequence3&) ref_force >>= _n;
  (const DblSequence3&) force_gain >>= _n;
  (const DblSequence3&) ref_moment >>= _n;
  (const DblSequence3&) moment_gain >>= _n;
  sr_gain >>= _n;
  avoid_gain >>= _n;
  reference_gain >>= _n;
  manipulability_limit >>= _n;

}

void
OpenHRP::ImpedanceControllerService::impedanceParam::operator<<= (cdrStream &_n)
{
  name = _n.unmarshalString(0);
  base_name = _n.unmarshalString(0);
  target_name = _n.unmarshalString(0);
  (::CORBA::Double&)M_p <<= _n;
  (::CORBA::Double&)D_p <<= _n;
  (::CORBA::Double&)K_p <<= _n;
  (::CORBA::Double&)M_r <<= _n;
  (::CORBA::Double&)D_r <<= _n;
  (::CORBA::Double&)K_r <<= _n;
  (DblSequence3&)ref_force <<= _n;
  (DblSequence3&)force_gain <<= _n;
  (DblSequence3&)ref_moment <<= _n;
  (DblSequence3&)moment_gain <<= _n;
  (::CORBA::Double&)sr_gain <<= _n;
  (::CORBA::Double&)avoid_gain <<= _n;
  (::CORBA::Double&)reference_gain <<= _n;
  (::CORBA::Double&)manipulability_limit <<= _n;

}

OpenHRP::ImpedanceControllerService_ptr OpenHRP::ImpedanceControllerService_Helper::_nil() {
  return ::OpenHRP::ImpedanceControllerService::_nil();
}

::CORBA::Boolean OpenHRP::ImpedanceControllerService_Helper::is_nil(::OpenHRP::ImpedanceControllerService_ptr p) {
  return ::CORBA::is_nil(p);

}

void OpenHRP::ImpedanceControllerService_Helper::release(::OpenHRP::ImpedanceControllerService_ptr p) {
  ::CORBA::release(p);
}

void OpenHRP::ImpedanceControllerService_Helper::marshalObjRef(::OpenHRP::ImpedanceControllerService_ptr obj, cdrStream& s) {
  ::OpenHRP::ImpedanceControllerService::_marshalObjRef(obj, s);
}

OpenHRP::ImpedanceControllerService_ptr OpenHRP::ImpedanceControllerService_Helper::unmarshalObjRef(cdrStream& s) {
  return ::OpenHRP::ImpedanceControllerService::_unmarshalObjRef(s);
}

void OpenHRP::ImpedanceControllerService_Helper::duplicate(::OpenHRP::ImpedanceControllerService_ptr obj) {
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
}

OpenHRP::ImpedanceControllerService_ptr
OpenHRP::ImpedanceControllerService::_duplicate(::OpenHRP::ImpedanceControllerService_ptr obj)
{
  if( obj && !obj->_NP_is_nil() )  omni::duplicateObjRef(obj);
  return obj;
}

OpenHRP::ImpedanceControllerService_ptr
OpenHRP::ImpedanceControllerService::_narrow(::CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_realNarrow(_PD_repoId);
  return e ? e : _nil();
}


OpenHRP::ImpedanceControllerService_ptr
OpenHRP::ImpedanceControllerService::_unchecked_narrow(::CORBA::Object_ptr obj)
{
  if( !obj || obj->_NP_is_nil() || obj->_NP_is_pseudo() ) return _nil();
  _ptr_type e = (_ptr_type) obj->_PR_getobj()->_uncheckedNarrow(_PD_repoId);
  return e ? e : _nil();
}

OpenHRP::ImpedanceControllerService_ptr
OpenHRP::ImpedanceControllerService::_nil()
{
#ifdef OMNI_UNLOADABLE_STUBS
  static _objref_ImpedanceControllerService _the_nil_obj;
  return &_the_nil_obj;
#else
  static _objref_ImpedanceControllerService* _the_nil_ptr = 0;
  if( !_the_nil_ptr ) {
    omni::nilRefLock().lock();
    if( !_the_nil_ptr ) {
      _the_nil_ptr = new _objref_ImpedanceControllerService;
      registerNilCorbaObject(_the_nil_ptr);
    }
    omni::nilRefLock().unlock();
  }
  return _the_nil_ptr;
#endif
}

const char* OpenHRP::ImpedanceControllerService::_PD_repoId = "IDL:OpenHRP/ImpedanceControllerService:1.0";


OpenHRP::_objref_ImpedanceControllerService::~_objref_ImpedanceControllerService() {
  
}


OpenHRP::_objref_ImpedanceControllerService::_objref_ImpedanceControllerService(omniIOR* ior, omniIdentity* id) :
   omniObjRef(::OpenHRP::ImpedanceControllerService::_PD_repoId, ior, id, 1)
   
   
{
  _PR_setobj(this);
}

void*
OpenHRP::_objref_ImpedanceControllerService::_ptrToObjRef(const char* id)
{
  if( id == ::OpenHRP::ImpedanceControllerService::_PD_repoId )
    return (::OpenHRP::ImpedanceControllerService_ptr) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (::CORBA::Object_ptr) this;

  if( omni::strMatch(id, ::OpenHRP::ImpedanceControllerService::_PD_repoId) )
    return (::OpenHRP::ImpedanceControllerService_ptr) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (::CORBA::Object_ptr) this;

  return 0;
}

// Proxy call descriptor class. Mangled signature:
//  _cboolean_i_cOpenHRP_mImpedanceControllerService_mimpedanceParam
class _0RL_cd_61e206bad56744d5_00000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_61e206bad56744d5_00000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  OpenHRP::ImpedanceControllerService::impedanceParam_var arg_0_;
  const OpenHRP::ImpedanceControllerService::impedanceParam* arg_0;
  ::CORBA::Boolean result;
};

void _0RL_cd_61e206bad56744d5_00000000::marshalArguments(cdrStream& _n)
{
  (const OpenHRP::ImpedanceControllerService::impedanceParam&) *arg_0 >>= _n;

}

void _0RL_cd_61e206bad56744d5_00000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = new OpenHRP::ImpedanceControllerService::impedanceParam;
  (OpenHRP::ImpedanceControllerService::impedanceParam&)arg_0_ <<= _n;
  arg_0 = &arg_0_.in();

}

void _0RL_cd_61e206bad56744d5_00000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);

}

void _0RL_cd_61e206bad56744d5_00000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();

}

const char* const _0RL_cd_61e206bad56744d5_00000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_61e206bad56744d5_10000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_61e206bad56744d5_00000000* tcd = (_0RL_cd_61e206bad56744d5_00000000*)cd;
  OpenHRP::_impl_ImpedanceControllerService* impl = (OpenHRP::_impl_ImpedanceControllerService*) svnt->_ptrToInterface(OpenHRP::ImpedanceControllerService::_PD_repoId);
  tcd->result = impl->setImpedanceControllerParam(*tcd->arg_0);


}

::CORBA::Boolean OpenHRP::_objref_ImpedanceControllerService::setImpedanceControllerParam(const ::OpenHRP::ImpedanceControllerService::impedanceParam& i_param)
{
  _0RL_cd_61e206bad56744d5_00000000 _call_desc(_0RL_lcfn_61e206bad56744d5_10000000, "setImpedanceControllerParam", 28);
  _call_desc.arg_0 = &(::OpenHRP::ImpedanceControllerService::impedanceParam&) i_param;

  _invoke(_call_desc);
  return _call_desc.result;


}
// Proxy call descriptor class. Mangled signature:
//  _cboolean_i_cstring_o_cOpenHRP_mImpedanceControllerService_mimpedanceParam
class _0RL_cd_61e206bad56744d5_20000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_61e206bad56744d5_20000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  OpenHRP::ImpedanceControllerService::impedanceParam_var arg_1;
  ::CORBA::Boolean result;
};

void _0RL_cd_61e206bad56744d5_20000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);

}

void _0RL_cd_61e206bad56744d5_20000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();

}

void _0RL_cd_61e206bad56744d5_20000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);
  (const OpenHRP::ImpedanceControllerService::impedanceParam&) arg_1 >>= _n;

}

void _0RL_cd_61e206bad56744d5_20000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();
  arg_1 = new OpenHRP::ImpedanceControllerService::impedanceParam;
  (OpenHRP::ImpedanceControllerService::impedanceParam&)arg_1 <<= _n;

}

const char* const _0RL_cd_61e206bad56744d5_20000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_61e206bad56744d5_30000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_61e206bad56744d5_20000000* tcd = (_0RL_cd_61e206bad56744d5_20000000*)cd;
  OpenHRP::_impl_ImpedanceControllerService* impl = (OpenHRP::_impl_ImpedanceControllerService*) svnt->_ptrToInterface(OpenHRP::ImpedanceControllerService::_PD_repoId);
  tcd->result = impl->getImpedanceControllerParam(tcd->arg_0, tcd->arg_1.out());


}

::CORBA::Boolean OpenHRP::_objref_ImpedanceControllerService::getImpedanceControllerParam(const char* name, ::OpenHRP::ImpedanceControllerService::impedanceParam_out i_param)
{
  _0RL_cd_61e206bad56744d5_20000000 _call_desc(_0RL_lcfn_61e206bad56744d5_30000000, "getImpedanceControllerParam", 28);
  _call_desc.arg_0 = name;

  _invoke(_call_desc);
  i_param = _call_desc.arg_1._retn();
  return _call_desc.result;


}
// Proxy call descriptor class. Mangled signature:
//  _cboolean_i_cstring
class _0RL_cd_61e206bad56744d5_40000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_61e206bad56744d5_40000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

  void unmarshalReturnedValues(cdrStream&);
  void marshalReturnedValues(cdrStream&);
  
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
  ::CORBA::Boolean result;
};

void _0RL_cd_61e206bad56744d5_40000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);

}

void _0RL_cd_61e206bad56744d5_40000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();

}

void _0RL_cd_61e206bad56744d5_40000000::marshalReturnedValues(cdrStream& _n)
{
  _n.marshalBoolean(result);

}

void _0RL_cd_61e206bad56744d5_40000000::unmarshalReturnedValues(cdrStream& _n)
{
  result = _n.unmarshalBoolean();

}

const char* const _0RL_cd_61e206bad56744d5_40000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_61e206bad56744d5_50000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_61e206bad56744d5_40000000* tcd = (_0RL_cd_61e206bad56744d5_40000000*)cd;
  OpenHRP::_impl_ImpedanceControllerService* impl = (OpenHRP::_impl_ImpedanceControllerService*) svnt->_ptrToInterface(OpenHRP::ImpedanceControllerService::_PD_repoId);
  tcd->result = impl->deleteImpedanceController(tcd->arg_0);


}

::CORBA::Boolean OpenHRP::_objref_ImpedanceControllerService::deleteImpedanceController(const char* name)
{
  _0RL_cd_61e206bad56744d5_40000000 _call_desc(_0RL_lcfn_61e206bad56744d5_50000000, "deleteImpedanceController", 26);
  _call_desc.arg_0 = name;

  _invoke(_call_desc);
  return _call_desc.result;


}
// Proxy call descriptor class. Mangled signature:
//  void_i_cstring
class _0RL_cd_61e206bad56744d5_60000000
  : public omniCallDescriptor
{
public:
  inline _0RL_cd_61e206bad56744d5_60000000(LocalCallFn lcfn,const char* op_,size_t oplen,_CORBA_Boolean upcall=0):
     omniCallDescriptor(lcfn, op_, oplen, 0, _user_exns, 0, upcall)
  {
    
  }
  
  void marshalArguments(cdrStream&);
  void unmarshalArguments(cdrStream&);

    
  
  static const char* const _user_exns[];

  ::CORBA::String_var arg_0_;
  const char* arg_0;
};

void _0RL_cd_61e206bad56744d5_60000000::marshalArguments(cdrStream& _n)
{
  _n.marshalString(arg_0,0);

}

void _0RL_cd_61e206bad56744d5_60000000::unmarshalArguments(cdrStream& _n)
{
  arg_0_ = _n.unmarshalString(0);
  arg_0 = arg_0_.in();

}

const char* const _0RL_cd_61e206bad56744d5_60000000::_user_exns[] = {
  0
};

// Local call call-back function.
static void
_0RL_lcfn_61e206bad56744d5_70000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_61e206bad56744d5_60000000* tcd = (_0RL_cd_61e206bad56744d5_60000000*)cd;
  OpenHRP::_impl_ImpedanceControllerService* impl = (OpenHRP::_impl_ImpedanceControllerService*) svnt->_ptrToInterface(OpenHRP::ImpedanceControllerService::_PD_repoId);
  impl->waitDeletingImpedanceController(tcd->arg_0);


}

void OpenHRP::_objref_ImpedanceControllerService::waitDeletingImpedanceController(const char* name)
{
  _0RL_cd_61e206bad56744d5_60000000 _call_desc(_0RL_lcfn_61e206bad56744d5_70000000, "waitDeletingImpedanceController", 32);
  _call_desc.arg_0 = name;

  _invoke(_call_desc);



}
// Local call call-back function.
static void
_0RL_lcfn_61e206bad56744d5_80000000(omniCallDescriptor* cd, omniServant* svnt)
{
  _0RL_cd_61e206bad56744d5_40000000* tcd = (_0RL_cd_61e206bad56744d5_40000000*)cd;
  OpenHRP::_impl_ImpedanceControllerService* impl = (OpenHRP::_impl_ImpedanceControllerService*) svnt->_ptrToInterface(OpenHRP::ImpedanceControllerService::_PD_repoId);
  tcd->result = impl->deleteImpedanceControllerAndWait(tcd->arg_0);


}

::CORBA::Boolean OpenHRP::_objref_ImpedanceControllerService::deleteImpedanceControllerAndWait(const char* name)
{
  _0RL_cd_61e206bad56744d5_40000000 _call_desc(_0RL_lcfn_61e206bad56744d5_80000000, "deleteImpedanceControllerAndWait", 33);
  _call_desc.arg_0 = name;

  _invoke(_call_desc);
  return _call_desc.result;


}
OpenHRP::_pof_ImpedanceControllerService::~_pof_ImpedanceControllerService() {}


omniObjRef*
OpenHRP::_pof_ImpedanceControllerService::newObjRef(omniIOR* ior, omniIdentity* id)
{
  return new ::OpenHRP::_objref_ImpedanceControllerService(ior, id);
}


::CORBA::Boolean
OpenHRP::_pof_ImpedanceControllerService::is_a(const char* id) const
{
  if( omni::ptrStrMatch(id, ::OpenHRP::ImpedanceControllerService::_PD_repoId) )
    return 1;
  
  return 0;
}

const OpenHRP::_pof_ImpedanceControllerService _the_pof_OpenHRP_mImpedanceControllerService;

OpenHRP::_impl_ImpedanceControllerService::~_impl_ImpedanceControllerService() {}


::CORBA::Boolean
OpenHRP::_impl_ImpedanceControllerService::_dispatch(omniCallHandle& _handle)
{
  const char* op = _handle.operation_name();

  if( omni::strMatch(op, "setImpedanceControllerParam") ) {

    _0RL_cd_61e206bad56744d5_00000000 _call_desc(_0RL_lcfn_61e206bad56744d5_10000000, "setImpedanceControllerParam", 28, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "getImpedanceControllerParam") ) {

    _0RL_cd_61e206bad56744d5_20000000 _call_desc(_0RL_lcfn_61e206bad56744d5_30000000, "getImpedanceControllerParam", 28, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "deleteImpedanceController") ) {

    _0RL_cd_61e206bad56744d5_40000000 _call_desc(_0RL_lcfn_61e206bad56744d5_50000000, "deleteImpedanceController", 26, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "waitDeletingImpedanceController") ) {

    _0RL_cd_61e206bad56744d5_60000000 _call_desc(_0RL_lcfn_61e206bad56744d5_70000000, "waitDeletingImpedanceController", 32, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }

  if( omni::strMatch(op, "deleteImpedanceControllerAndWait") ) {

    _0RL_cd_61e206bad56744d5_40000000 _call_desc(_0RL_lcfn_61e206bad56744d5_80000000, "deleteImpedanceControllerAndWait", 33, 1);
    
    _handle.upcall(this,_call_desc);
    return 1;
  }


  return 0;
}

void*
OpenHRP::_impl_ImpedanceControllerService::_ptrToInterface(const char* id)
{
  if( id == ::OpenHRP::ImpedanceControllerService::_PD_repoId )
    return (::OpenHRP::_impl_ImpedanceControllerService*) this;
  
  if( id == ::CORBA::Object::_PD_repoId )
    return (void*) 1;

  if( omni::strMatch(id, ::OpenHRP::ImpedanceControllerService::_PD_repoId) )
    return (::OpenHRP::_impl_ImpedanceControllerService*) this;
  
  if( omni::strMatch(id, ::CORBA::Object::_PD_repoId) )
    return (void*) 1;
  return 0;
}

const char*
OpenHRP::_impl_ImpedanceControllerService::_mostDerivedRepoId()
{
  return ::OpenHRP::ImpedanceControllerService::_PD_repoId;
}

POA_OpenHRP::ImpedanceControllerService::~ImpedanceControllerService() {}
