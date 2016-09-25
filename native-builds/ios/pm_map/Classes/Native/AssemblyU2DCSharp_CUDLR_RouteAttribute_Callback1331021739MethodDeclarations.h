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

// CUDLR.RouteAttribute/Callback
struct Callback_t1331021739;
// System.Object
struct Il2CppObject;
// CUDLR.RequestContext
struct RequestContext_t2839801694;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_CUDLR_RequestContext2839801694.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void CUDLR.RouteAttribute/Callback::.ctor(System.Object,System.IntPtr)
extern "C"  void Callback__ctor_m2070515202 (Callback_t1331021739 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.RouteAttribute/Callback::Invoke(CUDLR.RequestContext)
extern "C"  void Callback_Invoke_m2780721734 (Callback_t1331021739 * __this, RequestContext_t2839801694 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult CUDLR.RouteAttribute/Callback::BeginInvoke(CUDLR.RequestContext,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Callback_BeginInvoke_m445690469 (Callback_t1331021739 * __this, RequestContext_t2839801694 * ___context0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.RouteAttribute/Callback::EndInvoke(System.IAsyncResult)
extern "C"  void Callback_EndInvoke_m2804437266 (Callback_t1331021739 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
