﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Principal.IIdentity
struct IIdentity_t1905038877;
// System.String[]
struct StringU5BU5D_t4054002952;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.GenericPrincipal
struct  GenericPrincipal_t3575154027  : public Il2CppObject
{
public:
	// System.Security.Principal.IIdentity System.Security.Principal.GenericPrincipal::m_identity
	Il2CppObject * ___m_identity_0;
	// System.String[] System.Security.Principal.GenericPrincipal::m_roles
	StringU5BU5D_t4054002952* ___m_roles_1;

public:
	inline static int32_t get_offset_of_m_identity_0() { return static_cast<int32_t>(offsetof(GenericPrincipal_t3575154027, ___m_identity_0)); }
	inline Il2CppObject * get_m_identity_0() const { return ___m_identity_0; }
	inline Il2CppObject ** get_address_of_m_identity_0() { return &___m_identity_0; }
	inline void set_m_identity_0(Il2CppObject * value)
	{
		___m_identity_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_identity_0, value);
	}

	inline static int32_t get_offset_of_m_roles_1() { return static_cast<int32_t>(offsetof(GenericPrincipal_t3575154027, ___m_roles_1)); }
	inline StringU5BU5D_t4054002952* get_m_roles_1() const { return ___m_roles_1; }
	inline StringU5BU5D_t4054002952** get_address_of_m_roles_1() { return &___m_roles_1; }
	inline void set_m_roles_1(StringU5BU5D_t4054002952* value)
	{
		___m_roles_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_roles_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
