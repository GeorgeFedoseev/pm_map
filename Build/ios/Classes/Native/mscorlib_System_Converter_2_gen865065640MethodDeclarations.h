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
struct Converter_2_t865065640;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Converter`2<System.Object,UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m1932983255_gshared (Converter_2_t865065640 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m1932983255(__this, ___object, ___method, method) ((  void (*) (Converter_2_t865065640 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m1932983255_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,UnityEngine.Color>::Invoke(TInput)
extern "C"  Color_t1588175760  Converter_2_Invoke_m1860589917_gshared (Converter_2_t865065640 * __this, Object_t * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m1860589917(__this, ___input, method) ((  Color_t1588175760  (*) (Converter_2_t865065640 *, Object_t *, const MethodInfo*))Converter_2_Invoke_m1860589917_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,UnityEngine.Color>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Object_t * Converter_2_BeginInvoke_m3415278650_gshared (Converter_2_t865065640 * __this, Object_t * ___input, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m3415278650(__this, ___input, ___callback, ___object, method) ((  Object_t * (*) (Converter_2_t865065640 *, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m3415278650_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,UnityEngine.Color>::EndInvoke(System.IAsyncResult)
extern "C"  Color_t1588175760  Converter_2_EndInvoke_m4029806313_gshared (Converter_2_t865065640 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m4029806313(__this, ___result, method) ((  Color_t1588175760  (*) (Converter_2_t865065640 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m4029806313_gshared)(__this, ___result, method)
