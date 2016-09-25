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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,System.Collections.DictionaryEntry>
struct Transform_1_t4227507666;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"
#include "AssemblyU2DCSharp_SQLite_SQLiteConnection_IndexInf1199365085.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2224104276_gshared (Transform_1_t4227507666 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2224104276(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t4227507666 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2224104276_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t1751606614  Transform_1_Invoke_m408435364_gshared (Transform_1_t4227507666 * __this, Il2CppObject * ___key0, IndexInfo_t1199365085  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m408435364(__this, ___key0, ___value1, method) ((  DictionaryEntry_t1751606614  (*) (Transform_1_t4227507666 *, Il2CppObject *, IndexInfo_t1199365085 , const MethodInfo*))Transform_1_Invoke_m408435364_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4184423503_gshared (Transform_1_t4227507666 * __this, Il2CppObject * ___key0, IndexInfo_t1199365085  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4184423503(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t4227507666 *, Il2CppObject *, IndexInfo_t1199365085 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4184423503_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t1751606614  Transform_1_EndInvoke_m4170717030_gshared (Transform_1_t4227507666 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m4170717030(__this, ___result0, method) ((  DictionaryEntry_t1751606614  (*) (Transform_1_t4227507666 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4170717030_gshared)(__this, ___result0, method)
