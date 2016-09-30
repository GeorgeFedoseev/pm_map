#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SPBUTimetable.Pair
struct Pair_t3945686594;
// System.String
struct String_t;
// System.Action`2<SPBUTimetable.Pair,SPBUTimetable.Pair>
struct Action_2_t1379811059;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Alerts/<editPair>c__AnonStorey23
struct  U3CeditPairU3Ec__AnonStorey23_t355735794  : public Il2CppObject
{
public:
	// SPBUTimetable.Pair Alerts/<editPair>c__AnonStorey23::pair
	Pair_t3945686594 * ___pair_0;
	// System.String Alerts/<editPair>c__AnonStorey23::title
	String_t* ___title_1;
	// System.String Alerts/<editPair>c__AnonStorey23::okButtonTitle
	String_t* ___okButtonTitle_2;
	// System.String Alerts/<editPair>c__AnonStorey23::cancelButtonTitle
	String_t* ___cancelButtonTitle_3;
	// System.Action`2<SPBUTimetable.Pair,SPBUTimetable.Pair> Alerts/<editPair>c__AnonStorey23::yesAction
	Action_2_t1379811059 * ___yesAction_4;

public:
	inline static int32_t get_offset_of_pair_0() { return static_cast<int32_t>(offsetof(U3CeditPairU3Ec__AnonStorey23_t355735794, ___pair_0)); }
	inline Pair_t3945686594 * get_pair_0() const { return ___pair_0; }
	inline Pair_t3945686594 ** get_address_of_pair_0() { return &___pair_0; }
	inline void set_pair_0(Pair_t3945686594 * value)
	{
		___pair_0 = value;
		Il2CppCodeGenWriteBarrier(&___pair_0, value);
	}

	inline static int32_t get_offset_of_title_1() { return static_cast<int32_t>(offsetof(U3CeditPairU3Ec__AnonStorey23_t355735794, ___title_1)); }
	inline String_t* get_title_1() const { return ___title_1; }
	inline String_t** get_address_of_title_1() { return &___title_1; }
	inline void set_title_1(String_t* value)
	{
		___title_1 = value;
		Il2CppCodeGenWriteBarrier(&___title_1, value);
	}

	inline static int32_t get_offset_of_okButtonTitle_2() { return static_cast<int32_t>(offsetof(U3CeditPairU3Ec__AnonStorey23_t355735794, ___okButtonTitle_2)); }
	inline String_t* get_okButtonTitle_2() const { return ___okButtonTitle_2; }
	inline String_t** get_address_of_okButtonTitle_2() { return &___okButtonTitle_2; }
	inline void set_okButtonTitle_2(String_t* value)
	{
		___okButtonTitle_2 = value;
		Il2CppCodeGenWriteBarrier(&___okButtonTitle_2, value);
	}

	inline static int32_t get_offset_of_cancelButtonTitle_3() { return static_cast<int32_t>(offsetof(U3CeditPairU3Ec__AnonStorey23_t355735794, ___cancelButtonTitle_3)); }
	inline String_t* get_cancelButtonTitle_3() const { return ___cancelButtonTitle_3; }
	inline String_t** get_address_of_cancelButtonTitle_3() { return &___cancelButtonTitle_3; }
	inline void set_cancelButtonTitle_3(String_t* value)
	{
		___cancelButtonTitle_3 = value;
		Il2CppCodeGenWriteBarrier(&___cancelButtonTitle_3, value);
	}

	inline static int32_t get_offset_of_yesAction_4() { return static_cast<int32_t>(offsetof(U3CeditPairU3Ec__AnonStorey23_t355735794, ___yesAction_4)); }
	inline Action_2_t1379811059 * get_yesAction_4() const { return ___yesAction_4; }
	inline Action_2_t1379811059 ** get_address_of_yesAction_4() { return &___yesAction_4; }
	inline void set_yesAction_4(Action_2_t1379811059 * value)
	{
		___yesAction_4 = value;
		Il2CppCodeGenWriteBarrier(&___yesAction_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
