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

// Mono.Xml.Schema.XsdNMTokens
struct XsdNMTokens_t613775752;
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

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_XmlTokenizedType3753548874.h"
#include "System_Xml_System_Xml_Schema_XmlTypeCode3316180404.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"

// System.Void Mono.Xml.Schema.XsdNMTokens::.ctor()
extern "C"  void XsdNMTokens__ctor_m2419972330 (XsdNMTokens_t613775752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdNMTokens::get_TokenizedType()
extern "C"  int32_t XsdNMTokens_get_TokenizedType_m3143219987 (XsdNMTokens_t613775752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdNMTokens::get_TypeCode()
extern "C"  int32_t XsdNMTokens_get_TypeCode_m2430735870 (XsdNMTokens_t613775752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdNMTokens::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdNMTokens_ParseValue_m3343074144 (XsdNMTokens_t613775752 * __this, String_t* ___value0, XmlNameTable_t1216706026 * ___nt1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdNMTokens::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t1744280289 * XsdNMTokens_ParseValueType_m2848118314 (XsdNMTokens_t613775752 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdNMTokens::GetValidatedArray(System.String,System.Xml.XmlNameTable)
extern "C"  StringU5BU5D_t4054002952* XsdNMTokens_GetValidatedArray_m4037666338 (XsdNMTokens_t613775752 * __this, String_t* ___value0, XmlNameTable_t1216706026 * ___nt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
