#ifndef _javax_naming_ldap_LdapName$1_h_
#define _javax_naming_ldap_LdapName$1_h_
//$ class javax.naming.ldap.LdapName$1
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
namespace javax {
	namespace naming {
		namespace ldap {
			class LdapName;
		}
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class LdapName$1 : public ::java::util::Enumeration {
	$class(LdapName$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	LdapName$1();
	void init$(::javax::naming::ldap::LdapName* this$0, ::java::util::Iterator* val$iter);
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	::javax::naming::ldap::LdapName* this$0 = nullptr;
	::java::util::Iterator* val$iter = nullptr;
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_LdapName$1_h_