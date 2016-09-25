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

// System.Net.AuthenticationSchemeSelector
struct AuthenticationSchemeSelector_t3299226454;
// System.Object
struct Il2CppObject;
// System.Net.HttpListenerRequest
struct HttpListenerRequest_t1264131149;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_Net_AuthenticationSchemes4187235472.h"
#include "System_System_Net_HttpListenerRequest1264131149.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Net.AuthenticationSchemeSelector::.ctor(System.Object,System.IntPtr)
extern "C"  void AuthenticationSchemeSelector__ctor_m2582549380 (AuthenticationSchemeSelector_t3299226454 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.AuthenticationSchemes System.Net.AuthenticationSchemeSelector::Invoke(System.Net.HttpListenerRequest)
extern "C"  int32_t AuthenticationSchemeSelector_Invoke_m1251274626 (AuthenticationSchemeSelector_t3299226454 * __this, HttpListenerRequest_t1264131149 * ___httpRequest0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.AuthenticationSchemeSelector::BeginInvoke(System.Net.HttpListenerRequest,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * AuthenticationSchemeSelector_BeginInvoke_m4017187316 (AuthenticationSchemeSelector_t3299226454 * __this, HttpListenerRequest_t1264131149 * ___httpRequest0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.AuthenticationSchemes System.Net.AuthenticationSchemeSelector::EndInvoke(System.IAsyncResult)
extern "C"  int32_t AuthenticationSchemeSelector_EndInvoke_m3536481403 (AuthenticationSchemeSelector_t3299226454 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
