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

// UnityEngine.Material
struct Material_t3870600107;
// TMPro.TextMeshProFont
struct TextMeshProFont_t3602967588;
// UnityEngine.Object
struct Object_t3071478659;
// TMPro.TextMeshPro
struct TextMeshPro_t3198095413;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t3603375195;
// System.Object
struct Il2CppObject;
// TMPro.Compute_DT_EventArgs
struct Compute_DT_EventArgs_t2335785766;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "AssemblyU2DCSharp_TMPro_TextMeshProFont3602967588.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "AssemblyU2DCSharp_TMPro_TextMeshPro3198095413.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharp_TMPro_TextMeshProUGUI3603375195.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_TMPro_Compute_DT_EventArgs2335785766.h"

// System.Void TMPro.TMPro_EventManager::.cctor()
extern "C"  void TMPro_EventManager__cctor_m2818439658 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_PRE_RENDER_OBJECT_CHANGED()
extern "C"  void TMPro_EventManager_ON_PRE_RENDER_OBJECT_CHANGED_m818750114 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_MATERIAL_PROPERTY_CHANGED(System.Boolean,UnityEngine.Material)
extern "C"  void TMPro_EventManager_ON_MATERIAL_PROPERTY_CHANGED_m1168328302 (Il2CppObject * __this /* static, unused */, bool ___isChanged0, Material_t3870600107 * ___mat1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_FONT_PROPERTY_CHANGED(System.Boolean,TMPro.TextMeshProFont)
extern "C"  void TMPro_EventManager_ON_FONT_PROPERTY_CHANGED_m1284334998 (Il2CppObject * __this /* static, unused */, bool ___isChanged0, TextMeshProFont_t3602967588 * ___font1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_SPRITE_ASSET_PROPERTY_CHANGED(System.Boolean,UnityEngine.Object)
extern "C"  void TMPro_EventManager_ON_SPRITE_ASSET_PROPERTY_CHANGED_m3912664197 (Il2CppObject * __this /* static, unused */, bool ___isChanged0, Object_t3071478659 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_TEXTMESHPRO_PROPERTY_CHANGED(System.Boolean,TMPro.TextMeshPro)
extern "C"  void TMPro_EventManager_ON_TEXTMESHPRO_PROPERTY_CHANGED_m2401363393 (Il2CppObject * __this /* static, unused */, bool ___isChanged0, TextMeshPro_t3198095413 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_DRAG_AND_DROP_MATERIAL_CHANGED(UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material)
extern "C"  void TMPro_EventManager_ON_DRAG_AND_DROP_MATERIAL_CHANGED_m1015226610 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___sender0, Material_t3870600107 * ___currentMaterial1, Material_t3870600107 * ___newMaterial2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_TEXT_STYLE_PROPERTY_CHANGED(System.Boolean)
extern "C"  void TMPro_EventManager_ON_TEXT_STYLE_PROPERTY_CHANGED_m3403900514 (Il2CppObject * __this /* static, unused */, bool ___isChanged0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_TEXT_CHANGED(UnityEngine.Object)
extern "C"  void TMPro_EventManager_ON_TEXT_CHANGED_m3277389773 (Il2CppObject * __this /* static, unused */, Object_t3071478659 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(System.Boolean,TMPro.TextMeshProUGUI)
extern "C"  void TMPro_EventManager_ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED_m2138064764 (Il2CppObject * __this /* static, unused */, bool ___isChanged0, TextMeshProUGUI_t3603375195 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_BASE_MATERIAL_CHANGED(UnityEngine.Material)
extern "C"  void TMPro_EventManager_ON_BASE_MATERIAL_CHANGED_m1216187469 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TMPro_EventManager::ON_COMPUTE_DT_EVENT(System.Object,TMPro.Compute_DT_EventArgs)
extern "C"  void TMPro_EventManager_ON_COMPUTE_DT_EVENT_m661166780 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___Sender0, Compute_DT_EventArgs_t2335785766 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
