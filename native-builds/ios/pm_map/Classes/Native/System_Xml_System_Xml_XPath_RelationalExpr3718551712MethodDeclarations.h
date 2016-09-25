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

// System.Xml.XPath.RelationalExpr
struct RelationalExpr_t3718551712;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.RelationalExpr::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void RelationalExpr__ctor_m506647938 (RelationalExpr_t3718551712 * __this, Expression_t2556460284 * ___left0, Expression_t2556460284 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.RelationalExpr::get_StaticValueAsBoolean()
extern "C"  bool RelationalExpr_get_StaticValueAsBoolean_m1605638618 (RelationalExpr_t3718551712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.RelationalExpr::EvaluateBoolean(System.Xml.XPath.BaseIterator)
extern "C"  bool RelationalExpr_EvaluateBoolean_m1387308217 (RelationalExpr_t3718551712 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.RelationalExpr::Compare(System.Double,System.Double,System.Boolean)
extern "C"  bool RelationalExpr_Compare_m3318673384 (RelationalExpr_t3718551712 * __this, double ___arg10, double ___arg21, bool ___fReverse2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
