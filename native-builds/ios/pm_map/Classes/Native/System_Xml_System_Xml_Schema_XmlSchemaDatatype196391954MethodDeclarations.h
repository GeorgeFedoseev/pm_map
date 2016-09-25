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

// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t196391954;
// System.ValueType
struct ValueType_t1744280289;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2133315502;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdWhitespaceFacet1710562669.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode3316180404.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "System_Xml_System_Xml_XmlQualifiedName2133315502.h"

// System.Void System.Xml.Schema.XmlSchemaDatatype::.ctor()
extern "C"  void XmlSchemaDatatype__ctor_m503494556 (XmlSchemaDatatype_t196391954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Schema.XmlSchemaDatatype::.cctor()
extern "C"  void XmlSchemaDatatype__cctor_m2241333137 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdWhitespaceFacet System.Xml.Schema.XmlSchemaDatatype::get_Whitespace()
extern "C"  int32_t XmlSchemaDatatype_get_Whitespace_m3737645433 (XmlSchemaDatatype_t196391954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlSchemaDatatype::get_TypeCode()
extern "C"  int32_t XmlSchemaDatatype_get_TypeCode_m3697841932 (XmlSchemaDatatype_t196391954 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType System.Xml.Schema.XmlSchemaDatatype::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t1744280289 * XmlSchemaDatatype_ParseValueType_m1070187064 (XmlSchemaDatatype_t196391954 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaDatatype::Normalize(System.String)
extern "C"  String_t* XmlSchemaDatatype_Normalize_m3958757528 (XmlSchemaDatatype_t196391954 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Schema.XmlSchemaDatatype::Normalize(System.String,Mono.Xml.Schema.XsdWhitespaceFacet)
extern "C"  String_t* XmlSchemaDatatype_Normalize_m3655513970 (XmlSchemaDatatype_t196391954 * __this, String_t* ___s0, int32_t ___whitespaceFacet1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.Xml.XmlQualifiedName)
extern "C"  XmlSchemaDatatype_t196391954 * XmlSchemaDatatype_FromName_m2003221181 (Il2CppObject * __this /* static, unused */, XmlQualifiedName_t2133315502 * ___qname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaDatatype::FromName(System.String,System.String)
extern "C"  XmlSchemaDatatype_t196391954 * XmlSchemaDatatype_FromName_m1008904623 (Il2CppObject * __this /* static, unused */, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
