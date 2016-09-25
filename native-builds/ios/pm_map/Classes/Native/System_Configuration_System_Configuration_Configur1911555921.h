#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2963986668;
// System.Configuration.Configuration
struct Configuration_t710589292;

#include "System_System_Collections_Specialized_NameObjectCo1023199937.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSectionCollection
struct  ConfigurationSectionCollection_t1911555921  : public NameObjectCollectionBase_t1023199937
{
public:
	// System.Configuration.SectionGroupInfo System.Configuration.ConfigurationSectionCollection::group
	SectionGroupInfo_t2963986668 * ___group_10;
	// System.Configuration.Configuration System.Configuration.ConfigurationSectionCollection::config
	Configuration_t710589292 * ___config_11;

public:
	inline static int32_t get_offset_of_group_10() { return static_cast<int32_t>(offsetof(ConfigurationSectionCollection_t1911555921, ___group_10)); }
	inline SectionGroupInfo_t2963986668 * get_group_10() const { return ___group_10; }
	inline SectionGroupInfo_t2963986668 ** get_address_of_group_10() { return &___group_10; }
	inline void set_group_10(SectionGroupInfo_t2963986668 * value)
	{
		___group_10 = value;
		Il2CppCodeGenWriteBarrier(&___group_10, value);
	}

	inline static int32_t get_offset_of_config_11() { return static_cast<int32_t>(offsetof(ConfigurationSectionCollection_t1911555921, ___config_11)); }
	inline Configuration_t710589292 * get_config_11() const { return ___config_11; }
	inline Configuration_t710589292 ** get_address_of_config_11() { return &___config_11; }
	inline void set_config_11(Configuration_t710589292 * value)
	{
		___config_11 = value;
		Il2CppCodeGenWriteBarrier(&___config_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
