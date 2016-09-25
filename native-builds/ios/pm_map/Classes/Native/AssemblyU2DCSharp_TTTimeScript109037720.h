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
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t3603375195;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TTTimeScript
struct  TTTimeScript_t109037720  : public MonoBehaviour_t667441552
{
public:
	// AppScript TTTimeScript::app
	AppScript_t3488119340 * ___app_2;
	// TMPro.TextMeshProUGUI TTTimeScript::timeTitle
	TextMeshProUGUI_t3603375195 * ___timeTitle_3;
	// UnityEngine.Transform TTTimeScript::pairsContainer
	Transform_t1659122786 * ___pairsContainer_4;

public:
	inline static int32_t get_offset_of_app_2() { return static_cast<int32_t>(offsetof(TTTimeScript_t109037720, ___app_2)); }
	inline AppScript_t3488119340 * get_app_2() const { return ___app_2; }
	inline AppScript_t3488119340 ** get_address_of_app_2() { return &___app_2; }
	inline void set_app_2(AppScript_t3488119340 * value)
	{
		___app_2 = value;
		Il2CppCodeGenWriteBarrier(&___app_2, value);
	}

	inline static int32_t get_offset_of_timeTitle_3() { return static_cast<int32_t>(offsetof(TTTimeScript_t109037720, ___timeTitle_3)); }
	inline TextMeshProUGUI_t3603375195 * get_timeTitle_3() const { return ___timeTitle_3; }
	inline TextMeshProUGUI_t3603375195 ** get_address_of_timeTitle_3() { return &___timeTitle_3; }
	inline void set_timeTitle_3(TextMeshProUGUI_t3603375195 * value)
	{
		___timeTitle_3 = value;
		Il2CppCodeGenWriteBarrier(&___timeTitle_3, value);
	}

	inline static int32_t get_offset_of_pairsContainer_4() { return static_cast<int32_t>(offsetof(TTTimeScript_t109037720, ___pairsContainer_4)); }
	inline Transform_t1659122786 * get_pairsContainer_4() const { return ___pairsContainer_4; }
	inline Transform_t1659122786 ** get_address_of_pairsContainer_4() { return &___pairsContainer_4; }
	inline void set_pairsContainer_4(Transform_t1659122786 * value)
	{
		___pairsContainer_4 = value;
		Il2CppCodeGenWriteBarrier(&___pairsContainer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
