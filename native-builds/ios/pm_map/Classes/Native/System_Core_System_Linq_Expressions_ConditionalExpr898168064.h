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

// System.Linq.Expressions.ConditionalExpression
struct  ConditionalExpression_t898168064  : public Expression_t275615326
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::test
	Expression_t275615326 * ___test_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::if_true
	Expression_t275615326 * ___if_true_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::if_false
	Expression_t275615326 * ___if_false_4;

public:
	inline static int32_t get_offset_of_test_2() { return static_cast<int32_t>(offsetof(ConditionalExpression_t898168064, ___test_2)); }
	inline Expression_t275615326 * get_test_2() const { return ___test_2; }
	inline Expression_t275615326 ** get_address_of_test_2() { return &___test_2; }
	inline void set_test_2(Expression_t275615326 * value)
	{
		___test_2 = value;
		Il2CppCodeGenWriteBarrier(&___test_2, value);
	}

	inline static int32_t get_offset_of_if_true_3() { return static_cast<int32_t>(offsetof(ConditionalExpression_t898168064, ___if_true_3)); }
	inline Expression_t275615326 * get_if_true_3() const { return ___if_true_3; }
	inline Expression_t275615326 ** get_address_of_if_true_3() { return &___if_true_3; }
	inline void set_if_true_3(Expression_t275615326 * value)
	{
		___if_true_3 = value;
		Il2CppCodeGenWriteBarrier(&___if_true_3, value);
	}

	inline static int32_t get_offset_of_if_false_4() { return static_cast<int32_t>(offsetof(ConditionalExpression_t898168064, ___if_false_4)); }
	inline Expression_t275615326 * get_if_false_4() const { return ___if_false_4; }
	inline Expression_t275615326 ** get_address_of_if_false_4() { return &___if_false_4; }
	inline void set_if_false_4(Expression_t275615326 * value)
	{
		___if_false_4 = value;
		Il2CppCodeGenWriteBarrier(&___if_false_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
