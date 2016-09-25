﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_t1075073278;

#include "System_Xml_System_Xml_XPath_SimpleIterator544647972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AncestorOrSelfIterator
struct  AncestorOrSelfIterator_t3368289780  : public SimpleIterator_t544647972
{
public:
	// System.Int32 System.Xml.XPath.AncestorOrSelfIterator::currentPosition
	int32_t ___currentPosition_6;
	// System.Collections.ArrayList System.Xml.XPath.AncestorOrSelfIterator::navigators
	ArrayList_t3948406897 * ___navigators_7;
	// System.Xml.XPath.XPathNavigator System.Xml.XPath.AncestorOrSelfIterator::startPosition
	XPathNavigator_t1075073278 * ___startPosition_8;

public:
	inline static int32_t get_offset_of_currentPosition_6() { return static_cast<int32_t>(offsetof(AncestorOrSelfIterator_t3368289780, ___currentPosition_6)); }
	inline int32_t get_currentPosition_6() const { return ___currentPosition_6; }
	inline int32_t* get_address_of_currentPosition_6() { return &___currentPosition_6; }
	inline void set_currentPosition_6(int32_t value)
	{
		___currentPosition_6 = value;
	}

	inline static int32_t get_offset_of_navigators_7() { return static_cast<int32_t>(offsetof(AncestorOrSelfIterator_t3368289780, ___navigators_7)); }
	inline ArrayList_t3948406897 * get_navigators_7() const { return ___navigators_7; }
	inline ArrayList_t3948406897 ** get_address_of_navigators_7() { return &___navigators_7; }
	inline void set_navigators_7(ArrayList_t3948406897 * value)
	{
		___navigators_7 = value;
		Il2CppCodeGenWriteBarrier(&___navigators_7, value);
	}

	inline static int32_t get_offset_of_startPosition_8() { return static_cast<int32_t>(offsetof(AncestorOrSelfIterator_t3368289780, ___startPosition_8)); }
	inline XPathNavigator_t1075073278 * get_startPosition_8() const { return ___startPosition_8; }
	inline XPathNavigator_t1075073278 ** get_address_of_startPosition_8() { return &___startPosition_8; }
	inline void set_startPosition_8(XPathNavigator_t1075073278 * value)
	{
		___startPosition_8 = value;
		Il2CppCodeGenWriteBarrier(&___startPosition_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
