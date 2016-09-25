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

// System.Net.Configuration.AuthenticationModuleElement
struct  AuthenticationModuleElement_t2100993394  : public ConfigurationElement_t3842833450
{
public:

public:
};

struct AuthenticationModuleElement_t2100993394_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModuleElement::properties
	ConfigurationPropertyCollection_t55611423 * ___properties_13;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModuleElement::typeProp
	ConfigurationProperty_t3009015393 * ___typeProp_14;

public:
	inline static int32_t get_offset_of_properties_13() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t2100993394_StaticFields, ___properties_13)); }
	inline ConfigurationPropertyCollection_t55611423 * get_properties_13() const { return ___properties_13; }
	inline ConfigurationPropertyCollection_t55611423 ** get_address_of_properties_13() { return &___properties_13; }
	inline void set_properties_13(ConfigurationPropertyCollection_t55611423 * value)
	{
		___properties_13 = value;
		Il2CppCodeGenWriteBarrier(&___properties_13, value);
	}

	inline static int32_t get_offset_of_typeProp_14() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t2100993394_StaticFields, ___typeProp_14)); }
	inline ConfigurationProperty_t3009015393 * get_typeProp_14() const { return ___typeProp_14; }
	inline ConfigurationProperty_t3009015393 ** get_address_of_typeProp_14() { return &___typeProp_14; }
	inline void set_typeProp_14(ConfigurationProperty_t3009015393 * value)
	{
		___typeProp_14 = value;
		Il2CppCodeGenWriteBarrier(&___typeProp_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
