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

// System.Func`2<System.Char,System.Boolean>
struct Func_2_t620049934;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Func`2<System.Char,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Func_2__ctor_m2249115327_gshared (Func_2_t620049934 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m2249115327(__this, ___object, ___method, method) ((  void (*) (Func_2_t620049934 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m2249115327_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Char,System.Boolean>::Invoke(T)
extern "C"  bool Func_2_Invoke_m863291624_gshared (Func_2_t620049934 * __this, uint16_t ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m863291624(__this, ___arg1, method) ((  bool (*) (Func_2_t620049934 *, uint16_t, const MethodInfo*))Func_2_Invoke_m863291624_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Char,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Func_2_BeginInvoke_m3835044507_gshared (Func_2_t620049934 * __this, uint16_t ___arg1, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m3835044507(__this, ___arg1, ___callback, ___object, method) ((  Object_t * (*) (Func_2_t620049934 *, uint16_t, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m3835044507_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Char,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  bool Func_2_EndInvoke_m3739065324_gshared (Func_2_t620049934 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m3739065324(__this, ___result, method) ((  bool (*) (Func_2_t620049934 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m3739065324_gshared)(__this, ___result, method)
