#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3009015393;

#include "System_Configuration_System_Configuration_Configur3842833450.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.Ipv6Element
struct  Ipv6Element_t2694178095  : public ConfigurationElement_t3842833450
{
public:

public:
};

struct Ipv6Element_t2694178095_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.Ipv6Element::enabledProp
	ConfigurationProperty_t3009015393 * ___enabledProp_14;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(Ipv6Element_t2694178095_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier(&___properties_13, value);
	}

	inline static int32_t get_offset_of_enabledProp_14() { return static_cast<int32_t>(offsetof(Ipv6Element_t2694178095_StaticFields, ___enabledProp_14)); }
	inline ConfigurationProperty_t3009015393 * get_enabledProp_14() const { return ___enabledProp_14; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_enabledProp_14() { return &___enabledProp_14; }
	inline void set_enabledProp_14(ConfigurationProperty_t3009015393 * value)
	{
		___enabledProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___enabledProp_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
