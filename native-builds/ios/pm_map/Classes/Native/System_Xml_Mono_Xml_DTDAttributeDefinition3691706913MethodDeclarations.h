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

// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3691706913;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;
// System.String
struct String_t;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t196391954;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_DTDObjectModel3593115196.h"
#include "mscorlib_System_String7231557.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaDatatype196391954.h"
#include "System_Xml_Mono_Xml_DTDAttributeOccurenceType1072212747.h"

// System.Void Mono.Xml.DTDAttributeDefinition::.ctor(Mono.Xml.DTDObjectModel)
extern "C"  void DTDAttributeDefinition__ctor_m3365556822 (DTDAttributeDefinition_t3691706913 * __this, DTDObjectModel_t3593115196 * ___root0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_Name()
extern "C"  String_t* DTDAttributeDefinition_get_Name_m1998089073 (DTDAttributeDefinition_t3691706913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_Name(System.String)
extern "C"  void DTDAttributeDefinition_set_Name_m236458650 (DTDAttributeDefinition_t3691706913 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaDatatype Mono.Xml.DTDAttributeDefinition::get_Datatype()
extern "C"  XmlSchemaDatatype_t196391954 * DTDAttributeDefinition_get_Datatype_m2869597951 (DTDAttributeDefinition_t3691706913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_Datatype(System.Xml.Schema.XmlSchemaDatatype)
extern "C"  void DTDAttributeDefinition_set_Datatype_m2356007052 (DTDAttributeDefinition_t3691706913 * __this, XmlSchemaDatatype_t196391954 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeOccurenceType Mono.Xml.DTDAttributeDefinition::get_OccurenceType()
extern "C"  int32_t DTDAttributeDefinition_get_OccurenceType_m2929132692 (DTDAttributeDefinition_t3691706913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_OccurenceType(Mono.Xml.DTDAttributeOccurenceType)
extern "C"  void DTDAttributeDefinition_set_OccurenceType_m3173991567 (DTDAttributeDefinition_t3691706913 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::get_EnumeratedAttributeDeclaration()
extern "C"  ArrayList_t3948406897 * DTDAttributeDefinition_get_EnumeratedAttributeDeclaration_m2704986805 (DTDAttributeDefinition_t3691706913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Xml.DTDAttributeDefinition::get_EnumeratedNotations()
extern "C"  ArrayList_t3948406897 * DTDAttributeDefinition_get_EnumeratedNotations_m150762300 (DTDAttributeDefinition_t3691706913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_DefaultValue()
extern "C"  String_t* DTDAttributeDefinition_get_DefaultValue_m347427414 (DTDAttributeDefinition_t3691706913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::get_UnresolvedDefaultValue()
extern "C"  String_t* DTDAttributeDefinition_get_UnresolvedDefaultValue_m3220743175 (DTDAttributeDefinition_t3691706913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttributeDefinition::set_UnresolvedDefaultValue(System.String)
extern "C"  void DTDAttributeDefinition_set_UnresolvedDefaultValue_m3137820036 (DTDAttributeDefinition_t3691706913 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDAttributeDefinition::ComputeDefaultValue()
extern "C"  String_t* DTDAttributeDefinition_ComputeDefaultValue_m3929866668 (DTDAttributeDefinition_t3691706913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
