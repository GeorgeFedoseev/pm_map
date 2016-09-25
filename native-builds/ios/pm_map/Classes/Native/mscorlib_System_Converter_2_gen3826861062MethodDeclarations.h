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

// System.Converter`2<System.Object,UnityEngine.Vector3>
struct Converter_2_t3826861062;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Converter`2<System.Object,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m2056855754_gshared (Converter_2_t3826861062 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Converter_2__ctor_m2056855754(__this, ___object0, ___method1, method) ((  void (*) (Converter_2_t3826861062 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m2056855754_gshared)(__this, ___object0, ___method1, method)
// TOutput System.Converter`2<System.Object,UnityEngine.Vector3>::Invoke(TInput)
extern "C"  Vector3_t4282066566  Converter_2_Invoke_m1609293136_gshared (Converter_2_t3826861062 * __this, Il2CppObject * ___input0, const MethodInfo* method);
#define Converter_2_Invoke_m1609293136(__this, ___input0, method) ((  Vector3_t4282066566  (*) (Converter_2_t3826861062 *, Il2CppObject *, const MethodInfo*))Converter_2_Invoke_m1609293136_gshared)(__this, ___input0, method)
// System.IAsyncResult System.Converter`2<System.Object,UnityEngine.Vector3>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Converter_2_BeginInvoke_m1724277421_gshared (Converter_2_t3826861062 * __this, Il2CppObject * ___input0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Converter_2_BeginInvoke_m1724277421(__this, ___input0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Converter_2_t3826861062 *, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Converter_2_BeginInvoke_m1724277421_gshared)(__this, ___input0, ___callback1, ___object2, method)
// TOutput System.Converter`2<System.Object,UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C"  Vector3_t4282066566  Converter_2_EndInvoke_m3037672668_gshared (Converter_2_t3826861062 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Converter_2_EndInvoke_m3037672668(__this, ___result0, method) ((  Vector3_t4282066566  (*) (Converter_2_t3826861062 *, Il2CppObject *, const MethodInfo*))Converter_2_EndInvoke_m3037672668_gshared)(__this, ___result0, method)
