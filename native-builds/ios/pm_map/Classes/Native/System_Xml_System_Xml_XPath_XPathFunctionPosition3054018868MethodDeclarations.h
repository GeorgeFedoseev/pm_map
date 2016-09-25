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

// System.Xml.XPath.XPathFunctionPosition
struct XPathFunctionPosition_t3054018868;
// System.Xml.XPath.FunctionArguments
struct FunctionArguments_t2391178772;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_FunctionArguments2391178772.h"
#include "System_Xml_System_Xml_XPath_XPathResultType516720010.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.XPathFunctionPosition::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionPosition__ctor_m545736599 (XPathFunctionPosition_t3054018868 * __this, FunctionArguments_t2391178772 * ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.XPathFunctionPosition::get_ReturnType()
extern "C"  int32_t XPathFunctionPosition_get_ReturnType_m1987852845 (XPathFunctionPosition_t3054018868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathFunctionPosition::get_Peer()
extern "C"  bool XPathFunctionPosition_get_Peer_m393666537 (XPathFunctionPosition_t3054018868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.XPathFunctionPosition::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * XPathFunctionPosition_Evaluate_m3275652264 (XPathFunctionPosition_t3054018868 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.XPathFunctionPosition::ToString()
extern "C"  String_t* XPathFunctionPosition_ToString_m1006322501 (XPathFunctionPosition_t3054018868 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
