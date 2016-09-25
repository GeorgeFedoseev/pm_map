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

// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_XPathResultType516720010.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Xml.XPath.Expression::.ctor()
extern "C"  void Expression__ctor_m158740418 (Expression_t2556460284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.Expression::GetReturnType(System.Xml.XPath.BaseIterator)
extern "C"  int32_t Expression_GetReturnType_m2142158056 (Expression_t2556460284 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.Expression::Optimize()
extern "C"  Expression_t2556460284 * Expression_Optimize_m1244892267 (Expression_t2556460284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.Expression::get_HasStaticValue()
extern "C"  bool Expression_get_HasStaticValue_m4030491308 (Expression_t2556460284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.Expression::get_StaticValue()
extern "C"  Il2CppObject * Expression_get_StaticValue_m2075908687 (Expression_t2556460284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.Expression::get_StaticValueAsString()
extern "C"  String_t* Expression_get_StaticValueAsString_m1531184512 (Expression_t2556460284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.Expression::get_StaticValueAsNumber()
extern "C"  double Expression_get_StaticValueAsNumber_m2129608440 (Expression_t2556460284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.Expression::get_StaticValueAsBoolean()
extern "C"  bool Expression_get_StaticValueAsBoolean_m1506253110 (Expression_t2556460284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator System.Xml.XPath.Expression::get_StaticValueAsNavigator()
extern "C"  XPathNavigator_t1075073278 * Expression_get_StaticValueAsNavigator_m486487163 (Expression_t2556460284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.BaseIterator System.Xml.XPath.Expression::EvaluateNodeSet(System.Xml.XPath.BaseIterator)
extern "C"  BaseIterator_t1327316739 * Expression_EvaluateNodeSet_m3337318680 (Expression_t2556460284 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.Expression::GetReturnType(System.Object)
extern "C"  int32_t Expression_GetReturnType_m2715398160 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.Expression::get_Peer()
extern "C"  bool Expression_get_Peer_m3048629157 (Expression_t2556460284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XPath.Expression::EvaluateNumber(System.Xml.XPath.BaseIterator)
extern "C"  double Expression_EvaluateNumber_m339636555 (Expression_t2556460284 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.Expression::EvaluateString(System.Xml.XPath.BaseIterator)
extern "C"  String_t* Expression_EvaluateString_m3743041347 (Expression_t2556460284 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.Expression::EvaluateBoolean(System.Xml.XPath.BaseIterator)
extern "C"  bool Expression_EvaluateBoolean_m3993427477 (Expression_t2556460284 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.Expression::EvaluateAs(System.Xml.XPath.BaseIterator,System.Xml.XPath.XPathResultType)
extern "C"  Il2CppObject * Expression_EvaluateAs_m2173512581 (Expression_t2556460284 * __this, BaseIterator_t1327316739 * ___iter0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.Expression::get_RequireSorting()
extern "C"  bool Expression_get_RequireSorting_m1499585762 (Expression_t2556460284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
