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

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_DateTime4283661327.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SPBUTimetable.Pair
struct  Pair_t3945686594  : public Il2CppObject
{
public:
	// System.DateTime SPBUTimetable.Pair::day
	DateTime_t4283661327  ___day_0;
	// System.String SPBUTimetable.Pair::name
	String_t* ___name_1;
	// System.String SPBUTimetable.Pair::time
	String_t* ___time_2;
	// System.String SPBUTimetable.Pair::location
	String_t* ___location_3;
	// System.String SPBUTimetable.Pair::lecturer
	String_t* ___lecturer_4;
	// System.String SPBUTimetable.Pair::room
	String_t* ___room_5;
	// System.DateTime SPBUTimetable.Pair::startTime
	DateTime_t4283661327  ___startTime_6;
	// System.DateTime SPBUTimetable.Pair::endTime
	DateTime_t4283661327  ___endTime_7;
	// System.Boolean SPBUTimetable.Pair::edited
	bool ___edited_8;
	// System.Boolean SPBUTimetable.Pair::deleted
	bool ___deleted_9;
	// System.String SPBUTimetable.Pair::initial_hash
	String_t* ___initial_hash_10;
	// System.String SPBUTimetable.Pair::hash
	String_t* ___hash_11;

public:
	inline static int32_t get_offset_of_day_0() { return static_cast<int32_t>(offsetof(Pair_t3945686594, ___day_0)); }
	inline DateTime_t4283661327  get_day_0() const { return ___day_0; }
	inline DateTime_t4283661327 * get_address_of_day_0() { return &___day_0; }
	inline void set_day_0(DateTime_t4283661327  value)
	{
		___day_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Pair_t3945686594, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier(&___name_1, value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(Pair_t3945686594, ___time_2)); }
	inline String_t* get_time_2() const { return ___time_2; }
	inline String_t** get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(String_t* value)
	{
		___time_2 = value;
		Il2CppCodeGenWriteBarrier(&___time_2, value);
	}

	inline static int32_t get_offset_of_location_3() { return static_cast<int32_t>(offsetof(Pair_t3945686594, ___location_3)); }
	inline String_t* get_location_3() const { return ___location_3; }
	inline String_t** get_address_of_location_3() { return &___location_3; }
	inline void set_location_3(String_t* value)
	{
		___location_3 = value;
		Il2CppCodeGenWriteBarrier(&___location_3, value);
	}

	inline static int32_t get_offset_of_lecturer_4() { return static_cast<int32_t>(offsetof(Pair_t3945686594, ___lecturer_4)); }
	inline String_t* get_lecturer_4() const { return ___lecturer_4; }
	inline String_t** get_address_of_lecturer_4() { return &___lecturer_4; }
	inline void set_lecturer_4(String_t* value)
	{
		___lecturer_4 = value;
		Il2CppCodeGenWriteBarrier(&___lecturer_4, value);
	}

	inline static int32_t get_offset_of_room_5() { return static_cast<int32_t>(offsetof(Pair_t3945686594, ___room_5)); }
	inline String_t* get_room_5() const { return ___room_5; }
	inline String_t** get_address_of_room_5() { return &___room_5; }
	inline void set_room_5(String_t* value)
	{
		___room_5 = value;
		Il2CppCodeGenWriteBarrier(&___room_5, value);
	}

	inline static int32_t get_offset_of_startTime_6() { return static_cast<int32_t>(offsetof(Pair_t3945686594, ___startTime_6)); }
	inline DateTime_t4283661327  get_startTime_6() const { return ___startTime_6; }
	inline DateTime_t4283661327 * get_address_of_startTime_6() { return &___startTime_6; }
	inline void set_startTime_6(DateTime_t4283661327  value)
	{
		___startTime_6 = value;
	}

	inline static int32_t get_offset_of_endTime_7() { return static_cast<int32_t>(offsetof(Pair_t3945686594, ___endTime_7)); }
	inline DateTime_t4283661327  get_endTime_7() const { return ___endTime_7; }
	inline DateTime_t4283661327 * get_address_of_endTime_7() { return &___endTime_7; }
	inline void set_endTime_7(DateTime_t4283661327  value)
	{
		___endTime_7 = value;
	}

	inline static int32_t get_offset_of_edited_8() { return static_cast<int32_t>(offsetof(Pair_t3945686594, ___edited_8)); }
	inline bool get_edited_8() const { return ___edited_8; }
	inline bool* get_address_of_edited_8() { return &___edited_8; }
	inline void set_edited_8(bool value)
	{
		___edited_8 = value;
	}

	inline static int32_t get_offset_of_deleted_9() { return static_cast<int32_t>(offsetof(Pair_t3945686594, ___deleted_9)); }
	inline bool get_deleted_9() const { return ___deleted_9; }
	inline bool* get_address_of_deleted_9() { return &___deleted_9; }
	inline void set_deleted_9(bool value)
	{
		___deleted_9 = value;
	}

	inline static int32_t get_offset_of_initial_hash_10() { return static_cast<int32_t>(offsetof(Pair_t3945686594, ___initial_hash_10)); }
	inline String_t* get_initial_hash_10() const { return ___initial_hash_10; }
	inline String_t** get_address_of_initial_hash_10() { return &___initial_hash_10; }
	inline void set_initial_hash_10(String_t* value)
	{
		___initial_hash_10 = value;
		Il2CppCodeGenWriteBarrier(&___initial_hash_10, value);
	}

	inline static int32_t get_offset_of_hash_11() { return static_cast<int32_t>(offsetof(Pair_t3945686594, ___hash_11)); }
	inline String_t* get_hash_11() const { return ___hash_11; }
	inline String_t** get_address_of_hash_11() { return &___hash_11; }
	inline void set_hash_11(String_t* value)
	{
		___hash_11 = value;
		Il2CppCodeGenWriteBarrier(&___hash_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
