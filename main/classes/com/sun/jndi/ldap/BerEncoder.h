#ifndef _com_sun_jndi_ldap_BerEncoder_h_
#define _com_sun_jndi_ldap_BerEncoder_h_
//$ class com.sun.jndi.ldap.BerEncoder
//$ extends com.sun.jndi.ldap.Ber

#include <com/sun/jndi/ldap/Ber.h>
#include <java/lang/Array.h>

#pragma push_macro("BUF_GROWTH_FACTOR")
#undef BUF_GROWTH_FACTOR
#pragma push_macro("DEFAULT_BUFSIZE")
#undef DEFAULT_BUFSIZE
#pragma push_macro("INITIAL_SEQUENCES")
#undef INITIAL_SEQUENCES

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class BerEncoder : public ::com::sun::jndi::ldap::Ber {
	$class(BerEncoder, $NO_CLASS_INIT, ::com::sun::jndi::ldap::Ber)
public:
	BerEncoder();
	void init$();
	void init$(int32_t bufsize);
	void beginSeq(int32_t tag);
	void encodeBoolean(bool b);
	void encodeBoolean(bool b, int32_t tag);
	void encodeByte(int32_t b);
	void encodeInt(int32_t i);
	void encodeInt(int32_t i, int32_t tag);
	void encodeInt(int32_t i, int32_t tag, int32_t intsize);
	void encodeLength(int32_t len);
	void encodeOctetString($bytes* tb, int32_t tag, int32_t tboffset, int32_t length);
	void encodeOctetString($bytes* tb, int32_t tag);
	void encodeString($String* str, bool encodeUTF8);
	void encodeString($String* str, int32_t tag, bool encodeUTF8);
	void encodeStringArray($StringArray* strs, bool encodeUTF8);
	void endSeq();
	void ensureFreeBytes(int32_t len);
	$bytes* getBuf();
	int32_t getDataLen();
	$bytes* getTrimmedBuf();
	void reset();
	void shiftSeqData(int32_t start, int32_t len, int32_t shift);
	int32_t curSeqIndex = 0;
	$ints* seqOffset = nullptr;
	static const int32_t INITIAL_SEQUENCES = 16;
	static const int32_t DEFAULT_BUFSIZE = 1024;
	static const int32_t BUF_GROWTH_FACTOR = 8;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("BUF_GROWTH_FACTOR")
#pragma pop_macro("DEFAULT_BUFSIZE")
#pragma pop_macro("INITIAL_SEQUENCES")

#endif // _com_sun_jndi_ldap_BerEncoder_h_