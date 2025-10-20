#include <com/sun/jndi/ldap/ServiceLocator.h>

#include <com/sun/jndi/ldap/ServiceLocator$SrvRecord.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Hashtable.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Random.h>
#include <javax/naming/Context.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/ldap/LdapName.h>
#include <javax/naming/ldap/Rdn.h>
#include <javax/naming/spi/NamingManager.h>
#include <jcpp.h>

#undef SRV_RR
#undef SRV_RR_ATTR

using $ServiceLocator$SrvRecordArray = $Array<::com::sun::jndi::ldap::ServiceLocator$SrvRecord>;
using $ServiceLocator$SrvRecord = ::com::sun::jndi::ldap::ServiceLocator$SrvRecord;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Hashtable = ::java::util::Hashtable;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Random = ::java::util::Random;
using $Context = ::javax::naming::Context;
using $NamingException = ::javax::naming::NamingException;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $LdapName = ::javax::naming::ldap::LdapName;
using $Rdn = ::javax::naming::ldap::Rdn;
using $NamingManager = ::javax::naming::spi::NamingManager;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _ServiceLocator_FieldInfo_[] = {
	{"SRV_RR", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServiceLocator, SRV_RR)},
	{"SRV_RR_ATTR", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServiceLocator, SRV_RR_ATTR)},
	{"random", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ServiceLocator, random)},
	{}
};

$MethodInfo _ServiceLocator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ServiceLocator::*)()>(&ServiceLocator::init$))},
	{"extractHostports", "([Lcom/sun/jndi/ldap/ServiceLocator$SrvRecord;)[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$StringArray*(*)($ServiceLocator$SrvRecordArray*)>(&ServiceLocator::extractHostports))},
	{"getLdapService", "(Ljava/lang/String;Ljava/util/Map;)[Ljava/lang/String;", "(Ljava/lang/String;Ljava/util/Map<**>;)[Ljava/lang/String;", $STATIC, $method(static_cast<$StringArray*(*)($String*,$Map*)>(&ServiceLocator::getLdapService))},
	{"getLdapService", "(Ljava/lang/String;Ljava/util/Hashtable;)[Ljava/lang/String;", "(Ljava/lang/String;Ljava/util/Hashtable<**>;)[Ljava/lang/String;", $STATIC, $method(static_cast<$StringArray*(*)($String*,$Hashtable*)>(&ServiceLocator::getLdapService))},
	{"mapDnToDomainName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&ServiceLocator::mapDnToDomainName)), "javax.naming.InvalidNameException"},
	{"selectHostport", "([Lcom/sun/jndi/ldap/ServiceLocator$SrvRecord;II)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($ServiceLocator$SrvRecordArray*,int32_t,int32_t)>(&ServiceLocator::selectHostport))},
	{}
};

$InnerClassInfo _ServiceLocator_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.ServiceLocator$SrvRecord", "com.sun.jndi.ldap.ServiceLocator", "SrvRecord", $STATIC},
	{}
};

$ClassInfo _ServiceLocator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.ServiceLocator",
	"java.lang.Object",
	nullptr,
	_ServiceLocator_FieldInfo_,
	_ServiceLocator_MethodInfo_,
	nullptr,
	nullptr,
	_ServiceLocator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.ServiceLocator$SrvRecord"
};

$Object* allocate$ServiceLocator($Class* clazz) {
	return $of($alloc(ServiceLocator));
}

$String* ServiceLocator::SRV_RR = nullptr;
$StringArray* ServiceLocator::SRV_RR_ATTR = nullptr;
$Random* ServiceLocator::random = nullptr;

void ServiceLocator::init$() {
}

$String* ServiceLocator::mapDnToDomainName($String* dn) {
	$init(ServiceLocator);
	$useLocalCurrentObjectStackCache();
	if (dn == nullptr) {
		return nullptr;
	}
	$var($StringBuilder, domain, $new($StringBuilder));
	$var($LdapName, ldapName, $new($LdapName, dn));
	$var($List, rdnList, ldapName->getRdns());
	for (int32_t i = $nc(rdnList)->size() - 1; i >= 0; --i) {
		$var($Rdn, rdn, $cast($Rdn, rdnList->get(i)));
		bool var$0 = ($nc(rdn)->size() == 1);
		if (var$0 && ("dc"_s->equalsIgnoreCase($(rdn->getType())))) {
			$var($Object, attrval, rdn->getValue());
			if ($instanceOf($String, attrval)) {
				bool var$1 = $nc($of(attrval))->equals("."_s);
				if (!var$1) {
					bool var$2 = domain->length() == 1;
					var$1 = (var$2 && domain->charAt(0) == u'.');
				}
				if (var$1) {
					domain->setLength(0);
				}
				if (domain->length() > 0) {
					domain->append(u'.');
				}
				domain->append(attrval);
			} else {
				domain->setLength(0);
			}
		} else {
			domain->setLength(0);
		}
	}
	return (domain->length() != 0) ? domain->toString() : ($String*)nullptr;
}

