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

// System.Net.DownloadProgressChangedEventHandler
struct DownloadProgressChangedEventHandler_t1678450121;
// System.Object
struct Il2CppObject;
// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t1659668818;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_Net_DownloadProgressChangedEventArgs1659668818.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Net.DownloadProgressChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void DownloadProgressChangedEventHandler__ctor_m3662803621 (DownloadProgressChangedEventHandler_t1678450121 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadProgressChangedEventHandler::Invoke(System.Object,System.Net.DownloadProgressChangedEventArgs)
extern "C"  void DownloadProgressChangedEventHandler_Invoke_m1663937529 (DownloadProgressChangedEventHandler_t1678450121 * __this, Il2CppObject * ___sender0, DownloadProgressChangedEventArgs_t1659668818 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.DownloadProgressChangedEventHandler::BeginInvoke(System.Object,System.Net.DownloadProgressChangedEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * DownloadProgressChangedEventHandler_BeginInvoke_m3903691410 (DownloadProgressChangedEventHandler_t1678450121 * __this, Il2CppObject * ___sender0, DownloadProgressChangedEventArgs_t1659668818 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DownloadProgressChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void DownloadProgressChangedEventHandler_EndInvoke_m753565493 (DownloadProgressChangedEventHandler_t1678450121 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
