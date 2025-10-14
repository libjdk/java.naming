#include <com/sun/jndi/url/ldap/ldapURLContextFactory.h>

#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapCtxFactory.h>
#include <com/sun/jndi/ldap/LdapURL.h>
#include <com/sun/jndi/toolkit/ctx/ComponentDirContext.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeDirContext.h>
#include <com/sun/jndi/url/ldap/ldapURLContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/spi/ResolveResult.h>
#include <jcpp.h>

using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapCtxFactory = ::com::sun::jndi::ldap::LdapCtxFactory;
using $LdapURL = ::com::sun::jndi::ldap::LdapURL;
using $ComponentDirContext = ::com::sun::jndi::toolkit::ctx::ComponentDirContext;
using $PartialCompositeDirContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext;
using $Uri = ::com::sun::jndi::toolkit::url::Uri;
using $ldapURLContext = ::com::sun::jndi::url::ldap::ldapURLContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $DirContext = ::javax::naming::directory::DirContext;
using $ObjectFactory = ::javax::naming::spi::ObjectFactory;
using $ResolveResult = ::javax::naming::spi::ResolveResult;

namespace com {
	namespace sun {
		namespace jndi {
			namespace url {
				namespace ldap {

$MethodInfo _ldapURLContextFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ldapURLContextFactory::*)()>(&ldapURLContextFactory::init$))},
	{"getObjectInstance", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $PUBLIC, nullptr, "java.lang.Exception"},
	{"getUsingURLIgnoreRootDN", "(Ljava/lang/String;Ljava/util/Hashtable;)Ljavax/naming/spi/ResolveResult;", "(Ljava/lang/String;Ljava/util/Hashtable<**>;)Ljavax/naming/spi/ResolveResult;", $STATIC, $method(static_cast<$ResolveResult*(*)($String*,$Hashtable*)>(&ldapURLContextFactory::getUsingURLIgnoreRootDN)), "javax.naming.NamingException"},
	{}
};

$ClassInfo _ldapURLContextFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.url.ldap.ldapURLContextFactory",
	"java.lang.Object",
	"javax.naming.spi.ObjectFactory",
	nullptr,
	_ldapURLContextFactory_MethodInfo_
};

$Object* allocate$ldapURLContextFactory($Class* clazz) {
	return $of($alloc(ldapURLContextFactory));
}

void ldapURLContextFactory::init$() {
}

$Object* ldapURLContextFactory::getObjectInstance(Object$* urlInfo, $Name* name, $Context* nameCtx, $Hashtable* env) {
	if (urlInfo == nullptr) {
		return $of($new($ldapURLContext, env));
	} else {
		return $of($LdapCtxFactory::getLdapCtxInstance(urlInfo, env));
	}
}

$ResolveResult* ldapURLContextFactory::getUsingURLIgnoreRootDN($String* url, $Hashtable* env) {
	$init(ldapURLContextFactory);
	$var($LdapURL, ldapUrl, $new($LdapURL, url));
	$var($String, var$0, ""_s);
	$var($String, var$1, ldapUrl->getHost());
	int32_t var$2 = ldapUrl->getPort();
	$var($Hashtable, var$3, env);
	$var($DirContext, ctx, static_cast<$DirContext*>(static_cast<$PartialCompositeDirContext*>(static_cast<$ComponentDirContext*>($new($LdapCtx, var$0, var$1, var$2, var$3, ldapUrl->useSsl())))));
	$var($String, dn, ldapUrl->getDN() != nullptr ? ldapUrl->getDN() : ""_s);
	$var($CompositeName, remaining, $new($CompositeName));
	if (!""_s->equals(dn)) {
		remaining->add(dn);
	}
	return $new($ResolveResult, $of(ctx), static_cast<$Name*>(remaining));
}

ldapURLContextFactory::ldapURLContextFactory() {
}

$Class* ldapURLContextFactory::load$($String* name, bool initialize) {
	$loadClass(ldapURLContextFactory, name, initialize, &_ldapURLContextFactory_ClassInfo_, allocate$ldapURLContextFactory);
	return class$;
}

$Class* ldapURLContextFactory::class$ = nullptr;

				} // ldap
			} // url
		} // jndi
	} // sun
} // com