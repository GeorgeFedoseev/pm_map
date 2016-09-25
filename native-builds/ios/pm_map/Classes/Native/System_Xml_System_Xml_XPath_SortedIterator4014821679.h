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

#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.SortedIterator
struct  SortedIterator_t4014821679  : public BaseIterator_t1327316739
{
public:
	// System.Collections.ArrayList System.Xml.XPath.SortedIterator::list
	ArrayList_t3948406897 * ___list_3;

public:
	inline static int32_t get_offset_of_list_3() { return static_cast<int32_t>(offsetof(SortedIterator_t4014821679, ___list_3)); }
	inline ArrayList_t3948406897 * get_list_3() const { return ___list_3; }
	inline ArrayList_t3948406897 ** get_address_of_list_3() { return &___list_3; }
	inline void set_list_3(ArrayList_t3948406897 * value)
	{
		___list_3 = value;
		Il2CppCodeGenWriteBarrier(&___list_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
