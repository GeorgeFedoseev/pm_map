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

// System.Xml.XmlNodeReader
struct XmlNodeReader_t728204014;
// System.Xml.XmlNode
struct XmlNode_t856910923;
// System.Xml.XmlNodeReaderImpl
struct XmlNodeReaderImpl_t678385198;
// System.Xml.XmlParserContext
struct XmlParserContext_t1291067127;
// System.Xml.XmlReader
struct XmlReader_t4123196108;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t4085280001;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"
#include "System_Xml_System_Xml_XmlNodeReaderImpl678385198.h"
#include "System_Xml_System_Xml_XmlNodeType992114213.h"
#include "System_Xml_System_Xml_ReadState352099245.h"
#include "System_Xml_System_Xml_XmlSpace557686381.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNode)
extern "C"  void XmlNodeReader__ctor_m1653620444 (XmlNodeReader_t728204014 * __this, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::.ctor(System.Xml.XmlNodeReaderImpl,System.Boolean)
extern "C"  void XmlNodeReader__ctor_m1137952900 (XmlNodeReader_t728204014 * __this, XmlNodeReaderImpl_t678385198 * ___entityContainer0, bool ___insideAttribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlNodeReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C"  XmlParserContext_t1291067127 * XmlNodeReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m2185915422 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlNodeReader::get_Current()
extern "C"  XmlReader_t4123196108 * XmlNodeReader_get_Current_m2692280064 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReader::get_AttributeCount()
extern "C"  int32_t XmlNodeReader_get_AttributeCount_m3245981987 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_BaseURI()
extern "C"  String_t* XmlNodeReader_get_BaseURI_m2376286476 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_CanResolveEntity()
extern "C"  bool XmlNodeReader_get_CanResolveEntity_m2018310069 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlNodeReader::get_Depth()
extern "C"  int32_t XmlNodeReader_get_Depth_m514654485 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_EOF()
extern "C"  bool XmlNodeReader_get_EOF_m146677096 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_HasAttributes()
extern "C"  bool XmlNodeReader_get_HasAttributes_m3043663101 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_HasValue()
extern "C"  bool XmlNodeReader_get_HasValue_m1599842989 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_IsDefault()
extern "C"  bool XmlNodeReader_get_IsDefault_m562542371 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::get_IsEmptyElement()
extern "C"  bool XmlNodeReader_get_IsEmptyElement_m4255390383 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_LocalName()
extern "C"  String_t* XmlNodeReader_get_LocalName_m3058507271 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Name()
extern "C"  String_t* XmlNodeReader_get_Name_m2922073308 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_NamespaceURI()
extern "C"  String_t* XmlNodeReader_get_NamespaceURI_m1106651874 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlNodeReader::get_NameTable()
extern "C"  XmlNameTable_t1216706026 * XmlNodeReader_get_NameTable_m3490090086 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNodeReader::get_NodeType()
extern "C"  int32_t XmlNodeReader_get_NodeType_m3937776990 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Prefix()
extern "C"  String_t* XmlNodeReader_get_Prefix_m371055395 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlNodeReader::get_ReadState()
extern "C"  int32_t XmlNodeReader_get_ReadState_m281368515 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlNodeReader::get_SchemaInfo()
extern "C"  Il2CppObject * XmlNodeReader_get_SchemaInfo_m1841033562 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_Value()
extern "C"  String_t* XmlNodeReader_get_Value_m3194633250 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::get_XmlLang()
extern "C"  String_t* XmlNodeReader_get_XmlLang_m2379506774 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNodeReader::get_XmlSpace()
extern "C"  int32_t XmlNodeReader_get_XmlSpace_m2069928811 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::Close()
extern "C"  void XmlNodeReader_Close_m1445002133 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String)
extern "C"  String_t* XmlNodeReader_GetAttribute_m13589204 (XmlNodeReader_t728204014 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::GetAttribute(System.String,System.String)
extern "C"  String_t* XmlNodeReader_GetAttribute_m2283208720 (XmlNodeReader_t728204014 * __this, String_t* ___name0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNodeReader::LookupNamespace(System.String)
extern "C"  String_t* XmlNodeReader_LookupNamespace_m4268799495 (XmlNodeReader_t728204014 * __this, String_t* ___prefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::MoveToAttribute(System.Int32)
extern "C"  void XmlNodeReader_MoveToAttribute_m1295569982 (XmlNodeReader_t728204014 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String)
extern "C"  bool XmlNodeReader_MoveToAttribute_m4183117757 (XmlNodeReader_t728204014 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToAttribute(System.String,System.String)
extern "C"  bool XmlNodeReader_MoveToAttribute_m2648025401 (XmlNodeReader_t728204014 * __this, String_t* ___localName0, String_t* ___namespaceURI1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToElement()
extern "C"  bool XmlNodeReader_MoveToElement_m3186010565 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToFirstAttribute()
extern "C"  bool XmlNodeReader_MoveToFirstAttribute_m3097623045 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::MoveToNextAttribute()
extern "C"  bool XmlNodeReader_MoveToNextAttribute_m2298605170 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::Read()
extern "C"  bool XmlNodeReader_Read_m2311184643 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNodeReader::ReadAttributeValue()
extern "C"  bool XmlNodeReader_ReadAttributeValue_m472840344 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::ResolveEntity()
extern "C"  void XmlNodeReader_ResolveEntity_m336924876 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeReader::Skip()
extern "C"  void XmlNodeReader_Skip_m1889045668 (XmlNodeReader_t728204014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
