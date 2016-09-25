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

// System.Xml.XPath.ExprPLUS
struct ExprPLUS_t4186658099;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprPLUS::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprPLUS__ctor_m693128085 (ExprPLUS_t4186658099 * __this, Expression_t2556460284 * ___left0, Expression_t2556460284 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprPLUS::get_Operator()
extern "C"  String_t* ExprPLUS_get_Operator_m2059188707 (ExprPLUS_t4186658099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprPLUS::get_StaticValueAsNumber()
extern "C"  double ExprPLUS_get_StaticValueAsNumber_m2404542625 (ExprPLUS_t4186658099 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprPLUS::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprPLUS_EvaluateNumber_m3849137268 (ExprPLUS_t4186658099 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
