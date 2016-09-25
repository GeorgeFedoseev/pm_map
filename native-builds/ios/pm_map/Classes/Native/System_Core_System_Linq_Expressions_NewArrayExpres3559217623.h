#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t1832692862;

#include "System_Core_System_Linq_Expressions_Expression275615326.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewArrayExpression
struct  NewArrayExpression_t3559217623  : public Expression_t275615326
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewArrayExpression::expressions
	ReadOnlyCollection_1_t1832692862 * ___expressions_2;

public:
	inline static int32_t get_offset_of_expressions_2() { return static_cast<int32_t>(offsetof(NewArrayExpression_t3559217623, ___expressions_2)); }
	inline ReadOnlyCollection_1_t1832692862 * get_expressions_2() const { return ___expressions_2; }
	inline ReadOnlyCollection_1_t1832692862 ** get_address_of_expressions_2() { return &___expressions_2; }
	inline void set_expressions_2(ReadOnlyCollection_1_t1832692862 * value)
	{
		___expressions_2 = value;
		Il2CppCodeGenWriteBarrier(&___expressions_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
