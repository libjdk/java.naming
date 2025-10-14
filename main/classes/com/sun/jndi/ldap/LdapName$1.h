#ifndef _com_sun_jndi_ldap_LdapName$1_h_
#define _com_sun_jndi_ldap_LdapName$1_h_
//$ class com.sun.jndi.ldap.LdapName$1
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapName;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapName$1 : public ::java::util::Enumeration {
	$class(LdapName$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	LdapName$1();
	void init$(::com::sun::jndi::ldap::LdapName* this$0, ::java::util::Enumeration* val$enum_);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::com::sun::jndi::ldap::LdapName* this$0 = nullptr;
	::java::util::Enumeration* val$enum_ = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapName$1_h_