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

// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t795849104;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1144338417;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t2934101963;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager1144338417.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Xml.Schema.XsdInvalidValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdInvalidValidationState__ctor_m3861477520 (XsdInvalidValidationState_t795849104 * __this, XsdParticleStateManager_t1144338417 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdInvalidValidationState::EvaluateStartElement(System.String,System.String)
extern "C"  XsdValidationState_t2934101963 * XsdInvalidValidationState_EvaluateStartElement_m2655142848 (XsdInvalidValidationState_t795849104 * __this, String_t* ___name0, String_t* ___ns1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdInvalidValidationState::EvaluateEndElement()
extern "C"  bool XsdInvalidValidationState_EvaluateEndElement_m4128269172 (XsdInvalidValidationState_t795849104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.Schema.XsdInvalidValidationState::EvaluateIsEmptiable()
extern "C"  bool XsdInvalidValidationState_EvaluateIsEmptiable_m1551080700 (XsdInvalidValidationState_t795849104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
