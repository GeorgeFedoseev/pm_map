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
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_t1257626138;

#include "System_Core_System_Linq_Expressions_Expression275615326.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewExpression
struct  NewExpression_t4031407514  : public Expression_t275615326
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::arguments
	ReadOnlyCollection_1_t1832692862 * ___arguments_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::members
	ReadOnlyCollection_1_t1257626138 * ___members_3;

public:
	inline static int32_t get_offset_of_arguments_2() { return static_cast<int32_t>(offsetof(NewExpression_t4031407514, ___arguments_2)); }
	inline ReadOnlyCollection_1_t1832692862 * get_arguments_2() const { return ___arguments_2; }
	inline ReadOnlyCollection_1_t1832692862 ** get_address_of_arguments_2() { return &___arguments_2; }
	inline void set_arguments_2(ReadOnlyCollection_1_t1832692862 * value)
	{
		___arguments_2 = value;
		Il2CppCodeGenWriteBarrier(&___arguments_2, value);
	}

	inline static int32_t get_offset_of_members_3() { return static_cast<int32_t>(offsetof(NewExpression_t4031407514, ___members_3)); }
	inline ReadOnlyCollection_1_t1257626138 * get_members_3() const { return ___members_3; }
	inline ReadOnlyCollection_1_t1257626138 ** get_address_of_members_3() { return &___members_3; }
	inline void set_members_3(ReadOnlyCollection_1_t1257626138 * value)
	{
		___members_3 = value;
		Il2CppCodeGenWriteBarrier(&___members_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
