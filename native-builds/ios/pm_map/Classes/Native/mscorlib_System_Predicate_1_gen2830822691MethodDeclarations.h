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

// System.Predicate`1<Loom/DelayedQueueItem>
struct Predicate_1_t2830822691;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_Loom_DelayedQueueItem3219765808.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Predicate`1<Loom/DelayedQueueItem>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3059875087_gshared (Predicate_1_t2830822691 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Predicate_1__ctor_m3059875087(__this, ___object0, ___method1, method) ((  void (*) (Predicate_1_t2830822691 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3059875087_gshared)(__this, ___object0, ___method1, method)
// System.Boolean System.Predicate`1<Loom/DelayedQueueItem>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m4077563479_gshared (Predicate_1_t2830822691 * __this, DelayedQueueItem_t3219765808  ___obj0, const MethodInfo* method);
#define Predicate_1_Invoke_m4077563479(__this, ___obj0, method) ((  bool (*) (Predicate_1_t2830822691 *, DelayedQueueItem_t3219765808 , const MethodInfo*))Predicate_1_Invoke_m4077563479_gshared)(__this, ___obj0, method)
// System.IAsyncResult System.Predicate`1<Loom/DelayedQueueItem>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2411137706_gshared (Predicate_1_t2830822691 * __this, DelayedQueueItem_t3219765808  ___obj0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2411137706(__this, ___obj0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Predicate_1_t2830822691 *, DelayedQueueItem_t3219765808 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2411137706_gshared)(__this, ___obj0, ___callback1, ___object2, method)
// System.Boolean System.Predicate`1<Loom/DelayedQueueItem>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m307544541_gshared (Predicate_1_t2830822691 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Predicate_1_EndInvoke_m307544541(__this, ___result0, method) ((  bool (*) (Predicate_1_t2830822691 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m307544541_gshared)(__this, ___result0, method)
