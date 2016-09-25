#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<SPBUTimetable.Link>
struct List_1_t1018793522;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_TTChoosePageScript3515344977.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TTGroupSelectSript
struct  TTGroupSelectSript_t1226890355  : public TTChoosePageScript_t3515344977
{
public:
	// System.Collections.Generic.List`1<SPBUTimetable.Link> TTGroupSelectSript::groupLinks
	List_1_t1018793522 * ___groupLinks_6;
	// System.String TTGroupSelectSript::year_link
	String_t* ___year_link_7;

public:
	inline static int32_t get_offset_of_groupLinks_6() { return static_cast<int32_t>(offsetof(TTGroupSelectSript_t1226890355, ___groupLinks_6)); }
	inline List_1_t1018793522 * get_groupLinks_6() const { return ___groupLinks_6; }
	inline List_1_t1018793522 ** get_address_of_groupLinks_6() { return &___groupLinks_6; }
	inline void set_groupLinks_6(List_1_t1018793522 * value)
	{
		___groupLinks_6 = value;
		Il2CppCodeGenWriteBarrier(&___groupLinks_6, value);
	}

	inline static int32_t get_offset_of_year_link_7() { return static_cast<int32_t>(offsetof(TTGroupSelectSript_t1226890355, ___year_link_7)); }
	inline String_t* get_year_link_7() const { return ___year_link_7; }
	inline String_t** get_address_of_year_link_7() { return &___year_link_7; }
	inline void set_year_link_7(String_t* value)
	{
		___year_link_7 = value;
		Il2CppCodeGenWriteBarrier(&___year_link_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
