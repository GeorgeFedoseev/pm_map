#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Fabric.Crashlytics.Internal.Impl
struct Impl_t95686540;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fabric.Crashlytics.Crashlytics
struct  Crashlytics_t2656729803  : public Il2CppObject
{
public:

public:
};

struct Crashlytics_t2656729803_StaticFields
{
public:
	// Fabric.Crashlytics.Internal.Impl Fabric.Crashlytics.Crashlytics::impl
	Impl_t95686540 * ___impl_0;

public:
	inline static int32_t get_offset_of_impl_0() { return static_cast<int32_t>(offsetof(Crashlytics_t2656729803_StaticFields, ___impl_0)); }
	inline Impl_t95686540 * get_impl_0() const { return ___impl_0; }
	inline Impl_t95686540 ** get_address_of_impl_0() { return &___impl_0; }
	inline void set_impl_0(Impl_t95686540 * value)
	{
		___impl_0 = value;
		Il2CppCodeGenWriteBarrier(&___impl_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
