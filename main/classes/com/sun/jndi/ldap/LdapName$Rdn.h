#ifndef _com_sun_jndi_ldap_LdapName$Rdn_h_
#define _com_sun_jndi_ldap_LdapName$Rdn_h_
//$ class com.sun.jndi.ldap.LdapName$Rdn
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapName$TypeAndValue;
			}
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapName$Rdn : public ::java::lang::Object {
	$class(LdapName$Rdn, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LdapName$Rdn();
	void init$();
	virtual void add(::com::sun::jndi::ldap::LdapName$TypeAndValue* tv);
	virtual int32_t compareTo(Object$* obj);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual ::javax::naming::directory::Attributes* toAttributes();
	virtual $String* toString() override;
	::java::util::Vector* tvs = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapName$Rdn_h_