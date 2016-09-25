#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.Expressions.NewExpression
struct NewExpression_t4031407514;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t604138989;

#include "System_Core_System_Linq_Expressions_Expression275615326.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberInitExpression
struct  MemberInitExpression_t1080187464  : public Expression_t275615326
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.MemberInitExpression::new_expression
	NewExpression_t4031407514 * ___new_expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberInitExpression::bindings
	ReadOnlyCollection_1_t604138989 * ___bindings_3;

public:
	inline static int32_t get_offset_of_new_expression_2() { return static_cast<int32_t>(offsetof(MemberInitExpression_t1080187464, ___new_expression_2)); }
	inline NewExpression_t4031407514 * get_new_expression_2() const { return ___new_expression_2; }
	inline NewExpression_t4031407514 ** get_address_of_new_expression_2() { return &___new_expression_2; }
	inline void set_new_expression_2(NewExpression_t4031407514 * value)
	{
		___new_expression_2 = value;
		Il2CppCodeGenWriteBarrier(&___new_expression_2, value);
	}

	inline static int32_t get_offset_of_bindings_3() { return static_cast<int32_t>(offsetof(MemberInitExpression_t1080187464, ___bindings_3)); }
	inline ReadOnlyCollection_1_t604138989 * get_bindings_3() const { return ___bindings_3; }
	inline ReadOnlyCollection_1_t604138989 ** get_address_of_bindings_3() { return &___bindings_3; }
	inline void set_bindings_3(ReadOnlyCollection_1_t604138989 * value)
	{
		___bindings_3 = value;
		Il2CppCodeGenWriteBarrier(&___bindings_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
