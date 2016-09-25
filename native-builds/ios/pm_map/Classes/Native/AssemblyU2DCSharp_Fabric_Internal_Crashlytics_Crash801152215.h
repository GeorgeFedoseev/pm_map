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
// Fabric.Internal.Crashlytics.CrashlyticsInit
struct CrashlyticsInit_t801152215;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Fabric.Internal.Crashlytics.CrashlyticsInit
struct  CrashlyticsInit_t801152215  : public MonoBehaviour_t667441552
{
public:

public:
};

struct CrashlyticsInit_t801152215_StaticFields
{
public:
	// System.String Fabric.Internal.Crashlytics.CrashlyticsInit::kitName
	String_t* ___kitName_2;
	// Fabric.Internal.Crashlytics.CrashlyticsInit Fabric.Internal.Crashlytics.CrashlyticsInit::instance
	CrashlyticsInit_t801152215 * ___instance_3;

public:
	inline static int32_t get_offset_of_kitName_2() { return static_cast<int32_t>(offsetof(CrashlyticsInit_t801152215_StaticFields, ___kitName_2)); }
	inline String_t* get_kitName_2() const { return ___kitName_2; }
	inline String_t** get_address_of_kitName_2() { return &___kitName_2; }
	inline void set_kitName_2(String_t* value)
	{
		___kitName_2 = value;
		Il2CppCodeGenWriteBarrier(&___kitName_2, value);
	}

	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(CrashlyticsInit_t801152215_StaticFields, ___instance_3)); }
	inline CrashlyticsInit_t801152215 * get_instance_3() const { return ___instance_3; }
	inline CrashlyticsInit_t801152215 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(CrashlyticsInit_t801152215 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
