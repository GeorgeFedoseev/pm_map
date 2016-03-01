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
struct Converter_2_t2802219669;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Converter`2<System.Object,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m2056855754_gshared (Converter_2_t2802219669 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m2056855754(__this, ___object, ___method, method) ((  void (*) (Converter_2_t2802219669 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m2056855754_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,UnityEngine.Vector3>::Invoke(TInput)
extern "C"  Vector3_t3525329789  Converter_2_Invoke_m1609293136_gshared (Converter_2_t2802219669 * __this, Object_t * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m1609293136(__this, ___input, method) ((  Vector3_t3525329789  (*) (Converter_2_t2802219669 *, Object_t *, const MethodInfo*))Converter_2_Invoke_m1609293136_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,UnityEngine.Vector3>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Object_t * Converter_2_BeginInvoke_m1724277421_gshared (Converter_2_t2802219669 * __this, Object_t * ___input, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m1724277421(__this, ___input, ___callback, ___object, method) ((  Object_t * (*) (Converter_2_t2802219669 *, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m1724277421_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C"  Vector3_t3525329789  Converter_2_EndInvoke_m3037672668_gshared (Converter_2_t2802219669 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m3037672668(__this, ___result, method) ((  Vector3_t3525329789  (*) (Converter_2_t2802219669 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m3037672668_gshared)(__this, ___result, method)
