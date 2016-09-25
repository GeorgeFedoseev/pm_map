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

// TMPro.InlineGraphicManager
struct InlineGraphicManager_t3583857972;
// TMPro.SpriteAsset
struct SpriteAsset_t3304235981;
// TMPro.InlineGraphic
struct InlineGraphic_t3606901041;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t3950887807;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1796391381;
// TMPro.SpriteInfo
struct SpriteInfo_t1299071017;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_SpriteAsset3304235981.h"
#include "AssemblyU2DCSharp_TMPro_InlineGraphic3606901041.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TMPro.InlineGraphicManager::.ctor()
extern "C"  void InlineGraphicManager__ctor_m2241683619 (InlineGraphicManager_t3583857972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.SpriteAsset TMPro.InlineGraphicManager::get_spriteAsset()
extern "C"  SpriteAsset_t3304235981 * InlineGraphicManager_get_spriteAsset_m1200753793 (InlineGraphicManager_t3583857972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::set_spriteAsset(TMPro.SpriteAsset)
extern "C"  void InlineGraphicManager_set_spriteAsset_m152851570 (InlineGraphicManager_t3583857972 * __this, SpriteAsset_t3304235981 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.InlineGraphic TMPro.InlineGraphicManager::get_inlineGraphic()
extern "C"  InlineGraphic_t3606901041 * InlineGraphicManager_get_inlineGraphic_m456337737 (InlineGraphicManager_t3583857972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::set_inlineGraphic(TMPro.InlineGraphic)
extern "C"  void InlineGraphicManager_set_inlineGraphic_m1631711594 (InlineGraphicManager_t3583857972 * __this, InlineGraphic_t3606901041 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer TMPro.InlineGraphicManager::get_canvasRenderer()
extern "C"  CanvasRenderer_t3950887807 * InlineGraphicManager_get_canvasRenderer_m2937547760 (InlineGraphicManager_t3583857972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UIVertex[] TMPro.InlineGraphicManager::get_uiVertex()
extern "C"  UIVertexU5BU5D_t1796391381* InlineGraphicManager_get_uiVertex_m3457494030 (InlineGraphicManager_t3583857972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::Awake()
extern "C"  void InlineGraphicManager_Awake_m2479288838 (InlineGraphicManager_t3583857972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::OnEnable()
extern "C"  void InlineGraphicManager_OnEnable_m1621786627 (InlineGraphicManager_t3583857972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::OnDisable()
extern "C"  void InlineGraphicManager_OnDisable_m3471682442 (InlineGraphicManager_t3583857972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::OnDestroy()
extern "C"  void InlineGraphicManager_OnDestroy_m1354247196 (InlineGraphicManager_t3583857972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::LoadSpriteAsset(TMPro.SpriteAsset)
extern "C"  void InlineGraphicManager_LoadSpriteAsset_m3675554715 (InlineGraphicManager_t3583857972 * __this, SpriteAsset_t3304235981 * ___spriteAsset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::AddInlineGraphicsChild()
extern "C"  void InlineGraphicManager_AddInlineGraphicsChild_m2835589976 (InlineGraphicManager_t3583857972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::AllocatedVertexBuffers(System.Int32)
extern "C"  void InlineGraphicManager_AllocatedVertexBuffers_m2474307194 (InlineGraphicManager_t3583857972 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::UpdatePivot(UnityEngine.Vector2)
extern "C"  void InlineGraphicManager_UpdatePivot_m2020230400 (InlineGraphicManager_t3583857972 * __this, Vector2_t4282066565  ___pivot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::ClearUIVertex()
extern "C"  void InlineGraphicManager_ClearUIVertex_m2604888870 (InlineGraphicManager_t3583857972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::DrawSprite(UnityEngine.UIVertex[],System.Int32)
extern "C"  void InlineGraphicManager_DrawSprite_m365998590 (InlineGraphicManager_t3583857972 * __this, UIVertexU5BU5D_t1796391381* ___uiVertices0, int32_t ___spriteCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.SpriteInfo TMPro.InlineGraphicManager::GetSprite(System.Int32)
extern "C"  SpriteInfo_t1299071017 * InlineGraphicManager_GetSprite_m2825052829 (InlineGraphicManager_t3583857972 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.InlineGraphicManager::SetUIVertex(UnityEngine.UIVertex[])
extern "C"  void InlineGraphicManager_SetUIVertex_m2007406730 (InlineGraphicManager_t3583857972 * __this, UIVertexU5BU5D_t1796391381* ___uiVertex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
