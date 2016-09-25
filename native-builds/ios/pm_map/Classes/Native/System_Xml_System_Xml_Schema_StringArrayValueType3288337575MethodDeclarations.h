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

// System.String[]
struct StringU5BU5D_t4054002952;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.StringArrayValueType
struct StringArrayValueType_t3288337575;
struct StringArrayValueType_t3288337575_marshaled_pinvoke;
struct StringArrayValueType_t3288337575_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_StringArrayValueType3288337575.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Xml.Schema.StringArrayValueType::.ctor(System.String[])
extern "C"  void StringArrayValueType__ctor_m2874887445 (StringArrayValueType_t3288337575 * __this, StringU5BU5D_t4054002952* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Schema.StringArrayValueType::get_Value()
extern "C"  StringU5BU5D_t4054002952* StringArrayValueType_get_Value_m932651184 (StringArrayValueType_t3288337575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringArrayValueType::Equals(System.Object)
extern "C"  bool StringArrayValueType_Equals_m230910676 (StringArrayValueType_t3288337575 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Schema.StringArrayValueType::GetHashCode()
extern "C"  int32_t StringArrayValueType_GetHashCode_m578682616 (StringArrayValueType_t3288337575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Schema.StringArrayValueType::op_Equality(System.Xml.Schema.StringArrayValueType,System.Xml.Schema.StringArrayValueType)
extern "C"  bool StringArrayValueType_op_Equality_m281390797 (Il2CppObject * __this /* static, unused */, StringArrayValueType_t3288337575  ___v10, StringArrayValueType_t3288337575  ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct StringArrayValueType_t3288337575;
struct StringArrayValueType_t3288337575_marshaled_pinvoke;

extern "C" void StringArrayValueType_t3288337575_marshal_pinvoke(const StringArrayValueType_t3288337575& unmarshaled, StringArrayValueType_t3288337575_marshaled_pinvoke& marshaled);
extern "C" void StringArrayValueType_t3288337575_marshal_pinvoke_back(const StringArrayValueType_t3288337575_marshaled_pinvoke& marshaled, StringArrayValueType_t3288337575& unmarshaled);
extern "C" void StringArrayValueType_t3288337575_marshal_pinvoke_cleanup(StringArrayValueType_t3288337575_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct StringArrayValueType_t3288337575;
struct StringArrayValueType_t3288337575_marshaled_com;

extern "C" void StringArrayValueType_t3288337575_marshal_com(const StringArrayValueType_t3288337575& unmarshaled, StringArrayValueType_t3288337575_marshaled_com& marshaled);
extern "C" void StringArrayValueType_t3288337575_marshal_com_back(const StringArrayValueType_t3288337575_marshaled_com& marshaled, StringArrayValueType_t3288337575& unmarshaled);
extern "C" void StringArrayValueType_t3288337575_marshal_com_cleanup(StringArrayValueType_t3288337575_marshaled_com& marshaled);
