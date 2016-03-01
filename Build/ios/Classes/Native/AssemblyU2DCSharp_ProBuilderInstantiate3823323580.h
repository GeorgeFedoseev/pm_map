#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_ProBuilderInstantiate_ObjectSele2519682289.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// ProBuilderInstantiate
struct  ProBuilderInstantiate_t3823323580  : public MonoBehaviour_t3012272455
{
	// UnityEngine.GameObject ProBuilderInstantiate::probuilderPrefab
	GameObject_t4012695102 * ___probuilderPrefab_3;
	// ProBuilderInstantiate/ObjectSelectionOptions ProBuilderInstantiate::objectToInstantiate
	int32_t ___objectToInstantiate_4;
	// UnityEngine.Rect ProBuilderInstantiate::prefWindow
	Rect_t1525428817  ___prefWindow_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ProBuilderInstantiate::generatedObjects
	List_1_t514686775 * ___generatedObjects_6;
	// UnityEngine.Vector2 ProBuilderInstantiate::mPos_screen
	Vector2_t3525329788  ___mPos_screen_7;
};
