#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Regex
struct Regex_t2161232213;
// CUDLR.RouteAttribute/Callback
struct Callback_t1331021739;

#include "mscorlib_System_Attribute2523058482.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.RouteAttribute
struct  RouteAttribute_t3016220049  : public Attribute_t2523058482
{
public:
	// System.Text.RegularExpressions.Regex CUDLR.RouteAttribute::m_route
	Regex_t2161232213 * ___m_route_0;
	// System.Text.RegularExpressions.Regex CUDLR.RouteAttribute::m_methods
	Regex_t2161232213 * ___m_methods_1;
	// System.Boolean CUDLR.RouteAttribute::m_runOnMainThread
	bool ___m_runOnMainThread_2;
	// CUDLR.RouteAttribute/Callback CUDLR.RouteAttribute::m_callback
	Callback_t1331021739 * ___m_callback_3;

public:
	inline static int32_t get_offset_of_m_route_0() { return static_cast<int32_t>(offsetof(RouteAttribute_t3016220049, ___m_route_0)); }
	inline Regex_t2161232213 * get_m_route_0() const { return ___m_route_0; }
	inline Regex_t2161232213 ** get_address_of_m_route_0() { return &___m_route_0; }
	inline void set_m_route_0(Regex_t2161232213 * value)
	{
		___m_route_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_route_0, value);
	}

	inline static int32_t get_offset_of_m_methods_1() { return static_cast<int32_t>(offsetof(RouteAttribute_t3016220049, ___m_methods_1)); }
	inline Regex_t2161232213 * get_m_methods_1() const { return ___m_methods_1; }
	inline Regex_t2161232213 ** get_address_of_m_methods_1() { return &___m_methods_1; }
	inline void set_m_methods_1(Regex_t2161232213 * value)
	{
		___m_methods_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_methods_1, value);
	}

	inline static int32_t get_offset_of_m_runOnMainThread_2() { return static_cast<int32_t>(offsetof(RouteAttribute_t3016220049, ___m_runOnMainThread_2)); }
	inline bool get_m_runOnMainThread_2() const { return ___m_runOnMainThread_2; }
	inline bool* get_address_of_m_runOnMainThread_2() { return &___m_runOnMainThread_2; }
	inline void set_m_runOnMainThread_2(bool value)
	{
		___m_runOnMainThread_2 = value;
	}

	inline static int32_t get_offset_of_m_callback_3() { return static_cast<int32_t>(offsetof(RouteAttribute_t3016220049, ___m_callback_3)); }
	inline Callback_t1331021739 * get_m_callback_3() const { return ___m_callback_3; }
	inline Callback_t1331021739 ** get_address_of_m_callback_3() { return &___m_callback_3; }
	inline void set_m_callback_3(Callback_t1331021739 * value)
	{
		___m_callback_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_callback_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
