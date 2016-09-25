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
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t1415396622;

#include "System_Core_System_Linq_Expressions_Expression275615326.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ListInitExpression
struct  ListInitExpression_t1553729996  : public Expression_t275615326
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.ListInitExpression::new_expression
	NewExpression_t4031407514 * ___new_expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.ListInitExpression::initializers
	ReadOnlyCollection_1_t1415396622 * ___initializers_3;

public:
	inline static int32_t get_offset_of_new_expression_2() { return static_cast<int32_t>(offsetof(ListInitExpression_t1553729996, ___new_expression_2)); }
	inline NewExpression_t4031407514 * get_new_expression_2() const { return ___new_expression_2; }
	inline NewExpression_t4031407514 ** get_address_of_new_expression_2() { return &___new_expression_2; }
	inline void set_new_expression_2(NewExpression_t4031407514 * value)
	{
		___new_expression_2 = value;
		Il2CppCodeGenWriteBarrier(&___new_expression_2, value);
	}

	inline static int32_t get_offset_of_initializers_3() { return static_cast<int32_t>(offsetof(ListInitExpression_t1553729996, ___initializers_3)); }
	inline ReadOnlyCollection_1_t1415396622 * get_initializers_3() const { return ___initializers_3; }
	inline ReadOnlyCollection_1_t1415396622 ** get_address_of_initializers_3() { return &___initializers_3; }
	inline void set_initializers_3(ReadOnlyCollection_1_t1415396622 * value)
	{
		___initializers_3 = value;
		Il2CppCodeGenWriteBarrier(&___initializers_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
