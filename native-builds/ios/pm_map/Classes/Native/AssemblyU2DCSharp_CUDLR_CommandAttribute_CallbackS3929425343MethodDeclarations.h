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

// CUDLR.CommandAttribute/CallbackSimple
struct CallbackSimple_t3929425343;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void CUDLR.CommandAttribute/CallbackSimple::.ctor(System.Object,System.IntPtr)
extern "C"  void CallbackSimple__ctor_m2548300310 (CallbackSimple_t3929425343 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.CommandAttribute/CallbackSimple::Invoke()
extern "C"  void CallbackSimple_Invoke_m2954761712 (CallbackSimple_t3929425343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult CUDLR.CommandAttribute/CallbackSimple::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CallbackSimple_BeginInvoke_m1678347419 (CallbackSimple_t3929425343 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.CommandAttribute/CallbackSimple::EndInvoke(System.IAsyncResult)
extern "C"  void CallbackSimple_EndInvoke_m2252597030 (CallbackSimple_t3929425343 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
