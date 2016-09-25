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

// Mono.Xml.Schema.XsdPositiveInteger
struct XsdPositiveInteger_t346877240;
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
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"

// System.Void Mono.Xml.Schema.XsdPositiveInteger::.ctor()
extern "C"  void XsdPositiveInteger__ctor_m1629740222 (XsdPositiveInteger_t346877240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdPositiveInteger::get_TypeCode()
extern "C"  int32_t XsdPositiveInteger_get_TypeCode_m2505067394 (XsdPositiveInteger_t346877240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdPositiveInteger::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdPositiveInteger_ParseValue_m2546373718 (XsdPositiveInteger_t346877240 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdPositiveInteger::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t1744280289 * XsdPositiveInteger_ParseValueType_m1819904320 (XsdPositiveInteger_t346877240 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
