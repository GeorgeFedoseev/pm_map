﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "System_Xml_System_Xml_XPath_SimpleIterator544647972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.DescendantOrSelfIterator
struct  DescendantOrSelfIterator_t1437473246  : public SimpleIterator_t544647972
{
public:
	// System.Int32 System.Xml.XPath.DescendantOrSelfIterator::_depth
	int32_t ____depth_6;
	// System.Boolean System.Xml.XPath.DescendantOrSelfIterator::_finished
	bool ____finished_7;

public:
	inline static int32_t get_offset_of__depth_6() { return static_cast<int32_t>(offsetof(DescendantOrSelfIterator_t1437473246, ____depth_6)); }
	inline int32_t get__depth_6() const { return ____depth_6; }
	inline int32_t* get_address_of__depth_6() { return &____depth_6; }
	inline void set__depth_6(int32_t value)
	{
		____depth_6 = value;
	}

	inline static int32_t get_offset_of__finished_7() { return static_cast<int32_t>(offsetof(DescendantOrSelfIterator_t1437473246, ____finished_7)); }
	inline bool get__finished_7() const { return ____finished_7; }
	inline bool* get_address_of__finished_7() { return &____finished_7; }
	inline void set__finished_7(bool value)
	{
		____finished_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
