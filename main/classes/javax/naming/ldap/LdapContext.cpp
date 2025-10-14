#include <javax/naming/ldap/LdapContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/ExtendedRequest.h>
#include <javax/naming/ldap/ExtendedResponse.h>
#include <jcpp.h>

#undef CONTROL_FACTORIES

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DirContext = ::javax::naming::directory::DirContext;
using $ExtendedRequest = ::javax::naming::ldap::ExtendedRequest;
using $ExtendedResponse = ::javax::naming::ldap::ExtendedResponse;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _LdapContext_FieldInfo_[] = {
	{"CONTROL_FACTORIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(LdapContext, CONTROL_FACTORIES)},
	{}
};

$MethodInfo _LdapContext_MethodInfo_[] = {
	{"extendedOperation", "(Ljavax/naming/ldap/ExtendedRequest;)Ljavax/naming/ldap/ExtendedResponse;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"getConnectControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"getRequestControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"getResponseControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"newInstance", "([Ljavax/naming/ldap/Control;)Ljavax/naming/ldap/LdapContext;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"reconnect", "([Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"setRequestControls", "([Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _LdapContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.ldap.LdapContext",
	nullptr,
	"javax.naming.directory.DirContext",
	_LdapContext_FieldInfo_,
	_LdapContext_MethodInfo_
};

$Object* allocate$LdapContext($Class* clazz) {
	return $of($alloc(LdapContext));
}


$String* LdapContext::CONTROL_FACTORIES = nullptr;

void clinit$LdapContext($Class* class$) {
	$assignStatic(LdapContext::CONTROL_FACTORIES, "java.naming.factory.control"_s);
}

$Class* LdapContext::load$($String* name, bool initialize) {
	$loadClass(LdapContext, name, initialize, &_LdapContext_ClassInfo_, clinit$LdapContext, allocate$LdapContext);
	return class$;
}

$Class* LdapContext::class$ = nullptr;

		} // ldap
	} // naming
} // javax