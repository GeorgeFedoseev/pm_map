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

// System.Reflection.ModuleResolveEventHandler
struct ModuleResolveEventHandler_t626980826;
// System.Object
struct Il2CppObject;
// System.Reflection.Module
struct Module_t1394482686;
// System.ResolveEventArgs
struct ResolveEventArgs_t2349522815;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_ResolveEventArgs2349522815.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Reflection.ModuleResolveEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ModuleResolveEventHandler__ctor_m1364124346 (ModuleResolveEventHandler_t626980826 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
extern "C"  Module_t1394482686 * ModuleResolveEventHandler_Invoke_m2550379485 (ModuleResolveEventHandler_t626980826 * __this, Il2CppObject * ___sender0, ResolveEventArgs_t2349522815 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.ModuleResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ModuleResolveEventHandler_BeginInvoke_m3285111655 (ModuleResolveEventHandler_t626980826 * __this, Il2CppObject * ___sender0, ResolveEventArgs_t2349522815 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.ModuleResolveEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  Module_t1394482686 * ModuleResolveEventHandler_EndInvoke_m236958287 (ModuleResolveEventHandler_t626980826 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
