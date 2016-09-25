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

// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t3672997626;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1144338417;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t2934101963;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager1144338417.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.Schema.XsdEmptyValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdEmptyValidationState__ctor_m3160291962 (XsdEmptyValidationState_t3672997626 * __this, XsdParticleStateManager_t1144338417 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdEmptyValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t2934101963 * XsdEmptyValidationState_EvaluateStartElement_m1203254102 (XsdEmptyValidationState_t3672997626 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateEndElement()
extern "C"  bool XsdEmptyValidationState_EvaluateEndElement_m1968149470 (XsdEmptyValidationState_t3672997626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdEmptyValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdEmptyValidationState_EvaluateIsEmptiable_m3306846674 (XsdEmptyValidationState_t3672997626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
