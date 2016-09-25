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

// HtmlAgilityPack.HtmlNode
struct HtmlNode_t916417385;
// HtmlAgilityPack.HtmlNodeCollection
struct HtmlNodeCollection_t1593744423;
// System.String
struct String_t;
// HtmlAgilityPack.HtmlDocument
struct HtmlDocument_t4272798594;
// HtmlAgilityPack.HtmlAttributeCollection
struct HtmlAttributeCollection_t1994388853;
// System.IO.TextWriter
struct TextWriter_t2304124208;
// HtmlAgilityPack.HtmlCommentNode
struct HtmlCommentNode_t2662610460;
// HtmlAgilityPack.HtmlAttribute
struct HtmlAttribute_t1980984887;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlNodeType239192771.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlDocument4272798594.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlNode916417385.h"
#include "mscorlib_System_IO_TextWriter2304124208.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlCommentNode2662610460.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlAttribute1980984887.h"

// HtmlAgilityPack.HtmlNodeCollection HtmlAgilityPack.HtmlNode::SelectNodes(System.String)
extern "C"  HtmlNodeCollection_t1593744423 * HtmlNode_SelectNodes_m1805704152 (HtmlNode_t916417385 * __this, String_t* ___xpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::SelectSingleNode(System.String)
extern "C"  HtmlNode_t916417385 * HtmlNode_SelectSingleNode_m3883142705 (HtmlNode_t916417385 * __this, String_t* ___xpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNode::.cctor()
extern "C"  void HtmlNode__cctor_m653701877 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNode::.ctor(HtmlAgilityPack.HtmlNodeType,HtmlAgilityPack.HtmlDocument,System.Int32)
extern "C"  void HtmlNode__ctor_m2296165000 (HtmlNode_t916417385 * __this, int32_t ___type0, HtmlDocument_t4272798594 * ___ownerdocument1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlAttributeCollection HtmlAgilityPack.HtmlNode::get_Attributes()
extern "C"  HtmlAttributeCollection_t1994388853 * HtmlNode_get_Attributes_m291752491 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNodeCollection HtmlAgilityPack.HtmlNode::get_ChildNodes()
extern "C"  HtmlNodeCollection_t1593744423 * HtmlNode_get_ChildNodes_m1020594155 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNode::get_Closed()
extern "C"  bool HtmlNode_get_Closed_m1631660255 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::get_FirstChild()
extern "C"  HtmlNode_t916417385 * HtmlNode_get_FirstChild_m4032948096 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNode::get_HasAttributes()
extern "C"  bool HtmlNode_get_HasAttributes_m3058692768 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNode::get_HasChildNodes()
extern "C"  bool HtmlNode_get_HasChildNodes_m2646038718 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNode::get_HasClosingAttributes()
extern "C"  bool HtmlNode_get_HasClosingAttributes_m2213832421 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNode::get_InnerHtml()
extern "C"  String_t* HtmlNode_get_InnerHtml_m52177739 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNode::get_InnerText()
extern "C"  String_t* HtmlNode_get_InnerText_m382210125 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::get_LastChild()
extern "C"  HtmlNode_t916417385 * HtmlNode_get_LastChild_m2600459284 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNode::get_Name()
extern "C"  String_t* HtmlNode_get_Name_m2420576195 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNode::set_Name(System.String)
extern "C"  void HtmlNode_set_Name_m2515901486 (HtmlNode_t916417385 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::get_NextSibling()
extern "C"  HtmlNode_t916417385 * HtmlNode_get_NextSibling_m4177590973 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNode::set_NextSibling(HtmlAgilityPack.HtmlNode)
extern "C"  void HtmlNode_set_NextSibling_m730032448 (HtmlNode_t916417385 * __this, HtmlNode_t916417385 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNodeType HtmlAgilityPack.HtmlNode::get_NodeType()
extern "C"  int32_t HtmlNode_get_NodeType_m1621294390 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNode::get_OriginalName()
extern "C"  String_t* HtmlNode_get_OriginalName_m1152073204 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNode::get_OuterHtml()
extern "C"  String_t* HtmlNode_get_OuterHtml_m2819952048 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlDocument HtmlAgilityPack.HtmlNode::get_OwnerDocument()
extern "C"  HtmlDocument_t4272798594 * HtmlNode_get_OwnerDocument_m2055823797 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::get_ParentNode()
extern "C"  HtmlNode_t916417385 * HtmlNode_get_ParentNode_m4281068800 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNode::set_ParentNode(HtmlAgilityPack.HtmlNode)
extern "C"  void HtmlNode_set_ParentNode_m3152660621 (HtmlNode_t916417385 * __this, HtmlNode_t916417385 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::get_PreviousSibling()
extern "C"  HtmlNode_t916417385 * HtmlNode_get_PreviousSibling_m2263756985 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNode::set_PreviousSibling(HtmlAgilityPack.HtmlNode)
extern "C"  void HtmlNode_set_PreviousSibling_m2303544764 (HtmlNode_t916417385 * __this, HtmlNode_t916417385 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNode::CanOverlapElement(System.String)
extern "C"  bool HtmlNode_CanOverlapElement_m1430236293 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNode::IsCDataElement(System.String)
extern "C"  bool HtmlNode_IsCDataElement_m689201439 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNode::IsClosedElement(System.String)
extern "C"  bool HtmlNode_IsClosedElement_m1465582180 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlNode::IsEmptyElement(System.String)
extern "C"  bool HtmlNode_IsEmptyElement_m2600448959 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::AppendChild(HtmlAgilityPack.HtmlNode)
extern "C"  HtmlNode_t916417385 * HtmlNode_AppendChild_m317803569 (HtmlNode_t916417385 * __this, HtmlNode_t916417385 * ___newChild0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::Clone()
extern "C"  HtmlNode_t916417385 * HtmlNode_Clone_m1083986164 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::CloneNode(System.Boolean)
extern "C"  HtmlNode_t916417385 * HtmlNode_CloneNode_m4135606285 (HtmlNode_t916417385 * __this, bool ___deep0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::RemoveChild(HtmlAgilityPack.HtmlNode)
extern "C"  HtmlNode_t916417385 * HtmlNode_RemoveChild_m134247815 (HtmlNode_t916417385 * __this, HtmlNode_t916417385 * ___oldChild0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNode::WriteContentTo(System.IO.TextWriter)
extern "C"  void HtmlNode_WriteContentTo_m1532168152 (HtmlNode_t916417385 * __this, TextWriter_t2304124208 * ___outText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNode::WriteContentTo()
extern "C"  String_t* HtmlNode_WriteContentTo_m2001719012 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNode::WriteTo(System.IO.TextWriter)
extern "C"  void HtmlNode_WriteTo_m359230183 (HtmlNode_t916417385 * __this, TextWriter_t2304124208 * ___outText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNode::WriteTo()
extern "C"  String_t* HtmlNode_WriteTo_m4135803277 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNode::GetXmlComment(HtmlAgilityPack.HtmlCommentNode)
extern "C"  String_t* HtmlNode_GetXmlComment_m3393991846 (Il2CppObject * __this /* static, unused */, HtmlCommentNode_t2662610460 * ___comment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNode::CloseNode(HtmlAgilityPack.HtmlNode)
extern "C"  void HtmlNode_CloseNode_m610667304 (HtmlNode_t916417385 * __this, HtmlNode_t916417385 * ___endnode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlNode::GetId()
extern "C"  String_t* HtmlNode_GetId_m1818788 (HtmlNode_t916417385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNode::WriteAttribute(System.IO.TextWriter,HtmlAgilityPack.HtmlAttribute)
extern "C"  void HtmlNode_WriteAttribute_m2596423606 (HtmlNode_t916417385 * __this, TextWriter_t2304124208 * ___outText0, HtmlAttribute_t1980984887 * ___att1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlNode::WriteAttributes(System.IO.TextWriter,System.Boolean)
extern "C"  void HtmlNode_WriteAttributes_m2164846682 (HtmlNode_t916417385 * __this, TextWriter_t2304124208 * ___outText0, bool ___closing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
