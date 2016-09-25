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

// Mono.Xml.Schema.XsdNonPositiveInteger
struct XsdNonPositiveInteger_t4018722407;
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

// System.Void Mono.Xml.Schema.XsdNonPositiveInteger::.ctor()
extern "C"  void XsdNonPositiveInteger__ctor_m3796642155 (XsdNonPositiveInteger_t4018722407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdNonPositiveInteger::get_TypeCode()
extern "C"  int32_t XsdNonPositiveInteger_get_TypeCode_m778201437 (XsdNonPositiveInteger_t4018722407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdNonPositiveInteger::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdNonPositiveInteger_ParseValue_m2198460031 (XsdNonPositiveInteger_t4018722407 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdNonPositiveInteger::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t1744280289 * XsdNonPositiveInteger_ParseValueType_m479622601 (XsdNonPositiveInteger_t4018722407 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
