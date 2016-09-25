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

// System.Xml.XPath.ExprNEG
struct ExprNEG_t3747322961;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_XPathResultType516720010.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprNEG::.ctor(System.Xml.XPath.Expression)
extern "C"  void ExprNEG__ctor_m3726946082 (ExprNEG_t3747322961 * __this, Expression_t2556460284 * ___expr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprNEG::ToString()
extern "C"  String_t* ExprNEG_ToString_m1964650658 (ExprNEG_t3747322961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprNEG::get_ReturnType()
extern "C"  int32_t ExprNEG_get_ReturnType_m3037696906 (ExprNEG_t3747322961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprNEG::Optimize()
extern "C"  Expression_t2556460284 * ExprNEG_Optimize_m3524037924 (ExprNEG_t3747322961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprNEG::get_Peer()
extern "C"  bool ExprNEG_get_Peer_m269107718 (ExprNEG_t3747322961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprNEG::get_HasStaticValue()
extern "C"  bool ExprNEG_get_HasStaticValue_m2088403917 (ExprNEG_t3747322961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprNEG::get_StaticValueAsNumber()
extern "C"  double ExprNEG_get_StaticValueAsNumber_m150751009 (ExprNEG_t3747322961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprNEG::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprNEG_Evaluate_m3230994667 (ExprNEG_t3747322961 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.ExprNEG::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double ExprNEG_EvaluateNumber_m3791047412 (ExprNEG_t3747322961 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
