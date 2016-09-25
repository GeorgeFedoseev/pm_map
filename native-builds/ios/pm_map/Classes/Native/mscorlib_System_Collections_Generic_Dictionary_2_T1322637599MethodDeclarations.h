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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Boolean,System.Object,System.Boolean>
struct Transform_1_t1322637599;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Boolean,System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1384954667_gshared (Transform_1_t1322637599 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1384954667(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1322637599 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1384954667_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Boolean,System.Object,System.Boolean>::Invoke(TKey,TValue)
extern "C"  bool Transform_1_Invoke_m3087087345_gshared (Transform_1_t1322637599 * __this, bool ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3087087345(__this, ___key0, ___value1, method) ((  bool (*) (Transform_1_t1322637599 *, bool, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3087087345_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Boolean,System.Object,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4047874000_gshared (Transform_1_t1322637599 * __this, bool ___key0, Il2CppObject * ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4047874000(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1322637599 *, bool, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4047874000_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Boolean,System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Transform_1_EndInvoke_m2938657017_gshared (Transform_1_t1322637599 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2938657017(__this, ___result0, method) ((  bool (*) (Transform_1_t1322637599 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2938657017_gshared)(__this, ___result0, method)
