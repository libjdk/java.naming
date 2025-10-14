#ifndef _javax_naming_ldap_Rfc2253Parser_h_
#define _javax_naming_ldap_Rfc2253Parser_h_
//$ class javax.naming.ldap.Rfc2253Parser
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace naming {
		namespace ldap {
			class Rdn;
		}
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class Rfc2253Parser : public ::java::lang::Object {
	$class(Rfc2253Parser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Rfc2253Parser();
	void init$($String* name);
	bool atTerminator();
	void consumeWhitespace();
	::javax::naming::ldap::Rdn* doParse(::javax::naming::ldap::Rdn* rdn);
	static bool isWhitespace(char16_t c);
	$String* parseAttrType();
	$String* parseAttrValue();
	$String* parseBinaryAttrValue();
	::java::util::List* parseDn();
	$String* parseQuotedAttrValue();
	::javax::naming::ldap::Rdn* parseRdn();
	::javax::naming::ldap::Rdn* parseRdn(::javax::naming::ldap::Rdn* rdn);
	$String* parseStringAttrValue();
	$String* name = nullptr;
	$chars* chars = nullptr;
	int32_t len = 0;
	int32_t cur = 0;
};

		} // ldap
	} // naming
} // javax

#endif // _javax_naming_ldap_Rfc2253Parser_h_