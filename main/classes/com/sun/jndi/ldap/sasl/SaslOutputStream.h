#ifndef _com_sun_jndi_ldap_sasl_SaslOutputStream_h_
#define _com_sun_jndi_ldap_sasl_SaslOutputStream_h_
//$ class com.sun.jndi.ldap.sasl.SaslOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
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

class SaslOutputStream : public ::java::io::FilterOutputStream {
	$class(SaslOutputStream, $NO_CLASS_INIT, ::java::io::FilterOutputStream)
public:
	SaslOutputStream();
	void init$(::javax::security::sasl::SaslClient* sc, ::java::io::OutputStream* out);
	virtual void close() override;
	static void intToNetworkByteOrder(int32_t num, $bytes* buf, int32_t start, int32_t count);
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* buffer, int32_t offset, int32_t total) override;
	static const bool debug = false;
	$bytes* lenBuf = nullptr;
	int32_t rawSendSize = 0;
	::javax::security::sasl::SaslClient* sc = nullptr;
};

				} // sasl
			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_sasl_SaslOutputStream_h_