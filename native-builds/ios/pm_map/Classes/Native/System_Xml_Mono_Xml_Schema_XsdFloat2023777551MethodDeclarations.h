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

// Mono.Xml.Schema.XsdFloat
struct XsdFloat_t2023777551;
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
#include "System_Xml_System_Xml_Schema_XmlTypeCode3316180404.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaFacet_Facet3197530270.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "System_Xml_Mono_Xml_Schema_XsdOrdering1283527491.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void Mono.Xml.Schema.XsdFloat::.ctor()
extern "C"  void XsdFloat__ctor_m181262663 (XsdFloat_t2023777551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdFloat::get_TypeCode()
extern "C"  int32_t XsdFloat_get_TypeCode_m3390011865 (XsdFloat_t2023777551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaFacet/Facet Mono.Xml.Schema.XsdFloat::get_AllowedFacets()
extern "C"  int32_t XsdFloat_get_AllowedFacets_m4211704397 (XsdFloat_t2023777551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdFloat::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdFloat_ParseValue_m293584493 (XsdFloat_t2023777551 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdFloat::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t1744280289 * XsdFloat_ParseValueType_m2720990167 (XsdFloat_t2023777551 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdOrdering Mono.Xml.Schema.XsdFloat::Compare(System.Object,System.Object)
extern "C"  int32_t XsdFloat_Compare_m1895945881 (XsdFloat_t2023777551 * __this, Il2CppObject * ___x0, Il2CppObject * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
