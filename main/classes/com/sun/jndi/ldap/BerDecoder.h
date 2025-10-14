#ifndef _com_sun_jndi_ldap_BerDecoder_h_
#define _com_sun_jndi_ldap_BerDecoder_h_
//$ class com.sun.jndi.ldap.BerDecoder
//$ extends com.sun.jndi.ldap.Ber

#include <com/sun/jndi/ldap/Ber.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class BerDecoder : public ::com::sun::jndi::ldap::Ber {
	$class(BerDecoder, $NO_CLASS_INIT, ::com::sun::jndi::ldap::Ber)
public:
	BerDecoder();
	void init$($bytes* buf, int32_t offset, int32_t bufsize);
	int32_t bytesLeft();
	int32_t getParsePosition();
	bool parseBoolean();
	int32_t parseByte();
	int32_t parseEnumeration();
	int32_t parseInt();
	int32_t parseIntWithTag(int32_t tag);
	int32_t parseLength();
	$bytes* parseOctetString(int32_t tag, $ints* rlen);
	int32_t parseSeq($ints* rlen);
	$String* parseString(bool decodeUTF8);
	$String* parseStringWithTag(int32_t tag, bool decodeUTF8, $ints* rlen);
	int32_t peekByte();
	void reset();
	void seek(int32_t i);
	int32_t origOffset = 0;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_BerDecoder_h_