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

// Mono.Xml.Schema.XsdAppendedValidationState
struct XsdAppendedValidationState_t2779068242;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1144338417;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t2934101963;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager1144338417.h"
#include "System_Xml_Mono_Xml_Schema_XsdValidationState2934101963.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.Schema.XsdAppendedValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager,Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C"  void XsdAppendedValidationState__ctor_m3138842574 (XsdAppendedValidationState_t2779068242 * __this, XsdParticleStateManager_t1144338417 * ___manager0, XsdValidationState_t2934101963 * ___head1, XsdValidationState_t2934101963 * ___rest2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdAppendedValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t2934101963 * XsdAppendedValidationState_EvaluateStartElement_m3658165684 (XsdAppendedValidationState_t2779068242 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateEndElement()
extern "C"  bool XsdAppendedValidationState_EvaluateEndElement_m3435780930 (XsdAppendedValidationState_t2779068242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdAppendedValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdAppendedValidationState_EvaluateIsEmptiable_m1558781678 (XsdAppendedValidationState_t2779068242 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
