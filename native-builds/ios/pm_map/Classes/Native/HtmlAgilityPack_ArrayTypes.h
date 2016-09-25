#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// HtmlAgilityPack.HtmlNode
struct HtmlNode_t916417385;
// HtmlAgilityPack.HtmlAttribute
struct HtmlAttribute_t1980984887;
// HtmlAgilityPack.HtmlParseError
struct HtmlParseError_t3469316092;

#include "mscorlib_System_Array1146569071.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlElementFlag1232740771.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlNode916417385.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlAttribute1980984887.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlParseError3469316092.h"

#pragma once
// HtmlAgilityPack.HtmlElementFlag[]
struct HtmlElementFlagU5BU5D_t3522292850  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// HtmlAgilityPack.HtmlNode[]
struct HtmlNodeU5BU5D_t4242756820  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) HtmlNode_t916417385 * m_Items[1];

public:
	inline HtmlNode_t916417385 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline HtmlNode_t916417385 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, HtmlNode_t916417385 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// HtmlAgilityPack.HtmlAttribute[]
struct HtmlAttributeU5BU5D_t4094957326  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) HtmlAttribute_t1980984887 * m_Items[1];

public:
	inline HtmlAttribute_t1980984887 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline HtmlAttribute_t1980984887 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, HtmlAttribute_t1980984887 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// HtmlAgilityPack.HtmlParseError[]
struct HtmlParseErrorU5BU5D_t2678301845  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) HtmlParseError_t3469316092 * m_Items[1];

public:
	inline HtmlParseError_t3469316092 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline HtmlParseError_t3469316092 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, HtmlParseError_t3469316092 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
