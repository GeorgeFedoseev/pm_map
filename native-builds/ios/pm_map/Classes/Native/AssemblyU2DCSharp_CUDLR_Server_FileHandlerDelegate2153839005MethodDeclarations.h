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

// CUDLR.Server/FileHandlerDelegate
struct FileHandlerDelegate_t2153839005;
// System.Object
struct Il2CppObject;
// CUDLR.RequestContext
struct RequestContext_t2839801694;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_CUDLR_RequestContext2839801694.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void CUDLR.Server/FileHandlerDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void FileHandlerDelegate__ctor_m849742788 (FileHandlerDelegate_t2153839005 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server/FileHandlerDelegate::Invoke(CUDLR.RequestContext,System.Boolean)
extern "C"  void FileHandlerDelegate_Invoke_m3164219637 (FileHandlerDelegate_t2153839005 * __this, RequestContext_t2839801694 * ___context0, bool ___download1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult CUDLR.Server/FileHandlerDelegate::BeginInvoke(CUDLR.RequestContext,System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FileHandlerDelegate_BeginInvoke_m351958264 (FileHandlerDelegate_t2153839005 * __this, RequestContext_t2839801694 * ___context0, bool ___download1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CUDLR.Server/FileHandlerDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void FileHandlerDelegate_EndInvoke_m1379794900 (FileHandlerDelegate_t2153839005 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
