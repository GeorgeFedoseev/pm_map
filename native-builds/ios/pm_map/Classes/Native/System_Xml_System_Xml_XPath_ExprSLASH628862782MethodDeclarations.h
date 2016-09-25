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

// System.Xml.XPath.ExprSLASH
struct ExprSLASH_t628862782;
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

// System.Void System.Xml.XPath.ExprSLASH::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.NodeSet)
extern "C"  void ExprSLASH__ctor_m1380016254 (ExprSLASH_t628862782 * __this, Expression_t2556460284 * ___left0, NodeSet_t2875795446 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprSLASH::Optimize()
extern "C"  Expression_t2556460284 * ExprSLASH_Optimize_m3034839057 (ExprSLASH_t628862782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprSLASH::ToString()
extern "C"  String_t* ExprSLASH_ToString_m2156751823 (ExprSLASH_t628862782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprSLASH::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprSLASH_Evaluate_m2117643614 (ExprSLASH_t628862782 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprSLASH::get_RequireSorting()
extern "C"  bool ExprSLASH_get_RequireSorting_m2957526960 (ExprSLASH_t628862782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprSLASH::get_Peer()
extern "C"  bool ExprSLASH_get_Peer_m3801044979 (ExprSLASH_t628862782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprSLASH::get_Subtree()
extern "C"  bool ExprSLASH_get_Subtree_m2865916751 (ExprSLASH_t628862782 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
