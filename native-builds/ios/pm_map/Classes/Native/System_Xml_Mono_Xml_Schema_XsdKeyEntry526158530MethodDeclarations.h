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

// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t526158530;
// Mono.Xml.Schema.XsdKeyTable
struct XsdKeyTable_t539606558;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t2849465358;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Object
struct Il2CppObject;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyTable539606558.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntry526158530.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.Schema.XsdKeyEntry::.ctor(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  void XsdKeyEntry__ctor_m2466732136 (XsdKeyEntry_t526158530 * __this, XsdKeyTable_t539606558 * ___keyseq0, int32_t ___depth1, Il2CppObject * ___li2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::get_KeyFound()
extern "C"  bool XsdKeyEntry_get_KeyFound_m3173730424 (XsdKeyEntry_t526158530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::Init(Mono.Xml.Schema.XsdKeyTable,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  void XsdKeyEntry_Init_m3672102620 (XsdKeyEntry_t526158530 * __this, XsdKeyTable_t539606558 * ___keyseq0, int32_t ___depth1, Il2CppObject * ___li2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntry::CompareIdentity(Mono.Xml.Schema.XsdKeyEntry)
extern "C"  bool XsdKeyEntry_CompareIdentity_m1024870280 (XsdKeyEntry_t526158530 * __this, XsdKeyEntry_t526158530 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntry::ProcessMatch(System.Boolean,System.Collections.ArrayList,System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object,System.Boolean,System.Collections.ArrayList)
extern "C"  void XsdKeyEntry_ProcessMatch_m4242695872 (XsdKeyEntry_t526158530 * __this, bool ___isAttribute0, ArrayList_t3948406897 * ___qnameStack1, Il2CppObject * ___sender2, XmlNameTable_t1216706026 * ___nameTable3, String_t* ___sourceUri4, Il2CppObject * ___schemaType5, Il2CppObject * ___nsResolver6, Il2CppObject * ___li7, int32_t ___depth8, String_t* ___attrName9, String_t* ___attrNS10, Il2CppObject * ___attrValue11, bool ___isXsiNil12, ArrayList_t3948406897 * ___currentKeyFieldConsumers13, const MethodInfo* method) IL2CPP_METHOD_ATTR;
