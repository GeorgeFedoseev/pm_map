#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.QNameValueType
struct QNameValueType_t949579411;
struct QNameValueType_t949579411_marshaled_pinvoke;
struct QNameValueType_t949579411_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_QNameValueType949579411.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Xml.Schema.QNameValueType::.ctor(System.Xml.XmlQualifiedName)
extern "C"  void QNameValueType__ctor_m3382877997 (QNameValueType_t949579411 * __this, XmlQualifiedName_t2133315502 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlQualifiedName System.Xml.Schema.QNameValueType::get_Value()
extern "C"  XmlQualifiedName_t2133315502 * QNameValueType_get_Value_m3009812312 (QNameValueType_t949579411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.QNameValueType::Equals(System.Object)
extern "C"  bool QNameValueType_Equals_m999647976 (QNameValueType_t949579411 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.QNameValueType::GetHashCode()
extern "C"  int32_t QNameValueType_GetHashCode_m1355650956 (QNameValueType_t949579411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.QNameValueType::op_Equality(System.Xml.Schema.QNameValueType,System.Xml.Schema.QNameValueType)
extern "C"  bool QNameValueType_op_Equality_m1047677497 (Il2CppObject * __this /* static, unused */, QNameValueType_t949579411  ___v10, QNameValueType_t949579411  ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct QNameValueType_t949579411;
struct QNameValueType_t949579411_marshaled_pinvoke;

extern "C" void QNameValueType_t949579411_marshal_pinvoke(const QNameValueType_t949579411& unmarshaled, QNameValueType_t949579411_marshaled_pinvoke& marshaled);
extern "C" void QNameValueType_t949579411_marshal_pinvoke_back(const QNameValueType_t949579411_marshaled_pinvoke& marshaled, QNameValueType_t949579411& unmarshaled);
extern "C" void QNameValueType_t949579411_marshal_pinvoke_cleanup(QNameValueType_t949579411_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct QNameValueType_t949579411;
struct QNameValueType_t949579411_marshaled_com;

extern "C" void QNameValueType_t949579411_marshal_com(const QNameValueType_t949579411& unmarshaled, QNameValueType_t949579411_marshaled_com& marshaled);
extern "C" void QNameValueType_t949579411_marshal_com_back(const QNameValueType_t949579411_marshaled_com& marshaled, QNameValueType_t949579411& unmarshaled);
extern "C" void QNameValueType_t949579411_marshal_com_cleanup(QNameValueType_t949579411_marshaled_com& marshaled);
