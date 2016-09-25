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

// System.Xml.XPath.ExprParens
struct ExprParens_t1938591074;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_XPathResultType516720010.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprParens::.ctor(System.Xml.XPath.Expression)
extern "C"  void ExprParens__ctor_m2196271671 (ExprParens_t1938591074 * __this, Expression_t2556460284 * ___expr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprParens::Optimize()
extern "C"  Expression_t2556460284 * ExprParens_Optimize_m4227609553 (ExprParens_t1938591074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprParens::get_HasStaticValue()
extern "C"  bool ExprParens_get_HasStaticValue_m2344585874 (ExprParens_t1938591074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprParens::get_StaticValue()
extern "C"  Il2CppObject * ExprParens_get_StaticValue_m15807529 (ExprParens_t1938591074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprParens::get_StaticValueAsString()
extern "C"  String_t* ExprParens_get_StaticValueAsString_m3898008922 (ExprParens_t1938591074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprParens::get_StaticValueAsNumber()
extern "C"  double ExprParens_get_StaticValueAsNumber_m201465554 (ExprParens_t1938591074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprParens::get_StaticValueAsBoolean()
extern "C"  bool ExprParens_get_StaticValueAsBoolean_m1863365788 (ExprParens_t1938591074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprParens::ToString()
extern "C"  String_t* ExprParens_ToString_m1798106513 (ExprParens_t1938591074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprParens::get_ReturnType()
extern "C"  int32_t ExprParens_get_ReturnType_m3027507735 (ExprParens_t1938591074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprParens::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprParens_Evaluate_m1572685888 (ExprParens_t1938591074 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprParens::get_Peer()
extern "C"  bool ExprParens_get_Peer_m1736379147 (ExprParens_t1938591074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
