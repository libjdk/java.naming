#ifndef _com_sun_jndi_ldap_sasl_LdapSasl_h_
#define _com_sun_jndi_ldap_sasl_LdapSasl_h_
//$ class com.sun.jndi.ldap.sasl.LdapSasl
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LDAP_SASL_BIND_IN_PROGRESS")
#undef LDAP_SASL_BIND_IN_PROGRESS
#pragma push_macro("LDAP_SUCCESS")
#undef LDAP_SUCCESS
#pragma push_macro("NO_BYTES")
#undef NO_BYTES
#pragma push_macro("SASL_AUTHZ_ID")
#undef SASL_AUTHZ_ID
#pragma push_macro("SASL_CALLBACK")
#undef SASL_CALLBACK
#pragma push_macro("SASL_REALM")
#undef SASL_REALM

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class Connection;
				class LdapClient;
				class LdapResult;
			}
		}
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
				namespace sasl {

class LdapSasl : public ::java::lang::Object {
	$class(LdapSasl, 0, ::java::lang::Object)
public:
	LdapSasl();
	void init$();
	static $StringArray* getSaslMechanismNames($String* str);
	static ::com::sun::jndi::ldap::LdapResult* saslBind(::com::sun::jndi::ldap::LdapClient* clnt, ::com::sun::jndi::ldap::Connection* conn, $String* server, $String* dn, Object$* pw, $String* authMech, ::java::util::Hashtable* env, $Array<::javax::naming::ldap::Control>* bindCtls);
	static $String* SASL_CALLBACK;
	static $String* SASL_AUTHZ_ID;
	static $String* SASL_REALM;
	static const int32_t LDAP_SUCCESS = 0;
	static const int32_t LDAP_SASL_BIND_IN_PROGRESS = 14;
	static $bytes* NO_BYTES;
};

				} // sasl
			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("LDAP_SASL_BIND_IN_PROGRESS")
#pragma pop_macro("LDAP_SUCCESS")
#pragma pop_macro("NO_BYTES")
#pragma pop_macro("SASL_AUTHZ_ID")
#pragma pop_macro("SASL_CALLBACK")
#pragma pop_macro("SASL_REALM")

#endif // _com_sun_jndi_ldap_sasl_LdapSasl_h_