#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t604138989;

#include "System_Core_System_Linq_Expressions_MemberBinding3342028749.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberMemberBinding
struct  MemberMemberBinding_t2047291603  : public MemberBinding_t3342028749
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberMemberBinding::bindings
	ReadOnlyCollection_1_t604138989 * ___bindings_2;

public:
	inline static int32_t get_offset_of_bindings_2() { return static_cast<int32_t>(offsetof(MemberMemberBinding_t2047291603, ___bindings_2)); }
	inline ReadOnlyCollection_1_t604138989 * get_bindings_2() const { return ___bindings_2; }
	inline ReadOnlyCollection_1_t604138989 ** get_address_of_bindings_2() { return &___bindings_2; }
	inline void set_bindings_2(ReadOnlyCollection_1_t604138989 * value)
	{
		___bindings_2 = value;
		Il2CppCodeGenWriteBarrier(&___bindings_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
