#include <com/sun/jndi/ldap/DigestClientId.h>

#include <com/sun/jndi/ldap/SimpleClientId.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Hashtable.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

#undef SASL_PROPS

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $SimpleClientId = ::com::sun::jndi::ldap::SimpleClientId;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Hashtable = ::java::util::Hashtable;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _DigestClientId_FieldInfo_[] = {
	{"SASL_PROPS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestClientId, SASL_PROPS)},
	{"propvals", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DigestClientId, propvals)},
	{"myHash", "I", nullptr, $PRIVATE | $FINAL, $field(DigestClientId, myHash)},
	{}
};

$MethodInfo _DigestClientId_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Hashtable;)V", "(ILjava/lang/String;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/util/Hashtable<**>;)V", 0, $method(static_cast<void(DigestClientId::*)(int32_t,$String*,int32_t,$String*,$ControlArray*,$OutputStream*,$String*,$String*,Object$*,$Hashtable*)>(&DigestClientId::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DigestClientId_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.DigestClientId",
	"com.sun.jndi.ldap.SimpleClientId",
	nullptr,
	_DigestClientId_FieldInfo_,
	_DigestClientId_MethodInfo_
};

$Object* allocate$DigestClientId($Class* clazz) {
	return $of($alloc(DigestClientId));
}

$StringArray* DigestClientId::SASL_PROPS = nullptr;

void DigestClientId::init$(int32_t version, $String* hostname, int32_t port, $String* protocol, $ControlArray* bindCtls, $OutputStream* trace, $String* socketFactory, $String* username, Object$* passwd, $Hashtable* env) {
	$useLocalCurrentObjectStackCache();
	$SimpleClientId::init$(version, hostname, port, protocol, bindCtls, trace, socketFactory, username, passwd);
	if (env == nullptr) {
		$set(this, propvals, nullptr);
	} else {
		$set(this, propvals, $new($StringArray, $nc(DigestClientId::SASL_PROPS)->length));
		for (int32_t i = 0; i < $nc(DigestClientId::SASL_PROPS)->length; ++i) {
			$nc(this->propvals)->set(i, $cast($String, $($nc(env)->get($nc(DigestClientId::SASL_PROPS)->get(i)))));
		}
	}
	int32_t var$0 = $SimpleClientId::hashCode();
	this->myHash = var$0 ^ $Arrays::hashCode(this->propvals);
}

bool DigestClientId::equals(Object$* obj) {
	if (!($instanceOf(DigestClientId, obj))) {
		return false;
	}
	$var(DigestClientId, other, $cast(DigestClientId, obj));
	bool var$0 = this->myHash == $nc(other)->myHash && $SimpleClientId::equals(obj);
	return var$0 && $Arrays::equals(this->propvals, other->propvals);
}

int32_t DigestClientId::hashCode() {
	return this->myHash;
}

$String* DigestClientId::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->propvals != nullptr) {
		$var($StringBuilder, sb, $new($StringBuilder));
		for (int32_t i = 0; i < $nc(this->propvals)->length; ++i) {
			sb->append(u':');
			if ($nc(this->propvals)->get(i) != nullptr) {
				sb->append($nc(this->propvals)->get(i));
			}
		}
		$var($String, var$0, $($SimpleClientId::toString()));
		return $concat(var$0, $(sb->toString()));
	} else {
		return $SimpleClientId::toString();
	}
}

void clinit$DigestClientId($Class* class$) {
	$assignStatic(DigestClientId::SASL_PROPS, $new($StringArray, {
		"java.naming.security.sasl.authorizationId"_s,
		"java.naming.security.sasl.realm"_s,
		"javax.security.sasl.qop"_s,
		"javax.security.sasl.strength"_s,
		"javax.security.sasl.reuse"_s,
		"javax.security.sasl.server.authentication"_s,
		"javax.security.sasl.maxbuffer"_s,
		"javax.security.sasl.policy.noplaintext"_s,
		"javax.security.sasl.policy.noactive"_s,
		"javax.security.sasl.policy.nodictionary"_s,
		"javax.security.sasl.policy.noanonymous"_s,
		"javax.security.sasl.policy.forward"_s,
		"javax.security.sasl.policy.credentials"_s
	}));
}

DigestClientId::DigestClientId() {
}

$Class* DigestClientId::load$($String* name, bool initialize) {
	$loadClass(DigestClientId, name, initialize, &_DigestClientId_ClassInfo_, clinit$DigestClientId, allocate$DigestClientId);
	return class$;
}

$Class* DigestClientId::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com