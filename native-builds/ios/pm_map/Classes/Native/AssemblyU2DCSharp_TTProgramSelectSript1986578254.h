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

#include "AssemblyU2DCSharp_TTChoosePageScript3515344977.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TTProgramSelectSript
struct  TTProgramSelectSript_t1986578254  : public TTChoosePageScript_t3515344977
{
public:
	// System.String TTProgramSelectSript::level
	String_t* ___level_6;

public:
	inline static int32_t get_offset_of_level_6() { return static_cast<int32_t>(offsetof(TTProgramSelectSript_t1986578254, ___level_6)); }
	inline String_t* get_level_6() const { return ___level_6; }
	inline String_t** get_address_of_level_6() { return &___level_6; }
	inline void set_level_6(String_t* value)
	{
		___level_6 = value;
		Il2CppCodeGenWriteBarrier(&___level_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
