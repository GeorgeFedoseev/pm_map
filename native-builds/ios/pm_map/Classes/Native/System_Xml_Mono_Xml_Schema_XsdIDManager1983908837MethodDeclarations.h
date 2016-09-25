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

// Mono.Xml.Schema.XsdIDManager
struct XsdIDManager_t1983908837;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t196391954;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDatatype196391954.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.Schema.XsdIDManager::.ctor()
extern "C"  void XsdIDManager__ctor_m2232844849 (XsdIDManager_t1983908837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.Schema.XsdIDManager::get_MissingIDReferences()
extern "C"  ArrayList_t3948406897 * XsdIDManager_get_MissingIDReferences_m2645699709 (XsdIDManager_t1983908837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdIDManager::OnStartElement()
extern "C"  void XsdIDManager_OnStartElement_m3711630316 (XsdIDManager_t1983908837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::AssessEachAttributeIdentityConstraint(System.Xml.Schema.XmlSchemaDatatype,System.Object,System.String)
extern "C"  String_t* XsdIDManager_AssessEachAttributeIdentityConstraint_m3631391673 (XsdIDManager_t1983908837 * __this, XmlSchemaDatatype_t196391954 * ___dt0, Il2CppObject * ___parsedValue1, String_t* ___elementName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdIDManager::HasMissingIDReferences()
extern "C"  bool XsdIDManager_HasMissingIDReferences_m321071658 (XsdIDManager_t1983908837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.Schema.XsdIDManager::GetMissingIDString()
extern "C"  String_t* XsdIDManager_GetMissingIDString_m256768658 (XsdIDManager_t1983908837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
