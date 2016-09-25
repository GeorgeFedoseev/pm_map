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

// System.Net.ListenerPrefix
struct ListenerPrefix_t3256917632;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Net.ListenerPrefix::.ctor(System.String)
extern "C"  void ListenerPrefix__ctor_m2243389774 (ListenerPrefix_t3256917632 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ListenerPrefix::ToString()
extern "C"  String_t* ListenerPrefix_ToString_m1231685625 (ListenerPrefix_t3256917632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ListenerPrefix::get_Secure()
extern "C"  bool ListenerPrefix_get_Secure_m1210395770 (ListenerPrefix_t3256917632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ListenerPrefix::get_Host()
extern "C"  String_t* ListenerPrefix_get_Host_m1711308094 (ListenerPrefix_t3256917632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ListenerPrefix::get_Port()
extern "C"  int32_t ListenerPrefix_get_Port_m3072065578 (ListenerPrefix_t3256917632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ListenerPrefix::get_Path()
extern "C"  String_t* ListenerPrefix_get_Path_m1927430267 (ListenerPrefix_t3256917632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ListenerPrefix::Equals(System.Object)
extern "C"  bool ListenerPrefix_Equals_m1440210363 (ListenerPrefix_t3256917632 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ListenerPrefix::GetHashCode()
extern "C"  int32_t ListenerPrefix_GetHashCode_m4160110611 (ListenerPrefix_t3256917632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerPrefix::Parse(System.String)
extern "C"  void ListenerPrefix_Parse_m4076637661 (ListenerPrefix_t3256917632 * __this, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerPrefix::CheckUri(System.String)
extern "C"  void ListenerPrefix_CheckUri_m2400333870 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
