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

// MaterialUI.SelectionBoxConfig/PickItem
struct PickItem_t1900684047;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void MaterialUI.SelectionBoxConfig/PickItem::.ctor(System.Object,System.IntPtr)
extern "C"  void PickItem__ctor_m2036799030 (PickItem_t1900684047 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.SelectionBoxConfig/PickItem::Invoke(System.Int32)
extern "C"  void PickItem_Invoke_m3760404321 (PickItem_t1900684047 * __this, int32_t ___itemId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult MaterialUI.SelectionBoxConfig/PickItem::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * PickItem_BeginInvoke_m3134887642 (PickItem_t1900684047 * __this, int32_t ___itemId0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.SelectionBoxConfig/PickItem::EndInvoke(System.IAsyncResult)
extern "C"  void PickItem_EndInvoke_m1157239622 (PickItem_t1900684047 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
