#ifndef _com_sun_jndi_ldap_sasl_SaslInputStream_h_
#define _com_sun_jndi_ldap_sasl_SaslInputStream_h_
//$ class com.sun.jndi.ldap.sasl.SaslInputStream
//$ extends java.io.InputStream

#include <java/io/InputStream.h>
#include <java/lang/Array.h>

namespace javax {
	namespace security {
		namespace sasl {
			class SaslClient;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace sasl {

class SaslInputStream : public ::java::io::InputStream {
	$class(SaslInputStream, $NO_CLASS_INIT, ::java::io::InputStream)
public:
	SaslInputStream();
	void init$(::javax::security::sasl::SaslClient* sc, ::java::io::InputStream* in);
	virtual int32_t available() override;
	virtual void close() override;
	int32_t fill();
	static int32_t networkByteOrderToInt($bytes* buf, int32_t start, int32_t count);
	using ::java::io::InputStream::read;
	virtual int32_t read() override;
	virtual int32_t read($bytes* inBuf, int32_t start, int32_t count) override;
	int32_t readFully($bytes* inBuf, int32_t total);
	static const bool debug = false;
	$bytes* saslBuffer = nullptr;
	$bytes* lenBuf = nullptr;
	$bytes* buf = nullptr;
	int32_t bufPos = 0;
	::java::io::InputStream* in = nullptr;
	::javax::security::sasl::SaslClient* sc = nullptr;
	int32_t recvMaxBufSize = 0;
};

				} // sasl
			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_sasl_SaslInputStream_h_