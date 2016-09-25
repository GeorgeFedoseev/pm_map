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

// iTween/ApplyTween
struct ApplyTween_t882368618;
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

// System.Void iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
extern "C"  void ApplyTween__ctor_m2175588161 (ApplyTween_t882368618 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::Invoke()
extern "C"  void ApplyTween_Invoke_m127898331 (ApplyTween_t882368618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ApplyTween_BeginInvoke_m3117225808 (ApplyTween_t882368618 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iTween/ApplyTween::EndInvoke(System.IAsyncResult)
extern "C"  void ApplyTween_EndInvoke_m4173861329 (ApplyTween_t882368618 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
