#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Text.RegularExpressions.EvalDelegate
struct EvalDelegate_t4101713353;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t581716920;
// System.Text.RegularExpressions.RxInterpreter/RepeatContext
struct RepeatContext_t1676722124;

#include "System_System_Text_RegularExpressions_BaseMachine768653060.h"
#include "System_System_Text_RegularExpressions_RxInterprete1403093153.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RxInterpreter
struct  RxInterpreter_t3581763170  : public BaseMachine_t768653060
{
public:
	// System.Byte[] System.Text.RegularExpressions.RxInterpreter::program
	ByteU5BU5D_t4260760469* ___program_1;
	// System.String System.Text.RegularExpressions.RxInterpreter::str
	String_t* ___str_2;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::string_start
	int32_t ___string_start_3;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::string_end
	int32_t ___string_end_4;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::group_count
	int32_t ___group_count_5;
	// System.Int32[] System.Text.RegularExpressions.RxInterpreter::groups
	Int32U5BU5D_t3230847821* ___groups_6;
	// System.Text.RegularExpressions.EvalDelegate System.Text.RegularExpressions.RxInterpreter::eval_del
	EvalDelegate_t4101713353 * ___eval_del_7;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.RxInterpreter::marks
	MarkU5BU5D_t581716920* ___marks_8;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::mark_start
	int32_t ___mark_start_9;
	// System.Int32 System.Text.RegularExpressions.RxInterpreter::mark_end
	int32_t ___mark_end_10;
	// System.Text.RegularExpressions.RxInterpreter/IntStack System.Text.RegularExpressions.RxInterpreter::stack
	IntStack_t1403093153  ___stack_11;
	// System.Text.RegularExpressions.RxInterpreter/RepeatContext System.Text.RegularExpressions.RxInterpreter::repeat
	RepeatContext_t1676722124 * ___repeat_12;
	// System.Text.RegularExpressions.RxInterpreter/RepeatContext System.Text.RegularExpressions.RxInterpreter::deep
	RepeatContext_t1676722124 * ___deep_13;

public:
	inline static int32_t get_offset_of_program_1() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___program_1)); }
	inline ByteU5BU5D_t4260760469* get_program_1() const { return ___program_1; }
	inline ByteU5BU5D_t4260760469** get_address_of_program_1() { return &___program_1; }
	inline void set_program_1(ByteU5BU5D_t4260760469* value)
	{
		___program_1 = value;
		Il2CppCodeGenWriteBarrier(&___program_1, value);
	}

	inline static int32_t get_offset_of_str_2() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___str_2)); }
	inline String_t* get_str_2() const { return ___str_2; }
	inline String_t** get_address_of_str_2() { return &___str_2; }
	inline void set_str_2(String_t* value)
	{
		___str_2 = value;
		Il2CppCodeGenWriteBarrier(&___str_2, value);
	}

	inline static int32_t get_offset_of_string_start_3() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___string_start_3)); }
	inline int32_t get_string_start_3() const { return ___string_start_3; }
	inline int32_t* get_address_of_string_start_3() { return &___string_start_3; }
	inline void set_string_start_3(int32_t value)
	{
		___string_start_3 = value;
	}

	inline static int32_t get_offset_of_string_end_4() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___string_end_4)); }
	inline int32_t get_string_end_4() const { return ___string_end_4; }
	inline int32_t* get_address_of_string_end_4() { return &___string_end_4; }
	inline void set_string_end_4(int32_t value)
	{
		___string_end_4 = value;
	}

	inline static int32_t get_offset_of_group_count_5() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___group_count_5)); }
	inline int32_t get_group_count_5() const { return ___group_count_5; }
	inline int32_t* get_address_of_group_count_5() { return &___group_count_5; }
	inline void set_group_count_5(int32_t value)
	{
		___group_count_5 = value;
	}

	inline static int32_t get_offset_of_groups_6() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___groups_6)); }
	inline Int32U5BU5D_t3230847821* get_groups_6() const { return ___groups_6; }
	inline Int32U5BU5D_t3230847821** get_address_of_groups_6() { return &___groups_6; }
	inline void set_groups_6(Int32U5BU5D_t3230847821* value)
	{
		___groups_6 = value;
		Il2CppCodeGenWriteBarrier(&___groups_6, value);
	}

	inline static int32_t get_offset_of_eval_del_7() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___eval_del_7)); }
	inline EvalDelegate_t4101713353 * get_eval_del_7() const { return ___eval_del_7; }
	inline EvalDelegate_t4101713353 ** get_address_of_eval_del_7() { return &___eval_del_7; }
	inline void set_eval_del_7(EvalDelegate_t4101713353 * value)
	{
		___eval_del_7 = value;
		Il2CppCodeGenWriteBarrier(&___eval_del_7, value);
	}

	inline static int32_t get_offset_of_marks_8() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___marks_8)); }
	inline MarkU5BU5D_t581716920* get_marks_8() const { return ___marks_8; }
	inline MarkU5BU5D_t581716920** get_address_of_marks_8() { return &___marks_8; }
	inline void set_marks_8(MarkU5BU5D_t581716920* value)
	{
		___marks_8 = value;
		Il2CppCodeGenWriteBarrier(&___marks_8, value);
	}

	inline static int32_t get_offset_of_mark_start_9() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___mark_start_9)); }
	inline int32_t get_mark_start_9() const { return ___mark_start_9; }
	inline int32_t* get_address_of_mark_start_9() { return &___mark_start_9; }
	inline void set_mark_start_9(int32_t value)
	{
		___mark_start_9 = value;
	}

	inline static int32_t get_offset_of_mark_end_10() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___mark_end_10)); }
	inline int32_t get_mark_end_10() const { return ___mark_end_10; }
	inline int32_t* get_address_of_mark_end_10() { return &___mark_end_10; }
	inline void set_mark_end_10(int32_t value)
	{
		___mark_end_10 = value;
	}

	inline static int32_t get_offset_of_stack_11() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___stack_11)); }
	inline IntStack_t1403093153  get_stack_11() const { return ___stack_11; }
	inline IntStack_t1403093153 * get_address_of_stack_11() { return &___stack_11; }
	inline void set_stack_11(IntStack_t1403093153  value)
	{
		___stack_11 = value;
	}

	inline static int32_t get_offset_of_repeat_12() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___repeat_12)); }
	inline RepeatContext_t1676722124 * get_repeat_12() const { return ___repeat_12; }
	inline RepeatContext_t1676722124 ** get_address_of_repeat_12() { return &___repeat_12; }
	inline void set_repeat_12(RepeatContext_t1676722124 * value)
	{
		___repeat_12 = value;
		Il2CppCodeGenWriteBarrier(&___repeat_12, value);
	}

	inline static int32_t get_offset_of_deep_13() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170, ___deep_13)); }
	inline RepeatContext_t1676722124 * get_deep_13() const { return ___deep_13; }
	inline RepeatContext_t1676722124 ** get_address_of_deep_13() { return &___deep_13; }
	inline void set_deep_13(RepeatContext_t1676722124 * value)
	{
		___deep_13 = value;
		Il2CppCodeGenWriteBarrier(&___deep_13, value);
	}
};

struct RxInterpreter_t3581763170_StaticFields
{
public:
	// System.Boolean System.Text.RegularExpressions.RxInterpreter::trace_rx
	bool ___trace_rx_14;

public:
	inline static int32_t get_offset_of_trace_rx_14() { return static_cast<int32_t>(offsetof(RxInterpreter_t3581763170_StaticFields, ___trace_rx_14)); }
	inline bool get_trace_rx_14() const { return ___trace_rx_14; }
	inline bool* get_address_of_trace_rx_14() { return &___trace_rx_14; }
	inline void set_trace_rx_14(bool value)
	{
		___trace_rx_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
