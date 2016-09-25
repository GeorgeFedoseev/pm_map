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

#include "System_Core_System_Linq_Expressions_Expression275615326.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ParameterExpression
struct  ParameterExpression_t2166942179  : public Expression_t275615326
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(ParameterExpression_t2166942179, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
