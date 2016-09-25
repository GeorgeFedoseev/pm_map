#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// pb_Object
struct pb_Object_t3489221196;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HueCube
struct  HueCube_t2920753453  : public MonoBehaviour_t667441552
{
public:
	// pb_Object HueCube::pb
	pb_Object_t3489221196 * ___pb_2;

public:
	inline static int32_t get_offset_of_pb_2() { return static_cast<int32_t>(offsetof(HueCube_t2920753453, ___pb_2)); }
	inline pb_Object_t3489221196 * get_pb_2() const { return ___pb_2; }
	inline pb_Object_t3489221196 ** get_address_of_pb_2() { return &___pb_2; }
	inline void set_pb_2(pb_Object_t3489221196 * value)
	{
		___pb_2 = value;
		Il2CppCodeGenWriteBarrier(&___pb_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
