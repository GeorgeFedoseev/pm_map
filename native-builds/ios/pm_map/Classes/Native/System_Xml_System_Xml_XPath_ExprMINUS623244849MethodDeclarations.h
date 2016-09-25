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

// System.Xml.XPath.ExprMINUS
struct ExprMINUS_t623244849;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprMINUS::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprMINUS__ctor_m1636365327 (ExprMINUS_t623244849 * __this, Expression_t2556460284 * ___left0, Expression_t2556460284 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprMINUS::get_Operator()
extern "C"  String_t* ExprMINUS_get_Operator_m3066304643 (ExprMINUS_t623244849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprMINUS::get_StaticValueAsNumber()
extern "C"  double ExprMINUS_get_StaticValueAsNumber_m3648238977 (ExprMINUS_t623244849 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprMINUS::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprMINUS_EvaluateNumber_m1137133908 (ExprMINUS_t623244849 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
