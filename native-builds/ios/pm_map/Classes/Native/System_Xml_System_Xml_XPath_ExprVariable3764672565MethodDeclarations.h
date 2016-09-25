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

// System.Xml.XPath.ExprVariable
struct ExprVariable_t3764672565;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Xml.Xsl.IStaticXsltContext
struct IStaticXsltContext_t2968841889;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"
#include "System_Xml_System_Xml_XPath_XPathResultType516720010.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprVariable::.ctor(System.Xml.XmlQualifiedName,System.Xml.Xsl.IStaticXsltContext)
extern "C"  void ExprVariable__ctor_m2228197543 (ExprVariable_t3764672565 * __this, XmlQualifiedName_t2133315502 * ___name0, Il2CppObject * ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprVariable::ToString()
extern "C"  String_t* ExprVariable_ToString_m4055062564 (ExprVariable_t3764672565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprVariable::get_ReturnType()
extern "C"  int32_t ExprVariable_get_ReturnType_m158260906 (ExprVariable_t3764672565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprVariable::GetReturnType(System.Xml.XPath.BaseIterator)
extern "C"  int32_t ExprVariable_GetReturnType_m2092369121 (ExprVariable_t3764672565 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprVariable::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprVariable_Evaluate_m2065010189 (ExprVariable_t3764672565 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprVariable::get_Peer()
extern "C"  bool ExprVariable_get_Peer_m3838091998 (ExprVariable_t3764672565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
