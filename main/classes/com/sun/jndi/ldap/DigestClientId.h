#ifndef _com_sun_jndi_ldap_DigestClientId_h_
#define _com_sun_jndi_ldap_DigestClientId_h_
//$ class com.sun.jndi.ldap.DigestClientId
//$ extends com.sun.jndi.ldap.SimpleClientId

#include <com/sun/jndi/ldap/SimpleClientId.h>
#include <java/lang/Array.h>

#pragma push_macro("SASL_PROPS")
#undef SASL_PROPS

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		namespace ldap {
			class Control;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class DigestClientId : public ::com::sun::jndi::ldap::SimpleClientId {
	$class(DigestClientId, 0, ::com::sun::jndi::ldap::SimpleClientId)
public:
	DigestClientId();
	void init$(int32_t version, $String* hostname, int32_t port, $String* protocol, $Array<::javax::naming::ldap::Control>* bindCtls, ::java::io::OutputStream* trace, $String* socketFactory, $String* username, Object$* passwd, ::java::util::Hashtable* env);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static $StringArray* SASL_PROPS;
	$StringArray* propvals = nullptr;
	int32_t myHash = 0;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("SASL_PROPS")

#endif // _com_sun_jndi_ldap_DigestClientId_h_