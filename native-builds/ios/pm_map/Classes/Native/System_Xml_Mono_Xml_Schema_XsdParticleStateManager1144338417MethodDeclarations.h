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

// Mono.Xml.Schema.XsdParticleStateManager
struct XsdParticleStateManager_t1144338417;
// Mono.Xml.Schema.XsdValidationState
struct XsdValidationState_t2934101963;
// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t3280570797;
// Mono.Xml.Schema.XsdElementValidationState
struct XsdElementValidationState_t2329295339;
// System.Xml.Schema.XmlSchemaElement
struct XmlSchemaElement_t3664762632;
// Mono.Xml.Schema.XsdSequenceValidationState
struct XsdSequenceValidationState_t1326242762;
// System.Xml.Schema.XmlSchemaSequence
struct XmlSchemaSequence_t4050883055;
// Mono.Xml.Schema.XsdChoiceValidationState
struct XsdChoiceValidationState_t1509569130;
// System.Xml.Schema.XmlSchemaChoice
struct XmlSchemaChoice_t2942714895;
// Mono.Xml.Schema.XsdAllValidationState
struct XsdAllValidationState_t3644125094;
// System.Xml.Schema.XmlSchemaAll
struct XmlSchemaAll_t4125456685;
// Mono.Xml.Schema.XsdAnyValidationState
struct XsdAnyValidationState_t4008767483;
// System.Xml.Schema.XmlSchemaAny
struct XmlSchemaAny_t4125456760;
// Mono.Xml.Schema.XsdEmptyValidationState
struct XsdEmptyValidationState_t3672997626;

#include "codegen/il2cpp-codegen.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaContentProce2425104824.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaObject3280570797.h"
#include "System_Xml_Mono_Xml_Schema_XsdValidationState2934101963.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaElement3664762632.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaSequence4050883055.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaChoice2942714895.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAll4125456685.h"
#include "System_Xml_System_Xml_Schema_XmlSchemaAny4125456760.h"

// System.Void Mono.Xml.Schema.XsdParticleStateManager::.ctor()
extern "C"  void XsdParticleStateManager__ctor_m2534515617 (XsdParticleStateManager_t1144338417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Schema.XmlSchemaContentProcessing Mono.Xml.Schema.XsdParticleStateManager::get_ProcessContents()
extern "C"  int32_t XsdParticleStateManager_get_ProcessContents_m3414670437 (XsdParticleStateManager_t1144338417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PushContext()
extern "C"  void XsdParticleStateManager_PushContext_m3162445364 (XsdParticleStateManager_t1144338417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::PopContext()
extern "C"  void XsdParticleStateManager_PopContext_m3702761121 (XsdParticleStateManager_t1144338417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.Schema.XsdParticleStateManager::SetProcessContents(System.Xml.Schema.XmlSchemaContentProcessing)
extern "C"  void XsdParticleStateManager_SetProcessContents_m1180669823 (XsdParticleStateManager_t1144338417 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::Create(System.Xml.Schema.XmlSchemaObject)
extern "C"  XsdValidationState_t2934101963 * XsdParticleStateManager_Create_m2399089610 (XsdParticleStateManager_t1144338417 * __this, XmlSchemaObject_t3280570797 * ___xsobj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdValidationState Mono.Xml.Schema.XsdParticleStateManager::MakeSequence(Mono.Xml.Schema.XsdValidationState,Mono.Xml.Schema.XsdValidationState)
extern "C"  XsdValidationState_t2934101963 * XsdParticleStateManager_MakeSequence_m4091517547 (XsdParticleStateManager_t1144338417 * __this, XsdValidationState_t2934101963 * ___head0, XsdValidationState_t2934101963 * ___rest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdElementValidationState Mono.Xml.Schema.XsdParticleStateManager::AddElement(System.Xml.Schema.XmlSchemaElement)
extern "C"  XsdElementValidationState_t2329295339 * XsdParticleStateManager_AddElement_m3637166506 (XsdParticleStateManager_t1144338417 * __this, XmlSchemaElement_t3664762632 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdSequenceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddSequence(System.Xml.Schema.XmlSchemaSequence)
extern "C"  XsdSequenceValidationState_t1326242762 * XsdParticleStateManager_AddSequence_m155029943 (XsdParticleStateManager_t1144338417 * __this, XmlSchemaSequence_t4050883055 * ___sequence0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdChoiceValidationState Mono.Xml.Schema.XsdParticleStateManager::AddChoice(System.Xml.Schema.XmlSchemaChoice)
extern "C"  XsdChoiceValidationState_t1509569130 * XsdParticleStateManager_AddChoice_m2779935447 (XsdParticleStateManager_t1144338417 * __this, XmlSchemaChoice_t2942714895 * ___choice0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAllValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAll(System.Xml.Schema.XmlSchemaAll)
extern "C"  XsdAllValidationState_t3644125094 * XsdParticleStateManager_AddAll_m1560994821 (XsdParticleStateManager_t1144338417 * __this, XmlSchemaAll_t4125456685 * ___all0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdAnyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddAny(System.Xml.Schema.XmlSchemaAny)
extern "C"  XsdAnyValidationState_t4008767483 * XsdParticleStateManager_AddAny_m21270458 (XsdParticleStateManager_t1144338417 * __this, XmlSchemaAny_t4125456760 * ___any0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.Schema.XsdEmptyValidationState Mono.Xml.Schema.XsdParticleStateManager::AddEmpty()
extern "C"  XsdEmptyValidationState_t3672997626 * XsdParticleStateManager_AddEmpty_m219182213 (XsdParticleStateManager_t1144338417 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
