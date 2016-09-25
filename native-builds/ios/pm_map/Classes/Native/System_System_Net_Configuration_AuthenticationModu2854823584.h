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

#include "System_Configuration_System_Configuration_Configur3180944403.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModulesSection
struct  AuthenticationModulesSection_t2854823584  : public ConfigurationSection_t3180944403
{
public:

public:
};

struct AuthenticationModulesSection_t2854823584_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModulesSection::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModulesSection::authenticationModulesProp
	ConfigurationProperty_t3009015393 * ___authenticationModulesProp_18;

public:
	inline static int32_t get_offset_of_properties_17() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t2854823584_StaticFields, ___properties_17)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_17() const { return ___properties_17; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_17() { return &___properties_17; }
	inline void set_properties_17(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_17 = value;
		Il2CppCodeGenWriteBarrier(&___properties_17, value);
	}

	inline static int32_t get_offset_of_authenticationModulesProp_18() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t2854823584_StaticFields, ___authenticationModulesProp_18)); }
	inline ConfigurationProperty_t3009015393 * get_authenticationModulesProp_18() const { return ___authenticationModulesProp_18; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_authenticationModulesProp_18() { return &___authenticationModulesProp_18; }
	inline void set_authenticationModulesProp_18(ConfigurationProperty_t3009015393 * value)
	{
		___authenticationModulesProp_18 = value;
		Il2CppCodeGenWriteBarrier(&___authenticationModulesProp_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
