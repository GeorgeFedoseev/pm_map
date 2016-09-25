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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,HtmlAgilityPack.HtmlElementFlag,HtmlAgilityPack.HtmlElementFlag>
struct Transform_1_t2721799809;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlElementFlag1232740771.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,HtmlAgilityPack.HtmlElementFlag,HtmlAgilityPack.HtmlElementFlag>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m190300923_gshared (Transform_1_t2721799809 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m190300923(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2721799809 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m190300923_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,HtmlAgilityPack.HtmlElementFlag,HtmlAgilityPack.HtmlElementFlag>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m1259071649_gshared (Transform_1_t2721799809 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1259071649(__this, ___key0, ___value1, method) ((  int32_t (*) (Transform_1_t2721799809 *, Il2CppObject *, int32_t, const MethodInfo*))Transform_1_Invoke_m1259071649_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,HtmlAgilityPack.HtmlElementFlag,HtmlAgilityPack.HtmlElementFlag>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3439266560_gshared (Transform_1_t2721799809 * __this, Il2CppObject * ___key0, int32_t ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3439266560(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2721799809 *, Il2CppObject *, int32_t, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3439266560_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,HtmlAgilityPack.HtmlElementFlag,HtmlAgilityPack.HtmlElementFlag>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m3478567241_gshared (Transform_1_t2721799809 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m3478567241(__this, ___result0, method) ((  int32_t (*) (Transform_1_t2721799809 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3478567241_gshared)(__this, ___result0, method)
