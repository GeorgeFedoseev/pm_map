#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Fabric.Runtime.Internal.Impl
struct Impl_t3988529990;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fabric.Runtime.Fabric
struct  Fabric_t2271188313  : public Il2CppObject
{
public:

public:
};

struct Fabric_t2271188313_StaticFields
{
public:
	// Fabric.Runtime.Internal.Impl Fabric.Runtime.Fabric::impl
	Impl_t3988529990 * ___impl_0;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(Fabric_t2271188313_StaticFields, ___impl_0)); }
	inline Impl_t3988529990 * get_impl_0() const { return ___impl_0; }
	inline Impl_t3988529990 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(Impl_t3988529990 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier(&___impl_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