$StringArray* ServiceLocator::getLdapService($String* domainName, $Map* environment) {
	$init(ServiceLocator);
	if ($instanceOf($Hashtable, environment)) {
		return getLdapService(domainName, $cast($Hashtable, environment));
	}
	return getLdapService(domainName, $$new($Hashtable, environment));
}

$StringArray* ServiceLocator::getLdapService($String* domainName, $Hashtable* environment) {
	$init(ServiceLocator);
	$useLocalCurrentObjectStackCache();
	if (domainName == nullptr || $nc(domainName)->length() == 0) {
		return nullptr;
	}
	$var($String, dnsUrl, $str({"dns:///_ldap._tcp."_s, domainName}));
	$var($StringArray, hostports, nullptr);
	try {
		$var($Context, ctx, $NamingManager::getURLContext("dns"_s, environment));
		if (!($instanceOf($DirContext, ctx))) {
			return nullptr;
		}
		$var($Attributes, attrs, $nc(($cast($DirContext, ctx)))->getAttributes(dnsUrl, ServiceLocator::SRV_RR_ATTR));
		$var($Attribute, attr, nullptr);
		if (attrs != nullptr && (($assign(attr, attrs->get(ServiceLocator::SRV_RR))) != nullptr)) {
			int32_t numValues = $nc(attr)->size();
			int32_t numRecords = 0;
			$var($ServiceLocator$SrvRecordArray, srvRecords, $new($ServiceLocator$SrvRecordArray, numValues));
			int32_t i = 0;
			int32_t j = 0;
			while (i < numValues) {
				try {
					srvRecords->set(j, $$new($ServiceLocator$SrvRecord, $cast($String, $(attr->get(i)))));
					++j;
				} catch ($Exception&) {
					$catch();
				}
				++i;
			}
			numRecords = j;
			if (numRecords < numValues) {
				$var($ServiceLocator$SrvRecordArray, trimmed, $new($ServiceLocator$SrvRecordArray, numRecords));
				$System::arraycopy(srvRecords, 0, trimmed, 0, numRecords);
				$assign(srvRecords, trimmed);
			}
			if (numRecords > 1) {
				$Arrays::sort(srvRecords);
			}
			$assign(hostports, extractHostports(srvRecords));
		}
	} catch ($NamingException&) {
		$catch();
	}
	return hostports;
}

$StringArray* ServiceLocator::extractHostports($ServiceLocator$SrvRecordArray* srvRecords) {
	$init(ServiceLocator);
	$useLocalCurrentObjectStackCache();
	$var($StringArray, hostports, nullptr);
	int32_t head = 0;
	int32_t tail = 0;
	int32_t sublistLength = 0;
	int32_t k = 0;
	for (int32_t i = 0; i < $nc(srvRecords)->length; ++i) {
		if (hostports == nullptr) {
			$assign(hostports, $new($StringArray, srvRecords->length));
		}
		head = i;
		while (i < srvRecords->length - 1 && $nc(srvRecords->get(i))->priority == $nc(srvRecords->get(i + 1))->priority) {
			++i;
		}
		tail = i;
		sublistLength = (tail - head) + 1;
		for (int32_t j = 0; j < sublistLength; ++j) {
			$nc(hostports)->set(k++, $(selectHostport(srvRecords, head, tail)));
		}
	}
	return hostports;
}

$String* ServiceLocator::selectHostport($ServiceLocator$SrvRecordArray* srvRecords, int32_t head, int32_t tail) {
	$init(ServiceLocator);
	if (head == tail) {
		return $nc($nc(srvRecords)->get(head))->hostport;
	}
	int32_t sum = 0;
	for (int32_t i = head; i <= tail; ++i) {
		if ($nc(srvRecords)->get(i) != nullptr) {
			sum += $nc(srvRecords->get(i))->weight;
			$nc(srvRecords->get(i))->sum = sum;
		}
	}
	$var($String, hostport, nullptr);
	int32_t target = (sum == 0 ? 0 : $nc(ServiceLocator::random)->nextInt(sum + 1));
	for (int32_t i = head; i <= tail; ++i) {
		if ($nc(srvRecords)->get(i) != nullptr && $nc(srvRecords->get(i))->sum >= target) {
			$assign(hostport, $nc(srvRecords->get(i))->hostport);
			srvRecords->set(i, nullptr);
			break;
		}
	}
	return hostport;
}

void clinit$ServiceLocator($Class* class$) {
	$assignStatic(ServiceLocator::SRV_RR, "SRV"_s);
	$assignStatic(ServiceLocator::SRV_RR_ATTR, $new($StringArray, {ServiceLocator::SRV_RR}));
	$assignStatic(ServiceLocator::random, $new($Random));
}

ServiceLocator::ServiceLocator() {
}

$Class* ServiceLocator::load$($String* name, bool initialize) {
	$loadClass(ServiceLocator, name, initialize, &_ServiceLocator_ClassInfo_, clinit$ServiceLocator, allocate$ServiceLocator);
	return class$;
}

$Class* ServiceLocator::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com