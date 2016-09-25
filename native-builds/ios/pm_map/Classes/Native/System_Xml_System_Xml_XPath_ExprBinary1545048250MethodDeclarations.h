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

// System.Xml.XPath.ExprBinary
struct ExprBinary_t1545048250;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"

// System.Void System.Xml.XPath.ExprBinary::.ctor(System.Xml.XPath.Expression,System.Xml.XPath.Expression)
extern "C"  void ExprBinary__ctor_m18595484 (ExprBinary_t1545048250 * __this, Expression_t2556460284 * ___left0, Expression_t2556460284 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprBinary::Optimize()
extern "C"  Expression_t2556460284 * ExprBinary_Optimize_m4062507817 (ExprBinary_t1545048250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprBinary::get_HasStaticValue()
extern "C"  bool ExprBinary_get_HasStaticValue_m3219323882 (ExprBinary_t1545048250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprBinary::ToString()
extern "C"  String_t* ExprBinary_ToString_m1633004777 (ExprBinary_t1545048250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprBinary::get_Peer()
extern "C"  bool ExprBinary_get_Peer_m1571277411 (ExprBinary_t1545048250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
