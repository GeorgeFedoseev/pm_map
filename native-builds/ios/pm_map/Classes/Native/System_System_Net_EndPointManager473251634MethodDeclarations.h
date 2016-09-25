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

// System.Net.HttpListener
struct HttpListener_t1617405814;
// System.String
struct String_t;
// System.Net.EndPointListener
struct EndPointListener_t293255011;
// System.Net.IPAddress
struct IPAddress_t3525271463;
// System.Net.IPEndPoint
struct IPEndPoint_t2123960758;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_HttpListener1617405814.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_IPAddress3525271463.h"
#include "System_System_Net_EndPointListener293255011.h"
#include "System_System_Net_IPEndPoint2123960758.h"

// System.Void System.Net.EndPointManager::.cctor()
extern "C"  void EndPointManager__cctor_m493443993 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::AddListener(System.Net.HttpListener)
extern "C"  void EndPointManager_AddListener_m2250819039 (Il2CppObject * __this /* static, unused */, HttpListener_t1617405814 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::AddPrefix(System.String,System.Net.HttpListener)
extern "C"  void EndPointManager_AddPrefix_m2697711549 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, HttpListener_t1617405814 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::AddPrefixInternal(System.String,System.Net.HttpListener)
extern "C"  void EndPointManager_AddPrefixInternal_m969349696 (Il2CppObject * __this /* static, unused */, String_t* ___p0, HttpListener_t1617405814 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPointListener System.Net.EndPointManager::GetEPListener(System.Net.IPAddress,System.Int32,System.Net.HttpListener,System.Boolean)
extern "C"  EndPointListener_t293255011 * EndPointManager_GetEPListener_m1820306518 (Il2CppObject * __this /* static, unused */, IPAddress_t3525271463 * ___addr0, int32_t ___port1, HttpListener_t1617405814 * ___listener2, bool ___secure3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::RemoveEndPoint(System.Net.EndPointListener,System.Net.IPEndPoint)
extern "C"  void EndPointManager_RemoveEndPoint_m3716838736 (Il2CppObject * __this /* static, unused */, EndPointListener_t293255011 * ___epl0, IPEndPoint_t2123960758 * ___ep1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::RemoveListener(System.Net.HttpListener)
extern "C"  void EndPointManager_RemoveListener_m2998232606 (Il2CppObject * __this /* static, unused */, HttpListener_t1617405814 * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::RemovePrefix(System.String,System.Net.HttpListener)
extern "C"  void EndPointManager_RemovePrefix_m4054255996 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, HttpListener_t1617405814 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::RemovePrefixInternal(System.String,System.Net.HttpListener)
extern "C"  void EndPointManager_RemovePrefixInternal_m1533551871 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, HttpListener_t1617405814 * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
