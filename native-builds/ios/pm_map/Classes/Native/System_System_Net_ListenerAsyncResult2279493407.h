﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ManualResetEvent
struct ManualResetEvent_t924017833;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t3991598821;
// System.Net.HttpListenerContext
struct HttpListenerContext_t1119969133;
// System.Net.ListenerAsyncResult
struct ListenerAsyncResult_t2279493407;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.ListenerAsyncResult
struct  ListenerAsyncResult_t2279493407  : public Il2CppObject
{
public:
	// System.Threading.ManualResetEvent System.Net.ListenerAsyncResult::handle
	ManualResetEvent_t924017833 * ___handle_0;
	// System.Boolean System.Net.ListenerAsyncResult::synch
	bool ___synch_1;
	// System.Boolean System.Net.ListenerAsyncResult::completed
	bool ___completed_2;
	// System.AsyncCallback System.Net.ListenerAsyncResult::cb
	AsyncCallback_t1369114871 * ___cb_3;
	// System.Object System.Net.ListenerAsyncResult::state
	Il2CppObject * ___state_4;
	// System.Exception System.Net.ListenerAsyncResult::exception
	Exception_t3991598821 * ___exception_5;
	// System.Net.HttpListenerContext System.Net.ListenerAsyncResult::context
	HttpListenerContext_t1119969133 * ___context_6;
	// System.Object System.Net.ListenerAsyncResult::locker
	Il2CppObject * ___locker_7;
	// System.Net.ListenerAsyncResult System.Net.ListenerAsyncResult::forward
	ListenerAsyncResult_t2279493407 * ___forward_8;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(ListenerAsyncResult_t2279493407, ___handle_0)); }
	inline ManualResetEvent_t924017833 * get_handle_0() const { return ___handle_0; }
	inline ManualResetEvent_t924017833 ** get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(ManualResetEvent_t924017833 * value)
	{
		___handle_0 = value;
		Il2CppCodeGenWriteBarrier(&___handle_0, value);
	}

	inline static int32_t get_offset_of_synch_1() { return static_cast<int32_t>(offsetof(ListenerAsyncResult_t2279493407, ___synch_1)); }
	inline bool get_synch_1() const { return ___synch_1; }
	inline bool* get_address_of_synch_1() { return &___synch_1; }
	inline void set_synch_1(bool value)
	{
		___synch_1 = value;
	}

	inline static int32_t get_offset_of_completed_2() { return static_cast<int32_t>(offsetof(ListenerAsyncResult_t2279493407, ___completed_2)); }
	inline bool get_completed_2() const { return ___completed_2; }
	inline bool* get_address_of_completed_2() { return &___completed_2; }
	inline void set_completed_2(bool value)
	{
		___completed_2 = value;
	}

	inline static int32_t get_offset_of_cb_3() { return static_cast<int32_t>(offsetof(ListenerAsyncResult_t2279493407, ___cb_3)); }
	inline AsyncCallback_t1369114871 * get_cb_3() const { return ___cb_3; }
	inline AsyncCallback_t1369114871 ** get_address_of_cb_3() { return &___cb_3; }
	inline void set_cb_3(AsyncCallback_t1369114871 * value)
	{
		___cb_3 = value;
		Il2CppCodeGenWriteBarrier(&___cb_3, value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(ListenerAsyncResult_t2279493407, ___state_4)); }
	inline Il2CppObject * get_state_4() const { return ___state_4; }
	inline Il2CppObject ** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(Il2CppObject * value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier(&___state_4, value);
	}

	inline static int32_t get_offset_of_exception_5() { return static_cast<int32_t>(offsetof(ListenerAsyncResult_t2279493407, ___exception_5)); }
	inline Exception_t3991598821 * get_exception_5() const { return ___exception_5; }
	inline Exception_t3991598821 ** get_address_of_exception_5() { return &___exception_5; }
	inline void set_exception_5(Exception_t3991598821 * value)
	{
		___exception_5 = value;
		Il2CppCodeGenWriteBarrier(&___exception_5, value);
	}

	inline static int32_t get_offset_of_context_6() { return static_cast<int32_t>(offsetof(ListenerAsyncResult_t2279493407, ___context_6)); }
	inline HttpListenerContext_t1119969133 * get_context_6() const { return ___context_6; }
	inline HttpListenerContext_t1119969133 ** get_address_of_context_6() { return &___context_6; }
	inline void set_context_6(HttpListenerContext_t1119969133 * value)
	{
		___context_6 = value;
		Il2CppCodeGenWriteBarrier(&___context_6, value);
	}

	inline static int32_t get_offset_of_locker_7() { return static_cast<int32_t>(offsetof(ListenerAsyncResult_t2279493407, ___locker_7)); }
	inline Il2CppObject * get_locker_7() const { return ___locker_7; }
	inline Il2CppObject ** get_address_of_locker_7() { return &___locker_7; }
	inline void set_locker_7(Il2CppObject * value)
	{
		___locker_7 = value;
		Il2CppCodeGenWriteBarrier(&___locker_7, value);
	}

	inline static int32_t get_offset_of_forward_8() { return static_cast<int32_t>(offsetof(ListenerAsyncResult_t2279493407, ___forward_8)); }
	inline ListenerAsyncResult_t2279493407 * get_forward_8() const { return ___forward_8; }
	inline ListenerAsyncResult_t2279493407 ** get_address_of_forward_8() { return &___forward_8; }
	inline void set_forward_8(ListenerAsyncResult_t2279493407 * value)
	{
		___forward_8 = value;
		Il2CppCodeGenWriteBarrier(&___forward_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
