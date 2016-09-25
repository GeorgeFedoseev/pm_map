#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SPBUTimetable.DayTimetable
struct DayTimetable_t1053418317;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t3603375195;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// AppScript
struct AppScript_t3488119340;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TTDayScript
struct  TTDayScript_t1438646503  : public MonoBehaviour_t667441552
{
public:
	// SPBUTimetable.DayTimetable TTDayScript::_day
	DayTimetable_t1053418317 * ____day_2;
	// TMPro.TextMeshProUGUI TTDayScript::dayTitle
	TextMeshProUGUI_t3603375195 * ___dayTitle_3;
	// TMPro.TextMeshProUGUI TTDayScript::date
	TextMeshProUGUI_t3603375195 * ___date_4;
	// UnityEngine.Transform TTDayScript::timesContainer
	Transform_t1659122786 * ___timesContainer_5;
	// UnityEngine.RectTransform TTDayScript::todayBadge
	RectTransform_t972643934 * ___todayBadge_6;
	// AppScript TTDayScript::app
	AppScript_t3488119340 * ___app_7;
	// System.Boolean TTDayScript::_subscribed_to_time_based_updates
	bool ____subscribed_to_time_based_updates_8;

public:
	inline static int32_t get_offset_of__day_2() { return static_cast<int32_t>(offsetof(TTDayScript_t1438646503, ____day_2)); }
	inline DayTimetable_t1053418317 * get__day_2() const { return ____day_2; }
	inline DayTimetable_t1053418317 ** get_address_of__day_2() { return &____day_2; }
	inline void set__day_2(DayTimetable_t1053418317 * value)
	{
		____day_2 = value;
		Il2CppCodeGenWriteBarrier(&____day_2, value);
	}

	inline static int32_t get_offset_of_dayTitle_3() { return static_cast<int32_t>(offsetof(TTDayScript_t1438646503, ___dayTitle_3)); }
	inline TextMeshProUGUI_t3603375195 * get_dayTitle_3() const { return ___dayTitle_3; }
	inline TextMeshProUGUI_t3603375195 ** get_address_of_dayTitle_3() { return &___dayTitle_3; }
	inline void set_dayTitle_3(TextMeshProUGUI_t3603375195 * value)
	{
		___dayTitle_3 = value;
		Il2CppCodeGenWriteBarrier(&___dayTitle_3, value);
	}

	inline static int32_t get_offset_of_date_4() { return static_cast<int32_t>(offsetof(TTDayScript_t1438646503, ___date_4)); }
	inline TextMeshProUGUI_t3603375195 * get_date_4() const { return ___date_4; }
	inline TextMeshProUGUI_t3603375195 ** get_address_of_date_4() { return &___date_4; }
	inline void set_date_4(TextMeshProUGUI_t3603375195 * value)
	{
		___date_4 = value;
		Il2CppCodeGenWriteBarrier(&___date_4, value);
	}

	inline static int32_t get_offset_of_timesContainer_5() { return static_cast<int32_t>(offsetof(TTDayScript_t1438646503, ___timesContainer_5)); }
	inline Transform_t1659122786 * get_timesContainer_5() const { return ___timesContainer_5; }
	inline Transform_t1659122786 ** get_address_of_timesContainer_5() { return &___timesContainer_5; }
	inline void set_timesContainer_5(Transform_t1659122786 * value)
	{
		___timesContainer_5 = value;
		Il2CppCodeGenWriteBarrier(&___timesContainer_5, value);
	}

	inline static int32_t get_offset_of_todayBadge_6() { return static_cast<int32_t>(offsetof(TTDayScript_t1438646503, ___todayBadge_6)); }
	inline RectTransform_t972643934 * get_todayBadge_6() const { return ___todayBadge_6; }
	inline RectTransform_t972643934 ** get_address_of_todayBadge_6() { return &___todayBadge_6; }
	inline void set_todayBadge_6(RectTransform_t972643934 * value)
	{
		___todayBadge_6 = value;
		Il2CppCodeGenWriteBarrier(&___todayBadge_6, value);
	}

	inline static int32_t get_offset_of_app_7() { return static_cast<int32_t>(offsetof(TTDayScript_t1438646503, ___app_7)); }
	inline AppScript_t3488119340 * get_app_7() const { return ___app_7; }
	inline AppScript_t3488119340 ** get_address_of_app_7() { return &___app_7; }
	inline void set_app_7(AppScript_t3488119340 * value)
	{
		___app_7 = value;
		Il2CppCodeGenWriteBarrier(&___app_7, value);
	}

	inline static int32_t get_offset_of__subscribed_to_time_based_updates_8() { return static_cast<int32_t>(offsetof(TTDayScript_t1438646503, ____subscribed_to_time_based_updates_8)); }
	inline bool get__subscribed_to_time_based_updates_8() const { return ____subscribed_to_time_based_updates_8; }
	inline bool* get_address_of__subscribed_to_time_based_updates_8() { return &____subscribed_to_time_based_updates_8; }
	inline void set__subscribed_to_time_based_updates_8(bool value)
	{
		____subscribed_to_time_based_updates_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
