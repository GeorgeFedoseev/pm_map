#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.FPSCounter
struct  FPSCounter_t1868603839  : public MonoBehaviour_t667441552
{
public:
	// System.Single MaterialUI.FPSCounter::updateInterval
	float ___updateInterval_2;
	// System.Single MaterialUI.FPSCounter::deltaFps
	float ___deltaFps_3;
	// System.Int32 MaterialUI.FPSCounter::frames
	int32_t ___frames_4;
	// System.Single MaterialUI.FPSCounter::timeleft
	float ___timeleft_5;
	// UnityEngine.UI.Text MaterialUI.FPSCounter::theText
	Text_t9039225 * ___theText_6;

public:
	inline static int32_t get_offset_of_updateInterval_2() { return static_cast<int32_t>(offsetof(FPSCounter_t1868603839, ___updateInterval_2)); }
	inline float get_updateInterval_2() const { return ___updateInterval_2; }
	inline float* get_address_of_updateInterval_2() { return &___updateInterval_2; }
	inline void set_updateInterval_2(float value)
	{
		___updateInterval_2 = value;
	}

	inline static int32_t get_offset_of_deltaFps_3() { return static_cast<int32_t>(offsetof(FPSCounter_t1868603839, ___deltaFps_3)); }
	inline float get_deltaFps_3() const { return ___deltaFps_3; }
	inline float* get_address_of_deltaFps_3() { return &___deltaFps_3; }
	inline void set_deltaFps_3(float value)
	{
		___deltaFps_3 = value;
	}

	inline static int32_t get_offset_of_frames_4() { return static_cast<int32_t>(offsetof(FPSCounter_t1868603839, ___frames_4)); }
	inline int32_t get_frames_4() const { return ___frames_4; }
	inline int32_t* get_address_of_frames_4() { return &___frames_4; }
	inline void set_frames_4(int32_t value)
	{
		___frames_4 = value;
	}

	inline static int32_t get_offset_of_timeleft_5() { return static_cast<int32_t>(offsetof(FPSCounter_t1868603839, ___timeleft_5)); }
	inline float get_timeleft_5() const { return ___timeleft_5; }
	inline float* get_address_of_timeleft_5() { return &___timeleft_5; }
	inline void set_timeleft_5(float value)
	{
		___timeleft_5 = value;
	}

	inline static int32_t get_offset_of_theText_6() { return static_cast<int32_t>(offsetof(FPSCounter_t1868603839, ___theText_6)); }
	inline Text_t9039225 * get_theText_6() const { return ___theText_6; }
	inline Text_t9039225 ** get_address_of_theText_6() { return &___theText_6; }
	inline void set_theText_6(Text_t9039225 * value)
	{
		___theText_6 = value;
		Il2CppCodeGenWriteBarrier(&___theText_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
