#include <javax/naming/ldap/spi/LdapDnsProviderResult.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $List = ::java::util::List;

namespace javax {
	namespace naming {
		namespace ldap {
			namespace spi {

$FieldInfo _LdapDnsProviderResult_FieldInfo_[] = {
	{"domainName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LdapDnsProviderResult, domainName)},
	{"endpoints", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(LdapDnsProviderResult, endpoints)},
	{}
};

$MethodInfo _LdapDnsProviderResult_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(LdapDnsProviderResult::*)($String*,$List*)>(&LdapDnsProviderResult::init$))},
	{"getDomainName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(LdapDnsProviderResult::*)()>(&LdapDnsProviderResult::getDomainName))},
	{"getEndpoints", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $method(static_cast<$List*(LdapDnsProviderResult::*)()>(&LdapDnsProviderResult::getEndpoints))},
	{}
};

$ClassInfo _LdapDnsProviderResult_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.naming.ldap.spi.LdapDnsProviderResult",
	"java.lang.Object",
	nullptr,
	_LdapDnsProviderResult_FieldInfo_,
	_LdapDnsProviderResult_MethodInfo_
};

$Object* allocate$LdapDnsProviderResult($Class* clazz) {
	return $of($alloc(LdapDnsProviderResult));
}

void LdapDnsProviderResult::init$($String* domainName, $List* endpoints) {
	$set(this, domainName, (domainName == nullptr) ? ""_s : domainName);
	$set(this, endpoints, $List::copyOf(endpoints));
}

$String* LdapDnsProviderResult::getDomainName() {
	return this->domainName;
}

$List* LdapDnsProviderResult::getEndpoints() {
	return this->endpoints;
}

LdapDnsProviderResult::LdapDnsProviderResult() {
}

$Class* LdapDnsProviderResult::load$($String* name, bool initialize) {
	$loadClass(LdapDnsProviderResult, name, initialize, &_LdapDnsProviderResult_ClassInfo_, allocate$LdapDnsProviderResult);
	return class$;
}

$Class* LdapDnsProviderResult::class$ = nullptr;

			} // spi
		} // ldap
	} // naming
} // javax