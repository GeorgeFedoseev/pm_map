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

// System.Xml.XPath.ExprBoolean
struct ExprBoolean_t513597673;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_XPathResultType516720010.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprBoolean::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprBoolean__ctor_m1871519559 (ExprBoolean_t513597673 * __this, Expression_t2556460284 * ___left0, Expression_t2556460284 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprBoolean::Optimize()
extern "C"  Expression_t2556460284 * ExprBoolean_Optimize_m1228371132 (ExprBoolean_t513597673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprBoolean::get_ReturnType()
extern "C"  int32_t ExprBoolean_get_ReturnType_m1961480482 (ExprBoolean_t513597673 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprBoolean::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprBoolean_Evaluate_m1996826835 (ExprBoolean_t513597673 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprBoolean::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprBoolean_EvaluateNumber_m3660430300 (ExprBoolean_t513597673 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprBoolean::EvaluateString(System.Xml.XPath.BaseIterator)
extern "C"  String_t* ExprBoolean_EvaluateString_m4084867668 (ExprBoolean_t513597673 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
