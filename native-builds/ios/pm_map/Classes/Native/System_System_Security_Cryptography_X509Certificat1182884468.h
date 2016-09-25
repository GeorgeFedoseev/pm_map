#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2861953768;
// System.Security.Cryptography.Oid
struct Oid_t2466812144;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.PublicKey
struct  PublicKey_t1182884468  : public Il2CppObject
{
public:
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::_key
	AsymmetricAlgorithm_t1241690687 * ____key_2;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t2861953768 * ____keyValue_3;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t2861953768 * ____params_4;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t2466812144 * ____oid_5;

public:
	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PublicKey_t1182884468, ____key_2)); }
	inline AsymmetricAlgorithm_t1241690687 * get__key_2() const { return ____key_2; }
	inline AsymmetricAlgorithm_t1241690687 ** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(AsymmetricAlgorithm_t1241690687 * value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier(&____key_2, value);
	}

	inline static int32_t get_offset_of__keyValue_3() { return static_cast<int32_t>(offsetof(PublicKey_t1182884468, ____keyValue_3)); }
	inline AsnEncodedData_t2861953768 * get__keyValue_3() const { return ____keyValue_3; }
	inline AsnEncodedData_t2861953768 ** get_address_of__keyValue_3() { return &____keyValue_3; }
	inline void set__keyValue_3(AsnEncodedData_t2861953768 * value)
	{
		____keyValue_3 = value;
		Il2CppCodeGenWriteBarrier(&____keyValue_3, value);
	}

	inline static int32_t get_offset_of__params_4() { return static_cast<int32_t>(offsetof(PublicKey_t1182884468, ____params_4)); }
	inline AsnEncodedData_t2861953768 * get__params_4() const { return ____params_4; }
	inline AsnEncodedData_t2861953768 ** get_address_of__params_4() { return &____params_4; }
	inline void set__params_4(AsnEncodedData_t2861953768 * value)
	{
		____params_4 = value;
		Il2CppCodeGenWriteBarrier(&____params_4, value);
	}

	inline static int32_t get_offset_of__oid_5() { return static_cast<int32_t>(offsetof(PublicKey_t1182884468, ____oid_5)); }
	inline Oid_t2466812144 * get__oid_5() const { return ____oid_5; }
	inline Oid_t2466812144 ** get_address_of__oid_5() { return &____oid_5; }
	inline void set__oid_5(Oid_t2466812144 * value)
	{
		____oid_5 = value;
		Il2CppCodeGenWriteBarrier(&____oid_5, value);
	}
};

struct PublicKey_t1182884468_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.PublicKey::<>f__switch$map16
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map16_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_6() { return static_cast<int32_t>(offsetof(PublicKey_t1182884468_StaticFields, ___U3CU3Ef__switchU24map16_6)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map16_6() const { return ___U3CU3Ef__switchU24map16_6; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map16_6() { return &___U3CU3Ef__switchU24map16_6; }
	inline void set_U3CU3Ef__switchU24map16_6(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map16_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map16_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
