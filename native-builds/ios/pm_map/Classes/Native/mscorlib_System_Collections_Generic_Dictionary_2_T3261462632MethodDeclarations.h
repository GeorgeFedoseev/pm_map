﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Int32>
struct Transform_1_t3261462632;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1057150338_gshared (Transform_1_t3261462632 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1057150338(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3261462632 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1057150338_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Int32>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m1857200890_gshared (Transform_1_t3261462632 * __this, int32_t ___key0, Il2CppChar ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1857200890(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t3261462632 *, int32_t, Il2CppChar, const MethodInfo*))Transform_1_Invoke_m1857200890_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m461421145_gshared (Transform_1_t3261462632 * __this, int32_t ___key0, Il2CppChar ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m461421145(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3261462632 *, int32_t, Il2CppChar, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m461421145_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Char,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m3336191312_gshared (Transform_1_t3261462632 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3336191312(__this, ___result0, method) ((  int32_t (*) (Transform_1_t3261462632 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3336191312_gshared)(__this, ___result0, method)
