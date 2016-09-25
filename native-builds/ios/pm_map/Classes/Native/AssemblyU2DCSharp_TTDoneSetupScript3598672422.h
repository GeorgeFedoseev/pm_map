#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.UI.Button
struct Button_t3896396478;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TTDoneSetupScript
struct  TTDoneSetupScript_t3598672422  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform TTDoneSetupScript::loadingText
	Transform_t1659122786 * ___loadingText_2;
	// UnityEngine.Transform TTDoneSetupScript::doneText
	Transform_t1659122786 * ___doneText_3;
	// UnityEngine.UI.Button TTDoneSetupScript::doneButton
	Button_t3896396478 * ___doneButton_4;

public:
	inline static int32_t get_offset_of_loadingText_2() { return static_cast<int32_t>(offsetof(TTDoneSetupScript_t3598672422, ___loadingText_2)); }
	inline Transform_t1659122786 * get_loadingText_2() const { return ___loadingText_2; }
	inline Transform_t1659122786 ** get_address_of_loadingText_2() { return &___loadingText_2; }
	inline void set_loadingText_2(Transform_t1659122786 * value)
	{
		___loadingText_2 = value;
		Il2CppCodeGenWriteBarrier(&___loadingText_2, value);
	}

	inline static int32_t get_offset_of_doneText_3() { return static_cast<int32_t>(offsetof(TTDoneSetupScript_t3598672422, ___doneText_3)); }
	inline Transform_t1659122786 * get_doneText_3() const { return ___doneText_3; }
	inline Transform_t1659122786 ** get_address_of_doneText_3() { return &___doneText_3; }
	inline void set_doneText_3(Transform_t1659122786 * value)
	{
		___doneText_3 = value;
		Il2CppCodeGenWriteBarrier(&___doneText_3, value);
	}

	inline static int32_t get_offset_of_doneButton_4() { return static_cast<int32_t>(offsetof(TTDoneSetupScript_t3598672422, ___doneButton_4)); }
	inline Button_t3896396478 * get_doneButton_4() const { return ___doneButton_4; }
	inline Button_t3896396478 ** get_address_of_doneButton_4() { return &___doneButton_4; }
	inline void set_doneButton_4(Button_t3896396478 * value)
	{
		___doneButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___doneButton_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
