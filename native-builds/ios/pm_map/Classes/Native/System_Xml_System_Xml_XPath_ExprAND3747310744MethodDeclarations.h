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

// System.Xml.XPath.ExprAND
struct ExprAND_t3747310744;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprAND::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprAND__ctor_m2970784246 (ExprAND_t3747310744 * __this, Expression_t2556460284 * ___left0, Expression_t2556460284 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprAND::get_Operator()
extern "C"  String_t* ExprAND_get_Operator_m1892457770 (ExprAND_t3747310744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprAND::get_StaticValueAsBoolean()
extern "C"  bool ExprAND_get_StaticValueAsBoolean_m122471774 (ExprAND_t3747310744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprAND::EvaluateBoolean(System.Xml.XPath.BaseIterator)
extern "C"  bool ExprAND_EvaluateBoolean_m3911476797 (ExprAND_t3747310744 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
