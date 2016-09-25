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

// System.Converter`2<UnityEngine.Color,System.Object>
struct Converter_2_t753532725;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Converter`2<UnityEngine.Color,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m2530634583_gshared (Converter_2_t753532725 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Converter_2__ctor_m2530634583(__this, ___object0, ___method1, method) ((  void (*) (Converter_2_t753532725 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m2530634583_gshared)(__this, ___object0, ___method1, method)
// TOutput System.Converter`2<UnityEngine.Color,System.Object>::Invoke(TInput)
extern "C"  Il2CppObject * Converter_2_Invoke_m1845004509_gshared (Converter_2_t753532725 * __this, Color_t4194546905  ___input0, const MethodInfo* method);
#define Converter_2_Invoke_m1845004509(__this, ___input0, method) ((  Il2CppObject * (*) (Converter_2_t753532725 *, Color_t4194546905 , const MethodInfo*))Converter_2_Invoke_m1845004509_gshared)(__this, ___input0, method)
// System.IAsyncResult System.Converter`2<UnityEngine.Color,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Converter_2_BeginInvoke_m2292036538_gshared (Converter_2_t753532725 * __this, Color_t4194546905  ___input0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Converter_2_BeginInvoke_m2292036538(__this, ___input0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Converter_2_t753532725 *, Color_t4194546905 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Converter_2_BeginInvoke_m2292036538_gshared)(__this, ___input0, ___callback1, ___object2, method)
// TOutput System.Converter`2<UnityEngine.Color,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Converter_2_EndInvoke_m267724393_gshared (Converter_2_t753532725 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Converter_2_EndInvoke_m267724393(__this, ___result0, method) ((  Il2CppObject * (*) (Converter_2_t753532725 *, Il2CppObject *, const MethodInfo*))Converter_2_EndInvoke_m267724393_gshared)(__this, ___result0, method)
