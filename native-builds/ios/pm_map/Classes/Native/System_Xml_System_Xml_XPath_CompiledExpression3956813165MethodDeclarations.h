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

// System.Xml.XPath.CompiledExpression
struct CompiledExpression_t3956813165;
// System.String
struct String_t;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XPath_Expression2556460284.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.CompiledExpression::.ctor(System.String,System.Xml.XPath.Expression)
extern "C"  void CompiledExpression__ctor_m2683771966 (CompiledExpression_t3956813165 * __this, String_t* ___raw0, Expression_t2556460284 * ___expr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.CompiledExpression::SetContext(System.Xml.IXmlNamespaceResolver)
extern "C"  void CompiledExpression_SetContext_m1282298115 (CompiledExpression_t3956813165 * __this, Il2CppObject * ___nsResolver0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.IXmlNamespaceResolver System.Xml.XPath.CompiledExpression::get_NamespaceManager()
extern "C"  Il2CppObject * CompiledExpression_get_NamespaceManager_m652200026 (CompiledExpression_t3956813165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.CompiledExpression::EvaluateNodeSet(System.Xml.XPath.BaseIterator)
extern "C"  XPathNodeIterator_t1383168931 * CompiledExpression_EvaluateNodeSet_m2426588395 (CompiledExpression_t3956813165 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
