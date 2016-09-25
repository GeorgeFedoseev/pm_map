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

// System.Net.ListenerAsyncResult
struct ListenerAsyncResult_t2279493407;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Net.HttpListenerContext
struct HttpListenerContext_t1119969133;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_HttpListenerContext1119969133.h"

// System.Void System.Net.ListenerAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C"  void ListenerAsyncResult__ctor_m2406404787 (ListenerAsyncResult_t2279493407 * __this, AsyncCallback_t1369114871 * ___cb0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerAsyncResult::Complete(System.String)
extern "C"  void ListenerAsyncResult_Complete_m1745873452 (ListenerAsyncResult_t2279493407 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerAsyncResult::InvokeCallback(System.Object)
extern "C"  void ListenerAsyncResult_InvokeCallback_m841643418 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerAsyncResult::Complete(System.Net.HttpListenerContext)
extern "C"  void ListenerAsyncResult_Complete_m1950600243 (ListenerAsyncResult_t2279493407 * __this, HttpListenerContext_t1119969133 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerAsyncResult::Complete(System.Net.HttpListenerContext,System.Boolean)
extern "C"  void ListenerAsyncResult_Complete_m1434073834 (ListenerAsyncResult_t2279493407 * __this, HttpListenerContext_t1119969133 * ___context0, bool ___synch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerContext System.Net.ListenerAsyncResult::GetContext()
extern "C"  HttpListenerContext_t1119969133 * ListenerAsyncResult_GetContext_m252672786 (ListenerAsyncResult_t2279493407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.ListenerAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * ListenerAsyncResult_get_AsyncState_m2393779216 (ListenerAsyncResult_t2279493407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.ListenerAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1661568373 * ListenerAsyncResult_get_AsyncWaitHandle_m2642812148 (ListenerAsyncResult_t2279493407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ListenerAsyncResult::get_IsCompleted()
extern "C"  bool ListenerAsyncResult_get_IsCompleted_m653733351 (ListenerAsyncResult_t2279493407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
