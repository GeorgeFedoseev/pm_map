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

// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XPath.XPathExpression
struct XPathExpression_t3588072235;
// System.Xml.XPath.XPathNodeIterator
struct XPathNodeIterator_t1383168931;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;
// System.Collections.IEnumerable
struct IEnumerable_t3464557803;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeOrder444538963.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator1075073278.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XPath_XPathExpression3588072235.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType3637370479.h"

// System.Void System.Xml.XPath.XPathNavigator::.ctor()
extern "C"  void XPathNavigator__ctor_m2215010048 (XPathNavigator_t1075073278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathNavigator::.cctor()
extern "C"  void XPathNavigator__cctor_m3758705837 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.XPath.XPathNavigator::System.ICloneable.Clone()
extern "C"  Il2CppObject * XPathNavigator_System_ICloneable_Clone_m1822899695 (XPathNavigator_t1075073278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::get_HasAttributes()
extern "C"  bool XPathNavigator_get_HasAttributes_m238100238 (XPathNavigator_t1075073278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::get_HasChildren()
extern "C"  bool XPathNavigator_get_HasChildren_m3581374262 (XPathNavigator_t1075073278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.XPathNavigator::get_XmlLang()
extern "C"  String_t* XPathNavigator_get_XmlLang_m3014372733 (XPathNavigator_t1075073278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeOrder System.Xml.XPath.XPathNavigator::ComparePosition(System.Xml.XPath.XPathNavigator)
extern "C"  int32_t XPathNavigator_ComparePosition_m3713421981 (XPathNavigator_t1075073278 * __this, XPathNavigator_t1075073278 * ___nav0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathExpression System.Xml.XPath.XPathNavigator::Compile(System.String)
extern "C"  XPathExpression_t3588072235 * XPathNavigator_Compile_m3812787918 (XPathNavigator_t1075073278 * __this, String_t* ___xpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::IsDescendant(System.Xml.XPath.XPathNavigator)
extern "C"  bool XPathNavigator_IsDescendant_m3913947374 (XPathNavigator_t1075073278 * __this, XPathNavigator_t1075073278 * ___nav0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToAttribute(System.String,System.String)
extern "C"  bool XPathNavigator_MoveToAttribute_m192146504 (XPathNavigator_t1075073278 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToNamespace(System.String)
extern "C"  bool XPathNavigator_MoveToNamespace_m3481610349 (XPathNavigator_t1075073278 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirst()
extern "C"  bool XPathNavigator_MoveToFirst_m3064231242 (XPathNavigator_t1075073278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XPath.XPathNavigator::MoveToRoot()
extern "C"  void XPathNavigator_MoveToRoot_m4278006194 (XPathNavigator_t1075073278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstImpl()
extern "C"  bool XPathNavigator_MoveToFirstImpl_m1974955786 (XPathNavigator_t1075073278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToFirstNamespace()
extern "C"  bool XPathNavigator_MoveToFirstNamespace_m3738691923 (XPathNavigator_t1075073278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XPath.XPathNavigator::MoveToNextNamespace()
extern "C"  bool XPathNavigator_MoveToNextNamespace_m197928770 (XPathNavigator_t1075073278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator::Select(System.String)
extern "C"  XPathNodeIterator_t1383168931 * XPathNavigator_Select_m1857203757 (XPathNavigator_t1075073278 * __this, String_t* ___xpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator::Select(System.Xml.XPath.XPathExpression)
extern "C"  XPathNodeIterator_t1383168931 * XPathNavigator_Select_m1543264903 (XPathNavigator_t1075073278 * __this, XPathExpression_t3588072235 * ___expr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator::Select(System.Xml.XPath.XPathExpression,System.Xml.IXmlNamespaceResolver)
extern "C"  XPathNodeIterator_t1383168931 * XPathNavigator_Select_m2072065794 (XPathNavigator_t1075073278 * __this, XPathExpression_t3588072235 * ___expr0, Il2CppObject * ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable System.Xml.XPath.XPathNavigator::EnumerateChildren(System.Xml.XPath.XPathNavigator,System.Xml.XPath.XPathNodeType)
extern "C"  Il2CppObject * XPathNavigator_EnumerateChildren_m710965660 (Il2CppObject * __this /* static, unused */, XPathNavigator_t1075073278 * ___n0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeIterator System.Xml.XPath.XPathNavigator::SelectChildren(System.Xml.XPath.XPathNodeType)
extern "C"  XPathNodeIterator_t1383168931 * XPathNavigator_SelectChildren_m2299731170 (XPathNavigator_t1075073278 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.XPathNavigator::ToString()
extern "C"  String_t* XPathNavigator_ToString_m2589892525 (XPathNavigator_t1075073278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XPath.XPathNavigator::LookupNamespace(System.String)
extern "C"  String_t* XPathNavigator_LookupNamespace_m3979214784 (XPathNavigator_t1075073278 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
