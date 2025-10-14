#include <javax/naming/ldap/StartTlsRequest.h>

#include <com/sun/naming/internal/VersionHelper.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <javax/naming/ConfigurationException.h>
#include <javax/naming/ldap/ExtendedResponse.h>
#include <javax/naming/ldap/StartTlsResponse.h>
#include <jcpp.h>

#undef OID

using $VersionHelper = ::com::sun::naming::internal::VersionHelper;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ConfigurationException = ::javax::naming::ConfigurationException;
using $NamingException = ::javax::naming::NamingException;
using $ExtendedRequest = ::javax::naming::ldap::ExtendedRequest;
using $ExtendedResponse = ::javax::naming::ldap::ExtendedResponse;
using $StartTlsResponse = ::javax::naming::ldap::StartTlsResponse;

namespace javax {
	namespace naming {
		namespace ldap {

class StartTlsRequest$$Lambda$getContextClassLoader : public $PrivilegedAction {
	$class(StartTlsRequest$$Lambda$getContextClassLoader, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Thread* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->getContextClassLoader());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StartTlsRequest$$Lambda$getContextClassLoader>());
	}
	$Thread* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StartTlsRequest$$Lambda$getContextClassLoader::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(StartTlsRequest$$Lambda$getContextClassLoader, inst$)},
	{}
};
$MethodInfo StartTlsRequest$$Lambda$getContextClassLoader::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Thread;)V", nullptr, $PUBLIC, $method(static_cast<void(StartTlsRequest$$Lambda$getContextClassLoader::*)($Thread*)>(&StartTlsRequest$$Lambda$getContextClassLoader::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StartTlsRequest$$Lambda$getContextClassLoader::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.naming.ldap.StartTlsRequest$$Lambda$getContextClassLoader",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* StartTlsRequest$$Lambda$getContextClassLoader::load$($String* name, bool initialize) {
	$loadClass(StartTlsRequest$$Lambda$getContextClassLoader, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StartTlsRequest$$Lambda$getContextClassLoader::class$ = nullptr;

class StartTlsRequest$$Lambda$hasNext$1 : public $PrivilegedAction {
	$class(StartTlsRequest$$Lambda$hasNext$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Iterator* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->hasNext());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<StartTlsRequest$$Lambda$hasNext$1>());
	}
	$Iterator* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo StartTlsRequest$$Lambda$hasNext$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(StartTlsRequest$$Lambda$hasNext$1, inst$)},
	{}
};
$MethodInfo StartTlsRequest$$Lambda$hasNext$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/Iterator;)V", nullptr, $PUBLIC, $method(static_cast<void(StartTlsRequest$$Lambda$hasNext$1::*)($Iterator*)>(&StartTlsRequest$$Lambda$hasNext$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo StartTlsRequest$$Lambda$hasNext$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.naming.ldap.StartTlsRequest$$Lambda$hasNext$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* StartTlsRequest$$Lambda$hasNext$1::load$($String* name, bool initialize) {
	$loadClass(StartTlsRequest$$Lambda$hasNext$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* StartTlsRequest$$Lambda$hasNext$1::class$ = nullptr;

$FieldInfo _StartTlsRequest_FieldInfo_[] = {
	{"OID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(StartTlsRequest, OID)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StartTlsRequest, serialVersionUID)},
	{}
};

$MethodInfo _StartTlsRequest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StartTlsRequest::*)()>(&StartTlsRequest::init$))},
	{"createExtendedResponse", "(Ljava/lang/String;[BII)Ljavax/naming/ldap/ExtendedResponse;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getContextClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$ClassLoader*(StartTlsRequest::*)()>(&StartTlsRequest::getContextClassLoader))},
	{"getEncodedValue", "()[B", nullptr, $PUBLIC},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"privilegedHasNext", "(Ljava/util/Iterator;)Z", "(Ljava/util/Iterator<Ljavax/naming/ldap/StartTlsResponse;>;)Z", $PRIVATE | $STATIC | $FINAL, $method(static_cast<bool(*)($Iterator*)>(&StartTlsRequest::privilegedHasNext))},
	{"wrapException", "(Ljava/lang/Exception;)Ljavax/naming/ConfigurationException;", nullptr, $PRIVATE, $method(static_cast<$ConfigurationException*(StartTlsRequest::*)($Exception*)>(&StartTlsRequest::wrapException))},
	{}
};

