#include <com/sun/jndi/ldap/LdapCtx$SearchArgs.h>

#include <com/sun/jndi/ldap/LdapCtx.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Name.h>
#include <javax/naming/directory/SearchControls.h>
#include <jcpp.h>

using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;
using $SearchControls = ::javax::naming::directory::SearchControls;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapCtx$SearchArgs_FieldInfo_[] = {
	{"name", "Ljavax/naming/Name;", nullptr, 0, $field(LdapCtx$SearchArgs, name)},
	{"filter", "Ljava/lang/String;", nullptr, 0, $field(LdapCtx$SearchArgs, filter)},
	{"cons", "Ljavax/naming/directory/SearchControls;", nullptr, 0, $field(LdapCtx$SearchArgs, cons)},
	{"reqAttrs", "[Ljava/lang/String;", nullptr, 0, $field(LdapCtx$SearchArgs, reqAttrs)},
	{}
};

$MethodInfo _LdapCtx$SearchArgs_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;[Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LdapCtx$SearchArgs::*)($Name*,$String*,$SearchControls*,$StringArray*)>(&LdapCtx$SearchArgs::init$))},
	{}
};

$InnerClassInfo _LdapCtx$SearchArgs_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.LdapCtx$SearchArgs", "com.sun.jndi.ldap.LdapCtx", "SearchArgs", $STATIC | $FINAL},
	{}
};

$ClassInfo _LdapCtx$SearchArgs_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapCtx$SearchArgs",
	"java.lang.Object",
	nullptr,
	_LdapCtx$SearchArgs_FieldInfo_,
	_LdapCtx$SearchArgs_MethodInfo_,
	nullptr,
	nullptr,
	_LdapCtx$SearchArgs_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.LdapCtx"
};

$Object* allocate$LdapCtx$SearchArgs($Class* clazz) {
	return $of($alloc(LdapCtx$SearchArgs));
}

void LdapCtx$SearchArgs::init$($Name* name, $String* filter, $SearchControls* cons, $StringArray* ra) {
	$set(this, name, name);
	$set(this, filter, filter);
	$set(this, cons, cons);
	$set(this, reqAttrs, ra);
}

LdapCtx$SearchArgs::LdapCtx$SearchArgs() {
}

$Class* LdapCtx$SearchArgs::load$($String* name, bool initialize) {
	$loadClass(LdapCtx$SearchArgs, name, initialize, &_LdapCtx$SearchArgs_ClassInfo_, allocate$LdapCtx$SearchArgs);
	return class$;
}

$Class* LdapCtx$SearchArgs::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com