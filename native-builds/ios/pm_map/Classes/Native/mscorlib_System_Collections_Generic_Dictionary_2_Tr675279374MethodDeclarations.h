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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Char>
struct Transform_1_t675279374;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Char>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4214859444_gshared (Transform_1_t675279374 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4214859444(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t675279374 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4214859444_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Char>::Invoke(TKey,TValue)
extern "C"  Il2CppChar Transform_1_Invoke_m3805462468_gshared (Transform_1_t675279374 * __this, int32_t ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3805462468(__this, ___key0, ___value1, method) ((  Il2CppChar (*) (Transform_1_t675279374 *, int32_t, Il2CppChar, const MethodInfo*))Transform_1_Invoke_m3805462468_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Char>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3442265071_gshared (Transform_1_t675279374 * __this, int32_t ___key0, Il2CppChar ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3442265071(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t675279374 *, int32_t, Il2CppChar, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3442265071_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Char>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppChar Transform_1_EndInvoke_m4278001222_gshared (Transform_1_t675279374 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m4278001222(__this, ___result0, method) ((  Il2CppChar (*) (Transform_1_t675279374 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4278001222_gshared)(__this, ___result0, method)
