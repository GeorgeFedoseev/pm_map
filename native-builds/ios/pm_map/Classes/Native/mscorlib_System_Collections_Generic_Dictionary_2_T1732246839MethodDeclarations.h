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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>
struct Transform_1_t1732246839;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22164509075.h"
#include "mscorlib_System_Reflection_Emit_Label2268465130.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m4259619376_gshared (Transform_1_t1732246839 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m4259619376(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1732246839 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m4259619376_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2164509075  Transform_1_Invoke_m731773512_gshared (Transform_1_t1732246839 * __this, int32_t ___key0, Label_t2268465130  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m731773512(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2164509075  (*) (Transform_1_t1732246839 *, int32_t, Label_t2268465130 , const MethodInfo*))Transform_1_Invoke_m731773512_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3723048691_gshared (Transform_1_t1732246839 * __this, int32_t ___key0, Label_t2268465130  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3723048691(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1732246839 *, int32_t, Label_t2268465130 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3723048691_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Reflection.Emit.Label,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Reflection.Emit.Label>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2164509075  Transform_1_EndInvoke_m274917698_gshared (Transform_1_t1732246839 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m274917698(__this, ___result0, method) ((  KeyValuePair_2_t2164509075  (*) (Transform_1_t1732246839 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m274917698_gshared)(__this, ___result0, method)
