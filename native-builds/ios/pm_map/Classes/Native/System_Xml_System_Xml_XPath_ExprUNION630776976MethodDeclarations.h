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

// System.Xml.XPath.ExprUNION
struct ExprUNION_t630776976;
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

// System.Void System.Xml.XPath.ExprUNION::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprUNION__ctor_m2912512622 (ExprUNION_t630776976 * __this, Expression_t2556460284 * ___left0, Expression_t2556460284 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprUNION::Optimize()
extern "C"  Expression_t2556460284 * ExprUNION_Optimize_m4157719139 (ExprUNION_t630776976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprUNION::ToString()
extern "C"  String_t* ExprUNION_ToString_m3279631905 (ExprUNION_t630776976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprUNION::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprUNION_Evaluate_m3576044620 (ExprUNION_t630776976 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprUNION::get_Peer()
extern "C"  bool ExprUNION_get_Peer_m628957765 (ExprUNION_t630776976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprUNION::get_Subtree()
extern "C"  bool ExprUNION_get_Subtree_m1086171069 (ExprUNION_t630776976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
