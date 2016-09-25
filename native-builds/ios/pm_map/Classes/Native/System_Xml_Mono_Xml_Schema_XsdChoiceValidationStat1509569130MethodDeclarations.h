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

// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t1509569130;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t2942714895;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1144338417;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t2934101963;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaChoice2942714895.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager1144338417.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.Schema.XsdChoiceValidationState::.ctor(System.Xml.Schema.XmlSchemaChoice,Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdChoiceValidationState__ctor_m2217195184 (XsdChoiceValidationState_t1509569130 * __this, XmlSchemaChoice_t2942714895 * ___choice0, XsdParticleStateManager_t1144338417 * ___manager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdChoiceValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t2934101963 * XsdChoiceValidationState_EvaluateStartElement_m750387804 (XsdChoiceValidationState_t1509569130 * __this, String_t* ___localName0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateEndElement()
extern "C"  bool XsdChoiceValidationState_EvaluateEndElement_m2025657818 (XsdChoiceValidationState_t1509569130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdChoiceValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdChoiceValidationState_EvaluateIsEmptiable_m794638166 (XsdChoiceValidationState_t1509569130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
