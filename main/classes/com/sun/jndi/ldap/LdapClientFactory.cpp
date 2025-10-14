#include <com/sun/jndi/ldap/LdapClientFactory.h>

#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/pool/PoolCallback.h>
#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <java/io/OutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $PoolCallback = ::com::sun::jndi::ldap::pool::PoolCallback;
using $PooledConnection = ::com::sun::jndi::ldap::pool::PooledConnection;
using $PooledConnectionFactory = ::com::sun::jndi::ldap::pool::PooledConnectionFactory;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapClientFactory_FieldInfo_[] = {
	{"host", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LdapClientFactory, host)},
	{"port", "I", nullptr, $PRIVATE | $FINAL, $field(LdapClientFactory, port)},
	{"socketFactory", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LdapClientFactory, socketFactory)},
	{"connTimeout", "I", nullptr, $PRIVATE | $FINAL, $field(LdapClientFactory, connTimeout)},
	{"readTimeout", "I", nullptr, $PRIVATE | $FINAL, $field(LdapClientFactory, readTimeout)},
	{"trace", "Ljava/io/OutputStream;", nullptr, $PRIVATE | $FINAL, $field(LdapClientFactory, trace)},
	{}
};

$MethodInfo _LdapClientFactory_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;IILjava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(LdapClientFactory::*)($String*,int32_t,$String*,int32_t,int32_t,$OutputStream*)>(&LdapClientFactory::init$))},
	{"createPooledConnection", "(Lcom/sun/jndi/ldap/pool/PoolCallback;)Lcom/sun/jndi/ldap/pool/PooledConnection;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LdapClientFactory_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapClientFactory",
	"java.lang.Object",
	"com.sun.jndi.ldap.pool.PooledConnectionFactory",
	_LdapClientFactory_FieldInfo_,
	_LdapClientFactory_MethodInfo_
};

$Object* allocate$LdapClientFactory($Class* clazz) {
	return $of($alloc(LdapClientFactory));
}

void LdapClientFactory::init$($String* host, int32_t port, $String* socketFactory, int32_t connTimeout, int32_t readTimeout, $OutputStream* trace) {
	$set(this, host, host);
	this->port = port;
	$set(this, socketFactory, socketFactory);
	this->connTimeout = connTimeout;
	this->readTimeout = readTimeout;
	$set(this, trace, trace);
}

$PooledConnection* LdapClientFactory::createPooledConnection($PoolCallback* pcb) {
	return $new($LdapClient, this->host, this->port, this->socketFactory, this->connTimeout, this->readTimeout, this->trace, pcb);
}

$String* LdapClientFactory::toString() {
	return $str({this->host, ":"_s, $$str(this->port)});
}

LdapClientFactory::LdapClientFactory() {
}

$Class* LdapClientFactory::load$($String* name, bool initialize) {
	$loadClass(LdapClientFactory, name, initialize, &_LdapClientFactory_ClassInfo_, allocate$LdapClientFactory);
	return class$;
}

$Class* LdapClientFactory::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com