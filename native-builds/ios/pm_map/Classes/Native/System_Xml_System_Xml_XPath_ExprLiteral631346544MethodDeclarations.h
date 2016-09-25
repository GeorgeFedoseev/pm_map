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

// System.Xml.XPath.ExprLiteral
struct ExprLiteral_t631346544;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XPath_XPathResultType516720010.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprLiteral::.ctor(System.String)
extern "C"  void ExprLiteral__ctor_m1598703472 (ExprLiteral_t631346544 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprLiteral::ToString()
extern "C"  String_t* ExprLiteral_ToString_m242797249 (ExprLiteral_t631346544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprLiteral::get_ReturnType()
extern "C"  int32_t ExprLiteral_get_ReturnType_m2223182313 (ExprLiteral_t631346544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprLiteral::get_Peer()
extern "C"  bool ExprLiteral_get_Peer_m3129008549 (ExprLiteral_t631346544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprLiteral::get_HasStaticValue()
extern "C"  bool ExprLiteral_get_HasStaticValue_m2424400044 (ExprLiteral_t631346544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprLiteral::get_StaticValueAsString()
extern "C"  String_t* ExprLiteral_get_StaticValueAsString_m495911466 (ExprLiteral_t631346544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprLiteral::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprLiteral_Evaluate_m876214316 (ExprLiteral_t631346544 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprLiteral::EvaluateString(System.Xml.XPath.BaseIterator)
extern "C"  String_t* ExprLiteral_EvaluateString_m2275560173 (ExprLiteral_t631346544 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
