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

// System.Xml.XPath.EqualityExpr
struct EqualityExpr_t1406255795;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.EqualityExpr::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression,System.Boolean)
extern "C"  void EqualityExpr__ctor_m2210778824 (EqualityExpr_t1406255795 * __this, Expression_t2556460284 * ___left0, Expression_t2556460284 * ___right1, bool ___trueVal2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.EqualityExpr::get_StaticValueAsBoolean()
extern "C"  bool EqualityExpr_get_StaticValueAsBoolean_m405219309 (EqualityExpr_t1406255795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.EqualityExpr::EvaluateBoolean(System.Xml.XPath.BaseIterator)
extern "C"  bool EqualityExpr_EvaluateBoolean_m2691361612 (EqualityExpr_t1406255795 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
