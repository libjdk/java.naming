#include <com/sun/jndi/ldap/ClientId.h>

#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <com/sun/jndi/ldap/VersionHelper.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Locale.h>
#include <javax/naming/ldap/Control.h>
#include <javax/net/SocketFactory.h>
#include <jcpp.h>

#undef DEFAULT_SSL_FACTORY
#undef ENGLISH

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $Obj = ::com::sun::jndi::ldap::Obj;
using $VersionHelper = ::com::sun::jndi::ldap::VersionHelper;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Arrays = ::java::util::Arrays;
using $Locale = ::java::util::Locale;
using $Control = ::javax::naming::ldap::Control;
using $SocketFactory = ::javax::net::SocketFactory;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _ClientId_FieldInfo_[] = {
	{"version", "I", nullptr, $PRIVATE | $FINAL, $field(ClientId, version)},
	{"hostname", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ClientId, hostname)},
	{"port", "I", nullptr, $PRIVATE | $FINAL, $field(ClientId, port)},
	{"protocol", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ClientId, protocol)},
	{"bindCtls", "[Ljavax/naming/ldap/Control;", nullptr, $PRIVATE | $FINAL, $field(ClientId, bindCtls)},
	{"trace", "Ljava/io/OutputStream;", nullptr, $PRIVATE | $FINAL, $field(ClientId, trace)},
	{"socketFactory", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ClientId, socketFactory)},
	{"myHash", "I", nullptr, $PRIVATE | $FINAL, $field(ClientId, myHash)},
	{"ctlHash", "I", nullptr, $PRIVATE | $FINAL, $field(ClientId, ctlHash)},
	{"factory", "Ljavax/net/SocketFactory;", nullptr, $PRIVATE, $field(ClientId, factory)},
	{"sockComparator", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $field(ClientId, sockComparator)},
	{"isDefaultSockFactory", "Z", nullptr, $PRIVATE, $field(ClientId, isDefaultSockFactory)},
	{"debug", "Z", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ClientId, debug)},
	{}
};

$MethodInfo _ClientId_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;ILjava/lang/String;[Ljavax/naming/ldap/Control;Ljava/io/OutputStream;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ClientId::*)(int32_t,$String*,int32_t,$String*,$ControlArray*,$OutputStream*,$String*)>(&ClientId::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equalsControls", "([Ljavax/naming/ldap/Control;[Ljavax/naming/ldap/Control;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ControlArray*,$ControlArray*)>(&ClientId::equalsControls))},
	{"equalsSockFactory", "(Lcom/sun/jndi/ldap/ClientId;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ClientId::*)(ClientId*)>(&ClientId::equalsSockFactory))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"hashCodeControls", "([Ljavax/naming/ldap/Control;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ControlArray*)>(&ClientId::hashCodeControls))},
	{"invokeComparator", "(Lcom/sun/jndi/ldap/ClientId;Lcom/sun/jndi/ldap/ClientId;)Z", nullptr, $PRIVATE, $method(static_cast<bool(ClientId::*)(ClientId*,ClientId*)>(&ClientId::invokeComparator))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toStringControls", "([Ljavax/naming/ldap/Control;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($ControlArray*)>(&ClientId::toStringControls))},
	{}
};

$ClassInfo _ClientId_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.ClientId",
	"java.lang.Object",
	nullptr,
	_ClientId_FieldInfo_,
	_ClientId_MethodInfo_
};

$Object* allocate$ClientId($Class* clazz) {
	return $of($alloc(ClientId));
}

void ClientId::init$(int32_t version, $String* hostname, int32_t port, $String* protocol, $ControlArray* bindCtls, $OutputStream* trace, $String* socketFactory) {
	$beforeCallerSensitive();
	$set(this, factory, nullptr);
	$set(this, sockComparator, nullptr);
	this->isDefaultSockFactory = false;
	this->version = version;
	$init($Locale);
	$set(this, hostname, $nc(hostname)->toLowerCase($Locale::ENGLISH));
	this->port = port;
	$set(this, protocol, protocol);
	$set(this, bindCtls, bindCtls != nullptr ? $cast($ControlArray, $nc(bindCtls)->clone()) : ($ControlArray*)nullptr);
	$set(this, trace, trace);
	$set(this, socketFactory, socketFactory);
	$init($LdapCtx);
	if ((socketFactory != nullptr) && !socketFactory->equals($LdapCtx::DEFAULT_SSL_FACTORY)) {
		try {
			$init($Obj);
			$Class* socketFactoryClass = $nc($Obj::helper)->loadClass(socketFactory);
				$load($Object);
			$set(this, sockComparator, $nc(socketFactoryClass)->getMethod("compare"_s, $$new($ClassArray, {
				$Object::class$,
				$Object::class$
			})));
			$var($Method, getDefault, socketFactoryClass->getMethod("getDefault"_s, $$new($ClassArray, 0)));
			$set(this, factory, $cast($SocketFactory, $nc(getDefault)->invoke(nullptr, $$new($ObjectArray, 0))));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
		}
	} else {
		this->isDefaultSockFactory = true;
	}
	int32_t var$2 = version + port + (trace != nullptr ? $nc($of(trace))->hashCode() : 0);
	int32_t var$1 = var$2 + (this->hostname != nullptr ? $nc(this->hostname)->hashCode() : 0);
	int32_t var$0 = var$1 + (protocol != nullptr ? $nc(protocol)->hashCode() : 0);
	this->myHash = var$0 + (this->ctlHash = hashCodeControls(bindCtls));
}

