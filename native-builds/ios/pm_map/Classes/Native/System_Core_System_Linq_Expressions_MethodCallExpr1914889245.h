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
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t1832692862;

#include "System_Core_System_Linq_Expressions_Expression275615326.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MethodCallExpression
struct  MethodCallExpression_t1914889245  : public Expression_t275615326
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::obj
	Expression_t275615326 * ___obj_2;
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::method
	MethodInfo_t * ___method_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::arguments
	ReadOnlyCollection_1_t1832692862 * ___arguments_4;

public:
	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(MethodCallExpression_t1914889245, ___obj_2)); }
	inline Expression_t275615326 * get_obj_2() const { return ___obj_2; }
	inline Expression_t275615326 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(Expression_t275615326 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier(&___obj_2, value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(MethodCallExpression_t1914889245, ___method_3)); }
	inline MethodInfo_t * get_method_3() const { return ___method_3; }
	inline MethodInfo_t ** get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(MethodInfo_t * value)
	{
		___method_3 = value;
		Il2CppCodeGenWriteBarrier(&___method_3, value);
	}

	inline static int32_t get_offset_of_arguments_4() { return static_cast<int32_t>(offsetof(MethodCallExpression_t1914889245, ___arguments_4)); }
	inline ReadOnlyCollection_1_t1832692862 * get_arguments_4() const { return ___arguments_4; }
	inline ReadOnlyCollection_1_t1832692862 ** get_address_of_arguments_4() { return &___arguments_4; }
	inline void set_arguments_4(ReadOnlyCollection_1_t1832692862 * value)
	{
		___arguments_4 = value;
		Il2CppCodeGenWriteBarrier(&___arguments_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
