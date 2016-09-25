#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Loom
struct Loom_t2374337;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t844452154;
// System.Collections.Generic.List`1<Loom/DelayedQueueItem>
struct List_1_t292984064;
// System.Func`2<Loom/DelayedQueueItem,System.Boolean>
struct Func_2_t341959283;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Loom
struct  Loom_t2374337  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 Loom::_count
	int32_t ____count_5;
	// System.Collections.Generic.List`1<System.Action> Loom::_actions
	List_1_t844452154 * ____actions_7;
	// System.Collections.Generic.List`1<Loom/DelayedQueueItem> Loom::_delayed
	List_1_t292984064 * ____delayed_8;
	// System.Collections.Generic.List`1<Loom/DelayedQueueItem> Loom::_currentDelayed
	List_1_t292984064 * ____currentDelayed_9;
	// System.Collections.Generic.List`1<Loom/DelayedQueueItem> Loom::_removeDelayed
	List_1_t292984064 * ____removeDelayed_10;
	// System.Collections.Generic.List`1<System.Action> Loom::_currentActions
	List_1_t844452154 * ____currentActions_11;

public:
	inline static int32_t get_offset_of__count_5() { return static_cast<int32_t>(offsetof(Loom_t2374337, ____count_5)); }
	inline int32_t get__count_5() const { return ____count_5; }
	inline int32_t* get_address_of__count_5() { return &____count_5; }
	inline void set__count_5(int32_t value)
	{
		____count_5 = value;
	}

	inline static int32_t get_offset_of__actions_7() { return static_cast<int32_t>(offsetof(Loom_t2374337, ____actions_7)); }
	inline List_1_t844452154 * get__actions_7() const { return ____actions_7; }
	inline List_1_t844452154 ** get_address_of__actions_7() { return &____actions_7; }
	inline void set__actions_7(List_1_t844452154 * value)
	{
		____actions_7 = value;
		Il2CppCodeGenWriteBarrier(&____actions_7, value);
	}

	inline static int32_t get_offset_of__delayed_8() { return static_cast<int32_t>(offsetof(Loom_t2374337, ____delayed_8)); }
	inline List_1_t292984064 * get__delayed_8() const { return ____delayed_8; }
	inline List_1_t292984064 ** get_address_of__delayed_8() { return &____delayed_8; }
	inline void set__delayed_8(List_1_t292984064 * value)
	{
		____delayed_8 = value;
		Il2CppCodeGenWriteBarrier(&____delayed_8, value);
	}

	inline static int32_t get_offset_of__currentDelayed_9() { return static_cast<int32_t>(offsetof(Loom_t2374337, ____currentDelayed_9)); }
	inline List_1_t292984064 * get__currentDelayed_9() const { return ____currentDelayed_9; }
	inline List_1_t292984064 ** get_address_of__currentDelayed_9() { return &____currentDelayed_9; }
	inline void set__currentDelayed_9(List_1_t292984064 * value)
	{
		____currentDelayed_9 = value;
		Il2CppCodeGenWriteBarrier(&____currentDelayed_9, value);
	}

	inline static int32_t get_offset_of__removeDelayed_10() { return static_cast<int32_t>(offsetof(Loom_t2374337, ____removeDelayed_10)); }
	inline List_1_t292984064 * get__removeDelayed_10() const { return ____removeDelayed_10; }
	inline List_1_t292984064 ** get_address_of__removeDelayed_10() { return &____removeDelayed_10; }
	inline void set__removeDelayed_10(List_1_t292984064 * value)
	{
		____removeDelayed_10 = value;
		Il2CppCodeGenWriteBarrier(&____removeDelayed_10, value);
	}

	inline static int32_t get_offset_of__currentActions_11() { return static_cast<int32_t>(offsetof(Loom_t2374337, ____currentActions_11)); }
	inline List_1_t844452154 * get__currentActions_11() const { return ____currentActions_11; }
	inline List_1_t844452154 ** get_address_of__currentActions_11() { return &____currentActions_11; }
	inline void set__currentActions_11(List_1_t844452154 * value)
	{
		____currentActions_11 = value;
		Il2CppCodeGenWriteBarrier(&____currentActions_11, value);
	}
};

struct Loom_t2374337_StaticFields
{
public:
	// System.Int32 Loom::maxThreads
	int32_t ___maxThreads_2;
	// System.Int32 Loom::numThreads
	int32_t ___numThreads_3;
	// Loom Loom::_current
	Loom_t2374337 * ____current_4;
	// System.Boolean Loom::initialized
	bool ___initialized_6;
	// System.Func`2<Loom/DelayedQueueItem,System.Boolean> Loom::<>f__am$cacheA
	Func_2_t341959283 * ___U3CU3Ef__amU24cacheA_12;

public:
	inline static int32_t get_offset_of_maxThreads_2() { return static_cast<int32_t>(offsetof(Loom_t2374337_StaticFields, ___maxThreads_2)); }
	inline int32_t get_maxThreads_2() const { return ___maxThreads_2; }
	inline int32_t* get_address_of_maxThreads_2() { return &___maxThreads_2; }
	inline void set_maxThreads_2(int32_t value)
	{
		___maxThreads_2 = value;
	}

	inline static int32_t get_offset_of_numThreads_3() { return static_cast<int32_t>(offsetof(Loom_t2374337_StaticFields, ___numThreads_3)); }
	inline int32_t get_numThreads_3() const { return ___numThreads_3; }
	inline int32_t* get_address_of_numThreads_3() { return &___numThreads_3; }
	inline void set_numThreads_3(int32_t value)
	{
		___numThreads_3 = value;
	}

	inline static int32_t get_offset_of__current_4() { return static_cast<int32_t>(offsetof(Loom_t2374337_StaticFields, ____current_4)); }
	inline Loom_t2374337 * get__current_4() const { return ____current_4; }
	inline Loom_t2374337 ** get_address_of__current_4() { return &____current_4; }
	inline void set__current_4(Loom_t2374337 * value)
	{
		____current_4 = value;
		Il2CppCodeGenWriteBarrier(&____current_4, value);
	}

	inline static int32_t get_offset_of_initialized_6() { return static_cast<int32_t>(offsetof(Loom_t2374337_StaticFields, ___initialized_6)); }
	inline bool get_initialized_6() const { return ___initialized_6; }
	inline bool* get_address_of_initialized_6() { return &___initialized_6; }
	inline void set_initialized_6(bool value)
	{
		___initialized_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheA_12() { return static_cast<int32_t>(offsetof(Loom_t2374337_StaticFields, ___U3CU3Ef__amU24cacheA_12)); }
	inline Func_2_t341959283 * get_U3CU3Ef__amU24cacheA_12() const { return ___U3CU3Ef__amU24cacheA_12; }
	inline Func_2_t341959283 ** get_address_of_U3CU3Ef__amU24cacheA_12() { return &___U3CU3Ef__amU24cacheA_12; }
	inline void set_U3CU3Ef__amU24cacheA_12(Func_2_t341959283 * value)
	{
		___U3CU3Ef__amU24cacheA_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheA_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
