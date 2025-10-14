#ifndef _com_sun_jndi_ldap_LdapURL_h_
#define _com_sun_jndi_ldap_LdapURL_h_
//$ class com.sun.jndi.ldap.LdapURL
//$ extends com.sun.jndi.toolkit.url.Uri

#include <com/sun/jndi/toolkit/url/Uri.h>
#include <java/lang/Array.h>

#pragma push_macro("DN")
#undef DN

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapURL : public ::com::sun::jndi::toolkit::url::Uri {
	$class(LdapURL, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::url::Uri)
public:
	LdapURL();
	void init$($String* url);
	static $StringArray* fromList($String* urlList);
	$String* getAttributes();
	$String* getDN();
	$String* getExtensions();
	$String* getFilter();
	$String* getScope();
	static bool hasQueryComponents($String* url);
	void parsePathAndQuery();
	static $String* toUrlString($String* host, int32_t port, $String* dn, bool useSsl);
	bool useSsl();
	bool useSsl$ = false;
	$String* DN = nullptr;
	$String* attributes = nullptr;
	$String* scope = nullptr;
	$String* filter = nullptr;
	$String* extensions = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#pragma pop_macro("DN")

#endif // _com_sun_jndi_ldap_LdapURL_h_