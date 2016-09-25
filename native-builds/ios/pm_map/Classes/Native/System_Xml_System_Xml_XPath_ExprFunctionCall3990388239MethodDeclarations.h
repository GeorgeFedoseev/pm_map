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

// System.Xml.XPath.ExprFunctionCall
struct ExprFunctionCall_t3990388239;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Xml.XPath.FunctionArguments
struct FunctionArguments_t2391178772;
// System.Xml.Xsl.IStaticXsltContext
struct IStaticXsltContext_t2968841889;
// System.Xml.XPath.Expression
struct Expression_t2556460284;
// System.String
struct String_t;
// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathResultType[]
struct XPathResultTypeU5BU5D_t1178308879;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"
#include "System_Xml_System_Xml_XPath_FunctionArguments2391178772.h"
#include "System_Xml_System_Xml_XPath_XPathResultType516720010.h"
#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

// System.Void System.Xml.XPath.ExprFunctionCall::.ctor(System.Xml.XmlQualifiedName,System.Xml.XPath.FunctionArguments,System.Xml.Xsl.IStaticXsltContext)
extern "C"  void ExprFunctionCall__ctor_m3125265142 (ExprFunctionCall_t3990388239 * __this, XmlQualifiedName_t2133315502 * ___name0, FunctionArguments_t2391178772 * ___args1, Il2CppObject * ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.Expression System.Xml.XPath.ExprFunctionCall::Factory(System.Xml.XmlQualifiedName,System.Xml.XPath.FunctionArguments,System.Xml.Xsl.IStaticXsltContext)
extern "C"  Expression_t2556460284 * ExprFunctionCall_Factory_m1613910802 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t2133315502 * ___name0, FunctionArguments_t2391178772 * ___args1, Il2CppObject * ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.ExprFunctionCall::ToString()
extern "C"  String_t* ExprFunctionCall_ToString_m3998080894 (ExprFunctionCall_t3990388239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprFunctionCall::get_ReturnType()
extern "C"  int32_t ExprFunctionCall_get_ReturnType_m3858789124 (ExprFunctionCall_t3990388239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType System.Xml.XPath.ExprFunctionCall::GetReturnType(System.Xml.XPath.BaseIterator)
extern "C"  int32_t ExprFunctionCall_GetReturnType_m2079911483 (ExprFunctionCall_t3990388239 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathResultType[] System.Xml.XPath.ExprFunctionCall::GetArgTypes(System.Xml.XPath.BaseIterator)
extern "C"  XPathResultTypeU5BU5D_t1178308879* ExprFunctionCall_GetArgTypes_m669661892 (ExprFunctionCall_t3990388239 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.ExprFunctionCall::Evaluate(System.Xml.XPath.BaseIterator)
extern "C"  Il2CppObject * ExprFunctionCall_Evaluate_m3216499699 (ExprFunctionCall_t3990388239 * __this, BaseIterator_t1327316739 * ___iter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.ExprFunctionCall::get_Peer()
extern "C"  bool ExprFunctionCall_get_Peer_m569283768 (ExprFunctionCall_t3990388239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
