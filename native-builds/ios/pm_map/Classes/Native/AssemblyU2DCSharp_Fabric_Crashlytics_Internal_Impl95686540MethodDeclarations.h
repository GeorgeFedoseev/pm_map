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

// Fabric.Crashlytics.Internal.Impl
struct Impl_t95686540;
// System.String
struct String_t;
// System.Diagnostics.StackTrace
struct StackTrace_t1047871261;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// System.Collections.Generic.Dictionary`2<System.String,System.String>[]
struct Dictionary_2U5BU5D_t2702333566;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Diagnostics_StackTrace1047871261.h"

// System.Void Fabric.Crashlytics.Internal.Impl::.ctor()
extern "C"  void Impl__ctor_m4042339176 (Impl_t95686540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.Impl::.cctor()
extern "C"  void Impl__cctor_m276366661 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Fabric.Crashlytics.Internal.Impl Fabric.Crashlytics.Internal.Impl::Make()
extern "C"  Impl_t95686540 * Impl_Make_m430761172 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.Impl::SetDebugMode(System.Boolean)
extern "C"  void Impl_SetDebugMode_m892768935 (Impl_t95686540 * __this, bool ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.Impl::Crash()
extern "C"  void Impl_Crash_m1617079917 (Impl_t95686540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.Impl::ThrowNonFatal()
extern "C"  void Impl_ThrowNonFatal_m2895937411 (Impl_t95686540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.Impl::Log(System.String)
extern "C"  void Impl_Log_m2710497080 (Impl_t95686540 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.Impl::SetKeyValue(System.String,System.String)
extern "C"  void Impl_SetKeyValue_m1094372068 (Impl_t95686540 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.Impl::SetUserIdentifier(System.String)
extern "C"  void Impl_SetUserIdentifier_m4090196262 (Impl_t95686540 * __this, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.Impl::SetUserEmail(System.String)
extern "C"  void Impl_SetUserEmail_m289559159 (Impl_t95686540 * __this, String_t* ___email0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.Impl::SetUserName(System.String)
extern "C"  void Impl_SetUserName_m402748804 (Impl_t95686540 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.Impl::RecordCustomException(System.String,System.String,System.Diagnostics.StackTrace)
extern "C"  void Impl_RecordCustomException_m3117282521 (Impl_t95686540 * __this, String_t* ___name0, String_t* ___reason1, StackTrace_t1047871261 * ___stackTrace2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Fabric.Crashlytics.Internal.Impl::RecordCustomException(System.String,System.String,System.String)
extern "C"  void Impl_RecordCustomException_m41803335 (Impl_t95686540 * __this, String_t* ___name0, String_t* ___reason1, String_t* ___stackTraceString2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Fabric.Crashlytics.Internal.Impl::ParseFrameString(System.String,System.String)
extern "C"  Dictionary_2_t827649927 * Impl_ParseFrameString_m3376128745 (Il2CppObject * __this /* static, unused */, String_t* ___regex0, String_t* ___frameString1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String>[] Fabric.Crashlytics.Internal.Impl::ParseStackTraceString(System.String)
extern "C"  Dictionary_2U5BU5D_t2702333566* Impl_ParseStackTraceString_m1069186439 (Il2CppObject * __this /* static, unused */, String_t* ___stackTraceString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
