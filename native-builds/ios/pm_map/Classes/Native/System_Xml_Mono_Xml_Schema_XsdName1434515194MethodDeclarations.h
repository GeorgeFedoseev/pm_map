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

// Mono.Xml.Schema.XsdName
struct XsdName_t1434515194;
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
#include "System_Xml_System_Xml_XmlTokenizedType3753548874.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode3316180404.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"

// System.Void Mono.Xml.Schema.XsdName::.ctor()
extern "C"  void XsdName__ctor_m965229240 (XsdName_t1434515194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdName::get_TokenizedType()
extern "C"  int32_t XsdName_get_TokenizedType_m2892179553 (XsdName_t1434515194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdName::get_TypeCode()
extern "C"  int32_t XsdName_get_TypeCode_m3781311088 (XsdName_t1434515194 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdName::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdName_ParseValue_m1922011730 (XsdName_t1434515194 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdName::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t1744280289 * XsdName_ParseValueType_m728831004 (XsdName_t1434515194 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
