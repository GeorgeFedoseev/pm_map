#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.Thread
struct Thread_t1973216770;
// System.String
struct String_t;
// System.Net.HttpListener
struct HttpListener_t1617405814;
// System.Collections.Generic.List`1<CUDLR.RouteAttribute>
struct List_1_t89438305;
// System.Collections.Generic.Queue`1<CUDLR.RequestContext>
struct Queue_1_t781076827;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t2875332669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Server
struct  Server_t1489864833  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 CUDLR.Server::Port
	int32_t ___Port_2;

public:
	inline static int32_t get_offset_of_Port_2() { return static_cast<int32_t>(offsetof(Server_t1489864833, ___Port_2)); }
	inline int32_t get_Port_2() const { return ___Port_2; }
	inline int32_t* get_address_of_Port_2() { return &___Port_2; }
	inline void set_Port_2(int32_t value)
	{
		___Port_2 = value;
	}
};

struct Server_t1489864833_StaticFields
{
public:
	// System.Threading.Thread CUDLR.Server::mainThread
	Thread_t1973216770 * ___mainThread_3;
	// System.String CUDLR.Server::fileRoot
	String_t* ___fileRoot_4;
	// System.Net.HttpListener CUDLR.Server::listener
	HttpListener_t1617405814 * ___listener_5;
	// System.Collections.Generic.List`1<CUDLR.RouteAttribute> CUDLR.Server::registeredRoutes
	List_1_t89438305 * ___registeredRoutes_6;
	// System.Collections.Generic.Queue`1<CUDLR.RequestContext> CUDLR.Server::mainRequests
	Queue_1_t781076827 * ___mainRequests_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> CUDLR.Server::fileTypes
	Dictionary_2_t827649927 * ___fileTypes_8;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> CUDLR.Server::<>f__am$cache7
	Func_2_t2875332669 * ___U3CU3Ef__amU24cache7_9;

public:
	inline static int32_t get_offset_of_mainThread_3() { return static_cast<int32_t>(offsetof(Server_t1489864833_StaticFields, ___mainThread_3)); }
	inline Thread_t1973216770 * get_mainThread_3() const { return ___mainThread_3; }
	inline Thread_t1973216770 ** get_address_of_mainThread_3() { return &___mainThread_3; }
	inline void set_mainThread_3(Thread_t1973216770 * value)
	{
		___mainThread_3 = value;
		Il2CppCodeGenWriteBarrier(&___mainThread_3, value);
	}

	inline static int32_t get_offset_of_fileRoot_4() { return static_cast<int32_t>(offsetof(Server_t1489864833_StaticFields, ___fileRoot_4)); }
	inline String_t* get_fileRoot_4() const { return ___fileRoot_4; }
	inline String_t** get_address_of_fileRoot_4() { return &___fileRoot_4; }
	inline void set_fileRoot_4(String_t* value)
	{
		___fileRoot_4 = value;
		Il2CppCodeGenWriteBarrier(&___fileRoot_4, value);
	}

	inline static int32_t get_offset_of_listener_5() { return static_cast<int32_t>(offsetof(Server_t1489864833_StaticFields, ___listener_5)); }
	inline HttpListener_t1617405814 * get_listener_5() const { return ___listener_5; }
	inline HttpListener_t1617405814 ** get_address_of_listener_5() { return &___listener_5; }
	inline void set_listener_5(HttpListener_t1617405814 * value)
	{
		___listener_5 = value;
		Il2CppCodeGenWriteBarrier(&___listener_5, value);
	}

	inline static int32_t get_offset_of_registeredRoutes_6() { return static_cast<int32_t>(offsetof(Server_t1489864833_StaticFields, ___registeredRoutes_6)); }
	inline List_1_t89438305 * get_registeredRoutes_6() const { return ___registeredRoutes_6; }
	inline List_1_t89438305 ** get_address_of_registeredRoutes_6() { return &___registeredRoutes_6; }
	inline void set_registeredRoutes_6(List_1_t89438305 * value)
	{
		___registeredRoutes_6 = value;
		Il2CppCodeGenWriteBarrier(&___registeredRoutes_6, value);
	}

	inline static int32_t get_offset_of_mainRequests_7() { return static_cast<int32_t>(offsetof(Server_t1489864833_StaticFields, ___mainRequests_7)); }
	inline Queue_1_t781076827 * get_mainRequests_7() const { return ___mainRequests_7; }
	inline Queue_1_t781076827 ** get_address_of_mainRequests_7() { return &___mainRequests_7; }
	inline void set_mainRequests_7(Queue_1_t781076827 * value)
	{
		___mainRequests_7 = value;
		Il2CppCodeGenWriteBarrier(&___mainRequests_7, value);
	}

	inline static int32_t get_offset_of_fileTypes_8() { return static_cast<int32_t>(offsetof(Server_t1489864833_StaticFields, ___fileTypes_8)); }
	inline Dictionary_2_t827649927 * get_fileTypes_8() const { return ___fileTypes_8; }
	inline Dictionary_2_t827649927 ** get_address_of_fileTypes_8() { return &___fileTypes_8; }
	inline void set_fileTypes_8(Dictionary_2_t827649927 * value)
	{
		___fileTypes_8 = value;
		Il2CppCodeGenWriteBarrier(&___fileTypes_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache7_9() { return static_cast<int32_t>(offsetof(Server_t1489864833_StaticFields, ___U3CU3Ef__amU24cache7_9)); }
	inline Func_2_t2875332669 * get_U3CU3Ef__amU24cache7_9() const { return ___U3CU3Ef__amU24cache7_9; }
	inline Func_2_t2875332669 ** get_address_of_U3CU3Ef__amU24cache7_9() { return &___U3CU3Ef__amU24cache7_9; }
	inline void set_U3CU3Ef__amU24cache7_9(Func_2_t2875332669 * value)
	{
		___U3CU3Ef__amU24cache7_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache7_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
