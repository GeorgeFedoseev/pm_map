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

// Fabric.Crashlytics.Internal.Impl/FrameParser
struct FrameParser_t3232154704;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Fabric.Crashlytics.Internal.Impl/FrameParser::.ctor(System.Object,System.IntPtr)
extern "C"  void FrameParser__ctor_m2209520887 (FrameParser_t3232154704 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Fabric.Crashlytics.Internal.Impl/FrameParser::Invoke(System.String)
extern "C"  Dictionary_2_t827649927 * FrameParser_Invoke_m2734695907 (FrameParser_t3232154704 * __this, String_t* ___frameString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Fabric.Crashlytics.Internal.Impl/FrameParser::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FrameParser_BeginInvoke_m355610646 (FrameParser_t3232154704 * __this, String_t* ___frameString0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Fabric.Crashlytics.Internal.Impl/FrameParser::EndInvoke(System.IAsyncResult)
extern "C"  Dictionary_2_t827649927 * FrameParser_EndInvoke_m3950545781 (FrameParser_t3232154704 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
