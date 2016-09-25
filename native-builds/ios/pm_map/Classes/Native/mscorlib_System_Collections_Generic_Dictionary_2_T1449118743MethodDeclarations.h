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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,System.Collections.Generic.KeyValuePair`2<System.Object,SQLite.SQLiteConnection/IndexInfo>>
struct Transform_1_t1449118743;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23268184987.h"
#include "AssemblyU2DCSharp_SQLite_SQLiteConnection_IndexInf1199365085.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,System.Collections.Generic.KeyValuePair`2<System.Object,SQLite.SQLiteConnection/IndexInfo>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m315451610_gshared (Transform_1_t1449118743 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m315451610(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1449118743 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m315451610_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,System.Collections.Generic.KeyValuePair`2<System.Object,SQLite.SQLiteConnection/IndexInfo>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t3268184987  Transform_1_Invoke_m855476190_gshared (Transform_1_t1449118743 * __this, Il2CppObject * ___key0, IndexInfo_t1199365085  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m855476190(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t3268184987  (*) (Transform_1_t1449118743 *, Il2CppObject *, IndexInfo_t1199365085 , const MethodInfo*))Transform_1_Invoke_m855476190_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,System.Collections.Generic.KeyValuePair`2<System.Object,SQLite.SQLiteConnection/IndexInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m801029513_gshared (Transform_1_t1449118743 * __this, Il2CppObject * ___key0, IndexInfo_t1199365085  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m801029513(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1449118743 *, Il2CppObject *, IndexInfo_t1199365085 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m801029513_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,System.Collections.Generic.KeyValuePair`2<System.Object,SQLite.SQLiteConnection/IndexInfo>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t3268184987  Transform_1_EndInvoke_m1641030124_gshared (Transform_1_t1449118743 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1641030124(__this, ___result0, method) ((  KeyValuePair_2_t3268184987  (*) (Transform_1_t1449118743 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1641030124_gshared)(__this, ___result0, method)
