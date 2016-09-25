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

// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t3644125094;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t4125456685;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1144338417;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t2934101963;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAll4125456685.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager1144338417.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.Schema.XsdAllValidationState::.ctor(System.Xml.Schema.XmlSchemaAll,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdAllValidationState__ctor_m3090670264 (XsdAllValidationState_t3644125094 * __this, XmlSchemaAll_t4125456685 * ___all0, XsdParticleStateManager_t1144338417 * ___manager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAllValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t2934101963 * XsdAllValidationState_EvaluateStartElement_m49462378 (XsdAllValidationState_t3644125094 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateEndElement()
extern "C"  bool XsdAllValidationState_EvaluateEndElement_m2165262858 (XsdAllValidationState_t3644125094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAllValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdAllValidationState_EvaluateIsEmptiable_m827427110 (XsdAllValidationState_t3644125094 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
