#ifndef _com_sun_jndi_ldap_LdapName$DnParser_h_
#define _com_sun_jndi_ldap_LdapName$DnParser_h_
//$ class com.sun.jndi.ldap.LdapName$DnParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				class LdapName$Rdn;
			}
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapName$DnParser : public ::java::lang::Object {
	$class(LdapName$DnParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LdapName$DnParser();
	void init$($String* name, bool valuesCaseSensitive);
	bool atTerminator();
	void consumeWhitespace();
	virtual ::java::util::Vector* getDn();
	virtual ::com::sun::jndi::ldap::LdapName$Rdn* getRdn();
	$String* parseAttrType();
	$String* parseAttrValue();
	$String* parseBinaryAttrValue();
	$String* parseQuotedAttrValue();
	::com::sun::jndi::ldap::LdapName$Rdn* parseRdn();
	$String* parseStringAttrValue();
	$String* name = nullptr;
	$chars* chars = nullptr;
	int32_t len = 0;
	int32_t cur = 0;
	bool valuesCaseSensitive = false;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_LdapName$DnParser_h_