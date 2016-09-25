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

// System.Net.Configuration.SocketElement
struct  SocketElement_t3740463139  : public ConfigurationElement_t3842833450
{
public:

public:
};

struct SocketElement_t3740463139_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForAcceptProp
	ConfigurationProperty_t3009015393 * ___alwaysUseCompletionPortsForAcceptProp_14;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForConnectProp
	ConfigurationProperty_t3009015393 * ___alwaysUseCompletionPortsForConnectProp_15;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(SocketElement_t3740463139_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier(&___properties_13, value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForAcceptProp_14() { return static_cast<int32_t>(offsetof(SocketElement_t3740463139_StaticFields, ___alwaysUseCompletionPortsForAcceptProp_14)); }
	inline ConfigurationProperty_t3009015393 * get_alwaysUseCompletionPortsForAcceptProp_14() const { return ___alwaysUseCompletionPortsForAcceptProp_14; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_alwaysUseCompletionPortsForAcceptProp_14() { return &___alwaysUseCompletionPortsForAcceptProp_14; }
	inline void set_alwaysUseCompletionPortsForAcceptProp_14(ConfigurationProperty_t3009015393 * value)
	{
		___alwaysUseCompletionPortsForAcceptProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___alwaysUseCompletionPortsForAcceptProp_14, value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForConnectProp_15() { return static_cast<int32_t>(offsetof(SocketElement_t3740463139_StaticFields, ___alwaysUseCompletionPortsForConnectProp_15)); }
	inline ConfigurationProperty_t3009015393 * get_alwaysUseCompletionPortsForConnectProp_15() const { return ___alwaysUseCompletionPortsForConnectProp_15; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_alwaysUseCompletionPortsForConnectProp_15() { return &___alwaysUseCompletionPortsForConnectProp_15; }
	inline void set_alwaysUseCompletionPortsForConnectProp_15(ConfigurationProperty_t3009015393 * value)
	{
		___alwaysUseCompletionPortsForConnectProp_15 = value;
		Il2CppCodeGenWriteBarrier(&___alwaysUseCompletionPortsForConnectProp_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
