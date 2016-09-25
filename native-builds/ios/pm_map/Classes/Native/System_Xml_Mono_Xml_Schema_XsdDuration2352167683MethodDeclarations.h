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

// Mono.Xml.Schema.XsdDuration
struct XsdDuration_t2352167683;
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

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet3197530270.h"
#include "System_Xml_System_Xml_XmlTokenizedType3753548874.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode3316180404.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "System_Xml_Mono_Xml_Schema_XsdOrdering1283527491.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void Mono.Xml.Schema.XsdDuration::.ctor()
extern "C"  void XsdDuration__ctor_m651334095 (XsdDuration_t2352167683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdDuration::get_AllowedFacets()
extern "C"  int32_t XsdDuration_get_AllowedFacets_m1830857435 (XsdDuration_t2352167683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdDuration::get_TokenizedType()
extern "C"  int32_t XsdDuration_get_TokenizedType_m2614051960 (XsdDuration_t2352167683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdDuration::get_TypeCode()
extern "C"  int32_t XsdDuration_get_TypeCode_m4034625913 (XsdDuration_t2352167683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdDuration::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdDuration_ParseValue_m1938235739 (XsdDuration_t2352167683 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdDuration::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t1744280289 * XsdDuration_ParseValueType_m3030466213 (XsdDuration_t2352167683 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdDuration::Compare(System.Object,System.Object)
extern "C"  int32_t XsdDuration_Compare_m4169657967 (XsdDuration_t2352167683 * __this, Il2CppObject * ___x0, Il2CppObject * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
