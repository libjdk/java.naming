#ifndef _com_sun_jndi_url_ldaps_ldapsURLContextFactory_h_
#define _com_sun_jndi_url_ldaps_ldapsURLContextFactory_h_
//$ class com.sun.jndi.url.ldaps.ldapsURLContextFactory
//$ extends com.sun.jndi.url.ldap.ldapURLContextFactory

#include <com/sun/jndi/url/ldap/ldapURLContextFactory.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace url {
				namespace ldaps {

class ldapsURLContextFactory : public ::com::sun::jndi::url::ldap::ldapURLContextFactory {
	$class(ldapsURLContextFactory, $NO_CLASS_INIT, ::com::sun::jndi::url::ldap::ldapURLContextFactory)
public:
	ldapsURLContextFactory();
	void init$();
};

				} // ldaps
			} // url
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_url_ldaps_ldapsURLContextFactory_h_