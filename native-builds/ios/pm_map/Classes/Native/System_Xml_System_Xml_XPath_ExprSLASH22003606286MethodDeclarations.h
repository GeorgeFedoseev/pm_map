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

// System.Xml.XPath.ExprSLASH2
struct ExprSLASH2_t2003606286;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Xml.XPath.NodeSet
struct NodeSet_t2875795446;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_NodeSet2875795446.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprSLASH2::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.NodeSet)
extern "C"  void ExprSLASH2__ctor_m1370991914 (ExprSLASH2_t2003606286 * __this, Expression_t2556460284 * ___left0, NodeSet_t2875795446 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.ExprSLASH2::.cctor()
extern "C"  void ExprSLASH2__cctor_m3450258365 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH2::Optimize()
extern "C"  Expression_t2556460284 * ExprSLASH2_Optimize_m389619581 (ExprSLASH2_t2003606286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprSLASH2::ToString()
extern "C"  String_t* ExprSLASH2_ToString_m2255083837 (ExprSLASH2_t2003606286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprSLASH2::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprSLASH2_Evaluate_m1368362004 (ExprSLASH2_t2003606286 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprSLASH2::get_RequireSorting()
extern "C"  bool ExprSLASH2_get_RequireSorting_m786448756 (ExprSLASH2_t2003606286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprSLASH2::get_Peer()
extern "C"  bool ExprSLASH2_get_Peer_m2193356471 (ExprSLASH2_t2003606286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprSLASH2::get_Subtree()
extern "C"  bool ExprSLASH2_get_Subtree_m1397892619 (ExprSLASH2_t2003606286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
