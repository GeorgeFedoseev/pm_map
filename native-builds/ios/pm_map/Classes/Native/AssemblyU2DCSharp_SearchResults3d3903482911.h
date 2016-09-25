#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<FacilityScript>
struct List_1_t76155966;
// System.Collections.Generic.List`1<ArrowPointerScript>
struct List_1_t3261825743;
// System.Collections.Generic.Dictionary`2<FacilityScript,ArrowPointerScript>
struct Dictionary_2_t1433335636;
// AppScript
struct AppScript_t3488119340;
// FacilityScript
struct FacilityScript_t3002937710;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SearchResults3d
struct  SearchResults3d_t3903482911  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<FacilityScript> SearchResults3d::searchResults
	List_1_t76155966 * ___searchResults_2;
	// System.Collections.Generic.List`1<ArrowPointerScript> SearchResults3d::arrowPointers
	List_1_t3261825743 * ___arrowPointers_3;
	// System.Collections.Generic.Dictionary`2<FacilityScript,ArrowPointerScript> SearchResults3d::dict
	Dictionary_2_t1433335636 * ___dict_4;
	// AppScript SearchResults3d::app
	AppScript_t3488119340 * ___app_5;
	// FacilityScript SearchResults3d::_selectedFacility
	FacilityScript_t3002937710 * ____selectedFacility_6;

public:
	inline static int32_t get_offset_of_searchResults_2() { return static_cast<int32_t>(offsetof(SearchResults3d_t3903482911, ___searchResults_2)); }
	inline List_1_t76155966 * get_searchResults_2() const { return ___searchResults_2; }
	inline List_1_t76155966 ** get_address_of_searchResults_2() { return &___searchResults_2; }
	inline void set_searchResults_2(List_1_t76155966 * value)
	{
		___searchResults_2 = value;
		Il2CppCodeGenWriteBarrier(&___searchResults_2, value);
	}

	inline static int32_t get_offset_of_arrowPointers_3() { return static_cast<int32_t>(offsetof(SearchResults3d_t3903482911, ___arrowPointers_3)); }
	inline List_1_t3261825743 * get_arrowPointers_3() const { return ___arrowPointers_3; }
	inline List_1_t3261825743 ** get_address_of_arrowPointers_3() { return &___arrowPointers_3; }
	inline void set_arrowPointers_3(List_1_t3261825743 * value)
	{
		___arrowPointers_3 = value;
		Il2CppCodeGenWriteBarrier(&___arrowPointers_3, value);
	}

	inline static int32_t get_offset_of_dict_4() { return static_cast<int32_t>(offsetof(SearchResults3d_t3903482911, ___dict_4)); }
	inline Dictionary_2_t1433335636 * get_dict_4() const { return ___dict_4; }
	inline Dictionary_2_t1433335636 ** get_address_of_dict_4() { return &___dict_4; }
	inline void set_dict_4(Dictionary_2_t1433335636 * value)
	{
		___dict_4 = value;
		Il2CppCodeGenWriteBarrier(&___dict_4, value);
	}

	inline static int32_t get_offset_of_app_5() { return static_cast<int32_t>(offsetof(SearchResults3d_t3903482911, ___app_5)); }
	inline AppScript_t3488119340 * get_app_5() const { return ___app_5; }
	inline AppScript_t3488119340 ** get_address_of_app_5() { return &___app_5; }
	inline void set_app_5(AppScript_t3488119340 * value)
	{
		___app_5 = value;
		Il2CppCodeGenWriteBarrier(&___app_5, value);
	}

	inline static int32_t get_offset_of__selectedFacility_6() { return static_cast<int32_t>(offsetof(SearchResults3d_t3903482911, ____selectedFacility_6)); }
	inline FacilityScript_t3002937710 * get__selectedFacility_6() const { return ____selectedFacility_6; }
	inline FacilityScript_t3002937710 ** get_address_of__selectedFacility_6() { return &____selectedFacility_6; }
	inline void set__selectedFacility_6(FacilityScript_t3002937710 * value)
	{
		____selectedFacility_6 = value;
		Il2CppCodeGenWriteBarrier(&____selectedFacility_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