bool ClientId::equals(Object$* obj) {
	if (!($instanceOf(ClientId, obj))) {
		return false;
	}
	$var(ClientId, other, $cast(ClientId, obj));
	bool var$2 = this->myHash == $nc(other)->myHash && this->version == other->version && this->port == other->port && this->trace == other->trace && (this->hostname == other->hostname || (this->hostname != nullptr && $nc(this->hostname)->equals($nc(other)->hostname)));
	bool var$1 = var$2 && (this->protocol == $nc(other)->protocol || (this->protocol != nullptr && $nc(this->protocol)->equals($nc(other)->protocol))) && this->ctlHash == $nc(other)->ctlHash;
	bool var$0 = var$1 && (equalsControls(this->bindCtls, other->bindCtls));
	return var$0 && (equalsSockFactory(other));
}

int32_t ClientId::hashCode() {
	return this->myHash;
}

int32_t ClientId::hashCodeControls($ControlArray* c) {
	if (c == nullptr) {
		return 0;
	}
	int32_t code = 0;
	for (int32_t i = 0; i < $nc(c)->length; ++i) {
		code = code * 31 + $nc($($nc(c->get(i))->getID()))->hashCode();
	}
	return code;
}

bool ClientId::equalsControls($ControlArray* a, $ControlArray* b) {
	if (a == b) {
		return true;
	}
	if (a == nullptr || b == nullptr) {
		return false;
	}
	if ($nc(a)->length != $nc(b)->length) {
		return false;
	}
	for (int32_t i = 0; i < $nc(a)->length; ++i) {
		bool var$1 = !$nc($($nc(a->get(i))->getID()))->equals($($nc($nc(b)->get(i))->getID()));
		if (!var$1) {
			bool var$2 = $nc(a->get(i))->isCritical();
			var$1 = var$2 != $nc($nc(b)->get(i))->isCritical();
		}
		bool var$0 = var$1;
		if (!var$0) {
			$var($bytes, var$3, $nc(a->get(i))->getEncodedValue());
			var$0 = !$Arrays::equals(var$3, $($nc($nc(b)->get(i))->getEncodedValue()));
		}
		if (var$0) {
			return false;
		}
	}
	return true;
}

bool ClientId::equalsSockFactory(ClientId* other) {
	if (this->isDefaultSockFactory && $nc(other)->isDefaultSockFactory) {
		return true;
	} else if (!other->isDefaultSockFactory) {
		return invokeComparator(other, this);
	} else {
		return invokeComparator(this, other);
	}
}

bool ClientId::invokeComparator(ClientId* c1, ClientId* c2) {
	$beforeCallerSensitive();
	$var($Object, ret, nullptr);
	try {
		$assign(ret, $nc(($nc(c1)->sockComparator))->invoke(c1->factory, $$new($ObjectArray, {
			$of(c1->socketFactory),
			$of($nc(c2)->socketFactory)
		})));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		return false;
	}
	if ($nc(($cast($Integer, ret)))->intValue() == 0) {
		return true;
	}
	return false;
}

$String* ClientId::toStringControls($ControlArray* ctls) {
	if (ctls == nullptr) {
		return ""_s;
	}
	$var($StringBuilder, str, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(ctls)->length; ++i) {
		str->append($($nc(ctls->get(i))->getID()));
		str->append(u' ');
	}
	return str->toString();
}

$String* ClientId::toString() {
	return ($str({this->hostname, ":"_s, $$str(this->port), ":"_s, (this->protocol != nullptr ? this->protocol : ""_s), ":"_s, $(toStringControls(this->bindCtls)), ":"_s, this->socketFactory}));
}

ClientId::ClientId() {
}

$Class* ClientId::load$($String* name, bool initialize) {
	$loadClass(ClientId, name, initialize, &_ClientId_ClassInfo_, allocate$ClientId);
	return class$;
}

$Class* ClientId::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com