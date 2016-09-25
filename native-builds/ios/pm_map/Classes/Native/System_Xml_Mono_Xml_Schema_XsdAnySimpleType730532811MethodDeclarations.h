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

// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t730532811;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;
// System.ValueType
struct ValueType_t1744280289;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Xml.Schema.XmlSchemaFacet
struct XmlSchemaFacet_t2982631811;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode3316180404.h"
#include "System_Xml_System_Xml_XmlTokenizedType3753548874.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet2982631811.h"
#include "System_Xml_Mono_Xml_Schema_XsdOrdering1283527491.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet3197530270.h"

// System.Void Mono.Xml.Schema.XsdAnySimpleType::.ctor()
extern "C"  void XsdAnySimpleType__ctor_m711427083 (XsdAnySimpleType_t730532811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdAnySimpleType::.cctor()
extern "C"  void XsdAnySimpleType__cctor_m97306882 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnySimpleType Mono.Xml.Schema.XsdAnySimpleType::get_Instance()
extern "C"  XsdAnySimpleType_t730532811 * XsdAnySimpleType_get_Instance_m4236154734 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdAnySimpleType::get_TypeCode()
extern "C"  int32_t XsdAnySimpleType_get_TypeCode_m1444970133 (XsdAnySimpleType_t730532811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdAnySimpleType::get_TokenizedType()
extern "C"  int32_t XsdAnySimpleType_get_TokenizedType_m2531507378 (XsdAnySimpleType_t730532811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdAnySimpleType::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdAnySimpleType_ParseValue_m1940261929 (XsdAnySimpleType_t730532811 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdAnySimpleType::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t1744280289 * XsdAnySimpleType_ParseValueType_m3628303251 (XsdAnySimpleType_t730532811 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdAnySimpleType::ParseListValue(System.String,System.Xml.XmlNameTable)
extern "C"  StringU5BU5D_t4054002952* XsdAnySimpleType_ParseListValue_m596934066 (XsdAnySimpleType_t730532811 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAnySimpleType::AllowsFacet(System.Xml.Schema.XmlSchemaFacet)
extern "C"  bool XsdAnySimpleType_AllowsFacet_m93779672 (XsdAnySimpleType_t730532811 * __this, XmlSchemaFacet_t2982631811 * ___xsf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdAnySimpleType::Compare(System.Object,System.Object)
extern "C"  int32_t XsdAnySimpleType_Compare_m3316629845 (XsdAnySimpleType_t730532811 * __this, Il2CppObject * ___x0, Il2CppObject * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdAnySimpleType::Length(System.String)
extern "C"  int32_t XsdAnySimpleType_Length_m3590971393 (XsdAnySimpleType_t730532811 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdAnySimpleType::get_AllowedFacets()
extern "C"  int32_t XsdAnySimpleType_get_AllowedFacets_m195062289 (XsdAnySimpleType_t730532811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
