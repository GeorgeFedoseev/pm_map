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

// System.Xml.XPath.NodeNameTest
struct NodeNameTest_t2799571587;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;
// System.Xml.Xsl.IStaticXsltContext
struct IStaticXsltContext_t2968841889;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Axes2202774217.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"
#include "System_Xml_System_Xml_XPath_NodeNameTest2799571587.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator1075073278.h"

// System.Void System.Xml.XPath.NodeNameTest::.ctor(System.Xml.XPath.Axes,System.Xml.XmlQualifiedName,System.Xml.Xsl.IStaticXsltContext)
extern "C"  void NodeNameTest__ctor_m98601429 (NodeNameTest_t2799571587 * __this, int32_t ___axis0, XmlQualifiedName_t2133315502 * ___name1, Il2CppObject * ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeNameTest::.ctor(System.Xml.XPath.NodeNameTest,System.Xml.XPath.Axes)
extern "C"  void NodeNameTest__ctor_m3377740561 (NodeNameTest_t2799571587 * __this, NodeNameTest_t2799571587 * ___source0, int32_t ___axis1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.NodeNameTest::ToString()
extern "C"  String_t* NodeNameTest_ToString_m2840726898 (NodeNameTest_t2799571587 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.NodeNameTest::Match(System.Xml.IXmlNamespaceResolver,System.Xml.XPath.XPathNavigator)
extern "C"  bool NodeNameTest_Match_m3615173812 (NodeNameTest_t2799571587 * __this, Il2CppObject * ___nsm0, XPathNavigator_t1075073278 * ___nav1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
