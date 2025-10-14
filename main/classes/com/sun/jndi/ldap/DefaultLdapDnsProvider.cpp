#include <com/sun/jndi/ldap/DefaultLdapDnsProvider.h>

#include <com/sun/jndi/ldap/LdapURL.h>
#include <com/sun/jndi/ldap/ServiceLocator.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <javax/naming/ldap/spi/LdapDnsProviderResult.h>
#include <jcpp.h>

using $LdapURL = ::com::sun::jndi::ldap::LdapURL;
using $ServiceLocator = ::com::sun::jndi::ldap::ServiceLocator;
using $Uri = ::com::sun::jndi::toolkit::url::Uri;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Optional = ::java::util::Optional;
using $LdapDnsProviderResult = ::javax::naming::ldap::spi::LdapDnsProviderResult;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$MethodInfo _DefaultLdapDnsProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultLdapDnsProvider::*)()>(&DefaultLdapDnsProvider::init$))},
	{"lookupEndpoints", "(Ljava/lang/String;Ljava/util/Map;)Ljava/util/Optional;", "(Ljava/lang/String;Ljava/util/Map<**>;)Ljava/util/Optional<Ljavax/naming/ldap/spi/LdapDnsProviderResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _DefaultLdapDnsProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.ldap.DefaultLdapDnsProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DefaultLdapDnsProvider_MethodInfo_
};

$Object* allocate$DefaultLdapDnsProvider($Class* clazz) {
	return $of($alloc(DefaultLdapDnsProvider));
}

void DefaultLdapDnsProvider::init$() {
}

$Optional* DefaultLdapDnsProvider::lookupEndpoints($String* url, $Map* env) {
	if (url == nullptr || env == nullptr) {
		$throwNew($NullPointerException);
	}
	$var($String, domainName, nullptr);
	$var($List, endpoints, $new($ArrayList));
	$var($LdapURL, ldapUrl, $new($LdapURL, url));
	$var($String, dn, ldapUrl->getDN());
	$var($String, host, ldapUrl->getHost());
	int32_t port = ldapUrl->getPort();
	$var($StringArray, hostports, nullptr);
	bool var$0 = host == nullptr && port == -1 && dn != nullptr && ($assign(domainName, $ServiceLocator::mapDnToDomainName(dn))) != nullptr;
	if (var$0 && ($assign(hostports, $ServiceLocator::getLdapService(domainName, env))) != nullptr) {
		$var($String, scheme, $str({$(ldapUrl->getScheme()), "://"_s}));
		$var($String, query, ldapUrl->getQuery());
		$var($String, urlSuffix, $str({$(ldapUrl->getPath()), (query != nullptr ? query : ""_s)}));
		{
			$var($StringArray, arr$, hostports);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, hostPort, arr$->get(i$));
				{
					endpoints->add($$str({scheme, hostPort, urlSuffix}));
				}
			}
		}
	} else {
		$assign(domainName, ""_s);
		endpoints->add(url);
	}
	$var($LdapDnsProviderResult, res, $new($LdapDnsProviderResult, domainName, endpoints));
	bool var$1 = $nc($(res->getEndpoints()))->isEmpty();
	if (var$1 && $nc($(res->getDomainName()))->isEmpty()) {
		return $Optional::empty();
	} else {
		return $Optional::of(res);
	}
}

DefaultLdapDnsProvider::DefaultLdapDnsProvider() {
}

$Class* DefaultLdapDnsProvider::load$($String* name, bool initialize) {
	$loadClass(DefaultLdapDnsProvider, name, initialize, &_DefaultLdapDnsProvider_ClassInfo_, allocate$DefaultLdapDnsProvider);
	return class$;
}

$Class* DefaultLdapDnsProvider::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com