﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.UnionIterator
struct  UnionIterator_t1391611539  : public BaseIterator_t1327316739
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.UnionIterator::_left
	BaseIterator_t1327316739 * ____left_3;
	// System.Xml.XPath.BaseIterator System.Xml.XPath.UnionIterator::_right
	BaseIterator_t1327316739 * ____right_4;
	// System.Boolean System.Xml.XPath.UnionIterator::keepLeft
	bool ___keepLeft_5;
	// System.Boolean System.Xml.XPath.UnionIterator::keepRight
	bool ___keepRight_6;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.UnionIterator::_current
	XPathNavigator_t1075073278 * ____current_7;

public:
	inline static int32_t get_offset_of__left_3() { return static_cast<int32_t>(offsetof(UnionIterator_t1391611539, ____left_3)); }
	inline BaseIterator_t1327316739 * get__left_3() const { return ____left_3; }
	inline BaseIterator_t1327316739 ** get_address_of__left_3() { return &____left_3; }
	inline void set__left_3(BaseIterator_t1327316739 * value)
	{
		____left_3 = value;
		Il2CppCodeGenWriteBarrier(&____left_3, value);
	}

	inline static int32_t get_offset_of__right_4() { return static_cast<int32_t>(offsetof(UnionIterator_t1391611539, ____right_4)); }
	inline BaseIterator_t1327316739 * get__right_4() const { return ____right_4; }
	inline BaseIterator_t1327316739 ** get_address_of__right_4() { return &____right_4; }
	inline void set__right_4(BaseIterator_t1327316739 * value)
	{
		____right_4 = value;
		Il2CppCodeGenWriteBarrier(&____right_4, value);
	}

	inline static int32_t get_offset_of_keepLeft_5() { return static_cast<int32_t>(offsetof(UnionIterator_t1391611539, ___keepLeft_5)); }
	inline bool get_keepLeft_5() const { return ___keepLeft_5; }
	inline bool* get_address_of_keepLeft_5() { return &___keepLeft_5; }
	inline void set_keepLeft_5(bool value)
	{
		___keepLeft_5 = value;
	}

	inline static int32_t get_offset_of_keepRight_6() { return static_cast<int32_t>(offsetof(UnionIterator_t1391611539, ___keepRight_6)); }
	inline bool get_keepRight_6() const { return ___keepRight_6; }
	inline bool* get_address_of_keepRight_6() { return &___keepRight_6; }
	inline void set_keepRight_6(bool value)
	{
		___keepRight_6 = value;
	}

	inline static int32_t get_offset_of__current_7() { return static_cast<int32_t>(offsetof(UnionIterator_t1391611539, ____current_7)); }
	inline XPathNavigator_t1075073278 * get__current_7() const { return ____current_7; }
	inline XPathNavigator_t1075073278 ** get_address_of__current_7() { return &____current_7; }
	inline void set__current_7(XPathNavigator_t1075073278 * value)
	{
		____current_7 = value;
		Il2CppCodeGenWriteBarrier(&____current_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
