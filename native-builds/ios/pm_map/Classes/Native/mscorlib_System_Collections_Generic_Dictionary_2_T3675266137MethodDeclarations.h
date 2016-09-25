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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,SQLite.SQLiteConnection/IndexInfo>
struct Transform_1_t3675266137;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_SQLite_SQLiteConnection_IndexInf1199365085.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,SQLite.SQLiteConnection/IndexInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m500319301_gshared (Transform_1_t3675266137 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m500319301(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t3675266137 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m500319301_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,SQLite.SQLiteConnection/IndexInfo>::Invoke(TKey,TValue)
extern "C"  IndexInfo_t1199365085  Transform_1_Invoke_m4109003671_gshared (Transform_1_t3675266137 * __this, Il2CppObject * ___key0, IndexInfo_t1199365085  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m4109003671(__this, ___key0, ___value1, method) ((  IndexInfo_t1199365085  (*) (Transform_1_t3675266137 *, Il2CppObject *, IndexInfo_t1199365085 , const MethodInfo*))Transform_1_Invoke_m4109003671_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,SQLite.SQLiteConnection/IndexInfo>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2650067702_gshared (Transform_1_t3675266137 * __this, Il2CppObject * ___key0, IndexInfo_t1199365085  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2650067702(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t3675266137 *, Il2CppObject *, IndexInfo_t1199365085 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2650067702_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,SQLite.SQLiteConnection/IndexInfo,SQLite.SQLiteConnection/IndexInfo>::EndInvoke(System.IAsyncResult)
extern "C"  IndexInfo_t1199365085  Transform_1_EndInvoke_m2305286291_gshared (Transform_1_t3675266137 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2305286291(__this, ___result0, method) ((  IndexInfo_t1199365085  (*) (Transform_1_t3675266137 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2305286291_gshared)(__this, ___result0, method)