$ClassInfo _StartTlsRequest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.ldap.StartTlsRequest",
	"java.lang.Object",
	"javax.naming.ldap.ExtendedRequest",
	_StartTlsRequest_FieldInfo_,
	_StartTlsRequest_MethodInfo_
};

$Object* allocate$StartTlsRequest($Class* clazz) {
	return $of($alloc(StartTlsRequest));
}


$String* StartTlsRequest::OID = nullptr;

void StartTlsRequest::init$() {
}

$String* StartTlsRequest::getID() {
	return StartTlsRequest::OID;
}

$bytes* StartTlsRequest::getEncodedValue() {
	return nullptr;
}

$ExtendedResponse* StartTlsRequest::createExtendedResponse($String* id, $bytes* berValue, int32_t offset, int32_t length) {
	$beforeCallerSensitive();
	if ((id != nullptr) && (!id->equals(StartTlsRequest::OID))) {
		$throwNew($ConfigurationException, $$str({"Start TLS received the following response instead of "_s, StartTlsRequest::OID, ": "_s, id}));
	}
	$var($StartTlsResponse, resp, nullptr);
	$load($StartTlsResponse);
	$var($ServiceLoader, sl, $ServiceLoader::load($StartTlsResponse::class$, $(getContextClassLoader())));
	$var($Iterator, iter, $nc(sl)->iterator());
	while (resp == nullptr && privilegedHasNext(iter)) {
		$assign(resp, $cast($StartTlsResponse, $nc(iter)->next()));
	}
	if (resp != nullptr) {
		return resp;
	}
	try {
		$var($VersionHelper, helper, $VersionHelper::getVersionHelper());
		$var($Object, o, $nc($nc(helper)->loadClass("com.sun.jndi.ldap.ext.StartTlsResponseImpl"_s))->newInstance());
		$assign(resp, $cast($StartTlsResponse, o));
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throw($(wrapException(e)));
	} catch ($InstantiationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throw($(wrapException(e)));
	} catch ($ClassNotFoundException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throw($(wrapException(e)));
	}
	return resp;
}

$ConfigurationException* StartTlsRequest::wrapException($Exception* e) {
	$var($ConfigurationException, ce, $new($ConfigurationException, "Cannot load implementation of javax.naming.ldap.StartTlsResponse"_s));
	ce->setRootCause(e);
	return ce;
}

$ClassLoader* StartTlsRequest::getContextClassLoader() {
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(StartTlsRequest$$Lambda$getContextClassLoader, static_cast<$Thread*>($($Thread::currentThread())))));
	return $cast($ClassLoader, $AccessController::doPrivileged(pa));
}

bool StartTlsRequest::privilegedHasNext($Iterator* iter) {
	$init(StartTlsRequest);
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, static_cast<$PrivilegedAction*>($new(StartTlsRequest$$Lambda$hasNext$1, static_cast<$Iterator*>($nc(iter)))));
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(pa)))))->booleanValue();
}

StartTlsRequest::StartTlsRequest() {
}

void clinit$StartTlsRequest($Class* class$) {
	$assignStatic(StartTlsRequest::OID, "1.3.6.1.4.1.1466.20037"_s);
}

$Class* StartTlsRequest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(StartTlsRequest$$Lambda$getContextClassLoader::classInfo$.name)) {
			return StartTlsRequest$$Lambda$getContextClassLoader::load$(name, initialize);
		}
		if (name->equals(StartTlsRequest$$Lambda$hasNext$1::classInfo$.name)) {
			return StartTlsRequest$$Lambda$hasNext$1::load$(name, initialize);
		}
	}
	$loadClass(StartTlsRequest, name, initialize, &_StartTlsRequest_ClassInfo_, clinit$StartTlsRequest, allocate$StartTlsRequest);
	return class$;
}

$Class* StartTlsRequest::class$ = nullptr;

		} // ldap
	} // naming
} // javax