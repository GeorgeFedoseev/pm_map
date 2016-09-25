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

// Mono.Xml.Schema.XsdEntities
struct XsdEntities_t2242065712;
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

// System.Void Mono.Xml.Schema.XsdEntities::.ctor()
extern "C"  void XsdEntities__ctor_m61127234 (XsdEntities_t2242065712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlTokenizedType Mono.Xml.Schema.XsdEntities::get_TokenizedType()
extern "C"  int32_t XsdEntities_get_TokenizedType_m1803638891 (XsdEntities_t2242065712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdEntities::get_TypeCode()
extern "C"  int32_t XsdEntities_get_TypeCode_m1016299942 (XsdEntities_t2242065712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdEntities::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdEntities_ParseValue_m2666879752 (XsdEntities_t2242065712 * __this, String_t* ___value0, XmlNameTable_t1216706026 * ___nt1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdEntities::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t1744280289 * XsdEntities_ParseValueType_m2781927890 (XsdEntities_t2242065712 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Xml.Schema.XsdEntities::GetValidatedArray(System.String,System.Xml.XmlNameTable)
extern "C"  StringU5BU5D_t4054002952* XsdEntities_GetValidatedArray_m995508170 (XsdEntities_t2242065712 * __this, String_t* ___value0, XmlNameTable_t1216706026 * ___nt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
