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

// HtmlAgilityPack.HtmlDocument
struct HtmlDocument_t4272798594;
// HtmlAgilityPack.HtmlNode
struct HtmlNode_t916417385;
// System.String
struct String_t;
// HtmlAgilityPack.HtmlAttribute
struct HtmlAttribute_t1980984887;
// System.IO.TextReader
struct TextReader_t2148718976;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_TextReader2148718976.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlNodeType239192771.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlNode916417385.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlParseErrorCode2227801225.h"

// System.Void HtmlAgilityPack.HtmlDocument::.ctor()
extern "C"  void HtmlDocument__ctor_m1363739967 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlDocument::get_DocumentNode()
extern "C"  HtmlNode_t916417385 * HtmlDocument_get_DocumentNode_m2524820618 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlDocument::GetXmlName(System.String)
extern "C"  String_t* HtmlDocument_GetXmlName_m671506094 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlDocument::HtmlEncode(System.String)
extern "C"  String_t* HtmlDocument_HtmlEncode_m2344506233 (Il2CppObject * __this /* static, unused */, String_t* ___html0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlDocument::IsWhiteSpace(System.Int32)
extern "C"  bool HtmlDocument_IsWhiteSpace_m2336811707 (Il2CppObject * __this /* static, unused */, int32_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlAttribute HtmlAgilityPack.HtmlDocument::CreateAttribute(System.String)
extern "C"  HtmlAttribute_t1980984887 * HtmlDocument_CreateAttribute_m2594144642 (HtmlDocument_t4272798594 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlAttribute HtmlAgilityPack.HtmlDocument::CreateAttribute(System.String,System.String)
extern "C"  HtmlAttribute_t1980984887 * HtmlDocument_CreateAttribute_m1523506750 (HtmlDocument_t4272798594 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlDocument::GetElementbyId(System.String)
extern "C"  HtmlNode_t916417385 * HtmlDocument_GetElementbyId_m1322723366 (HtmlDocument_t4272798594 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::Load(System.IO.TextReader)
extern "C"  void HtmlDocument_Load_m3434924242 (HtmlDocument_t4272798594 * __this, TextReader_t2148718976 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::LoadHtml(System.String)
extern "C"  void HtmlDocument_LoadHtml_m677780268 (HtmlDocument_t4272798594 * __this, String_t* ___html0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlAttribute HtmlAgilityPack.HtmlDocument::CreateAttribute()
extern "C"  HtmlAttribute_t1980984887 * HtmlDocument_CreateAttribute_m811863424 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlDocument::CreateNode(HtmlAgilityPack.HtmlNodeType)
extern "C"  HtmlNode_t916417385 * HtmlDocument_CreateNode_m1359983232 (HtmlDocument_t4272798594 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlDocument::CreateNode(HtmlAgilityPack.HtmlNodeType,System.Int32)
extern "C"  HtmlNode_t916417385 * HtmlDocument_CreateNode_m864647767 (HtmlDocument_t4272798594 * __this, int32_t ___type0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding HtmlAgilityPack.HtmlDocument::GetOutEncoding()
extern "C"  Encoding_t2012439129 * HtmlDocument_GetOutEncoding_m721163298 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlDocument::GetXmlDeclaration()
extern "C"  HtmlNode_t916417385 * HtmlDocument_GetXmlDeclaration_m910418935 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::SetIdForNode(HtmlAgilityPack.HtmlNode,System.String)
extern "C"  void HtmlDocument_SetIdForNode_m234261095 (HtmlDocument_t4272798594 * __this, HtmlNode_t916417385 * ___node0, String_t* ___id1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::UpdateLastParentNode()
extern "C"  void HtmlDocument_UpdateLastParentNode_m127057808 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::AddError(HtmlAgilityPack.HtmlParseErrorCode,System.Int32,System.Int32,System.Int32,System.String,System.String)
extern "C"  void HtmlDocument_AddError_m1936081739 (HtmlDocument_t4272798594 * __this, int32_t ___code0, int32_t ___line1, int32_t ___linePosition2, int32_t ___streamPosition3, String_t* ___sourceText4, String_t* ___reason5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::CloseCurrentNode()
extern "C"  void HtmlDocument_CloseCurrentNode_m1038013288 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String HtmlAgilityPack.HtmlDocument::CurrentNodeName()
extern "C"  String_t* HtmlDocument_CurrentNodeName_m1363575904 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::DecrementPosition()
extern "C"  void HtmlDocument_DecrementPosition_m852459577 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlDocument::FindResetterNode(HtmlAgilityPack.HtmlNode,System.String)
extern "C"  HtmlNode_t916417385 * HtmlDocument_FindResetterNode_m1016279397 (HtmlDocument_t4272798594 * __this, HtmlNode_t916417385 * ___node0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlDocument::FindResetterNodes(HtmlAgilityPack.HtmlNode,System.String[])
extern "C"  bool HtmlDocument_FindResetterNodes_m2554757495 (HtmlDocument_t4272798594 * __this, HtmlNode_t916417385 * ___node0, StringU5BU5D_t4054002952* ___names1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::FixNestedTag(System.String,System.String[])
extern "C"  void HtmlDocument_FixNestedTag_m3494870281 (HtmlDocument_t4272798594 * __this, String_t* ___name0, StringU5BU5D_t4054002952* ___resetters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::FixNestedTags()
extern "C"  void HtmlDocument_FixNestedTags_m3956129986 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] HtmlAgilityPack.HtmlDocument::GetResetters(System.String)
extern "C"  StringU5BU5D_t4054002952* HtmlDocument_GetResetters_m4237459569 (HtmlDocument_t4272798594 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::IncrementPosition()
extern "C"  void HtmlDocument_IncrementPosition_m541350933 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlDocument::NewCheck()
extern "C"  bool HtmlDocument_NewCheck_m85867851 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::Parse()
extern "C"  void HtmlDocument_Parse_m1415095376 (HtmlDocument_t4272798594 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::PushAttributeNameEnd(System.Int32)
extern "C"  void HtmlDocument_PushAttributeNameEnd_m3782905028 (HtmlDocument_t4272798594 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::PushAttributeNameStart(System.Int32)
extern "C"  void HtmlDocument_PushAttributeNameStart_m3346486859 (HtmlDocument_t4272798594 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::PushAttributeValueEnd(System.Int32)
extern "C"  void HtmlDocument_PushAttributeValueEnd_m2813554586 (HtmlDocument_t4272798594 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::PushAttributeValueStart(System.Int32)
extern "C"  void HtmlDocument_PushAttributeValueStart_m3808615329 (HtmlDocument_t4272798594 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::PushAttributeValueStart(System.Int32,System.Int32)
extern "C"  void HtmlDocument_PushAttributeValueStart_m1196945110 (HtmlDocument_t4272798594 * __this, int32_t ___index0, int32_t ___quote1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean HtmlAgilityPack.HtmlDocument::PushNodeEnd(System.Int32,System.Boolean)
extern "C"  bool HtmlDocument_PushNodeEnd_m2828996942 (HtmlDocument_t4272798594 * __this, int32_t ___index0, bool ___close1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::PushNodeNameEnd(System.Int32)
extern "C"  void HtmlDocument_PushNodeNameEnd_m805375138 (HtmlDocument_t4272798594 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::PushNodeNameStart(System.Boolean,System.Int32)
extern "C"  void HtmlDocument_PushNodeNameStart_m2804008040 (HtmlDocument_t4272798594 * __this, bool ___starttag0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::PushNodeStart(HtmlAgilityPack.HtmlNodeType,System.Int32)
extern "C"  void HtmlDocument_PushNodeStart_m2734936822 (HtmlDocument_t4272798594 * __this, int32_t ___type0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::ReadDocumentEncoding(HtmlAgilityPack.HtmlNode)
extern "C"  void HtmlDocument_ReadDocumentEncoding_m3527904417 (HtmlDocument_t4272798594 * __this, HtmlNode_t916417385 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HtmlAgilityPack.HtmlDocument::.cctor()
extern "C"  void HtmlDocument__cctor_m3139137102 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
