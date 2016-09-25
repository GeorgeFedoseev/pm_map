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

// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t2934101963;
// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1144338417;
// Mono.Xml.Schema.XsdInvalidValidationState
struct XsdInvalidValidationState_t795849104;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_Mono_Xml_Schema_XsdParticleStateManager1144338417.h"

// System.Void Mono.Xml.Schema.XsdValidationState::.ctor(Mono.Xml.Schema.XsdParticleStateManager)
extern "C"  void XsdValidationState__ctor_m3184185927 (XsdValidationState_t2934101963 * __this, XsdParticleStateManager_t1144338417 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationState::.cctor()
extern "C"  void XsdValidationState__cctor_m1296536962 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdInvalidValidationState Mono.Xml.Schema.XsdValidationState::get_Invalid()
extern "C"  XsdInvalidValidationState_t795849104 * XsdValidationState_get_Invalid_m3717145059 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdParticleStateManager Mono.Xml.Schema.XsdValidationState::get_Manager()
extern "C"  XsdParticleStateManager_t1144338417 * XsdValidationState_get_Manager_m3368152570 (XsdValidationState_t2934101963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidationState::get_Occured()
extern "C"  int32_t XsdValidationState_get_Occured_m1460368425 (XsdValidationState_t2934101963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.Schema.XsdValidationState::get_OccuredInternal()
extern "C"  int32_t XsdValidationState_get_OccuredInternal_m181973958 (XsdValidationState_t2934101963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdValidationState::set_OccuredInternal(System.Int32)
extern "C"  void XsdValidationState_set_OccuredInternal_m3875756741 (XsdValidationState_t2934101963 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
