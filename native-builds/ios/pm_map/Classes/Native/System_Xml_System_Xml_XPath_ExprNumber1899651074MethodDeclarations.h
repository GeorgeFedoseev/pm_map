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

// System.Xml.XPath.ExprNumber
struct ExprNumber_t1899651074;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_XPathResultType516720010.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprNumber::.ctor(System.Double)
extern "C"  void ExprNumber__ctor_m2500538694 (ExprNumber_t1899651074 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprNumber::ToString()
extern "C"  String_t* ExprNumber_ToString_m3667120177 (ExprNumber_t1899651074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprNumber::get_ReturnType()
extern "C"  int32_t ExprNumber_get_ReturnType_m3482223799 (ExprNumber_t1899651074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprNumber::get_Peer()
extern "C"  bool ExprNumber_get_Peer_m3605392811 (ExprNumber_t1899651074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprNumber::get_HasStaticValue()
extern "C"  bool ExprNumber_get_HasStaticValue_m1751360818 (ExprNumber_t1899651074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprNumber::get_StaticValueAsNumber()
extern "C"  double ExprNumber_get_StaticValueAsNumber_m3840256050 (ExprNumber_t1899651074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprNumber::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprNumber_Evaluate_m2340743584 (ExprNumber_t1899651074 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprNumber::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprNumber_EvaluateNumber_m2056124805 (ExprNumber_t1899651074 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
