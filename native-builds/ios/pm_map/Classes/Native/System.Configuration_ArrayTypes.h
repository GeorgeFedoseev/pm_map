#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t3009015393;

#include "mscorlib_System_Array1146569071.h"
#include "System_Configuration_System_Configuration_Configur3009015393.h"

#pragma once
// System.Configuration.ConfigurationProperty[]
struct ConfigurationPropertyU5BU5D_t3179433724  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ConfigurationProperty_t3009015393 * m_Items[1];

public:
	inline ConfigurationProperty_t3009015393 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ConfigurationProperty_t3009015393 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ConfigurationProperty_t3009015393 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
