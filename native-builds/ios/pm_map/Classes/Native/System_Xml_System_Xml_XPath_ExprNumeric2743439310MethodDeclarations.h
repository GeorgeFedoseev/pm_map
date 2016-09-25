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

// System.Xml.XPath.ExprNumeric
struct ExprNumeric_t2743439310;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_XPathResultType516720010.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprNumeric::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprNumeric__ctor_m1682712108 (ExprNumeric_t2743439310 * __this, Expression_t2556460284 * ___left0, Expression_t2556460284 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprNumeric::get_ReturnType()
extern "C"  int32_t ExprNumeric_get_ReturnType_m1470918855 (ExprNumeric_t2743439310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprNumeric::Optimize()
extern "C"  Expression_t2556460284 * ExprNumeric_Optimize_m465564705 (ExprNumeric_t2743439310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprNumeric::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprNumeric_Evaluate_m4274044814 (ExprNumeric_t2743439310 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
