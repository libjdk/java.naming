#include <com/sun/jndi/ldap/LdapNameParser.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Name.h>
#include <javax/naming/ldap/LdapName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $LdapName = ::javax::naming::ldap::LdapName;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$MethodInfo _LdapNameParser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LdapNameParser::*)()>(&LdapNameParser::init$))},
	{"parse", "(Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _LdapNameParser_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.LdapNameParser",
	"java.lang.Object",
	"javax.naming.NameParser",
	nullptr,
	_LdapNameParser_MethodInfo_
};

$Object* allocate$LdapNameParser($Class* clazz) {
	return $of($alloc(LdapNameParser));
}

void LdapNameParser::init$() {
}

$Name* LdapNameParser::parse($String* name) {
	return $new($LdapName, name);
}

LdapNameParser::LdapNameParser() {
}

$Class* LdapNameParser::load$($String* name, bool initialize) {
	$loadClass(LdapNameParser, name, initialize, &_LdapNameParser_ClassInfo_, allocate$LdapNameParser);
	return class$;
}

$Class* LdapNameParser::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com