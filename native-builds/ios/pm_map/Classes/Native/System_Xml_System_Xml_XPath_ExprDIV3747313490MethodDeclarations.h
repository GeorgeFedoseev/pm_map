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

// System.Xml.XPath.ExprDIV
struct ExprDIV_t3747313490;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprDIV::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprDIV__ctor_m2833239216 (ExprDIV_t3747313490 * __this, Expression_t2556460284 * ___left0, Expression_t2556460284 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprDIV::get_Operator()
extern "C"  String_t* ExprDIV_get_Operator_m2934174692 (ExprDIV_t3747313490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprDIV::get_StaticValueAsNumber()
extern "C"  double ExprDIV_get_StaticValueAsNumber_m3283915648 (ExprDIV_t3747313490 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprDIV::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprDIV_EvaluateNumber_m3529257427 (ExprDIV_t3747313490 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
