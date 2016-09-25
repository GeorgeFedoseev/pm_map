#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AppScript
struct AppScript_t3488119340;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialScript
struct  TutorialScript_t64239081  : public MonoBehaviour_t667441552
{
public:
	// AppScript TutorialScript::app
	AppScript_t3488119340 * ___app_2;

public:
	inline static int32_t get_offset_of_app_2() { return static_cast<int32_t>(offsetof(TutorialScript_t64239081, ___app_2)); }
	inline AppScript_t3488119340 * get_app_2() const { return ___app_2; }
	inline AppScript_t3488119340 ** get_address_of_app_2() { return &___app_2; }
	inline void set_app_2(AppScript_t3488119340 * value)
	{
		___app_2 = value;
		Il2CppCodeGenWriteBarrier(&___app_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
