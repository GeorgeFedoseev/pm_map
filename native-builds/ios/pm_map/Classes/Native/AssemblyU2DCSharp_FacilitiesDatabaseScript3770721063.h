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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FacilitiesDatabaseScript
struct  FacilitiesDatabaseScript_t3770721063  : public Il2CppObject
{
public:
	// System.String FacilitiesDatabaseScript::db_path
	String_t* ___db_path_0;

public:
	inline static int32_t get_offset_of_db_path_0() { return static_cast<int32_t>(offsetof(FacilitiesDatabaseScript_t3770721063, ___db_path_0)); }
	inline String_t* get_db_path_0() const { return ___db_path_0; }
	inline String_t** get_address_of_db_path_0() { return &___db_path_0; }
	inline void set_db_path_0(String_t* value)
	{
		___db_path_0 = value;
		Il2CppCodeGenWriteBarrier(&___db_path_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
