﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.IList
struct IList_t1751339649;

#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.ListIterator
struct  ListIterator_t4080389072  : public BaseIterator_t1327316739
{
public:
	// System.Collections.IList System.Xml.XPath.ListIterator::_list
	Il2CppObject * ____list_3;

public:
	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(ListIterator_t4080389072, ____list_3)); }
	inline Il2CppObject * get__list_3() const { return ____list_3; }
	inline Il2CppObject ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(Il2CppObject * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier(&____list_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
