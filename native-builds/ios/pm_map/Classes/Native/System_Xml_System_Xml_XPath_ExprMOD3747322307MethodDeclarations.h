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

// System.Xml.XPath.ExprMOD
struct ExprMOD_t3747322307;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprMOD::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprMOD__ctor_m1750329121 (ExprMOD_t3747322307 * __this, Expression_t2556460284 * ___left0, Expression_t2556460284 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprMOD::get_Operator()
extern "C"  String_t* ExprMOD_get_Operator_m3646624853 (ExprMOD_t3747322307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprMOD::get_StaticValueAsNumber()
extern "C"  double ExprMOD_get_StaticValueAsNumber_m3539694191 (ExprMOD_t3747322307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprMOD::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprMOD_EvaluateNumber_m1045250882 (ExprMOD_t3747322307 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
