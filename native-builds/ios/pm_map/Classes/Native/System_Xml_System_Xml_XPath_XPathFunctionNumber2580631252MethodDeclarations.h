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

// System.Xml.XPath.XPathFunctionNumber
struct XPathFunctionNumber_t2580631252;
// System.Xml.XPath.FunctionArguments
struct FunctionArguments_t2391178772;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_FunctionArguments2391178772.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.XPathFunctionNumber::.ctor(System.Xml.XPath.FunctionArguments)
extern "C"  void XPathFunctionNumber__ctor_m2761557623 (XPathFunctionNumber_t2580631252 * __this, FunctionArguments_t2391178772 * ___args0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.XPathFunctionNumber::Optimize()
extern "C"  Expression_t2556460284 * XPathFunctionNumber_Optimize_m2286708775 (XPathFunctionNumber_t2580631252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathFunctionNumber::get_HasStaticValue()
extern "C"  bool XPathFunctionNumber_get_HasStaticValue_m917305616 (XPathFunctionNumber_t2580631252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.XPathFunctionNumber::get_StaticValueAsNumber()
extern "C"  double XPathFunctionNumber_get_StaticValueAsNumber_m3694847038 (XPathFunctionNumber_t2580631252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathFunctionNumber::get_Peer()
extern "C"  bool XPathFunctionNumber_get_Peer_m384753417 (XPathFunctionNumber_t2580631252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.XPathFunctionNumber::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * XPathFunctionNumber_Evaluate_m3471016520 (XPathFunctionNumber_t2580631252 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.XPathFunctionNumber::ToString()
extern "C"  String_t* XPathFunctionNumber_ToString_m1725103397 (XPathFunctionNumber_t2580631252 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
