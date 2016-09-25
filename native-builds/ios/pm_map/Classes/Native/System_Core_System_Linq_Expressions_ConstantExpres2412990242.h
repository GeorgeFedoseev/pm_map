#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "System_Core_System_Linq_Expressions_Expression275615326.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ConstantExpression
struct  ConstantExpression_t2412990242  : public Expression_t275615326
{
public:
	// System.Object System.Linq.Expressions.ConstantExpression::value
	Il2CppObject * ___value_2;

public:
	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(ConstantExpression_t2412990242, ___value_2)); }
	inline Il2CppObject * get_value_2() const { return ___value_2; }
	inline Il2CppObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(Il2CppObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier(&___value_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
