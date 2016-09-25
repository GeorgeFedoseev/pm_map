#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t1407064410;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.EndPointManager
struct  EndPointManager_t473251634  : public Il2CppObject
{
public:

public:
};

struct EndPointManager_t473251634_StaticFields
{
public:
	// System.Collections.Hashtable System.Net.EndPointManager::ip_to_endpoints
	Hashtable_t1407064410 * ___ip_to_endpoints_0;

public:
	inline static int32_t get_offset_of_ip_to_endpoints_0() { return static_cast<int32_t>(offsetof(EndPointManager_t473251634_StaticFields, ___ip_to_endpoints_0)); }
	inline Hashtable_t1407064410 * get_ip_to_endpoints_0() const { return ___ip_to_endpoints_0; }
	inline Hashtable_t1407064410 ** get_address_of_ip_to_endpoints_0() { return &___ip_to_endpoints_0; }
	inline void set_ip_to_endpoints_0(Hashtable_t1407064410 * value)
	{
		___ip_to_endpoints_0 = value;
		Il2CppCodeGenWriteBarrier(&___ip_to_endpoints_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
