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

// Fabric.Crashlytics.Crashlytics
struct Crashlytics_t2656729803;
// System.String
struct String_t;
// System.Diagnostics.StackTrace
struct StackTrace_t1047871261;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Diagnostics_StackTrace1047871261.h"

// System.Void Fabric.Crashlytics.Crashlytics::.ctor()
extern "C"  void Crashlytics__ctor_m45845920 (Crashlytics_t2656729803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Crashlytics::.cctor()
extern "C"  void Crashlytics__cctor_m939127309 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Crashlytics::SetDebugMode(System.Boolean)
extern "C"  void Crashlytics_SetDebugMode_m1988709231 (Il2CppObject * __this /* static, unused */, bool ___debugMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Crashlytics::Crash()
extern "C"  void Crashlytics_Crash_m1915553957 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Crashlytics::ThrowNonFatal()
extern "C"  void Crashlytics_ThrowNonFatal_m3529843131 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Crashlytics::Log(System.String)
extern "C"  void Crashlytics_Log_m2424601088 (Il2CppObject * __this /* static, unused */, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Crashlytics::SetKeyValue(System.String,System.String)
extern "C"  void Crashlytics_SetKeyValue_m2593560492 (Il2CppObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Crashlytics::SetUserIdentifier(System.String)
extern "C"  void Crashlytics_SetUserIdentifier_m1745126894 (Il2CppObject * __this /* static, unused */, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Crashlytics::SetUserEmail(System.String)
extern "C"  void Crashlytics_SetUserEmail_m3788595375 (Il2CppObject * __this /* static, unused */, String_t* ___email0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Crashlytics::SetUserName(System.String)
extern "C"  void Crashlytics_SetUserName_m515620940 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Crashlytics::RecordCustomException(System.String,System.String,System.Diagnostics.StackTrace)
extern "C"  void Crashlytics_RecordCustomException_m3683604897 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___reason1, StackTrace_t1047871261 * ___stackTrace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Crashlytics::RecordCustomException(System.String,System.String,System.String)
extern "C"  void Crashlytics_RecordCustomException_m2113000207 (Il2CppObject * __this /* static, unused */, String_t* ___name0, String_t* ___reason1, String_t* ___stackTraceString2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
