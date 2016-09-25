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

// System.Converter`2<System.Object,UnityEngine.Color>
struct Converter_2_t3739341401;
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

// System.Void System.Converter`2<System.Object,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m1932983255_gshared (Converter_2_t3739341401 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Converter_2__ctor_m1932983255(__this, ___object0, ___method1, method) ((  void (*) (Converter_2_t3739341401 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m1932983255_gshared)(__this, ___object0, ___method1, method)
// TOutput System.Converter`2<System.Object,UnityEngine.Color>::Invoke(TInput)
extern "C"  Color_t4194546905  Converter_2_Invoke_m1860589917_gshared (Converter_2_t3739341401 * __this, Il2CppObject * ___input0, const MethodInfo* method);
#define Converter_2_Invoke_m1860589917(__this, ___input0, method) ((  Color_t4194546905  (*) (Converter_2_t3739341401 *, Il2CppObject *, const MethodInfo*))Converter_2_Invoke_m1860589917_gshared)(__this, ___input0, method)
// System.IAsyncResult System.Converter`2<System.Object,UnityEngine.Color>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Converter_2_BeginInvoke_m3415278650_gshared (Converter_2_t3739341401 * __this, Il2CppObject * ___input0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Converter_2_BeginInvoke_m3415278650(__this, ___input0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Converter_2_t3739341401 *, Il2CppObject *, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Converter_2_BeginInvoke_m3415278650_gshared)(__this, ___input0, ___callback1, ___object2, method)
// TOutput System.Converter`2<System.Object,UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C"  Color_t4194546905  Converter_2_EndInvoke_m4029806313_gshared (Converter_2_t3739341401 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Converter_2_EndInvoke_m4029806313(__this, ___result0, method) ((  Color_t4194546905  (*) (Converter_2_t3739341401 *, Il2CppObject *, const MethodInfo*))Converter_2_EndInvoke_m4029806313_gshared)(__this, ___result0, method)
