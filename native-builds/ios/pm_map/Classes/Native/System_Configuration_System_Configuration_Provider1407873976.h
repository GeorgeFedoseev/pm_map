#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.ConfigNameValueCollection
struct ConfigNameValueCollection_t4110742328;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3009015393;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t55611423;

#include "System_Configuration_System_Configuration_Configur3842833450.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ProviderSettings
struct  ProviderSettings_t1407873976  : public ConfigurationElement_t3842833450
{
public:
	// System.Configuration.ConfigNameValueCollection System.Configuration.ProviderSettings::parameters
	ConfigNameValueCollection_t4110742328 * ___parameters_13;

public:
	inline static int32_t get_offset_of_parameters_13() { return static_cast<int32_t>(offsetof(ProviderSettings_t1407873976, ___parameters_13)); }
	inline ConfigNameValueCollection_t4110742328 * get_parameters_13() const { return ___parameters_13; }
	inline ConfigNameValueCollection_t4110742328 ** get_address_of_parameters_13() { return &___parameters_13; }
	inline void set_parameters_13(ConfigNameValueCollection_t4110742328 * value)
	{
		___parameters_13 = value;
		Il2CppCodeGenWriteBarrier(&___parameters_13, value);
	}
};

struct ProviderSettings_t1407873976_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Configuration.ProviderSettings::nameProp
	ConfigurationProperty_t3009015393 * ___nameProp_14;
	// System.Configuration.ConfigurationProperty System.Configuration.ProviderSettings::typeProp
	ConfigurationProperty_t3009015393 * ___typeProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ProviderSettings::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_16;

public:
	inline static int32_t get_offset_of_nameProp_14() { return static_cast<int32_t>(offsetof(ProviderSettings_t1407873976_StaticFields, ___nameProp_14)); }
	inline ConfigurationProperty_t3009015393 * get_nameProp_14() const { return ___nameProp_14; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_nameProp_14() { return &___nameProp_14; }
	inline void set_nameProp_14(ConfigurationProperty_t3009015393 * value)
	{
		___nameProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___nameProp_14, value);
	}

	inline static int32_t get_offset_of_typeProp_15() { return static_cast<int32_t>(offsetof(ProviderSettings_t1407873976_StaticFields, ___typeProp_15)); }
	inline ConfigurationProperty_t3009015393 * get_typeProp_15() const { return ___typeProp_15; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_typeProp_15() { return &___typeProp_15; }
	inline void set_typeProp_15(ConfigurationProperty_t3009015393 * value)
	{
		___typeProp_15 = value;
		Il2CppCodeGenWriteBarrier(&___typeProp_15, value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(ProviderSettings_t1407873976_StaticFields, ___properties_16)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_16() const { return ___properties_16; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier(&___properties_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
