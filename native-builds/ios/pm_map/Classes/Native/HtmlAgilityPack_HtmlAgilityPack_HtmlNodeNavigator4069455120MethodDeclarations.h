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

// HtmlAgilityPack.HtmlNodeNavigator
struct HtmlNodeNavigator_t4069455120;
// HtmlAgilityPack.HtmlDocument
struct HtmlDocument_t4272798594;
// HtmlAgilityPack.HtmlNode
struct HtmlNode_t916417385;
// System.String
struct String_t;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "codegen/il2cpp-codegen.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlDocument4272798594.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlNode916417385.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlNodeNavigator4069455120.h"
#include "System_Xml_System_Xml_XPath_XPathNodeType3637370479.h"
#include "System_Xml_System_Xml_XPath_XPathNavigator1075073278.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XPath_XPathNamespaceScope1935109964.h"

// System.Void HtmlAgilityPack.HtmlNodeNavigator::.ctor(HtmlAgilityPack.HtmlDocument,HtmlAgilityPack.HtmlNode)
extern "C"  void HtmlNodeNavigator__ctor_m315704232 (HtmlNodeNavigator_t4069455120 * __this, HtmlDocument_t4272798594 * ___doc0, HtmlNode_t916417385 * ___currentNode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNodeNavigator::.ctor(HtmlAgilityPack.HtmlNodeNavigator)
extern "C"  void HtmlNodeNavigator__ctor_m2957404396 (HtmlNodeNavigator_t4069455120 * __this, HtmlNodeNavigator_t4069455120 * ___nav0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNodeNavigator::get_CurrentNode()
extern "C"  HtmlNode_t916417385 * HtmlNodeNavigator_get_CurrentNode_m2871540806 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::get_HasAttributes()
extern "C"  bool HtmlNodeNavigator_get_HasAttributes_m874062203 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::get_HasChildren()
extern "C"  bool HtmlNodeNavigator_get_HasChildren_m4167510243 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNodeNavigator::get_LocalName()
extern "C"  String_t* HtmlNodeNavigator_get_LocalName_m321038853 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNodeNavigator::get_Name()
extern "C"  String_t* HtmlNodeNavigator_get_Name_m2918300190 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNodeNavigator::get_NamespaceURI()
extern "C"  String_t* HtmlNodeNavigator_get_NamespaceURI_m2024027684 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNodeType HtmlAgilityPack.HtmlNodeNavigator::get_NodeType()
extern "C"  int32_t HtmlNodeNavigator_get_NodeType_m847795549 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNodeNavigator::get_Value()
extern "C"  String_t* HtmlNodeNavigator_get_Value_m3077666592 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNodeNavigator::get_XmlLang()
extern "C"  String_t* HtmlNodeNavigator_get_XmlLang_m1643698132 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XPath.XPathNavigator HtmlAgilityPack.HtmlNodeNavigator::Clone()
extern "C"  XPathNavigator_t1075073278 * HtmlNodeNavigator_Clone_m3621328388 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator)
extern "C"  bool HtmlNodeNavigator_IsSamePosition_m2552336041 (HtmlNodeNavigator_t4069455120 * __this, XPathNavigator_t1075073278 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::MoveTo(System.Xml.XPath.XPathNavigator)
extern "C"  bool HtmlNodeNavigator_MoveTo_m1105503958 (HtmlNodeNavigator_t4069455120 * __this, XPathNavigator_t1075073278 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::MoveToAttribute(System.String,System.String)
extern "C"  bool HtmlNodeNavigator_MoveToAttribute_m1455066747 (HtmlNodeNavigator_t4069455120 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::MoveToFirst()
extern "C"  bool HtmlNodeNavigator_MoveToFirst_m3785756023 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::MoveToFirstAttribute()
extern "C"  bool HtmlNodeNavigator_MoveToFirstAttribute_m3480108231 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::MoveToFirstChild()
extern "C"  bool HtmlNodeNavigator_MoveToFirstChild_m904825927 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::MoveToFirstNamespace(System.Xml.XPath.XPathNamespaceScope)
extern "C"  bool HtmlNodeNavigator_MoveToFirstNamespace_m1184171223 (HtmlNodeNavigator_t4069455120 * __this, int32_t ___scope0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::MoveToId(System.String)
extern "C"  bool HtmlNodeNavigator_MoveToId_m1522818924 (HtmlNodeNavigator_t4069455120 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::MoveToNamespace(System.String)
extern "C"  bool HtmlNodeNavigator_MoveToNamespace_m311119840 (HtmlNodeNavigator_t4069455120 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::MoveToNext()
extern "C"  bool HtmlNodeNavigator_MoveToNext_m1733110958 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::MoveToNextAttribute()
extern "C"  bool HtmlNodeNavigator_MoveToNextAttribute_m371280752 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::MoveToNextNamespace(System.Xml.XPath.XPathNamespaceScope)
extern "C"  bool HtmlNodeNavigator_MoveToNextNamespace_m2535699200 (HtmlNodeNavigator_t4069455120 * __this, int32_t ___scope0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNodeNavigator::MoveToParent()
extern "C"  bool HtmlNodeNavigator_MoveToParent_m3119424037 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNodeNavigator::MoveToRoot()
extern "C"  void HtmlNodeNavigator_MoveToRoot_m486172283 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNodeNavigator::Reset()
extern "C"  void HtmlNodeNavigator_Reset_m1543699268 (HtmlNodeNavigator_t4069455120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
