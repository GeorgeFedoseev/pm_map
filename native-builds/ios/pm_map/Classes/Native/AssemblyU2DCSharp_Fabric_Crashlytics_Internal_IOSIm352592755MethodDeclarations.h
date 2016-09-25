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

// Fabric.Crashlytics.Internal.IOSImpl
struct IOSImpl_t352592755;
// System.String
struct String_t;
// System.Diagnostics.StackTrace
struct StackTrace_t1047871261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Diagnostics_StackTrace1047871261.h"

// System.Void Fabric.Crashlytics.Internal.IOSImpl::.ctor()
extern "C"  void IOSImpl__ctor_m1237377073 (IOSImpl_t352592755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::CLUCrash()
extern "C"  void IOSImpl_CLUCrash_m3547955470 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::CLUSetDebugMode(System.Int32)
extern "C"  void IOSImpl_CLUSetDebugMode_m1558109760 (Il2CppObject * __this /* static, unused */, int32_t ___debugMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::CLULog(System.String)
extern "C"  void IOSImpl_CLULog_m354014711 (Il2CppObject * __this /* static, unused */, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::CLUSetKeyValue(System.String,System.String)
extern "C"  void IOSImpl_CLUSetKeyValue_m2294321251 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::CLUSetUserIdentifier(System.String)
extern "C"  void IOSImpl_CLUSetUserIdentifier_m1968317861 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::CLUSetUserEmail(System.String)
extern "C"  void IOSImpl_CLUSetUserEmail_m2196671128 (Il2CppObject * __this /* static, unused */, String_t* ___email0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::CLUSetUserName(System.String)
extern "C"  void IOSImpl_CLUSetUserName_m2681025859 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::CLURecordCustomException(System.String,System.String,System.String)
extern "C"  void IOSImpl_CLURecordCustomException_m171628230 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___reason1, String_t* ___stackTrace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::SetDebugMode(System.Boolean)
extern "C"  void IOSImpl_SetDebugMode_m1009380734 (IOSImpl_t352592755 * __this, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::Crash()
extern "C"  void IOSImpl_Crash_m3107085110 (IOSImpl_t352592755 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::Log(System.String)
extern "C"  void IOSImpl_Log_m1727435471 (IOSImpl_t352592755 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::SetKeyValue(System.String,System.String)
extern "C"  void IOSImpl_SetKeyValue_m3556875067 (IOSImpl_t352592755 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::SetUserIdentifier(System.String)
extern "C"  void IOSImpl_SetUserIdentifier_m1230473341 (IOSImpl_t352592755 * __this, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::SetUserEmail(System.String)
extern "C"  void IOSImpl_SetUserEmail_m2510078144 (IOSImpl_t352592755 * __this, String_t* ___email0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::SetUserName(System.String)
extern "C"  void IOSImpl_SetUserName_m2968230427 (IOSImpl_t352592755 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::RecordCustomException(System.String,System.String,System.Diagnostics.StackTrace)
extern "C"  void IOSImpl_RecordCustomException_m2079547952 (IOSImpl_t352592755 * __this, String_t* ___name0, String_t* ___reason1, StackTrace_t1047871261 * ___stackTrace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.IOSImpl::RecordCustomException(System.String,System.String,System.String)
extern "C"  void IOSImpl_RecordCustomException_m1312741790 (IOSImpl_t352592755 * __this, String_t* ___name0, String_t* ___reason1, String_t* ___stackTraceString2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
