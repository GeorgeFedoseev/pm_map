﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SPBUTimetable.Link
struct  Link_t3945575266  : public Il2CppObject
{
public:
	// System.String SPBUTimetable.Link::name
	String_t* ___name_0;
	// System.String SPBUTimetable.Link::url
	String_t* ___url_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Link_t3945575266, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(Link_t3945575266, ___url_1)); }
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier(&___url_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
