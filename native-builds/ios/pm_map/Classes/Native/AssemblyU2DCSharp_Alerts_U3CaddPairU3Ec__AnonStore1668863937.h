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
// SPBUTimetable.WeekTimetable
struct WeekTimetable_t3211448027;
// System.Action`1<SPBUTimetable.Pair>
struct Action_1_t46535434;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Alerts/<addPair>c__AnonStorey23
struct  U3CaddPairU3Ec__AnonStorey23_t1668863937  : public Il2CppObject
{
public:
	// System.String Alerts/<addPair>c__AnonStorey23::title
	String_t* ___title_0;
	// System.String Alerts/<addPair>c__AnonStorey23::okButtonTitle
	String_t* ___okButtonTitle_1;
	// System.String Alerts/<addPair>c__AnonStorey23::cancelButtonTitle
	String_t* ___cancelButtonTitle_2;
	// SPBUTimetable.WeekTimetable Alerts/<addPair>c__AnonStorey23::week
	WeekTimetable_t3211448027 * ___week_3;
	// System.Action`1<SPBUTimetable.Pair> Alerts/<addPair>c__AnonStorey23::yesAction
	Action_1_t46535434 * ___yesAction_4;

public:
	inline static int32_t get_offset_of_title_0() { return static_cast<int32_t>(offsetof(U3CaddPairU3Ec__AnonStorey23_t1668863937, ___title_0)); }
	inline String_t* get_title_0() const { return ___title_0; }
	inline String_t** get_address_of_title_0() { return &___title_0; }
	inline void set_title_0(String_t* value)
	{
		___title_0 = value;
		Il2CppCodeGenWriteBarrier(&___title_0, value);
	}

	inline static int32_t get_offset_of_okButtonTitle_1() { return static_cast<int32_t>(offsetof(U3CaddPairU3Ec__AnonStorey23_t1668863937, ___okButtonTitle_1)); }
	inline String_t* get_okButtonTitle_1() const { return ___okButtonTitle_1; }
	inline String_t** get_address_of_okButtonTitle_1() { return &___okButtonTitle_1; }
	inline void set_okButtonTitle_1(String_t* value)
	{
		___okButtonTitle_1 = value;
		Il2CppCodeGenWriteBarrier(&___okButtonTitle_1, value);
	}

	inline static int32_t get_offset_of_cancelButtonTitle_2() { return static_cast<int32_t>(offsetof(U3CaddPairU3Ec__AnonStorey23_t1668863937, ___cancelButtonTitle_2)); }
	inline String_t* get_cancelButtonTitle_2() const { return ___cancelButtonTitle_2; }
	inline String_t** get_address_of_cancelButtonTitle_2() { return &___cancelButtonTitle_2; }
	inline void set_cancelButtonTitle_2(String_t* value)
	{
		___cancelButtonTitle_2 = value;
		Il2CppCodeGenWriteBarrier(&___cancelButtonTitle_2, value);
	}

	inline static int32_t get_offset_of_week_3() { return static_cast<int32_t>(offsetof(U3CaddPairU3Ec__AnonStorey23_t1668863937, ___week_3)); }
	inline WeekTimetable_t3211448027 * get_week_3() const { return ___week_3; }
	inline WeekTimetable_t3211448027 ** get_address_of_week_3() { return &___week_3; }
	inline void set_week_3(WeekTimetable_t3211448027 * value)
	{
		___week_3 = value;
		Il2CppCodeGenWriteBarrier(&___week_3, value);
	}

	inline static int32_t get_offset_of_yesAction_4() { return static_cast<int32_t>(offsetof(U3CaddPairU3Ec__AnonStorey23_t1668863937, ___yesAction_4)); }
	inline Action_1_t46535434 * get_yesAction_4() const { return ___yesAction_4; }
	inline Action_1_t46535434 ** get_address_of_yesAction_4() { return &___yesAction_4; }
	inline void set_yesAction_4(Action_1_t46535434 * value)
	{
		___yesAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___yesAction_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
