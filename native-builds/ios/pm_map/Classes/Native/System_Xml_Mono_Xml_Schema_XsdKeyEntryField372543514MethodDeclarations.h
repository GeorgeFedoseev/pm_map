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

// Mono.Xml.Schema.XsdKeyEntryField
struct XsdKeyEntryField_t372543514;
// Mono.Xml.Schema.XsdKeyEntry
struct XsdKeyEntry_t526158530;
// Mono.Xml.Schema.XsdIdentityField
struct XsdIdentityField_t471607183;
// System.Object
struct Il2CppObject;
// Mono.Xml.Schema.XsdAnySimpleType
struct XsdAnySimpleType_t730532811;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t2849465358;
// Mono.Xml.Schema.XsdIdentityPath
struct XsdIdentityPath_t691771506;
// System.Xml.XmlNameTable
struct XmlNameTable_t1216706026;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.String
struct String_t;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t3774973253;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdKeyEntry526158530.h"
#include "System_Xml_Mono_Xml_Schema_XsdIdentityField471607183.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_Xml_Mono_Xml_Schema_XsdAnySimpleType730532811.h"
#include "System_Xml_System_Xml_XmlNameTable1216706026.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.Schema.XsdKeyEntryField::.ctor(Mono.Xml.Schema.XsdKeyEntry,Mono.Xml.Schema.XsdIdentityField)
extern "C"  void XsdKeyEntryField__ctor_m1596920355 (XsdKeyEntryField_t372543514 * __this, XsdKeyEntry_t526158530 * ___entry0, XsdIdentityField_t471607183 * ___field1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdKeyEntryField::SetIdentityField(System.Object,System.Boolean,Mono.Xml.Schema.XsdAnySimpleType,System.Int32,System.Xml.IXmlLineInfo)
extern "C"  bool XsdKeyEntryField_SetIdentityField_m3089473348 (XsdKeyEntryField_t372543514 * __this, Il2CppObject * ___identity0, bool ___isXsiNil1, XsdAnySimpleType_t730532811 * ___type2, int32_t ___depth3, Il2CppObject * ___li4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdIdentityPath Mono.Xml.Schema.XsdKeyEntryField::Matches(System.Boolean,System.Object,System.Xml.XmlNameTable,System.Collections.ArrayList,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Xml.IXmlLineInfo,System.Int32,System.String,System.String,System.Object)
extern "C"  XsdIdentityPath_t691771506 * XsdKeyEntryField_Matches_m3855161845 (XsdKeyEntryField_t372543514 * __this, bool ___matchesAttr0, Il2CppObject * ___sender1, XmlNameTable_t1216706026 * ___nameTable2, ArrayList_t3948406897 * ___qnameStack3, String_t* ___sourceUri4, Il2CppObject * ___schemaType5, Il2CppObject * ___nsResolver6, Il2CppObject * ___lineInfo7, int32_t ___depth8, String_t* ___attrName9, String_t* ___attrNS10, Il2CppObject * ___attrValue11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdKeyEntryField::FillAttributeFieldValue(System.Object,System.Xml.XmlNameTable,System.String,System.Object,System.Xml.IXmlNamespaceResolver,System.Object,System.Xml.IXmlLineInfo,System.Int32)
extern "C"  void XsdKeyEntryField_FillAttributeFieldValue_m618592376 (XsdKeyEntryField_t372543514 * __this, Il2CppObject * ___sender0, XmlNameTable_t1216706026 * ___nameTable1, String_t* ___sourceUri2, Il2CppObject * ___schemaType3, Il2CppObject * ___nsResolver4, Il2CppObject * ___identity5, Il2CppObject * ___lineInfo6, int32_t ___depth7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
