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

#include "System_Xml_System_Xml_XPath_XPathFunction3895226859.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.XPathFunctionConcat
struct  XPathFunctionConcat_t2260200095  : public XPathFunction_t3895226859
{
public:
	// System.Collections.ArrayList System.Xml.XPath.XPathFunctionConcat::rgs
	ArrayList_t3948406897 * ___rgs_0;

public:
	inline static int32_t get_offset_of_rgs_0() { return static_cast<int32_t>(offsetof(XPathFunctionConcat_t2260200095, ___rgs_0)); }
	inline ArrayList_t3948406897 * get_rgs_0() const { return ___rgs_0; }
	inline ArrayList_t3948406897 ** get_address_of_rgs_0() { return &___rgs_0; }
	inline void set_rgs_0(ArrayList_t3948406897 * value)
	{
		___rgs_0 = value;
		Il2CppCodeGenWriteBarrier(&___rgs_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
