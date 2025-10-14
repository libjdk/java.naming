#ifndef _com_sun_jndi_ldap_Ber_h_
#define _com_sun_jndi_ldap_Ber_h_
//$ class com.sun.jndi.ldap.Ber
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ASN_APPLICATION")
#undef ASN_APPLICATION
#pragma push_macro("ASN_BIT_STRING")
#undef ASN_BIT_STRING
#pragma push_macro("ASN_BOOLEAN")
#undef ASN_BOOLEAN
#pragma push_macro("ASN_CONSTRUCTOR")
#undef ASN_CONSTRUCTOR
#pragma push_macro("ASN_CONTEXT")
#undef ASN_CONTEXT
#pragma push_macro("ASN_ENUMERATED")
#undef ASN_ENUMERATED
#pragma push_macro("ASN_INTEGER")
#undef ASN_INTEGER
#pragma push_macro("ASN_NULL")
#undef ASN_NULL
#pragma push_macro("ASN_OBJECT_ID")
#undef ASN_OBJECT_ID
#pragma push_macro("ASN_OCTET_STR")
#undef ASN_OCTET_STR
#pragma push_macro("ASN_PRIMITIVE")
#undef ASN_PRIMITIVE
#pragma push_macro("ASN_PRIVATE")
#undef ASN_PRIVATE
#pragma push_macro("ASN_SEQUENCE")
#undef ASN_SEQUENCE
#pragma push_macro("ASN_SET")
#undef ASN_SET
#pragma push_macro("ASN_SIMPLE_STRING")
#undef ASN_SIMPLE_STRING
#pragma push_macro("ASN_UNIVERSAL")
#undef ASN_UNIVERSAL

namespace java {
	namespace io {
		class OutputStream;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class Ber : public ::java::lang::Object {
	$class(Ber, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Ber();
	void init$();
	static void dumpBER(::java::io::OutputStream* outStream, $String* tag, $bytes* bytes, int32_t from, int32_t to);
	$bytes* buf = nullptr;
	int32_t offset = 0;
	int32_t bufsize = 0;
	static const int32_t ASN_BOOLEAN = 1;
	static const int32_t ASN_INTEGER = 2;
	static const int32_t ASN_BIT_STRING = 3;
	static const int32_t ASN_SIMPLE_STRING = 4;
	static const int32_t ASN_OCTET_STR = 4;
	static const int32_t ASN_NULL = 5;
	static const int32_t ASN_OBJECT_ID = 6;
	static const int32_t ASN_SEQUENCE = 16;
	static const int32_t ASN_SET = 17;
	static const int32_t ASN_PRIMITIVE = 0;
	static const int32_t ASN_UNIVERSAL = 0;
	static const int32_t ASN_CONSTRUCTOR = 32;
	static const int32_t ASN_APPLICATION = 64;
	static const int32_t ASN_CONTEXT = 128;
	static const int32_t ASN_PRIVATE = 192;
	static const int32_t ASN_ENUMERATED = 10;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("ASN_APPLICATION")
#pragma pop_macro("ASN_BIT_STRING")
#pragma pop_macro("ASN_BOOLEAN")
#pragma pop_macro("ASN_CONSTRUCTOR")
#pragma pop_macro("ASN_CONTEXT")
#pragma pop_macro("ASN_ENUMERATED")
#pragma pop_macro("ASN_INTEGER")
#pragma pop_macro("ASN_NULL")
#pragma pop_macro("ASN_OBJECT_ID")
#pragma pop_macro("ASN_OCTET_STR")
#pragma pop_macro("ASN_PRIMITIVE")
#pragma pop_macro("ASN_PRIVATE")
#pragma pop_macro("ASN_SEQUENCE")
#pragma pop_macro("ASN_SET")
#pragma pop_macro("ASN_SIMPLE_STRING")
#pragma pop_macro("ASN_UNIVERSAL")

#endif // _com_sun_jndi_ldap_Ber_h_