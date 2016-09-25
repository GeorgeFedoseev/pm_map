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

// System.Xml.Schema.ValidationEventHandler
struct ValidationEventHandler_t4231404781;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t3260433748;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_Xml_System_Xml_Schema_ValidationEventArgs3260433748.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Xml.Schema.ValidationEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ValidationEventHandler__ctor_m2060655069 (ValidationEventHandler_t4231404781 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::Invoke(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void ValidationEventHandler_Invoke_m3220362594 (ValidationEventHandler_t4231404781 * __this, Il2CppObject * ___sender0, ValidationEventArgs_t3260433748 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Xml.Schema.ValidationEventHandler::BeginInvoke(System.Object,System.Xml.Schema.ValidationEventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ValidationEventHandler_BeginInvoke_m2898382809 (ValidationEventHandler_t4231404781 * __this, Il2CppObject * ___sender0, ValidationEventArgs_t3260433748 * ___e1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.ValidationEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ValidationEventHandler_EndInvoke_m248513133 (ValidationEventHandler_t4231404781 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
