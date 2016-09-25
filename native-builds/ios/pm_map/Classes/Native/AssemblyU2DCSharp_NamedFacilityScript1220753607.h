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

#include "AssemblyU2DCSharp_FacilityScript3002937710.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NamedFacilityScript
struct  NamedFacilityScript_t1220753607  : public FacilityScript_t3002937710
{
public:
	// System.String NamedFacilityScript::name
	String_t* ___name_11;
	// System.String NamedFacilityScript::description
	String_t* ___description_12;
	// System.String NamedFacilityScript::aliases
	String_t* ___aliases_13;

public:
	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(NamedFacilityScript_t1220753607, ___name_11)); }
	inline String_t* get_name_11() const { return ___name_11; }
	inline String_t** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(String_t* value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier(&___name_11, value);
	}

	inline static int32_t get_offset_of_description_12() { return static_cast<int32_t>(offsetof(NamedFacilityScript_t1220753607, ___description_12)); }
	inline String_t* get_description_12() const { return ___description_12; }
	inline String_t** get_address_of_description_12() { return &___description_12; }
	inline void set_description_12(String_t* value)
	{
		___description_12 = value;
		Il2CppCodeGenWriteBarrier(&___description_12, value);
	}

	inline static int32_t get_offset_of_aliases_13() { return static_cast<int32_t>(offsetof(NamedFacilityScript_t1220753607, ___aliases_13)); }
	inline String_t* get_aliases_13() const { return ___aliases_13; }
	inline String_t** get_address_of_aliases_13() { return &___aliases_13; }
	inline void set_aliases_13(String_t* value)
	{
		___aliases_13 = value;
		Il2CppCodeGenWriteBarrier(&___aliases_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
