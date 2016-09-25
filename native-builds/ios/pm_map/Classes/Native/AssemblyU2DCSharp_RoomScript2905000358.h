#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// TMPro.TextMeshPro
struct TextMeshPro_t3198095413;

#include "AssemblyU2DCSharp_FacilityScript3002937710.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RoomScript
struct  RoomScript_t2905000358  : public FacilityScript_t3002937710
{
public:
	// System.String RoomScript::room
	String_t* ___room_11;
	// System.String RoomScript::description
	String_t* ___description_12;
	// System.String RoomScript::info
	String_t* ___info_13;
	// System.String RoomScript::people
	String_t* ___people_14;
	// System.String RoomScript::aliases
	String_t* ___aliases_15;
	// System.Boolean RoomScript::auditory
	bool ___auditory_16;
	// TMPro.TextMeshPro RoomScript::roomNumber
	TextMeshPro_t3198095413 * ___roomNumber_17;

public:
	inline static int32_t get_offset_of_room_11() { return static_cast<int32_t>(offsetof(RoomScript_t2905000358, ___room_11)); }
	inline String_t* get_room_11() const { return ___room_11; }
	inline String_t** get_address_of_room_11() { return &___room_11; }
	inline void set_room_11(String_t* value)
	{
		___room_11 = value;
		Il2CppCodeGenWriteBarrier(&___room_11, value);
	}

	inline static int32_t get_offset_of_description_12() { return static_cast<int32_t>(offsetof(RoomScript_t2905000358, ___description_12)); }
	inline String_t* get_description_12() const { return ___description_12; }
	inline String_t** get_address_of_description_12() { return &___description_12; }
	inline void set_description_12(String_t* value)
	{
		___description_12 = value;
		Il2CppCodeGenWriteBarrier(&___description_12, value);
	}

	inline static int32_t get_offset_of_info_13() { return static_cast<int32_t>(offsetof(RoomScript_t2905000358, ___info_13)); }
	inline String_t* get_info_13() const { return ___info_13; }
	inline String_t** get_address_of_info_13() { return &___info_13; }
	inline void set_info_13(String_t* value)
	{
		___info_13 = value;
		Il2CppCodeGenWriteBarrier(&___info_13, value);
	}

	inline static int32_t get_offset_of_people_14() { return static_cast<int32_t>(offsetof(RoomScript_t2905000358, ___people_14)); }
	inline String_t* get_people_14() const { return ___people_14; }
	inline String_t** get_address_of_people_14() { return &___people_14; }
	inline void set_people_14(String_t* value)
	{
		___people_14 = value;
		Il2CppCodeGenWriteBarrier(&___people_14, value);
	}

	inline static int32_t get_offset_of_aliases_15() { return static_cast<int32_t>(offsetof(RoomScript_t2905000358, ___aliases_15)); }
	inline String_t* get_aliases_15() const { return ___aliases_15; }
	inline String_t** get_address_of_aliases_15() { return &___aliases_15; }
	inline void set_aliases_15(String_t* value)
	{
		___aliases_15 = value;
		Il2CppCodeGenWriteBarrier(&___aliases_15, value);
	}

	inline static int32_t get_offset_of_auditory_16() { return static_cast<int32_t>(offsetof(RoomScript_t2905000358, ___auditory_16)); }
	inline bool get_auditory_16() const { return ___auditory_16; }
	inline bool* get_address_of_auditory_16() { return &___auditory_16; }
	inline void set_auditory_16(bool value)
	{
		___auditory_16 = value;
	}

	inline static int32_t get_offset_of_roomNumber_17() { return static_cast<int32_t>(offsetof(RoomScript_t2905000358, ___roomNumber_17)); }
	inline TextMeshPro_t3198095413 * get_roomNumber_17() const { return ___roomNumber_17; }
	inline TextMeshPro_t3198095413 ** get_address_of_roomNumber_17() { return &___roomNumber_17; }
	inline void set_roomNumber_17(TextMeshPro_t3198095413 * value)
	{
		___roomNumber_17 = value;
		Il2CppCodeGenWriteBarrier(&___roomNumber_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
