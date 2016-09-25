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

// System.Xml.XPath.NodeTypeTest
struct NodeTypeTest_t282671026;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XPath_Axes2202774217.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType3637370479.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XPath_NodeTypeTest282671026.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator1075073278.h"

// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.Axes)
extern "C"  void NodeTypeTest__ctor_m423301530 (NodeTypeTest_t282671026 * __this, int32_t ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.Axes,System.Xml.XPath.XPathNodeType)
extern "C"  void NodeTypeTest__ctor_m2014120890 (NodeTypeTest_t282671026 * __this, int32_t ___axis0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.Axes,System.Xml.XPath.XPathNodeType,System.String)
extern "C"  void NodeTypeTest__ctor_m2764187254 (NodeTypeTest_t282671026 * __this, int32_t ___axis0, int32_t ___type1, String_t* ___param2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.NodeTypeTest::.ctor(System.Xml.XPath.NodeTypeTest,System.Xml.XPath.Axes)
extern "C"  void NodeTypeTest__ctor_m1445907889 (NodeTypeTest_t282671026 * __this, NodeTypeTest_t282671026 * ___other0, int32_t ___axis1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.NodeTypeTest::ToString()
extern "C"  String_t* NodeTypeTest_ToString_m2899043361 (NodeTypeTest_t282671026 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.NodeTypeTest::ToString(System.Xml.XPath.XPathNodeType)
extern "C"  String_t* NodeTypeTest_ToString_m1634841327 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.NodeTypeTest::Match(System.Xml.IXmlNamespaceResolver,System.Xml.XPath.XPathNavigator)
extern "C"  bool NodeTypeTest_Match_m4271858789 (NodeTypeTest_t282671026 * __this, Il2CppObject * ___nsm0, XPathNavigator_t1075073278 * ___nav1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
