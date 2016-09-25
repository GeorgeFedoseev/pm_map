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
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3865948165;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "System_Core_System_Linq_Expressions_Expression275615326.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.BinaryExpression
struct  BinaryExpression_t974710719  : public Expression_t275615326
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::left
	Expression_t275615326 * ___left_2;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::right
	Expression_t275615326 * ___right_3;
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::conversion
	LambdaExpression_t3865948165 * ___conversion_4;
	// System.Reflection.MethodInfo System.Linq.Expressions.BinaryExpression::method
	MethodInfo_t * ___method_5;
	// System.Boolean System.Linq.Expressions.BinaryExpression::lift_to_null
	bool ___lift_to_null_6;
	// System.Boolean System.Linq.Expressions.BinaryExpression::is_lifted
	bool ___is_lifted_7;

public:
	inline static int32_t get_offset_of_left_2() { return static_cast<int32_t>(offsetof(BinaryExpression_t974710719, ___left_2)); }
	inline Expression_t275615326 * get_left_2() const { return ___left_2; }
	inline Expression_t275615326 ** get_address_of_left_2() { return &___left_2; }
	inline void set_left_2(Expression_t275615326 * value)
	{
		___left_2 = value;
		Il2CppCodeGenWriteBarrier(&___left_2, value);
	}

	inline static int32_t get_offset_of_right_3() { return static_cast<int32_t>(offsetof(BinaryExpression_t974710719, ___right_3)); }
	inline Expression_t275615326 * get_right_3() const { return ___right_3; }
	inline Expression_t275615326 ** get_address_of_right_3() { return &___right_3; }
	inline void set_right_3(Expression_t275615326 * value)
	{
		___right_3 = value;
		Il2CppCodeGenWriteBarrier(&___right_3, value);
	}

	inline static int32_t get_offset_of_conversion_4() { return static_cast<int32_t>(offsetof(BinaryExpression_t974710719, ___conversion_4)); }
	inline LambdaExpression_t3865948165 * get_conversion_4() const { return ___conversion_4; }
	inline LambdaExpression_t3865948165 ** get_address_of_conversion_4() { return &___conversion_4; }
	inline void set_conversion_4(LambdaExpression_t3865948165 * value)
	{
		___conversion_4 = value;
		Il2CppCodeGenWriteBarrier(&___conversion_4, value);
	}

	inline static int32_t get_offset_of_method_5() { return static_cast<int32_t>(offsetof(BinaryExpression_t974710719, ___method_5)); }
	inline MethodInfo_t * get_method_5() const { return ___method_5; }
	inline MethodInfo_t ** get_address_of_method_5() { return &___method_5; }
	inline void set_method_5(MethodInfo_t * value)
	{
		___method_5 = value;
		Il2CppCodeGenWriteBarrier(&___method_5, value);
	}

	inline static int32_t get_offset_of_lift_to_null_6() { return static_cast<int32_t>(offsetof(BinaryExpression_t974710719, ___lift_to_null_6)); }
	inline bool get_lift_to_null_6() const { return ___lift_to_null_6; }
	inline bool* get_address_of_lift_to_null_6() { return &___lift_to_null_6; }
	inline void set_lift_to_null_6(bool value)
	{
		___lift_to_null_6 = value;
	}

	inline static int32_t get_offset_of_is_lifted_7() { return static_cast<int32_t>(offsetof(BinaryExpression_t974710719, ___is_lifted_7)); }
	inline bool get_is_lifted_7() const { return ___is_lifted_7; }
	inline bool* get_address_of_is_lifted_7() { return &___is_lifted_7; }
	inline void set_is_lifted_7(bool value)
	{
		___is_lifted_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
