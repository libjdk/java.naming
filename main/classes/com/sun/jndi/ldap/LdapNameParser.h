#ifndef _com_sun_jndi_ldap_LdapNameParser_h_
#define _com_sun_jndi_ldap_LdapNameParser_h_
//$ class com.sun.jndi.ldap.LdapNameParser
//$ extends javax.naming.NameParser

#include <javax/naming/NameParser.h>

namespace javax {
	namespace naming {
		class Name;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapNameParser : public ::javax::naming::NameParser {
	$class(LdapNameParser, $NO_CLASS_INIT, ::javax::naming::NameParser)
public:
	LdapNameParser();
	void init$();
	virtual ::javax::naming::Name* parse($String* name) override;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapNameParser_h_