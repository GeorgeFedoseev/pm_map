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
// System.Type
struct Type_t;

#include "System_Core_System_Linq_Expressions_Expression275615326.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.TypeBinaryExpression
struct  TypeBinaryExpression_t2638685721  : public Expression_t275615326
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.TypeBinaryExpression::expression
	Expression_t275615326 * ___expression_2;
	// System.Type System.Linq.Expressions.TypeBinaryExpression::type_operand
	Type_t * ___type_operand_3;

public:
	inline static int32_t get_offset_of_expression_2() { return static_cast<int32_t>(offsetof(TypeBinaryExpression_t2638685721, ___expression_2)); }
	inline Expression_t275615326 * get_expression_2() const { return ___expression_2; }
	inline Expression_t275615326 ** get_address_of_expression_2() { return &___expression_2; }
	inline void set_expression_2(Expression_t275615326 * value)
	{
		___expression_2 = value;
		Il2CppCodeGenWriteBarrier(&___expression_2, value);
	}

	inline static int32_t get_offset_of_type_operand_3() { return static_cast<int32_t>(offsetof(TypeBinaryExpression_t2638685721, ___type_operand_3)); }
	inline Type_t * get_type_operand_3() const { return ___type_operand_3; }
	inline Type_t ** get_address_of_type_operand_3() { return &___type_operand_3; }
	inline void set_type_operand_3(Type_t * value)
	{
		___type_operand_3 = value;
		Il2CppCodeGenWriteBarrier(&___type_operand_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
