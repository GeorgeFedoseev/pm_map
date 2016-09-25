#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathSorters
struct  XPathSorters_t1807339567  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Xml.XPath.XPathSorters::_rgSorters
	ArrayList_t3948406897 * ____rgSorters_0;

public:
	inline static int32_t get_offset_of__rgSorters_0() { return static_cast<int32_t>(offsetof(XPathSorters_t1807339567, ____rgSorters_0)); }
	inline ArrayList_t3948406897 * get__rgSorters_0() const { return ____rgSorters_0; }
	inline ArrayList_t3948406897 ** get_address_of__rgSorters_0() { return &____rgSorters_0; }
	inline void set__rgSorters_0(ArrayList_t3948406897 * value)
	{
		____rgSorters_0 = value;
		Il2CppCodeGenWriteBarrier(&____rgSorters_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
