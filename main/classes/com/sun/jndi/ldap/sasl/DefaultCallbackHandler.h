#ifndef _com_sun_jndi_ldap_sasl_DefaultCallbackHandler_h_
#define _com_sun_jndi_ldap_sasl_DefaultCallbackHandler_h_
//$ class com.sun.jndi.ldap.sasl.DefaultCallbackHandler
//$ extends javax.security.auth.callback.CallbackHandler

#include <java/lang/Array.h>
#include <javax/security/auth/callback/CallbackHandler.h>

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {
				class Callback;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace sasl {

class DefaultCallbackHandler : public ::javax::security::auth::callback::CallbackHandler {
	$class(DefaultCallbackHandler, $HAS_FINALIZE | $NO_CLASS_INIT, ::javax::security::auth::callback::CallbackHandler)
public:
	DefaultCallbackHandler();
	void init$($String* principal, Object$* cred, $String* realm);
	void clearPassword();
	virtual void finalize() override;
	virtual void handle($Array<::javax::security::auth::callback::Callback>* callbacks) override;
	$chars* passwd = nullptr;
	$String* authenticationID = nullptr;
	$String* authRealm = nullptr;
};

				} // sasl
			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_sasl_DefaultCallbackHandler_h_