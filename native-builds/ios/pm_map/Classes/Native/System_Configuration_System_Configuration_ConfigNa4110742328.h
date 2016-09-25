#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "System_System_Collections_Specialized_NameValueCol2791941106.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigNameValueCollection
struct  ConfigNameValueCollection_t4110742328  : public NameValueCollection_t2791941106
{
public:
	// System.Boolean System.Configuration.ConfigNameValueCollection::modified
	bool ___modified_12;

public:
	inline static int32_t get_offset_of_modified_12() { return static_cast<int32_t>(offsetof(ConfigNameValueCollection_t4110742328, ___modified_12)); }
	inline bool get_modified_12() const { return ___modified_12; }
	inline bool* get_address_of_modified_12() { return &___modified_12; }
	inline void set_modified_12(bool value)
	{
		___modified_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
