#include <com/sun/jndi/ldap/sasl/DefaultCallbackHandler.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/NameCallback.h>
#include <javax/security/auth/callback/PasswordCallback.h>
#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <javax/security/sasl/RealmCallback.h>
#include <javax/security/sasl/RealmChoiceCallback.h>
#include <jcpp.h>

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callback = ::javax::security::auth::callback::Callback;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $ChoiceCallback = ::javax::security::auth::callback::ChoiceCallback;
using $NameCallback = ::javax::security::auth::callback::NameCallback;
using $PasswordCallback = ::javax::security::auth::callback::PasswordCallback;
using $TextInputCallback = ::javax::security::auth::callback::TextInputCallback;
using $UnsupportedCallbackException = ::javax::security::auth::callback::UnsupportedCallbackException;
using $RealmCallback = ::javax::security::sasl::RealmCallback;
using $RealmChoiceCallback = ::javax::security::sasl::RealmChoiceCallback;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace sasl {

$FieldInfo _DefaultCallbackHandler_FieldInfo_[] = {
	{"passwd", "[C", nullptr, $PRIVATE, $field(DefaultCallbackHandler, passwd)},
	{"authenticationID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DefaultCallbackHandler, authenticationID)},
	{"authRealm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DefaultCallbackHandler, authRealm)},
	{}
};

$MethodInfo _DefaultCallbackHandler_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DefaultCallbackHandler::*)($String*,Object$*,$String*)>(&DefaultCallbackHandler::init$)), "java.io.IOException"},
	{"clearPassword", "()V", nullptr, 0, $method(static_cast<void(DefaultCallbackHandler::*)()>(&DefaultCallbackHandler::clearPassword))},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{"handle", "([Ljavax/security/auth/callback/Callback;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException,javax.security.auth.callback.UnsupportedCallbackException"},
	{}
};

$ClassInfo _DefaultCallbackHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.sasl.DefaultCallbackHandler",
	"java.lang.Object",
	"javax.security.auth.callback.CallbackHandler",
	_DefaultCallbackHandler_FieldInfo_,
	_DefaultCallbackHandler_MethodInfo_
};

$Object* allocate$DefaultCallbackHandler($Class* clazz) {
	return $of($alloc(DefaultCallbackHandler));
}

void DefaultCallbackHandler::init$($String* principal, Object$* cred, $String* realm) {
	$set(this, authenticationID, principal);
	$set(this, authRealm, realm);
	if ($instanceOf($String, cred)) {
		$set(this, passwd, $nc(($cast($String, cred)))->toCharArray());
	} else if ($instanceOf($chars, cred)) {
		$set(this, passwd, $cast($chars, $nc(($cast($chars, cred)))->clone()));
	} else if (cred != nullptr) {
		$var($String, orig, $new($String, $cast($bytes, cred), "UTF8"_s));
		$set(this, passwd, orig->toCharArray());
	}
}

void DefaultCallbackHandler::handle($CallbackArray* callbacks) {
	for (int32_t i = 0; i < $nc(callbacks)->length; ++i) {
		if ($instanceOf($NameCallback, callbacks->get(i))) {
			$nc(($cast($NameCallback, callbacks->get(i))))->setName(this->authenticationID);
		} else if ($instanceOf($PasswordCallback, callbacks->get(i))) {
			$nc(($cast($PasswordCallback, callbacks->get(i))))->setPassword(this->passwd);
		} else if ($instanceOf($RealmChoiceCallback, callbacks->get(i))) {
			$var($StringArray, choices, $nc(($cast($RealmChoiceCallback, callbacks->get(i))))->getChoices());
			int32_t selected = 0;
			if (this->authRealm != nullptr && $nc(this->authRealm)->length() > 0) {
				selected = -1;
				for (int32_t j = 0; j < $nc(choices)->length; ++j) {
					if ($nc(choices->get(j))->equals(this->authRealm)) {
						selected = j;
					}
				}
				if (selected == -1) {
					$var($StringBuilder, allChoices, $new($StringBuilder));
					for (int32_t j = 0; j < $nc(choices)->length; ++j) {
						allChoices->append(choices->get(j))->append(u',');
					}
					$throwNew($IOException, $$str({"Cannot match \'java.naming.security.sasl.realm\' property value, \'"_s, this->authRealm, "\' with choices "_s, allChoices, "in RealmChoiceCallback"_s}));
				}
			}
			$nc(($cast($RealmChoiceCallback, callbacks->get(i))))->setSelectedIndex(selected);
		} else if ($instanceOf($RealmCallback, callbacks->get(i))) {
			$var($RealmCallback, rcb, $cast($RealmCallback, callbacks->get(i)));
			if (this->authRealm != nullptr) {
				$nc(rcb)->setText(this->authRealm);
			} else {
				$var($String, defaultRealm, $nc(rcb)->getDefaultText());
				if (defaultRealm != nullptr) {
					rcb->setText(defaultRealm);
				} else {
					rcb->setText(""_s);
				}
			}
		} else {
			$throwNew($UnsupportedCallbackException, callbacks->get(i));
		}
	}
}

void DefaultCallbackHandler::clearPassword() {
	if (this->passwd != nullptr) {
		for (int32_t i = 0; i < $nc(this->passwd)->length; ++i) {
			$nc(this->passwd)->set(i, u'\0');
		}
		$set(this, passwd, nullptr);
	}
}

void DefaultCallbackHandler::finalize() {
	clearPassword();
}

DefaultCallbackHandler::DefaultCallbackHandler() {
}

$Class* DefaultCallbackHandler::load$($String* name, bool initialize) {
	$loadClass(DefaultCallbackHandler, name, initialize, &_DefaultCallbackHandler_ClassInfo_, allocate$DefaultCallbackHandler);
	return class$;
}

$Class* DefaultCallbackHandler::class$ = nullptr;

				} // sasl
			} // ldap
		} // jndi
	} // sun
} // com