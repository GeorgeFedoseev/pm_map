#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.Configuration
struct Configuration_t710589292;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ClientConfigurationSystem
struct  ClientConfigurationSystem_t3765224944  : public Il2CppObject
{
public:
	// System.Configuration.Configuration System.Configuration.ClientConfigurationSystem::cfg
	Configuration_t710589292 * ___cfg_0;

public:
	inline static int32_t get_offset_of_cfg_0() { return static_cast<int32_t>(offsetof(ClientConfigurationSystem_t3765224944, ___cfg_0)); }
	inline Configuration_t710589292 * get_cfg_0() const { return ___cfg_0; }
	inline Configuration_t710589292 ** get_address_of_cfg_0() { return &___cfg_0; }
	inline void set_cfg_0(Configuration_t710589292 * value)
	{
		___cfg_0 = value;
		Il2CppCodeGenWriteBarrier(&___cfg_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
