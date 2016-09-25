#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "mscorlib_System_Object4170816371.h"
#include "System_Core_System_Linq_Expressions_MemberBindingT4037826215.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberBinding
struct  MemberBinding_t3342028749  : public Il2CppObject
{
public:
	// System.Linq.Expressions.MemberBindingType System.Linq.Expressions.MemberBinding::binding_type
	int32_t ___binding_type_0;
	// System.Reflection.MemberInfo System.Linq.Expressions.MemberBinding::member
	MemberInfo_t * ___member_1;

public:
	inline static int32_t get_offset_of_binding_type_0() { return static_cast<int32_t>(offsetof(MemberBinding_t3342028749, ___binding_type_0)); }
	inline int32_t get_binding_type_0() const { return ___binding_type_0; }
	inline int32_t* get_address_of_binding_type_0() { return &___binding_type_0; }
	inline void set_binding_type_0(int32_t value)
	{
		___binding_type_0 = value;
	}

	inline static int32_t get_offset_of_member_1() { return static_cast<int32_t>(offsetof(MemberBinding_t3342028749, ___member_1)); }
	inline MemberInfo_t * get_member_1() const { return ___member_1; }
	inline MemberInfo_t ** get_address_of_member_1() { return &___member_1; }
	inline void set_member_1(MemberInfo_t * value)
	{
		___member_1 = value;
		Il2CppCodeGenWriteBarrier(&___member_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
