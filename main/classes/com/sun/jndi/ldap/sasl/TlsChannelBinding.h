#ifndef _com_sun_jndi_ldap_sasl_TlsChannelBinding_h_
#define _com_sun_jndi_ldap_sasl_TlsChannelBinding_h_
//$ class com.sun.jndi.ldap.sasl.TlsChannelBinding
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHANNEL_BINDING")
#undef CHANNEL_BINDING
#pragma push_macro("CHANNEL_BINDING_TYPE")
#undef CHANNEL_BINDING_TYPE

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace sasl {
					class TlsChannelBinding$TlsChannelBindingType;
				}
			}
		}
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace sasl {

class TlsChannelBinding : public ::java::lang::Object {
	$class(TlsChannelBinding, 0, ::java::lang::Object)
public:
	TlsChannelBinding();
	void init$(::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType* cbType, $bytes* cbData);
	static ::com::sun::jndi::ldap::sasl::TlsChannelBinding* create(::java::security::cert::X509Certificate* serverCertificate);
	virtual $bytes* getData();
	virtual ::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType* getType();
	static ::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType* parseType($String* cbType);
	static $String* CHANNEL_BINDING_TYPE;
	static $String* CHANNEL_BINDING;
	::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType* cbType = nullptr;
	$bytes* cbData = nullptr;
};

				} // sasl
			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("CHANNEL_BINDING")
#pragma pop_macro("CHANNEL_BINDING_TYPE")

#endif // _com_sun_jndi_ldap_sasl_TlsChannelBinding_h_