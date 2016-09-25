#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XPath.BaseIterator
struct BaseIterator_t1327316739;
// System.Xml.XPath.NodeTest
struct NodeTest_t2939071960;

#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.AxisIterator
struct  AxisIterator_t953634771  : public BaseIterator_t1327316739
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.AxisIterator::_iter
	BaseIterator_t1327316739 * ____iter_3;
	// System.Xml.XPath.NodeTest System.Xml.XPath.AxisIterator::_test
	NodeTest_t2939071960 * ____test_4;

public:
	inline static int32_t get_offset_of__iter_3() { return static_cast<int32_t>(offsetof(AxisIterator_t953634771, ____iter_3)); }
	inline BaseIterator_t1327316739 * get__iter_3() const { return ____iter_3; }
	inline BaseIterator_t1327316739 ** get_address_of__iter_3() { return &____iter_3; }
	inline void set__iter_3(BaseIterator_t1327316739 * value)
	{
		____iter_3 = value;
		Il2CppCodeGenWriteBarrier(&____iter_3, value);
	}

	inline static int32_t get_offset_of__test_4() { return static_cast<int32_t>(offsetof(AxisIterator_t953634771, ____test_4)); }
	inline NodeTest_t2939071960 * get__test_4() const { return ____test_4; }
	inline NodeTest_t2939071960 ** get_address_of__test_4() { return &____test_4; }
	inline void set__test_4(NodeTest_t2939071960 * value)
	{
		____test_4 = value;
		Il2CppCodeGenWriteBarrier(&____test_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
