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

// System.Xml.Xsl.XsltContext
struct XsltContext_t894076946;
// System.Xml.Xsl.IXsltContextVariable
struct IXsltContextVariable_t3376676363;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Xml.Xsl.IXsltContextFunction
struct IXsltContextFunction_t1712234343;
// System.Xml.XPath.XPathResultType[]
struct XPathResultTypeU5BU5D_t1178308879;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"

// System.Xml.Xsl.IXsltContextVariable System.Xml.Xsl.XsltContext::ResolveVariable(System.Xml.XmlQualifiedName)
extern "C"  Il2CppObject * XsltContext_ResolveVariable_m3172955259 (XsltContext_t894076946 * __this, XmlQualifiedName_t2133315502 * ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Xsl.IXsltContextFunction System.Xml.Xsl.XsltContext::ResolveFunction(System.Xml.XmlQualifiedName,System.Xml.XPath.XPathResultType[])
extern "C"  Il2CppObject * XsltContext_ResolveFunction_m96561364 (XsltContext_t894076946 * __this, XmlQualifiedName_t2133315502 * ___name0, XPathResultTypeU5BU5D_t1178308879* ___argTypes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
