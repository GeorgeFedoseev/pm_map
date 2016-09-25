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

// System.Xml.XmlValidatingReader
struct XmlValidatingReader_t2528036799;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.Xml.XmlParserContext
struct XmlParserContext_t1291067127;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Xml.XmlResolver
struct XmlResolver_t3822670287;
// System.Xml.Schema.XmlSchemaCollection
struct XmlSchemaCollection_t2750745740;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t4229224207;
// System.Object
struct Il2CppObject;
// System.Xml.Schema.ValidationEventArgs
struct ValidationEventArgs_t3260433748;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlReader4123196108.h"
#include "System_Xml_System_Xml_EntityHandling2742017190.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"
#include "System_Xml_System_Xml_ReadState352099245.h"
#include "System_Xml_System_Xml_ValidationType2719018513.h"
#include "System_Xml_System_Xml_XmlSpace557686381.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_Schema_ValidationEventArgs3260433748.h"

// System.Void System.Xml.XmlValidatingReader::.ctor(System.Xml.XmlReader)
extern "C"  void XmlValidatingReader__ctor_m3012717130 (XmlValidatingReader_t2528036799 * __this, XmlReader_t4123196108 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlValidatingReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t1291067127 * XmlValidatingReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m2323898669 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_AttributeCount()
extern "C"  int32_t XmlValidatingReader_get_AttributeCount_m3477386036 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_BaseURI()
extern "C"  String_t* XmlValidatingReader_get_BaseURI_m1328757979 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_CanResolveEntity()
extern "C"  bool XmlValidatingReader_get_CanResolveEntity_m975828230 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_Depth()
extern "C"  int32_t XmlValidatingReader_get_Depth_m1005799396 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlValidatingReader::get_EntityHandling()
extern "C"  int32_t XmlValidatingReader_get_EntityHandling_m1995197276 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::set_EntityHandling(System.Xml.EntityHandling)
extern "C"  void XmlValidatingReader_set_EntityHandling_m2196103129 (XmlValidatingReader_t2528036799 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_EOF()
extern "C"  bool XmlValidatingReader_get_EOF_m1415237751 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_HasValue()
extern "C"  bool XmlValidatingReader_get_HasValue_m2186250494 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_IsDefault()
extern "C"  bool XmlValidatingReader_get_IsDefault_m1561305842 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_IsEmptyElement()
extern "C"  bool XmlValidatingReader_get_IsEmptyElement_m1116878912 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_LineNumber()
extern "C"  int32_t XmlValidatingReader_get_LineNumber_m3214672190 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlValidatingReader::get_LinePosition()
extern "C"  int32_t XmlValidatingReader_get_LinePosition_m2993080862 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_LocalName()
extern "C"  String_t* XmlValidatingReader_get_LocalName_m1405968918 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Name()
extern "C"  String_t* XmlValidatingReader_get_Name_m3823532909 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::get_Namespaces()
extern "C"  bool XmlValidatingReader_get_Namespaces_m1347603135 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_NamespaceURI()
extern "C"  String_t* XmlValidatingReader_get_NamespaceURI_m3546691699 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlValidatingReader::get_NameTable()
extern "C"  XmlNameTable_t1216706026 * XmlValidatingReader_get_NameTable_m1151460085 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlValidatingReader::get_NodeType()
extern "C"  int32_t XmlValidatingReader_get_NodeType_m2679077551 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Prefix()
extern "C"  String_t* XmlValidatingReader_get_Prefix_m3385305460 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlValidatingReader::get_ReadState()
extern "C"  int32_t XmlValidatingReader_get_ReadState_m2596423314 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlValidatingReader::get_Resolver()
extern "C"  XmlResolver_t3822670287 * XmlValidatingReader_get_Resolver_m464606959 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaCollection System.Xml.XmlValidatingReader::get_Schemas()
extern "C"  XmlSchemaCollection_t2750745740 * XmlValidatingReader_get_Schemas_m3609787041 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlValidatingReader::get_Settings()
extern "C"  XmlReaderSettings_t4229224207 * XmlValidatingReader_get_Settings_m4246462284 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ValidationType System.Xml.XmlValidatingReader::get_ValidationType()
extern "C"  int32_t XmlValidatingReader_get_ValidationType_m1920215420 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::set_ValidationType(System.Xml.ValidationType)
extern "C"  void XmlValidatingReader_set_ValidationType_m3321978755 (XmlValidatingReader_t2528036799 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_Value()
extern "C"  String_t* XmlValidatingReader_get_Value_m1075109809 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::get_XmlLang()
extern "C"  String_t* XmlValidatingReader_get_XmlLang_m1331978277 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlValidatingReader::get_XmlSpace()
extern "C"  int32_t XmlValidatingReader_get_XmlSpace_m1232010556 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::Close()
extern "C"  void XmlValidatingReader_Close_m3732160612 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String)
extern "C"  String_t* XmlValidatingReader_GetAttribute_m632750179 (XmlValidatingReader_t2528036799 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlValidatingReader_GetAttribute_m701120351 (XmlValidatingReader_t2528036799 * __this, String_t* ___localName0, String_t* ___namespaceName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::HasLineInfo()
extern "C"  bool XmlValidatingReader_HasLineInfo_m1813300128 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlValidatingReader::LookupNamespace(System.String)
extern "C"  String_t* XmlValidatingReader_LookupNamespace_m2808869400 (XmlValidatingReader_t2528036799 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::MoveToAttribute(System.Int32)
extern "C"  void XmlValidatingReader_MoveToAttribute_m2954625997 (XmlValidatingReader_t2528036799 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String)
extern "C"  bool XmlValidatingReader_MoveToAttribute_m2861329422 (XmlValidatingReader_t2528036799 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlValidatingReader_MoveToAttribute_m3503842250 (XmlValidatingReader_t2528036799 * __this, String_t* ___localName0, String_t* ___namespaceName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToElement()
extern "C"  bool XmlValidatingReader_MoveToElement_m4184774036 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToFirstAttribute()
extern "C"  bool XmlValidatingReader_MoveToFirstAttribute_m2055141206 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::MoveToNextAttribute()
extern "C"  bool XmlValidatingReader_MoveToNextAttribute_m3788997377 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::Read()
extern "C"  bool XmlValidatingReader_Read_m1597874260 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlValidatingReader::ReadAttributeValue()
extern "C"  bool XmlValidatingReader_ReadAttributeValue_m1629296169 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::ResolveEntity()
extern "C"  void XmlValidatingReader_ResolveEntity_m2855933595 (XmlValidatingReader_t2528036799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlValidatingReader::OnValidationEvent(System.Object,System.Xml.Schema.ValidationEventArgs)
extern "C"  void XmlValidatingReader_OnValidationEvent_m3153187659 (XmlValidatingReader_t2528036799 * __this, Il2CppObject * ___o0, ValidationEventArgs_t3260433748 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
