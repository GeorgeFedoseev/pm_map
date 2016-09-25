#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AppScript
struct AppScript_t3488119340;
// System.Collections.Generic.Dictionary`2<System.Int32,FacilityScript>
struct Dictionary_2_t3000200949;
// FacilitiesDatabaseScript
struct FacilitiesDatabaseScript_t3770721063;
// FacilityScript
struct FacilityScript_t3002937710;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FacilitiesManager
struct  FacilitiesManager_t429269452  : public Il2CppObject
{
public:
	// AppScript FacilitiesManager::app
	AppScript_t3488119340 * ___app_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,FacilityScript> FacilitiesManager::facilities_map
	Dictionary_2_t3000200949 * ___facilities_map_1;
	// FacilitiesDatabaseScript FacilitiesManager::facilities_db
	FacilitiesDatabaseScript_t3770721063 * ___facilities_db_2;
	// FacilityScript FacilitiesManager::target_facility
	FacilityScript_t3002937710 * ___target_facility_3;

public:
	inline static int32_t get_offset_of_app_0() { return static_cast<int32_t>(offsetof(FacilitiesManager_t429269452, ___app_0)); }
	inline AppScript_t3488119340 * get_app_0() const { return ___app_0; }
	inline AppScript_t3488119340 ** get_address_of_app_0() { return &___app_0; }
	inline void set_app_0(AppScript_t3488119340 * value)
	{
		___app_0 = value;
		Il2CppCodeGenWriteBarrier(&___app_0, value);
	}

	inline static int32_t get_offset_of_facilities_map_1() { return static_cast<int32_t>(offsetof(FacilitiesManager_t429269452, ___facilities_map_1)); }
	inline Dictionary_2_t3000200949 * get_facilities_map_1() const { return ___facilities_map_1; }
	inline Dictionary_2_t3000200949 ** get_address_of_facilities_map_1() { return &___facilities_map_1; }
	inline void set_facilities_map_1(Dictionary_2_t3000200949 * value)
	{
		___facilities_map_1 = value;
		Il2CppCodeGenWriteBarrier(&___facilities_map_1, value);
	}

	inline static int32_t get_offset_of_facilities_db_2() { return static_cast<int32_t>(offsetof(FacilitiesManager_t429269452, ___facilities_db_2)); }
	inline FacilitiesDatabaseScript_t3770721063 * get_facilities_db_2() const { return ___facilities_db_2; }
	inline FacilitiesDatabaseScript_t3770721063 ** get_address_of_facilities_db_2() { return &___facilities_db_2; }
	inline void set_facilities_db_2(FacilitiesDatabaseScript_t3770721063 * value)
	{
		___facilities_db_2 = value;
		Il2CppCodeGenWriteBarrier(&___facilities_db_2, value);
	}

	inline static int32_t get_offset_of_target_facility_3() { return static_cast<int32_t>(offsetof(FacilitiesManager_t429269452, ___target_facility_3)); }
	inline FacilityScript_t3002937710 * get_target_facility_3() const { return ___target_facility_3; }
	inline FacilityScript_t3002937710 ** get_address_of_target_facility_3() { return &___target_facility_3; }
	inline void set_target_facility_3(FacilityScript_t3002937710 * value)
	{
		___target_facility_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_facility_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
