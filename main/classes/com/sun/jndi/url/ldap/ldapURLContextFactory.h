#ifndef _com_sun_jndi_url_ldap_ldapURLContextFactory_h_
#define _com_sun_jndi_url_ldap_ldapURLContextFactory_h_
//$ class com.sun.jndi.url.ldap.ldapURLContextFactory
//$ extends javax.naming.spi.ObjectFactory

#include <javax/naming/spi/ObjectFactory.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		class Context;
		class Name;
	}
}
namespace javax {
	namespace naming {
		namespace spi {
			class ResolveResult;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace url {
				namespace ldap {

class ldapURLContextFactory : public ::javax::naming::spi::ObjectFactory {
	$class(ldapURLContextFactory, $NO_CLASS_INIT, ::javax::naming::spi::ObjectFactory)
public:
	ldapURLContextFactory();
	void init$();
	virtual $Object* getObjectInstance(Object$* urlInfo, ::javax::naming::Name* name, ::javax::naming::Context* nameCtx, ::java::util::Hashtable* env) override;
	static ::javax::naming::spi::ResolveResult* getUsingURLIgnoreRootDN($String* url, ::java::util::Hashtable* env);
};

				} // ldap
			} // url
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_url_ldap_ldapURLContextFactory_h_