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
// System.Xml.XPath.Expression
struct Expression_t2556460284;

#include "System_Xml_System_Xml_XPath_BaseIterator1327316739.h"
#include "System_Xml_System_Xml_XPath_XPathResultType516720010.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XPath.PredicateIterator
struct  PredicateIterator_t3158177019  : public BaseIterator_t1327316739
{
public:
	// System.Xml.XPath.BaseIterator System.Xml.XPath.PredicateIterator::_iter
	BaseIterator_t1327316739 * ____iter_3;
	// System.Xml.XPath.Expression System.Xml.XPath.PredicateIterator::_pred
	Expression_t2556460284 * ____pred_4;
	// System.Xml.XPath.XPathResultType System.Xml.XPath.PredicateIterator::resType
	int32_t ___resType_5;
	// System.Boolean System.Xml.XPath.PredicateIterator::finished
	bool ___finished_6;

public:
	inline static int32_t get_offset_of__iter_3() { return static_cast<int32_t>(offsetof(PredicateIterator_t3158177019, ____iter_3)); }
	inline BaseIterator_t1327316739 * get__iter_3() const { return ____iter_3; }
	inline BaseIterator_t1327316739 ** get_address_of__iter_3() { return &____iter_3; }
	inline void set__iter_3(BaseIterator_t1327316739 * value)
	{
		____iter_3 = value;
		Il2CppCodeGenWriteBarrier(&____iter_3, value);
	}

	inline static int32_t get_offset_of__pred_4() { return static_cast<int32_t>(offsetof(PredicateIterator_t3158177019, ____pred_4)); }
	inline Expression_t2556460284 * get__pred_4() const { return ____pred_4; }
	inline Expression_t2556460284 ** get_address_of__pred_4() { return &____pred_4; }
	inline void set__pred_4(Expression_t2556460284 * value)
	{
		____pred_4 = value;
		Il2CppCodeGenWriteBarrier(&____pred_4, value);
	}

	inline static int32_t get_offset_of_resType_5() { return static_cast<int32_t>(offsetof(PredicateIterator_t3158177019, ___resType_5)); }
	inline int32_t get_resType_5() const { return ___resType_5; }
	inline int32_t* get_address_of_resType_5() { return &___resType_5; }
	inline void set_resType_5(int32_t value)
	{
		___resType_5 = value;
	}

	inline static int32_t get_offset_of_finished_6() { return static_cast<int32_t>(offsetof(PredicateIterator_t3158177019, ___finished_6)); }
	inline bool get_finished_6() const { return ___finished_6; }
	inline bool* get_address_of_finished_6() { return &___finished_6; }
	inline void set_finished_6(bool value)
	{
		___finished_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
