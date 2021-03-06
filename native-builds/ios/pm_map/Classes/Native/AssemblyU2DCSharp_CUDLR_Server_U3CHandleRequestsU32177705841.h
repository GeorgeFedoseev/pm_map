﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CUDLR.RequestContext
struct RequestContext_t2839801694;
// System.Collections.Generic.Queue`1<CUDLR.RequestContext>
struct Queue_1_t781076827;
// System.Object
struct Il2CppObject;
// CUDLR.Server
struct Server_t1489864833;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Server/<HandleRequests>c__Iterator6
struct  U3CHandleRequestsU3Ec__Iterator6_t2177705841  : public Il2CppObject
{
public:
	// CUDLR.RequestContext CUDLR.Server/<HandleRequests>c__Iterator6::<context>__0
	RequestContext_t2839801694 * ___U3CcontextU3E__0_0;
	// System.Collections.Generic.Queue`1<CUDLR.RequestContext> CUDLR.Server/<HandleRequests>c__Iterator6::<$s_230>__1
	Queue_1_t781076827 * ___U3CU24s_230U3E__1_1;
	// System.Int32 CUDLR.Server/<HandleRequests>c__Iterator6::$PC
	int32_t ___U24PC_2;
	// System.Object CUDLR.Server/<HandleRequests>c__Iterator6::$current
	Il2CppObject * ___U24current_3;
	// CUDLR.Server CUDLR.Server/<HandleRequests>c__Iterator6::<>f__this
	Server_t1489864833 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CcontextU3E__0_0() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator6_t2177705841, ___U3CcontextU3E__0_0)); }
	inline RequestContext_t2839801694 * get_U3CcontextU3E__0_0() const { return ___U3CcontextU3E__0_0; }
	inline RequestContext_t2839801694 ** get_address_of_U3CcontextU3E__0_0() { return &___U3CcontextU3E__0_0; }
	inline void set_U3CcontextU3E__0_0(RequestContext_t2839801694 * value)
	{
		___U3CcontextU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcontextU3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CU24s_230U3E__1_1() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator6_t2177705841, ___U3CU24s_230U3E__1_1)); }
	inline Queue_1_t781076827 * get_U3CU24s_230U3E__1_1() const { return ___U3CU24s_230U3E__1_1; }
	inline Queue_1_t781076827 ** get_address_of_U3CU24s_230U3E__1_1() { return &___U3CU24s_230U3E__1_1; }
	inline void set_U3CU24s_230U3E__1_1(Queue_1_t781076827 * value)
	{
		___U3CU24s_230U3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24s_230U3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator6_t2177705841, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator6_t2177705841, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator6_t2177705841, ___U3CU3Ef__this_4)); }
	inline Server_t1489864833 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline Server_t1489864833 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(Server_t1489864833 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
