#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t2012439129;
// System.String
struct String_t;
// System.Net.CookieCollection
struct CookieCollection_t2536410684;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1958609721;
// System.Net.ResponseStream
struct ResponseStream_t2389896507;
// System.Version
struct Version_t763695022;
// System.Net.HttpListenerContext
struct HttpListenerContext_t1119969133;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpListenerResponse
struct  HttpListenerResponse_t2165724119  : public Il2CppObject
{
public:
	// System.Boolean System.Net.HttpListenerResponse::disposed
	bool ___disposed_0;
	// System.Text.Encoding System.Net.HttpListenerResponse::content_encoding
	Encoding_t2012439129 * ___content_encoding_1;
	// System.Int64 System.Net.HttpListenerResponse::content_length
	int64_t ___content_length_2;
	// System.Boolean System.Net.HttpListenerResponse::cl_set
	bool ___cl_set_3;
	// System.String System.Net.HttpListenerResponse::content_type
	String_t* ___content_type_4;
	// System.Net.CookieCollection System.Net.HttpListenerResponse::cookies
	CookieCollection_t2536410684 * ___cookies_5;
	// System.Net.WebHeaderCollection System.Net.HttpListenerResponse::headers
	WebHeaderCollection_t1958609721 * ___headers_6;
	// System.Boolean System.Net.HttpListenerResponse::keep_alive
	bool ___keep_alive_7;
	// System.Net.ResponseStream System.Net.HttpListenerResponse::output_stream
	ResponseStream_t2389896507 * ___output_stream_8;
	// System.Version System.Net.HttpListenerResponse::version
	Version_t763695022 * ___version_9;
	// System.String System.Net.HttpListenerResponse::location
	String_t* ___location_10;
	// System.Int32 System.Net.HttpListenerResponse::status_code
	int32_t ___status_code_11;
	// System.String System.Net.HttpListenerResponse::status_description
	String_t* ___status_description_12;
	// System.Boolean System.Net.HttpListenerResponse::chunked
	bool ___chunked_13;
	// System.Net.HttpListenerContext System.Net.HttpListenerResponse::context
	HttpListenerContext_t1119969133 * ___context_14;
	// System.Boolean System.Net.HttpListenerResponse::HeadersSent
	bool ___HeadersSent_15;
	// System.Boolean System.Net.HttpListenerResponse::force_close_chunked
	bool ___force_close_chunked_16;

public:
	inline static int32_t get_offset_of_disposed_0() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___disposed_0)); }
	inline bool get_disposed_0() const { return ___disposed_0; }
	inline bool* get_address_of_disposed_0() { return &___disposed_0; }
	inline void set_disposed_0(bool value)
	{
		___disposed_0 = value;
	}

	inline static int32_t get_offset_of_content_encoding_1() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___content_encoding_1)); }
	inline Encoding_t2012439129 * get_content_encoding_1() const { return ___content_encoding_1; }
	inline Encoding_t2012439129 ** get_address_of_content_encoding_1() { return &___content_encoding_1; }
	inline void set_content_encoding_1(Encoding_t2012439129 * value)
	{
		___content_encoding_1 = value;
		Il2CppCodeGenWriteBarrier(&___content_encoding_1, value);
	}

	inline static int32_t get_offset_of_content_length_2() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___content_length_2)); }
	inline int64_t get_content_length_2() const { return ___content_length_2; }
	inline int64_t* get_address_of_content_length_2() { return &___content_length_2; }
	inline void set_content_length_2(int64_t value)
	{
		___content_length_2 = value;
	}

	inline static int32_t get_offset_of_cl_set_3() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___cl_set_3)); }
	inline bool get_cl_set_3() const { return ___cl_set_3; }
	inline bool* get_address_of_cl_set_3() { return &___cl_set_3; }
	inline void set_cl_set_3(bool value)
	{
		___cl_set_3 = value;
	}

	inline static int32_t get_offset_of_content_type_4() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___content_type_4)); }
	inline String_t* get_content_type_4() const { return ___content_type_4; }
	inline String_t** get_address_of_content_type_4() { return &___content_type_4; }
	inline void set_content_type_4(String_t* value)
	{
		___content_type_4 = value;
		Il2CppCodeGenWriteBarrier(&___content_type_4, value);
	}

	inline static int32_t get_offset_of_cookies_5() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___cookies_5)); }
	inline CookieCollection_t2536410684 * get_cookies_5() const { return ___cookies_5; }
	inline CookieCollection_t2536410684 ** get_address_of_cookies_5() { return &___cookies_5; }
	inline void set_cookies_5(CookieCollection_t2536410684 * value)
	{
		___cookies_5 = value;
		Il2CppCodeGenWriteBarrier(&___cookies_5, value);
	}

	inline static int32_t get_offset_of_headers_6() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___headers_6)); }
	inline WebHeaderCollection_t1958609721 * get_headers_6() const { return ___headers_6; }
	inline WebHeaderCollection_t1958609721 ** get_address_of_headers_6() { return &___headers_6; }
	inline void set_headers_6(WebHeaderCollection_t1958609721 * value)
	{
		___headers_6 = value;
		Il2CppCodeGenWriteBarrier(&___headers_6, value);
	}

	inline static int32_t get_offset_of_keep_alive_7() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___keep_alive_7)); }
	inline bool get_keep_alive_7() const { return ___keep_alive_7; }
	inline bool* get_address_of_keep_alive_7() { return &___keep_alive_7; }
	inline void set_keep_alive_7(bool value)
	{
		___keep_alive_7 = value;
	}

	inline static int32_t get_offset_of_output_stream_8() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___output_stream_8)); }
	inline ResponseStream_t2389896507 * get_output_stream_8() const { return ___output_stream_8; }
	inline ResponseStream_t2389896507 ** get_address_of_output_stream_8() { return &___output_stream_8; }
	inline void set_output_stream_8(ResponseStream_t2389896507 * value)
	{
		___output_stream_8 = value;
		Il2CppCodeGenWriteBarrier(&___output_stream_8, value);
	}

	inline static int32_t get_offset_of_version_9() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___version_9)); }
	inline Version_t763695022 * get_version_9() const { return ___version_9; }
	inline Version_t763695022 ** get_address_of_version_9() { return &___version_9; }
	inline void set_version_9(Version_t763695022 * value)
	{
		___version_9 = value;
		Il2CppCodeGenWriteBarrier(&___version_9, value);
	}

	inline static int32_t get_offset_of_location_10() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___location_10)); }
	inline String_t* get_location_10() const { return ___location_10; }
	inline String_t** get_address_of_location_10() { return &___location_10; }
	inline void set_location_10(String_t* value)
	{
		___location_10 = value;
		Il2CppCodeGenWriteBarrier(&___location_10, value);
	}

	inline static int32_t get_offset_of_status_code_11() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___status_code_11)); }
	inline int32_t get_status_code_11() const { return ___status_code_11; }
	inline int32_t* get_address_of_status_code_11() { return &___status_code_11; }
	inline void set_status_code_11(int32_t value)
	{
		___status_code_11 = value;
	}

	inline static int32_t get_offset_of_status_description_12() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___status_description_12)); }
	inline String_t* get_status_description_12() const { return ___status_description_12; }
	inline String_t** get_address_of_status_description_12() { return &___status_description_12; }
	inline void set_status_description_12(String_t* value)
	{
		___status_description_12 = value;
		Il2CppCodeGenWriteBarrier(&___status_description_12, value);
	}

	inline static int32_t get_offset_of_chunked_13() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___chunked_13)); }
	inline bool get_chunked_13() const { return ___chunked_13; }
	inline bool* get_address_of_chunked_13() { return &___chunked_13; }
	inline void set_chunked_13(bool value)
	{
		___chunked_13 = value;
	}

	inline static int32_t get_offset_of_context_14() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___context_14)); }
	inline HttpListenerContext_t1119969133 * get_context_14() const { return ___context_14; }
	inline HttpListenerContext_t1119969133 ** get_address_of_context_14() { return &___context_14; }
	inline void set_context_14(HttpListenerContext_t1119969133 * value)
	{
		___context_14 = value;
		Il2CppCodeGenWriteBarrier(&___context_14, value);
	}

	inline static int32_t get_offset_of_HeadersSent_15() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___HeadersSent_15)); }
	inline bool get_HeadersSent_15() const { return ___HeadersSent_15; }
	inline bool* get_address_of_HeadersSent_15() { return &___HeadersSent_15; }
	inline void set_HeadersSent_15(bool value)
	{
		___HeadersSent_15 = value;
	}

	inline static int32_t get_offset_of_force_close_chunked_16() { return static_cast<int32_t>(offsetof(HttpListenerResponse_t2165724119, ___force_close_chunked_16)); }
	inline bool get_force_close_chunked_16() const { return ___force_close_chunked_16; }
	inline bool* get_address_of_force_close_chunked_16() { return &___force_close_chunked_16; }
	inline void set_force_close_chunked_16(bool value)
	{
		___force_close_chunked_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
