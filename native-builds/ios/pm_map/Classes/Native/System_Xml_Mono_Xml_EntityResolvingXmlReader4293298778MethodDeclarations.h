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

// Mono.Xml.EntityResolvingXmlReader
struct EntityResolvingXmlReader_t4293298778;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Xml.XmlParserContext
struct XmlParserContext_t1291067127;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"
#include "System_Xml_System_Xml_ReadState352099245.h"
#include "System_Xml_System_Xml_XmlSpace557686381.h"
#include "System_Xml_Mono_Xml_EntityResolvingXmlReader4293298778.h"
#include "System_Xml_System_Xml_EntityHandling2742017190.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.EntityResolvingXmlReader::.ctor(System.Xml.XmlReader)
extern "C"  void EntityResolvingXmlReader__ctor_m904359175 (EntityResolvingXmlReader_t4293298778 * __this, XmlReader_t4123196108 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::.ctor(System.Xml.XmlReader,System.Boolean)
extern "C"  void EntityResolvingXmlReader__ctor_m2968410006 (EntityResolvingXmlReader_t4293298778 * __this, XmlReader_t4123196108 * ___entityContainer0, bool ___inside_attr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t1291067127 * EntityResolvingXmlReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m143166002 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader Mono.Xml.EntityResolvingXmlReader::get_Current()
extern "C"  XmlReader_t4123196108 * EntityResolvingXmlReader_get_Current_m2544885190 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_AttributeCount()
extern "C"  int32_t EntityResolvingXmlReader_get_AttributeCount_m1887445523 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_BaseURI()
extern "C"  String_t* EntityResolvingXmlReader_get_BaseURI_m2127653054 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_CanResolveEntity()
extern "C"  bool EntityResolvingXmlReader_get_CanResolveEntity_m3850824473 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_Depth()
extern "C"  int32_t EntityResolvingXmlReader_get_Depth_m2918765093 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_EOF()
extern "C"  bool EntityResolvingXmlReader_get_EOF_m3706222468 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_HasValue()
extern "C"  bool EntityResolvingXmlReader_get_HasValue_m1499546129 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_IsDefault()
extern "C"  bool EntityResolvingXmlReader_get_IsDefault_m1748307007 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::get_IsEmptyElement()
extern "C"  bool EntityResolvingXmlReader_get_IsEmptyElement_m382441235 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_LocalName()
extern "C"  String_t* EntityResolvingXmlReader_get_LocalName_m344990009 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Name()
extern "C"  String_t* EntityResolvingXmlReader_get_Name_m3332084330 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_NamespaceURI()
extern "C"  String_t* EntityResolvingXmlReader_get_NamespaceURI_m2588344944 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.EntityResolvingXmlReader::get_NameTable()
extern "C"  XmlNameTable_t1216706026 * EntityResolvingXmlReader_get_NameTable_m2053790580 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType Mono.Xml.EntityResolvingXmlReader::get_NodeType()
extern "C"  int32_t EntityResolvingXmlReader_get_NodeType_m748801322 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext Mono.Xml.EntityResolvingXmlReader::get_ParserContext()
extern "C"  XmlParserContext_t1291067127 * EntityResolvingXmlReader_get_ParserContext_m2296045716 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Prefix()
extern "C"  String_t* EntityResolvingXmlReader_get_Prefix_m3549623601 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState Mono.Xml.EntityResolvingXmlReader::get_ReadState()
extern "C"  int32_t EntityResolvingXmlReader_get_ReadState_m910803687 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_Value()
extern "C"  String_t* EntityResolvingXmlReader_get_Value_m3020073044 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::get_XmlLang()
extern "C"  String_t* EntityResolvingXmlReader_get_XmlLang_m2130873352 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace Mono.Xml.EntityResolvingXmlReader::get_XmlSpace()
extern "C"  int32_t EntityResolvingXmlReader_get_XmlSpace_m2199125123 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::CopyProperties(Mono.Xml.EntityResolvingXmlReader)
extern "C"  void EntityResolvingXmlReader_CopyProperties_m3444053403 (EntityResolvingXmlReader_t4293298778 * __this, EntityResolvingXmlReader_t4293298778 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling Mono.Xml.EntityResolvingXmlReader::get_EntityHandling()
extern "C"  int32_t EntityResolvingXmlReader_get_EntityHandling_m2046082741 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C"  void EntityResolvingXmlReader_set_EntityHandling_m629706070 (EntityResolvingXmlReader_t4293298778 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_LineNumber()
extern "C"  int32_t EntityResolvingXmlReader_get_LineNumber_m3026696093 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.EntityResolvingXmlReader::get_LinePosition()
extern "C"  int32_t EntityResolvingXmlReader_get_LinePosition_m2736678077 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::Close()
extern "C"  void EntityResolvingXmlReader_Close_m2859877281 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.String)
extern "C"  String_t* EntityResolvingXmlReader_GetAttribute_m826090246 (EntityResolvingXmlReader_t4293298778 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::GetAttribute(System.String,System.String)
extern "C"  String_t* EntityResolvingXmlReader_GetAttribute_m3986786498 (EntityResolvingXmlReader_t4293298778 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.EntityResolvingXmlReader::LookupNamespace(System.String)
extern "C"  String_t* EntityResolvingXmlReader_LookupNamespace_m3051661461 (EntityResolvingXmlReader_t4293298778 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.Int32)
extern "C"  void EntityResolvingXmlReader_MoveToAttribute_m4047194954 (EntityResolvingXmlReader_t4293298778 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.String)
extern "C"  bool EntityResolvingXmlReader_MoveToAttribute_m4255620897 (EntityResolvingXmlReader_t4293298778 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToAttribute(System.String,System.String)
extern "C"  bool EntityResolvingXmlReader_MoveToAttribute_m2049391005 (EntityResolvingXmlReader_t4293298778 * __this, String_t* ___localName0, String_t* ___namespaceName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToElement()
extern "C"  bool EntityResolvingXmlReader_MoveToElement_m76807905 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToFirstAttribute()
extern "C"  bool EntityResolvingXmlReader_MoveToFirstAttribute_m635170153 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::MoveToNextAttribute()
extern "C"  bool EntityResolvingXmlReader_MoveToNextAttribute_m2496265870 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::Read()
extern "C"  bool EntityResolvingXmlReader_Read_m1484201063 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::ReadAttributeValue()
extern "C"  bool EntityResolvingXmlReader_ReadAttributeValue_m894858492 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::ResolveEntity()
extern "C"  void EntityResolvingXmlReader_ResolveEntity_m1977060568 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::DoResolveEntity()
extern "C"  void EntityResolvingXmlReader_DoResolveEntity_m1068050125 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.EntityResolvingXmlReader::Skip()
extern "C"  void EntityResolvingXmlReader_Skip_m4289991448 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.EntityResolvingXmlReader::HasLineInfo()
extern "C"  bool EntityResolvingXmlReader_HasLineInfo_m405675053 (EntityResolvingXmlReader_t4293298778 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
