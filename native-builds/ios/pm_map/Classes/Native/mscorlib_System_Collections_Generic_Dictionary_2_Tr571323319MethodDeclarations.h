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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>>
struct Transform_1_t571323319;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22758666483.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m38256658_gshared (Transform_1_t571323319 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m38256658(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t571323319 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m38256658_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2758666483  Transform_1_Invoke_m660898854_gshared (Transform_1_t571323319 * __this, int32_t ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m660898854(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2758666483  (*) (Transform_1_t571323319 *, int32_t, Il2CppChar, const MethodInfo*))Transform_1_Invoke_m660898854_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2725313617_gshared (Transform_1_t571323319 * __this, int32_t ___key0, Il2CppChar ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2725313617(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t571323319 *, int32_t, Il2CppChar, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2725313617_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2758666483  Transform_1_EndInvoke_m3664390308_gshared (Transform_1_t571323319 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3664390308(__this, ___result0, method) ((  KeyValuePair_2_t2758666483  (*) (Transform_1_t571323319 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3664390308_gshared)(__this, ___result0, method)
