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

// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t678385198;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Xml.XmlParserContext
struct XmlParserContext_t1291067127;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t4085280001;
// System.Xml.XmlElement
struct XmlElement_t280387747;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNodeReaderImpl678385198.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"
#include "System_Xml_System_Xml_ReadState352099245.h"
#include "System_Xml_System_Xml_XmlSpace557686381.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Xml.XmlNodeReaderImpl::.ctor(System.Xml.XmlNodeReaderImpl)
extern "C"  void XmlNodeReaderImpl__ctor_m3614683545 (XmlNodeReaderImpl_t678385198 * __this, XmlNodeReaderImpl_t678385198 * ___entityContainer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::.ctor(System.Xml.XmlNode)
extern "C"  void XmlNodeReaderImpl__ctor_m3961889436 (XmlNodeReaderImpl_t678385198 * __this, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlNodeReaderImpl::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t1291067127 * XmlNodeReaderImpl_Mono_Xml_IHasXmlParserContext_get_ParserContext_m1965461982 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReaderImpl::get_AttributeCount()
extern "C"  int32_t XmlNodeReaderImpl_get_AttributeCount_m3047425123 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_BaseURI()
extern "C"  String_t* XmlNodeReaderImpl_get_BaseURI_m1869676108 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_CanResolveEntity()
extern "C"  bool XmlNodeReaderImpl_get_CanResolveEntity_m2512119797 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReaderImpl::get_Depth()
extern "C"  int32_t XmlNodeReaderImpl_get_Depth_m193861077 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_EOF()
extern "C"  bool XmlNodeReaderImpl_get_EOF_m1754121512 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_HasAttributes()
extern "C"  bool XmlNodeReaderImpl_get_HasAttributes_m3130758333 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_HasValue()
extern "C"  bool XmlNodeReaderImpl_get_HasValue_m3386825453 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_IsDefault()
extern "C"  bool XmlNodeReaderImpl_get_IsDefault_m124423907 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::get_IsEmptyElement()
extern "C"  bool XmlNodeReaderImpl_get_IsEmptyElement_m2660375279 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_LocalName()
extern "C"  String_t* XmlNodeReaderImpl_get_LocalName_m1537248071 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Name()
extern "C"  String_t* XmlNodeReaderImpl_get_Name_m926455708 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_NamespaceURI()
extern "C"  String_t* XmlNodeReaderImpl_get_NamespaceURI_m1768732066 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNodeReaderImpl::get_NameTable()
extern "C"  XmlNameTable_t1216706026 * XmlNodeReaderImpl_get_NameTable_m1160220838 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNodeReaderImpl::get_NodeType()
extern "C"  int32_t XmlNodeReaderImpl_get_NodeType_m3178676126 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Prefix()
extern "C"  String_t* XmlNodeReaderImpl_get_Prefix_m2432923107 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlNodeReaderImpl::get_ReadState()
extern "C"  int32_t XmlNodeReaderImpl_get_ReadState_m3982651779 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReaderImpl::get_SchemaInfo()
extern "C"  Il2CppObject * XmlNodeReaderImpl_get_SchemaInfo_m2581958426 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_Value()
extern "C"  String_t* XmlNodeReaderImpl_get_Value_m1460029794 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::get_XmlLang()
extern "C"  String_t* XmlNodeReaderImpl_get_XmlLang_m1872896406 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNodeReaderImpl::get_XmlSpace()
extern "C"  int32_t XmlNodeReaderImpl_get_XmlSpace_m1682512043 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::Close()
extern "C"  void XmlNodeReaderImpl_Close_m1809567573 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetAttribute(System.String)
extern "C"  String_t* XmlNodeReaderImpl_GetAttribute_m2888362004 (XmlNodeReaderImpl_t678385198 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlNodeReaderImpl_GetAttribute_m873487696 (XmlNodeReaderImpl_t678385198 * __this, String_t* ___name0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetXmlDeclarationAttribute(System.String)
extern "C"  String_t* XmlNodeReaderImpl_GetXmlDeclarationAttribute_m388060631 (XmlNodeReaderImpl_t678385198 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::GetDocumentTypeAttribute(System.String)
extern "C"  String_t* XmlNodeReaderImpl_GetDocumentTypeAttribute_m3417386409 (XmlNodeReaderImpl_t678385198 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNodeReaderImpl::GetCurrentElement()
extern "C"  XmlElement_t280387747 * XmlNodeReaderImpl_GetCurrentElement_m1311698814 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReaderImpl::LookupNamespace(System.String)
extern "C"  String_t* XmlNodeReaderImpl_LookupNamespace_m682434759 (XmlNodeReaderImpl_t678385198 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.Int32)
extern "C"  void XmlNodeReaderImpl_MoveToAttribute_m2180405246 (XmlNodeReaderImpl_t678385198 * __this, int32_t ___attributeIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.String)
extern "C"  bool XmlNodeReaderImpl_MoveToAttribute_m32505853 (XmlNodeReaderImpl_t678385198 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlNodeReaderImpl_MoveToAttribute_m3772180857 (XmlNodeReaderImpl_t678385198 * __this, String_t* ___name0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToElement()
extern "C"  bool XmlNodeReaderImpl_MoveToElement_m2747892101 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToFirstAttribute()
extern "C"  bool XmlNodeReaderImpl_MoveToFirstAttribute_m3591432773 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::MoveToNextAttribute()
extern "C"  bool XmlNodeReaderImpl_MoveToNextAttribute_m97777202 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::Read()
extern "C"  bool XmlNodeReaderImpl_Read_m3113832771 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::ReadContent()
extern "C"  bool XmlNodeReaderImpl_ReadContent_m4174701720 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReaderImpl::ReadAttributeValue()
extern "C"  bool XmlNodeReaderImpl_ReadAttributeValue_m3172792536 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::ResolveEntity()
extern "C"  void XmlNodeReaderImpl_ResolveEntity_m1788880012 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReaderImpl::Skip()
extern "C"  void XmlNodeReaderImpl_Skip_m2454995172 (XmlNodeReaderImpl_t678385198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
