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

// Mono.Xml.Schema.XsdNCName
struct XsdNCName_t3308285615;
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

// System.Void Mono.Xml.Schema.XsdNCName::.ctor()
extern "C"  void XsdNCName__ctor_m4137434915 (XsdNCName_t3308285615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdNCName::get_TokenizedType()
extern "C"  int32_t XsdNCName_get_TokenizedType_m679654412 (XsdNCName_t3308285615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdNCName::get_TypeCode()
extern "C"  int32_t XsdNCName_get_TypeCode_m414257829 (XsdNCName_t3308285615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdNCName::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdNCName_ParseValue_m2846312007 (XsdNCName_t3308285615 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdNCName::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t1744280289 * XsdNCName_ParseValueType_m803006865 (XsdNCName_t3308285615 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
