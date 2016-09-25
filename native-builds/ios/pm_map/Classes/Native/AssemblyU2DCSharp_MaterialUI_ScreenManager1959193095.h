#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MaterialUI.ScreenConfig[]
struct ScreenConfigU5BU5D_t3474569183;
// MaterialUI.ScreenConfig
struct ScreenConfig_t3241700090;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.ScreenManager
struct  ScreenManager_t1959193095  : public MonoBehaviour_t667441552
{
public:
	// MaterialUI.ScreenConfig[] MaterialUI.ScreenManager::screens
	ScreenConfigU5BU5D_t3474569183* ___screens_2;
	// MaterialUI.ScreenConfig MaterialUI.ScreenManager::currentScreen
	ScreenConfig_t3241700090 * ___currentScreen_3;
	// MaterialUI.ScreenConfig MaterialUI.ScreenManager::lastScreen
	ScreenConfig_t3241700090 * ___lastScreen_4;

public:
	inline static int32_t get_offset_of_screens_2() { return static_cast<int32_t>(offsetof(ScreenManager_t1959193095, ___screens_2)); }
	inline ScreenConfigU5BU5D_t3474569183* get_screens_2() const { return ___screens_2; }
	inline ScreenConfigU5BU5D_t3474569183** get_address_of_screens_2() { return &___screens_2; }
	inline void set_screens_2(ScreenConfigU5BU5D_t3474569183* value)
	{
		___screens_2 = value;
		Il2CppCodeGenWriteBarrier(&___screens_2, value);
	}

	inline static int32_t get_offset_of_currentScreen_3() { return static_cast<int32_t>(offsetof(ScreenManager_t1959193095, ___currentScreen_3)); }
	inline ScreenConfig_t3241700090 * get_currentScreen_3() const { return ___currentScreen_3; }
	inline ScreenConfig_t3241700090 ** get_address_of_currentScreen_3() { return &___currentScreen_3; }
	inline void set_currentScreen_3(ScreenConfig_t3241700090 * value)
	{
		___currentScreen_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentScreen_3, value);
	}

	inline static int32_t get_offset_of_lastScreen_4() { return static_cast<int32_t>(offsetof(ScreenManager_t1959193095, ___lastScreen_4)); }
	inline ScreenConfig_t3241700090 * get_lastScreen_4() const { return ___lastScreen_4; }
	inline ScreenConfig_t3241700090 ** get_address_of_lastScreen_4() { return &___lastScreen_4; }
	inline void set_lastScreen_4(ScreenConfig_t3241700090 * value)
	{
		___lastScreen_4 = value;
		Il2CppCodeGenWriteBarrier(&___lastScreen_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
