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

// Fabric.Internal.Crashlytics.CrashlyticsInit
struct CrashlyticsInit_t801152215;
// System.Object
struct Il2CppObject;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t3134093121;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_UnhandledExceptionEventArgs3134093121.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_LogType4286006228.h"

// System.Void Fabric.Internal.Crashlytics.CrashlyticsInit::.ctor()
extern "C"  void CrashlyticsInit__ctor_m176076351 (CrashlyticsInit_t801152215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Internal.Crashlytics.CrashlyticsInit::.cctor()
extern "C"  void CrashlyticsInit__cctor_m681303374 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Fabric.Internal.Crashlytics.CrashlyticsInit::CLUIsInitialized()
extern "C"  bool CrashlyticsInit_CLUIsInitialized_m47381999 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Internal.Crashlytics.CrashlyticsInit::Awake()
extern "C"  void CrashlyticsInit_Awake_m413681570 (CrashlyticsInit_t801152215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Internal.Crashlytics.CrashlyticsInit::AwakeOnce()
extern "C"  void CrashlyticsInit_AwakeOnce_m3164568963 (CrashlyticsInit_t801152215 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Internal.Crashlytics.CrashlyticsInit::RegisterExceptionHandlers()
extern "C"  void CrashlyticsInit_RegisterExceptionHandlers_m4253097874 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Fabric.Internal.Crashlytics.CrashlyticsInit::IsSDKInitialized()
extern "C"  bool CrashlyticsInit_IsSDKInitialized_m420138229 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Internal.Crashlytics.CrashlyticsInit::HandleException(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void CrashlyticsInit_HandleException_m3144372906 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, UnhandledExceptionEventArgs_t3134093121 * ___eArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Internal.Crashlytics.CrashlyticsInit::HandleLog(System.String,System.String,UnityEngine.LogType)
extern "C"  void CrashlyticsInit_HandleLog_m2797690698 (Il2CppObject * __this /* static, unused */, String_t* ___message0, String_t* ___stackTraceString1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Fabric.Internal.Crashlytics.CrashlyticsInit::getMessageParts(System.String)
extern "C"  StringU5BU5D_t4054002952* CrashlyticsInit_getMessageParts_m1483938133 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
