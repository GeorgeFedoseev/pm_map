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

// System.Converter`2<System.Object,UnityEngine.Vector2>
struct Converter_2_t2802219668;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Converter`2<System.Object,UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m424051755_gshared (Converter_2_t2802219668 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m424051755(__this, ___object, ___method, method) ((  void (*) (Converter_2_t2802219668 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m424051755_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,UnityEngine.Vector2>::Invoke(TInput)
extern "C"  Vector2_t3525329788  Converter_2_Invoke_m2606365489_gshared (Converter_2_t2802219668 * __this, Object_t * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m2606365489(__this, ___input, method) ((  Vector2_t3525329788  (*) (Converter_2_t2802219668 *, Object_t *, const MethodInfo*))Converter_2_Invoke_m2606365489_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,UnityEngine.Vector2>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Object_t * Converter_2_BeginInvoke_m3654896526_gshared (Converter_2_t2802219668 * __this, Object_t * ___input, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m3654896526(__this, ___input, ___callback, ___object, method) ((  Object_t * (*) (Converter_2_t2802219668 *, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m3654896526_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C"  Vector2_t3525329788  Converter_2_EndInvoke_m2012180669_gshared (Converter_2_t2802219668 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m2012180669(__this, ___result, method) ((  Vector2_t3525329788  (*) (Converter_2_t2802219668 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m2012180669_gshared)(__this, ___result, method)
