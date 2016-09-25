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

// System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler
struct ElementHandler_t2574338366;
// System.Object
struct Il2CppObject;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ElementHandler__ctor_m132868758 (ElementHandler_t2574338366 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::Invoke(System.Collections.IDictionary,System.Xml.XmlNode)
extern "C"  void ElementHandler_Invoke_m1252101530 (ElementHandler_t2574338366 * __this, Il2CppObject * ___d0, XmlNode_t856910923 * ___node1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::BeginInvoke(System.Collections.IDictionary,System.Xml.XmlNode,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ElementHandler_BeginInvoke_m1937105431 (ElementHandler_t2574338366 * __this, Il2CppObject * ___d0, XmlNode_t856910923 * ___node1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ElementHandler_EndInvoke_m2694289318 (ElementHandler_t2574338366 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
