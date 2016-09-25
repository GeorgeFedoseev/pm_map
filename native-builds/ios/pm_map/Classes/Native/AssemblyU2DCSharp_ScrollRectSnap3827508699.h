#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action
struct Action_t3771233898;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollRectSnap
struct  ScrollRectSnap_t3827508699  : public MonoBehaviour_t667441552
{
public:
	// System.Action ScrollRectSnap::OnSnap
	Action_t3771233898 * ___OnSnap_2;
	// System.Single[] ScrollRectSnap::points
	SingleU5BU5D_t2316563989* ___points_3;
	// System.Int32 ScrollRectSnap::screens
	int32_t ___screens_4;
	// System.Single ScrollRectSnap::snapSpeed
	float ___snapSpeed_5;
	// System.Single ScrollRectSnap::inertiaCutoffMagnitude
	float ___inertiaCutoffMagnitude_6;
	// System.Single ScrollRectSnap::stepSize
	float ___stepSize_7;
	// UnityEngine.UI.ScrollRect ScrollRectSnap::scroll
	ScrollRect_t3606982749 * ___scroll_8;
	// System.Boolean ScrollRectSnap::LerpH
	bool ___LerpH_9;
	// System.Single ScrollRectSnap::targetH
	float ___targetH_10;
	// System.Boolean ScrollRectSnap::snapInH
	bool ___snapInH_11;
	// System.Boolean ScrollRectSnap::LerpV
	bool ___LerpV_12;
	// System.Single ScrollRectSnap::targetV
	float ___targetV_13;
	// System.Boolean ScrollRectSnap::snapInV
	bool ___snapInV_14;
	// System.Boolean ScrollRectSnap::dragInit
	bool ___dragInit_15;
	// System.Int32 ScrollRectSnap::dragStartNearest
	int32_t ___dragStartNearest_16;

public:
	inline static int32_t get_offset_of_OnSnap_2() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___OnSnap_2)); }
	inline Action_t3771233898 * get_OnSnap_2() const { return ___OnSnap_2; }
	inline Action_t3771233898 ** get_address_of_OnSnap_2() { return &___OnSnap_2; }
	inline void set_OnSnap_2(Action_t3771233898 * value)
	{
		___OnSnap_2 = value;
		Il2CppCodeGenWriteBarrier(&___OnSnap_2, value);
	}

	inline static int32_t get_offset_of_points_3() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___points_3)); }
	inline SingleU5BU5D_t2316563989* get_points_3() const { return ___points_3; }
	inline SingleU5BU5D_t2316563989** get_address_of_points_3() { return &___points_3; }
	inline void set_points_3(SingleU5BU5D_t2316563989* value)
	{
		___points_3 = value;
		Il2CppCodeGenWriteBarrier(&___points_3, value);
	}

	inline static int32_t get_offset_of_screens_4() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___screens_4)); }
	inline int32_t get_screens_4() const { return ___screens_4; }
	inline int32_t* get_address_of_screens_4() { return &___screens_4; }
	inline void set_screens_4(int32_t value)
	{
		___screens_4 = value;
	}

	inline static int32_t get_offset_of_snapSpeed_5() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___snapSpeed_5)); }
	inline float get_snapSpeed_5() const { return ___snapSpeed_5; }
	inline float* get_address_of_snapSpeed_5() { return &___snapSpeed_5; }
	inline void set_snapSpeed_5(float value)
	{
		___snapSpeed_5 = value;
	}

	inline static int32_t get_offset_of_inertiaCutoffMagnitude_6() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___inertiaCutoffMagnitude_6)); }
	inline float get_inertiaCutoffMagnitude_6() const { return ___inertiaCutoffMagnitude_6; }
	inline float* get_address_of_inertiaCutoffMagnitude_6() { return &___inertiaCutoffMagnitude_6; }
	inline void set_inertiaCutoffMagnitude_6(float value)
	{
		___inertiaCutoffMagnitude_6 = value;
	}

	inline static int32_t get_offset_of_stepSize_7() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___stepSize_7)); }
	inline float get_stepSize_7() const { return ___stepSize_7; }
	inline float* get_address_of_stepSize_7() { return &___stepSize_7; }
	inline void set_stepSize_7(float value)
	{
		___stepSize_7 = value;
	}

	inline static int32_t get_offset_of_scroll_8() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___scroll_8)); }
	inline ScrollRect_t3606982749 * get_scroll_8() const { return ___scroll_8; }
	inline ScrollRect_t3606982749 ** get_address_of_scroll_8() { return &___scroll_8; }
	inline void set_scroll_8(ScrollRect_t3606982749 * value)
	{
		___scroll_8 = value;
		Il2CppCodeGenWriteBarrier(&___scroll_8, value);
	}

	inline static int32_t get_offset_of_LerpH_9() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___LerpH_9)); }
	inline bool get_LerpH_9() const { return ___LerpH_9; }
	inline bool* get_address_of_LerpH_9() { return &___LerpH_9; }
	inline void set_LerpH_9(bool value)
	{
		___LerpH_9 = value;
	}

	inline static int32_t get_offset_of_targetH_10() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___targetH_10)); }
	inline float get_targetH_10() const { return ___targetH_10; }
	inline float* get_address_of_targetH_10() { return &___targetH_10; }
	inline void set_targetH_10(float value)
	{
		___targetH_10 = value;
	}

	inline static int32_t get_offset_of_snapInH_11() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___snapInH_11)); }
	inline bool get_snapInH_11() const { return ___snapInH_11; }
	inline bool* get_address_of_snapInH_11() { return &___snapInH_11; }
	inline void set_snapInH_11(bool value)
	{
		___snapInH_11 = value;
	}

	inline static int32_t get_offset_of_LerpV_12() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___LerpV_12)); }
	inline bool get_LerpV_12() const { return ___LerpV_12; }
	inline bool* get_address_of_LerpV_12() { return &___LerpV_12; }
	inline void set_LerpV_12(bool value)
	{
		___LerpV_12 = value;
	}

	inline static int32_t get_offset_of_targetV_13() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___targetV_13)); }
	inline float get_targetV_13() const { return ___targetV_13; }
	inline float* get_address_of_targetV_13() { return &___targetV_13; }
	inline void set_targetV_13(float value)
	{
		___targetV_13 = value;
	}

	inline static int32_t get_offset_of_snapInV_14() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___snapInV_14)); }
	inline bool get_snapInV_14() const { return ___snapInV_14; }
	inline bool* get_address_of_snapInV_14() { return &___snapInV_14; }
	inline void set_snapInV_14(bool value)
	{
		___snapInV_14 = value;
	}

	inline static int32_t get_offset_of_dragInit_15() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___dragInit_15)); }
	inline bool get_dragInit_15() const { return ___dragInit_15; }
	inline bool* get_address_of_dragInit_15() { return &___dragInit_15; }
	inline void set_dragInit_15(bool value)
	{
		___dragInit_15 = value;
	}

	inline static int32_t get_offset_of_dragStartNearest_16() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699, ___dragStartNearest_16)); }
	inline int32_t get_dragStartNearest_16() const { return ___dragStartNearest_16; }
	inline int32_t* get_address_of_dragStartNearest_16() { return &___dragStartNearest_16; }
	inline void set_dragStartNearest_16(int32_t value)
	{
		___dragStartNearest_16 = value;
	}
};

struct ScrollRectSnap_t3827508699_StaticFields
{
public:
	// System.Action ScrollRectSnap::<>f__am$cacheF
	Action_t3771233898 * ___U3CU3Ef__amU24cacheF_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_17() { return static_cast<int32_t>(offsetof(ScrollRectSnap_t3827508699_StaticFields, ___U3CU3Ef__amU24cacheF_17)); }
	inline Action_t3771233898 * get_U3CU3Ef__amU24cacheF_17() const { return ___U3CU3Ef__amU24cacheF_17; }
	inline Action_t3771233898 ** get_address_of_U3CU3Ef__amU24cacheF_17() { return &___U3CU3Ef__amU24cacheF_17; }
	inline void set_U3CU3Ef__amU24cacheF_17(Action_t3771233898 * value)
	{
		___U3CU3Ef__amU24cacheF_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheF_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
