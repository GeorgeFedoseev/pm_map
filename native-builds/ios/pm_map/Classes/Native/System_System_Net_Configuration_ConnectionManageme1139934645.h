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

// System.Net.Configuration.ConnectionManagementData
struct  ConnectionManagementData_t1139934645  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Net.Configuration.ConnectionManagementData::data
	Hashtable_t1407064410 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ConnectionManagementData_t1139934645, ___data_0)); }
	inline Hashtable_t1407064410 * get_data_0() const { return ___data_0; }
	inline Hashtable_t1407064410 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Hashtable_t1407064410 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier(&___data_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
