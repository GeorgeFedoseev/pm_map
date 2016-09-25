#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.Expressions.Expression
struct Expression_t275615326;

#include "System_Core_System_Linq_Expressions_Expression275615326.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.UnaryExpression
struct  UnaryExpression_t200720105  : public Expression_t275615326
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::operand
	Expression_t275615326 * ___operand_2;

public:
	inline static int32_t get_offset_of_operand_2() { return static_cast<int32_t>(offsetof(UnaryExpression_t200720105, ___operand_2)); }
	inline Expression_t275615326 * get_operand_2() const { return ___operand_2; }
	inline Expression_t275615326 ** get_address_of_operand_2() { return &___operand_2; }
	inline void set_operand_2(Expression_t275615326 * value)
	{
		___operand_2 = value;
		Il2CppCodeGenWriteBarrier(&___operand_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
