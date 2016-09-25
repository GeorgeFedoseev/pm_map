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

// ConfigStorage
struct ConfigStorage_t2691479737;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void ConfigStorage::.ctor()
extern "C"  void ConfigStorage__ctor_m1378838738 (ConfigStorage_t2691479737 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigStorage::set(System.String,System.Int32)
extern "C"  void ConfigStorage_set_m1388130375 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigStorage::set(System.String,System.Single)
extern "C"  void ConfigStorage_set_m220390773 (Il2CppObject * __this /* static, unused */, String_t* ___key0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigStorage::set(System.String,System.String)
extern "C"  void ConfigStorage_set_m539067084 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigStorage::set(System.String,System.Boolean)
extern "C"  void ConfigStorage_set_m4037233389 (Il2CppObject * __this /* static, unused */, String_t* ___key0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConfigStorage::getBool(System.String)
extern "C"  bool ConfigStorage_getBool_m1579504926 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ConfigStorage::getInt(System.String)
extern "C"  int32_t ConfigStorage_getInt_m842723237 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ConfigStorage::getFloat(System.String)
extern "C"  float ConfigStorage_getFloat_m3811701014 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ConfigStorage::getSting(System.String)
extern "C"  String_t* ConfigStorage_getSting_m3892214536 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ConfigStorage::hasKey(System.String)
extern "C"  bool ConfigStorage_hasKey_m3585238815 (Il2CppObject * __this /* static, unused */, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
