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

// System.Net.HttpStreamAsyncResult
struct HttpStreamAsyncResult_t1300369707;
// System.Exception
struct Exception_t3991598821;
// System.Object
struct Il2CppObject;
// System.Threading.WaitHandle
struct WaitHandle_t1661568373;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception3991598821.h"

// System.Void System.Net.HttpStreamAsyncResult::.ctor()
extern "C"  void HttpStreamAsyncResult__ctor_m1574588923 (HttpStreamAsyncResult_t1300369707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpStreamAsyncResult::Complete(System.Exception)
extern "C"  void HttpStreamAsyncResult_Complete_m1969311634 (HttpStreamAsyncResult_t1300369707 * __this, Exception_t3991598821 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpStreamAsyncResult::Complete()
extern "C"  void HttpStreamAsyncResult_Complete_m358990562 (HttpStreamAsyncResult_t1300369707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.HttpStreamAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * HttpStreamAsyncResult_get_AsyncState_m1564230684 (HttpStreamAsyncResult_t1300369707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.HttpStreamAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1661568373 * HttpStreamAsyncResult_get_AsyncWaitHandle_m355872616 (HttpStreamAsyncResult_t1300369707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpStreamAsyncResult::get_IsCompleted()
extern "C"  bool HttpStreamAsyncResult_get_IsCompleted_m2612097947 (HttpStreamAsyncResult_t1300369707 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
