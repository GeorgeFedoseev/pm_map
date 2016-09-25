#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MaterialUI.SelectionBoxConfig
struct SelectionBoxConfig_t1118549677;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.SelectionBoxSubscriber
struct  SelectionBoxSubscriber_t384665299  : public MonoBehaviour_t667441552
{
public:
	// MaterialUI.SelectionBoxConfig MaterialUI.SelectionBoxSubscriber::config
	SelectionBoxConfig_t1118549677 * ___config_2;

public:
	inline static int32_t get_offset_of_config_2() { return static_cast<int32_t>(offsetof(SelectionBoxSubscriber_t384665299, ___config_2)); }
	inline SelectionBoxConfig_t1118549677 * get_config_2() const { return ___config_2; }
	inline SelectionBoxConfig_t1118549677 ** get_address_of_config_2() { return &___config_2; }
	inline void set_config_2(SelectionBoxConfig_t1118549677 * value)
	{
		___config_2 = value;
		Il2CppCodeGenWriteBarrier(&___config_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
