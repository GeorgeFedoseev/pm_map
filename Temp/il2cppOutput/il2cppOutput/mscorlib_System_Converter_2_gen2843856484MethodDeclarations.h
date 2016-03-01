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

// System.Converter`2<UnityEngine.Vector2,System.Object>
struct Converter_2_t2843856484;
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

// System.Void System.Converter`2<UnityEngine.Vector2,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m21322795_gshared (Converter_2_t2843856484 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m21322795(__this, ___object, ___method, method) ((  void (*) (Converter_2_t2843856484 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m21322795_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<UnityEngine.Vector2,System.Object>::Invoke(TInput)
extern "C"  Object_t * Converter_2_Invoke_m3845444401_gshared (Converter_2_t2843856484 * __this, Vector2_t3525329788  ___input, const MethodInfo* method);
#define Converter_2_Invoke_m3845444401(__this, ___input, method) ((  Object_t * (*) (Converter_2_t2843856484 *, Vector2_t3525329788 , const MethodInfo*))Converter_2_Invoke_m3845444401_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<UnityEngine.Vector2,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Object_t * Converter_2_BeginInvoke_m3858506638_gshared (Converter_2_t2843856484 * __this, Vector2_t3525329788  ___input, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m3858506638(__this, ___input, ___callback, ___object, method) ((  Object_t * (*) (Converter_2_t2843856484 *, Vector2_t3525329788 , AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m3858506638_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<UnityEngine.Vector2,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Object_t * Converter_2_EndInvoke_m555370685_gshared (Converter_2_t2843856484 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m555370685(__this, ___result, method) ((  Object_t * (*) (Converter_2_t2843856484 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m555370685_gshared)(__this, ___result, method)
