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

// CameraScript
struct CameraScript_t3510117488;
// System.Collections.Generic.List`1<FacilityScript>
struct List_1_t76155966;
// FacilityScript
struct FacilityScript_t3002937710;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_FacilityScript3002937710.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void CameraScript::.ctor()
extern "C"  void CameraScript__ctor_m3382299691 (CameraScript_t3510117488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraScript::Awake()
extern "C"  void CameraScript_Awake_m3619904910 (CameraScript_t3510117488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraScript::Update()
extern "C"  void CameraScript_Update_m3498937410 (CameraScript_t3510117488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraScript::FitFacilities(System.Collections.Generic.List`1<FacilityScript>)
extern "C"  void CameraScript_FitFacilities_m3076330501 (CameraScript_t3510117488 * __this, List_1_t76155966 * ____facilities0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraScript::setTargetFacility(FacilityScript,System.Single,System.Single)
extern "C"  void CameraScript_setTargetFacility_m3943744411 (CameraScript_t3510117488 * __this, FacilityScript_t3002937710 * ___facility0, float ____lookHeight1, float ____lookDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraScript::stopFlying()
extern "C"  void CameraScript_stopFlying_m970958474 (CameraScript_t3510117488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CameraScript::LateUpdate()
extern "C"  void CameraScript_LateUpdate_m752574728 (CameraScript_t3510117488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CameraScript::AngleSigned(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float CameraScript_AngleSigned_m2096774643 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___v10, Vector3_t4282066566  ___v21, Vector3_t4282066566  ___n2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraScript::IsPointerOverUIObject()
extern "C"  bool CameraScript_IsPointerOverUIObject_m1117068719 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 CameraScript::getTouchPos()
extern "C"  Vector2_t4282066565  CameraScript_getTouchPos_m1173240441 (CameraScript_t3510117488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 CameraScript::getTouch2Pos()
extern "C"  Vector2_t4282066565  CameraScript_getTouch2Pos_m1123164543 (CameraScript_t3510117488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraScript::hasTouches()
extern "C"  bool CameraScript_hasTouches_m3598566080 (CameraScript_t3510117488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CameraScript::touchCount()
extern "C"  int32_t CameraScript_touchCount_m1189456695 (CameraScript_t3510117488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CameraScript::touchInput()
extern "C"  bool CameraScript_touchInput_m342595672 (CameraScript_t3510117488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 CameraScript::getWorldPoint(UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  CameraScript_getWorldPoint_m1309001336 (CameraScript_t3510117488 * __this, Vector2_t4282066565  ___screenPoint0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
