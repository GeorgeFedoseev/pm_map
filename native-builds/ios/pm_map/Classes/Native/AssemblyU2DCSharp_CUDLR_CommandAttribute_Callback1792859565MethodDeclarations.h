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

// CUDLR.CommandAttribute/Callback
struct Callback_t1792859565;
// System.Object
struct Il2CppObject;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void CUDLR.CommandAttribute/Callback::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback__ctor_m2002527492 (Callback_t1792859565 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.CommandAttribute/Callback::Invoke(System.String[])
extern "C"  void Callback_Invoke_m4206974850 (Callback_t1792859565 * __this, StringU5BU5D_t4054002952* ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult CUDLR.CommandAttribute/Callback::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_BeginInvoke_m1928196819 (Callback_t1792859565 * __this, StringU5BU5D_t4054002952* ___args0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.CommandAttribute/Callback::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_EndInvoke_m2658318612 (Callback_t1792859565 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
