#ifndef _javax_naming_ldap_LdapContext_h_
#define _javax_naming_ldap_LdapContext_h_
//$ interface javax.naming.ldap.LdapContext
//$ extends javax.naming.directory.DirContext

#include <java/lang/Array.h>
#include <javax/naming/directory/DirContext.h>

#pragma push_macro("CONTROL_FACTORIES")
#undef CONTROL_FACTORIES

namespace javax {
	namespace naming {
		namespace ldap {
			class Control;
			class ExtendedRequest;
			class ExtendedResponse;
		}
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class $export LdapContext : public ::javax::naming::directory::DirContext {
	$interface(LdapContext, 0, ::javax::naming::directory::DirContext)
public:
	using ::javax::naming::directory::DirContext::bind;
	using ::javax::naming::directory::DirContext::createSubcontext;
	virtual ::javax::naming::ldap::ExtendedResponse* extendedOperation(::javax::naming::ldap::ExtendedRequest* request) {return nullptr;}
	virtual $Array<::javax::naming::ldap::Control>* getConnectControls() {return nullptr;}
	virtual $Array<::javax::naming::ldap::Control>* getRequestControls() {return nullptr;}
	virtual $Array<::javax::naming::ldap::Control>* getResponseControls() {return nullptr;}
	virtual ::javax::naming::ldap::LdapContext* newInstance($Array<::javax::naming::ldap::Control>* requestControls) {return nullptr;}
	using ::javax::naming::directory::DirContext::rebind;
	virtual void reconnect($Array<::javax::naming::ldap::Control>* connCtls) {}
	virtual void setRequestControls($Array<::javax::naming::ldap::Control>* requestControls) {}
	static $String* CONTROL_FACTORIES;
};

		} // ldap
	} // naming
} // javax

#pragma pop_macro("CONTROL_FACTORIES")

#endif // _javax_naming_ldap_LdapContext_h_