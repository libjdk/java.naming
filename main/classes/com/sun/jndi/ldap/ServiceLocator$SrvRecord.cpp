#include <com/sun/jndi/ldap/ServiceLocator$SrvRecord.h>

#include <com/sun/jndi/ldap/ServiceLocator.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/StringTokenizer.h>
#include <jcpp.h>

using $ServiceLocator = ::com::sun::jndi::ldap::ServiceLocator;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringTokenizer = ::java::util::StringTokenizer;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _ServiceLocator$SrvRecord_FieldInfo_[] = {
	{"priority", "I", nullptr, 0, $field(ServiceLocator$SrvRecord, priority)},
	{"weight", "I", nullptr, 0, $field(ServiceLocator$SrvRecord, weight)},
	{"sum", "I", nullptr, 0, $field(ServiceLocator$SrvRecord, sum)},
	{"hostport", "Ljava/lang/String;", nullptr, 0, $field(ServiceLocator$SrvRecord, hostport)},
	{}
};

$MethodInfo _ServiceLocator$SrvRecord_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ServiceLocator$SrvRecord::*)($String*)>(&ServiceLocator$SrvRecord::init$)), "java.lang.Exception"},
	{"compareTo", "(Lcom/sun/jndi/ldap/ServiceLocator$SrvRecord;)I", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _ServiceLocator$SrvRecord_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.ServiceLocator$SrvRecord", "com.sun.jndi.ldap.ServiceLocator", "SrvRecord", $STATIC},
	{}
};

$ClassInfo _ServiceLocator$SrvRecord_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.ServiceLocator$SrvRecord",
	"java.lang.Object",
	"java.lang.Comparable",
	_ServiceLocator$SrvRecord_FieldInfo_,
	_ServiceLocator$SrvRecord_MethodInfo_,
	"Ljava/lang/Object;Ljava/lang/Comparable<Lcom/sun/jndi/ldap/ServiceLocator$SrvRecord;>;",
	nullptr,
	_ServiceLocator$SrvRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.ServiceLocator"
};

$Object* allocate$ServiceLocator$SrvRecord($Class* clazz) {
	return $of($alloc(ServiceLocator$SrvRecord));
}

void ServiceLocator$SrvRecord::init$($String* srvRecord) {
	$useLocalCurrentObjectStackCache();
	$var($StringTokenizer, tokenizer, $new($StringTokenizer, srvRecord, " "_s));
	$var($String, port, nullptr);
	if (tokenizer->countTokens() == 4) {
		this->priority = $Integer::parseInt($(tokenizer->nextToken()));
		this->weight = $Integer::parseInt($(tokenizer->nextToken()));
		$assign(port, tokenizer->nextToken());
		$set(this, hostport, $str({$(tokenizer->nextToken()), ":"_s, port}));
	} else {
		$throwNew($IllegalArgumentException);
	}
}

int32_t ServiceLocator$SrvRecord::compareTo(ServiceLocator$SrvRecord* that) {
	if (this->priority > $nc(that)->priority) {
		return 1;
	} else if (this->priority < that->priority) {
		return -1;
	} else if (this->weight == 0 && that->weight != 0) {
		return -1;
	} else if (this->weight != 0 && that->weight == 0) {
		return 1;
	} else {
		return 0;
	}
}

int32_t ServiceLocator$SrvRecord::compareTo(Object$* that) {
	return this->compareTo($cast(ServiceLocator$SrvRecord, that));
}

ServiceLocator$SrvRecord::ServiceLocator$SrvRecord() {
}

$Class* ServiceLocator$SrvRecord::load$($String* name, bool initialize) {
	$loadClass(ServiceLocator$SrvRecord, name, initialize, &_ServiceLocator$SrvRecord_ClassInfo_, allocate$ServiceLocator$SrvRecord);
	return class$;
}

$Class* ServiceLocator$SrvRecord::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com