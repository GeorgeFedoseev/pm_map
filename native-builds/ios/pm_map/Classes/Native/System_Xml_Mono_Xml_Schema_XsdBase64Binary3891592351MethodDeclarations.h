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

// Mono.Xml.Schema.XsdBase64Binary
struct XsdBase64Binary_t3891592351;
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

// System.Void Mono.Xml.Schema.XsdBase64Binary::.ctor()
extern "C"  void XsdBase64Binary__ctor_m501055667 (XsdBase64Binary_t3891592351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdBase64Binary::.cctor()
extern "C"  void XsdBase64Binary__cctor_m2165727578 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlTypeCode Mono.Xml.Schema.XsdBase64Binary::get_TypeCode()
extern "C"  int32_t XsdBase64Binary_get_TypeCode_m2842837013 (XsdBase64Binary_t3891592351 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Xml.Schema.XsdBase64Binary::ParseValue(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  Il2CppObject * XsdBase64Binary_ParseValue_m1244909175 (XsdBase64Binary_t3891592351 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdBase64Binary::Length(System.String)
extern "C"  int32_t XsdBase64Binary_Length_m2916736813 (XsdBase64Binary_t3891592351 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdBase64Binary::isPad(System.Char)
extern "C"  bool XsdBase64Binary_isPad_m816151771 (Il2CppObject * __this /* static, unused */, Il2CppChar ___octect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdBase64Binary::isData(System.Char)
extern "C"  bool XsdBase64Binary_isData_m2829309632 (Il2CppObject * __this /* static, unused */, Il2CppChar ___octect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ValueType Mono.Xml.Schema.XsdBase64Binary::ParseValueType(System.String,System.Xml.XmlNameTable,System.Xml.IXmlNamespaceResolver)
extern "C"  ValueType_t1744280289 * XsdBase64Binary_ParseValueType_m451888577 (XsdBase64Binary_t3891592351 * __this, String_t* ___s0, XmlNameTable_t1216706026 * ___nameTable1, Il2CppObject * ___nsmgr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
