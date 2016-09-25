#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// TMPro.TextMeshPro
struct TextMeshPro_t3198095413;
// TMPro.TextContainer
struct TextContainer_t2231787766;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_TMPro_Examples_TextMeshPro_FrameR153157145.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TextMeshPro_FrameRateCounter
struct  TextMeshPro_FrameRateCounter_t854228375  : public MonoBehaviour_t667441552
{
public:
	// System.Single TMPro.Examples.TextMeshPro_FrameRateCounter::UpdateInterval
	float ___UpdateInterval_3;
	// System.Single TMPro.Examples.TextMeshPro_FrameRateCounter::m_LastInterval
	float ___m_LastInterval_4;
	// System.Int32 TMPro.Examples.TextMeshPro_FrameRateCounter::m_Frames
	int32_t ___m_Frames_5;
	// TMPro.Examples.TextMeshPro_FrameRateCounter/FpsCounterAnchorPositions TMPro.Examples.TextMeshPro_FrameRateCounter::AnchorPosition
	int32_t ___AnchorPosition_6;
	// System.String TMPro.Examples.TextMeshPro_FrameRateCounter::htmlColorTag
	String_t* ___htmlColorTag_7;
	// TMPro.TextMeshPro TMPro.Examples.TextMeshPro_FrameRateCounter::m_TextMeshPro
	TextMeshPro_t3198095413 * ___m_TextMeshPro_8;
	// TMPro.TextContainer TMPro.Examples.TextMeshPro_FrameRateCounter::m_textContainer
	TextContainer_t2231787766 * ___m_textContainer_9;
	// UnityEngine.Transform TMPro.Examples.TextMeshPro_FrameRateCounter::m_frameCounter_transform
	Transform_t1659122786 * ___m_frameCounter_transform_10;
	// UnityEngine.Camera TMPro.Examples.TextMeshPro_FrameRateCounter::m_camera
	Camera_t2727095145 * ___m_camera_11;
	// TMPro.Examples.TextMeshPro_FrameRateCounter/FpsCounterAnchorPositions TMPro.Examples.TextMeshPro_FrameRateCounter::last_AnchorPosition
	int32_t ___last_AnchorPosition_12;

public:
	inline static int32_t get_offset_of_UpdateInterval_3() { return static_cast<int32_t>(offsetof(TextMeshPro_FrameRateCounter_t854228375, ___UpdateInterval_3)); }
	inline float get_UpdateInterval_3() const { return ___UpdateInterval_3; }
	inline float* get_address_of_UpdateInterval_3() { return &___UpdateInterval_3; }
	inline void set_UpdateInterval_3(float value)
	{
		___UpdateInterval_3 = value;
	}

	inline static int32_t get_offset_of_m_LastInterval_4() { return static_cast<int32_t>(offsetof(TextMeshPro_FrameRateCounter_t854228375, ___m_LastInterval_4)); }
	inline float get_m_LastInterval_4() const { return ___m_LastInterval_4; }
	inline float* get_address_of_m_LastInterval_4() { return &___m_LastInterval_4; }
	inline void set_m_LastInterval_4(float value)
	{
		___m_LastInterval_4 = value;
	}

	inline static int32_t get_offset_of_m_Frames_5() { return static_cast<int32_t>(offsetof(TextMeshPro_FrameRateCounter_t854228375, ___m_Frames_5)); }
	inline int32_t get_m_Frames_5() const { return ___m_Frames_5; }
	inline int32_t* get_address_of_m_Frames_5() { return &___m_Frames_5; }
	inline void set_m_Frames_5(int32_t value)
	{
		___m_Frames_5 = value;
	}

	inline static int32_t get_offset_of_AnchorPosition_6() { return static_cast<int32_t>(offsetof(TextMeshPro_FrameRateCounter_t854228375, ___AnchorPosition_6)); }
	inline int32_t get_AnchorPosition_6() const { return ___AnchorPosition_6; }
	inline int32_t* get_address_of_AnchorPosition_6() { return &___AnchorPosition_6; }
	inline void set_AnchorPosition_6(int32_t value)
	{
		___AnchorPosition_6 = value;
	}

	inline static int32_t get_offset_of_htmlColorTag_7() { return static_cast<int32_t>(offsetof(TextMeshPro_FrameRateCounter_t854228375, ___htmlColorTag_7)); }
	inline String_t* get_htmlColorTag_7() const { return ___htmlColorTag_7; }
	inline String_t** get_address_of_htmlColorTag_7() { return &___htmlColorTag_7; }
	inline void set_htmlColorTag_7(String_t* value)
	{
		___htmlColorTag_7 = value;
		Il2CppCodeGenWriteBarrier(&___htmlColorTag_7, value);
	}

	inline static int32_t get_offset_of_m_TextMeshPro_8() { return static_cast<int32_t>(offsetof(TextMeshPro_FrameRateCounter_t854228375, ___m_TextMeshPro_8)); }
	inline TextMeshPro_t3198095413 * get_m_TextMeshPro_8() const { return ___m_TextMeshPro_8; }
	inline TextMeshPro_t3198095413 ** get_address_of_m_TextMeshPro_8() { return &___m_TextMeshPro_8; }
	inline void set_m_TextMeshPro_8(TextMeshPro_t3198095413 * value)
	{
		___m_TextMeshPro_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextMeshPro_8, value);
	}

	inline static int32_t get_offset_of_m_textContainer_9() { return static_cast<int32_t>(offsetof(TextMeshPro_FrameRateCounter_t854228375, ___m_textContainer_9)); }
	inline TextContainer_t2231787766 * get_m_textContainer_9() const { return ___m_textContainer_9; }
	inline TextContainer_t2231787766 ** get_address_of_m_textContainer_9() { return &___m_textContainer_9; }
	inline void set_m_textContainer_9(TextContainer_t2231787766 * value)
	{
		___m_textContainer_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_textContainer_9, value);
	}

	inline static int32_t get_offset_of_m_frameCounter_transform_10() { return static_cast<int32_t>(offsetof(TextMeshPro_FrameRateCounter_t854228375, ___m_frameCounter_transform_10)); }
	inline Transform_t1659122786 * get_m_frameCounter_transform_10() const { return ___m_frameCounter_transform_10; }
	inline Transform_t1659122786 ** get_address_of_m_frameCounter_transform_10() { return &___m_frameCounter_transform_10; }
	inline void set_m_frameCounter_transform_10(Transform_t1659122786 * value)
	{
		___m_frameCounter_transform_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_frameCounter_transform_10, value);
	}

	inline static int32_t get_offset_of_m_camera_11() { return static_cast<int32_t>(offsetof(TextMeshPro_FrameRateCounter_t854228375, ___m_camera_11)); }
	inline Camera_t2727095145 * get_m_camera_11() const { return ___m_camera_11; }
	inline Camera_t2727095145 ** get_address_of_m_camera_11() { return &___m_camera_11; }
	inline void set_m_camera_11(Camera_t2727095145 * value)
	{
		___m_camera_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_camera_11, value);
	}

	inline static int32_t get_offset_of_last_AnchorPosition_12() { return static_cast<int32_t>(offsetof(TextMeshPro_FrameRateCounter_t854228375, ___last_AnchorPosition_12)); }
	inline int32_t get_last_AnchorPosition_12() const { return ___last_AnchorPosition_12; }
	inline int32_t* get_address_of_last_AnchorPosition_12() { return &___last_AnchorPosition_12; }
	inline void set_last_AnchorPosition_12(int32_t value)
	{
		___last_AnchorPosition_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
