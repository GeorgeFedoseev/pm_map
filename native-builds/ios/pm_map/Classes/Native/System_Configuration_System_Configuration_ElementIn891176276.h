#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.PropertyInformation
struct PropertyInformation_t2703580109;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t2683512459;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ElementInformation
struct  ElementInformation_t891176276  : public Il2CppObject
{
public:
	// System.Configuration.PropertyInformation System.Configuration.ElementInformation::propertyInfo
	PropertyInformation_t2703580109 * ___propertyInfo_0;
	// System.Configuration.ConfigurationElement System.Configuration.ElementInformation::owner
	ConfigurationElement_t3842833450 * ___owner_1;
	// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::properties
	PropertyInformationCollection_t2683512459 * ___properties_2;

public:
	inline static int32_t get_offset_of_propertyInfo_0() { return static_cast<int32_t>(offsetof(ElementInformation_t891176276, ___propertyInfo_0)); }
	inline PropertyInformation_t2703580109 * get_propertyInfo_0() const { return ___propertyInfo_0; }
	inline PropertyInformation_t2703580109 ** get_address_of_propertyInfo_0() { return &___propertyInfo_0; }
	inline void set_propertyInfo_0(PropertyInformation_t2703580109 * value)
	{
		___propertyInfo_0 = value;
		Il2CppCodeGenWriteBarrier(&___propertyInfo_0, value);
	}

	inline static int32_t get_offset_of_owner_1() { return static_cast<int32_t>(offsetof(ElementInformation_t891176276, ___owner_1)); }
	inline ConfigurationElement_t3842833450 * get_owner_1() const { return ___owner_1; }
	inline ConfigurationElement_t3842833450 ** get_address_of_owner_1() { return &___owner_1; }
	inline void set_owner_1(ConfigurationElement_t3842833450 * value)
	{
		___owner_1 = value;
		Il2CppCodeGenWriteBarrier(&___owner_1, value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(ElementInformation_t891176276, ___properties_2)); }
	inline PropertyInformationCollection_t2683512459 * get_properties_2() const { return ___properties_2; }
	inline PropertyInformationCollection_t2683512459 ** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(PropertyInformationCollection_t2683512459 * value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier(&___properties_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
