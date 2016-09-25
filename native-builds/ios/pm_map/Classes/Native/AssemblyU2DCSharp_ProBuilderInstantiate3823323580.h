#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_ProBuilderInstantiate_ObjectSelec619311780.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ProBuilderInstantiate
struct  ProBuilderInstantiate_t3823323580  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ProBuilderInstantiate::probuilderPrefab
	GameObject_t3674682005 * ___probuilderPrefab_3;
	// ProBuilderInstantiate/ObjectSelectionOptions ProBuilderInstantiate::objectToInstantiate
	int32_t ___objectToInstantiate_4;
	// UnityEngine.Rect ProBuilderInstantiate::prefWindow
	Rect_t4241904616  ___prefWindow_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ProBuilderInstantiate::generatedObjects
	List_1_t747900261 * ___generatedObjects_6;
	// UnityEngine.Vector2 ProBuilderInstantiate::mPos_screen
	Vector2_t4282066565  ___mPos_screen_7;

public:
	inline static int32_t get_offset_of_probuilderPrefab_3() { return static_cast<int32_t>(offsetof(ProBuilderInstantiate_t3823323580, ___probuilderPrefab_3)); }
	inline GameObject_t3674682005 * get_probuilderPrefab_3() const { return ___probuilderPrefab_3; }
	inline GameObject_t3674682005 ** get_address_of_probuilderPrefab_3() { return &___probuilderPrefab_3; }
	inline void set_probuilderPrefab_3(GameObject_t3674682005 * value)
	{
		___probuilderPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___probuilderPrefab_3, value);
	}

	inline static int32_t get_offset_of_objectToInstantiate_4() { return static_cast<int32_t>(offsetof(ProBuilderInstantiate_t3823323580, ___objectToInstantiate_4)); }
	inline int32_t get_objectToInstantiate_4() const { return ___objectToInstantiate_4; }
	inline int32_t* get_address_of_objectToInstantiate_4() { return &___objectToInstantiate_4; }
	inline void set_objectToInstantiate_4(int32_t value)
	{
		___objectToInstantiate_4 = value;
	}

	inline static int32_t get_offset_of_prefWindow_5() { return static_cast<int32_t>(offsetof(ProBuilderInstantiate_t3823323580, ___prefWindow_5)); }
	inline Rect_t4241904616  get_prefWindow_5() const { return ___prefWindow_5; }
	inline Rect_t4241904616 * get_address_of_prefWindow_5() { return &___prefWindow_5; }
	inline void set_prefWindow_5(Rect_t4241904616  value)
	{
		___prefWindow_5 = value;
	}

	inline static int32_t get_offset_of_generatedObjects_6() { return static_cast<int32_t>(offsetof(ProBuilderInstantiate_t3823323580, ___generatedObjects_6)); }
	inline List_1_t747900261 * get_generatedObjects_6() const { return ___generatedObjects_6; }
	inline List_1_t747900261 ** get_address_of_generatedObjects_6() { return &___generatedObjects_6; }
	inline void set_generatedObjects_6(List_1_t747900261 * value)
	{
		___generatedObjects_6 = value;
		Il2CppCodeGenWriteBarrier(&___generatedObjects_6, value);
	}

	inline static int32_t get_offset_of_mPos_screen_7() { return static_cast<int32_t>(offsetof(ProBuilderInstantiate_t3823323580, ___mPos_screen_7)); }
	inline Vector2_t4282066565  get_mPos_screen_7() const { return ___mPos_screen_7; }
	inline Vector2_t4282066565 * get_address_of_mPos_screen_7() { return &___mPos_screen_7; }
	inline void set_mPos_screen_7(Vector2_t4282066565  value)
	{
		___mPos_screen_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
