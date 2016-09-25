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

// System.Xml.XPath.ExprFilter
struct ExprFilter_t1659523121;
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
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprFilter::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprFilter__ctor_m1987528211 (ExprFilter_t1659523121 * __this, Expression_t2556460284 * ___expr0, Expression_t2556460284 * ___pred1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprFilter::Optimize()
extern "C"  Expression_t2556460284 * ExprFilter_Optimize_m4005115936 (ExprFilter_t1659523121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprFilter::ToString()
extern "C"  String_t* ExprFilter_ToString_m1575612896 (ExprFilter_t1659523121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprFilter::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprFilter_Evaluate_m1209514577 (ExprFilter_t1659523121 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprFilter::get_Peer()
extern "C"  bool ExprFilter_get_Peer_m1513885530 (ExprFilter_t1659523121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprFilter::get_Subtree()
extern "C"  bool ExprFilter_get_Subtree_m1459955336 (ExprFilter_t1659523121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
