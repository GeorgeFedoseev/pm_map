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
// System.Collections.Generic.List`1<SPBUTimetable.Link>
struct List_1_t1018793522;

#include "AssemblyU2DCSharp_TTChoosePageScript3515344977.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TTYearSelectSript
struct  TTYearSelectSript_t297432757  : public TTChoosePageScript_t3515344977
{
public:
	// System.String TTYearSelectSript::level
	String_t* ___level_6;
	// System.String TTYearSelectSript::program
	String_t* ___program_7;
	// System.Collections.Generic.List`1<SPBUTimetable.Link> TTYearSelectSript::yearLinks
	List_1_t1018793522 * ___yearLinks_8;

public:
	inline static int32_t get_offset_of_level_6() { return static_cast<int32_t>(offsetof(TTYearSelectSript_t297432757, ___level_6)); }
	inline String_t* get_level_6() const { return ___level_6; }
	inline String_t** get_address_of_level_6() { return &___level_6; }
	inline void set_level_6(String_t* value)
	{
		___level_6 = value;
		Il2CppCodeGenWriteBarrier(&___level_6, value);
	}

	inline static int32_t get_offset_of_program_7() { return static_cast<int32_t>(offsetof(TTYearSelectSript_t297432757, ___program_7)); }
	inline String_t* get_program_7() const { return ___program_7; }
	inline String_t** get_address_of_program_7() { return &___program_7; }
	inline void set_program_7(String_t* value)
	{
		___program_7 = value;
		Il2CppCodeGenWriteBarrier(&___program_7, value);
	}

	inline static int32_t get_offset_of_yearLinks_8() { return static_cast<int32_t>(offsetof(TTYearSelectSript_t297432757, ___yearLinks_8)); }
	inline List_1_t1018793522 * get_yearLinks_8() const { return ___yearLinks_8; }
	inline List_1_t1018793522 ** get_address_of_yearLinks_8() { return &___yearLinks_8; }
	inline void set_yearLinks_8(List_1_t1018793522 * value)
	{
		___yearLinks_8 = value;
		Il2CppCodeGenWriteBarrier(&___yearLinks_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
