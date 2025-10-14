#include <com/sun/jndi/ldap/Obj$LoaderInputStream.h>

#include <com/sun/jndi/ldap/Obj.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectStreamClass.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessError.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Proxy.h>
#include <jcpp.h>

#undef PUBLIC

using $Obj = ::com::sun::jndi::ldap::Obj;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessError = ::java::lang::IllegalAccessError;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Modifier = ::java::lang::reflect::Modifier;
using $Proxy = ::java::lang::reflect::Proxy;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _Obj$LoaderInputStream_FieldInfo_[] = {
	{"classLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(Obj$LoaderInputStream, classLoader)},
	{}
};

$MethodInfo _Obj$LoaderInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(static_cast<void(Obj$LoaderInputStream::*)($InputStream*,$ClassLoader*)>(&Obj$LoaderInputStream::init$)), "java.io.IOException"},
	{"resolveClass", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class;", "(Ljava/io/ObjectStreamClass;)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{"resolveProxyClass", "([Ljava/lang/String;)Ljava/lang/Class;", "([Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, nullptr, "java.io.IOException,java.lang.ClassNotFoundException"},
	{}
};

$InnerClassInfo _Obj$LoaderInputStream_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.Obj$LoaderInputStream", "com.sun.jndi.ldap.Obj", "LoaderInputStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Obj$LoaderInputStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.Obj$LoaderInputStream",
	"java.io.ObjectInputStream",
	nullptr,
	_Obj$LoaderInputStream_FieldInfo_,
	_Obj$LoaderInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_Obj$LoaderInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.Obj"
};

$Object* allocate$Obj$LoaderInputStream($Class* clazz) {
	return $of($alloc(Obj$LoaderInputStream));
}

void Obj$LoaderInputStream::init$($InputStream* in, $ClassLoader* cl) {
	$ObjectInputStream::init$(in);
	$set(this, classLoader, cl);
}

$Class* Obj$LoaderInputStream::resolveClass($ObjectStreamClass* desc) {
	try {
		return $nc(this->classLoader)->loadClass($($nc(desc)->getName()));
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, e, $catch());
		return $ObjectInputStream::resolveClass(desc);
	}
	$shouldNotReachHere();
}

$Class* Obj$LoaderInputStream::resolveProxyClass($StringArray* interfaces) {
	$beforeCallerSensitive();
	$var($ClassLoader, nonPublicLoader, nullptr);
	bool hasNonPublicInterface = false;
	$var($ClassArray, classObjs, $new($ClassArray, $nc(interfaces)->length));
	for (int32_t i = 0; i < interfaces->length; ++i) {
		$Class* cl = $Class::forName(interfaces->get(i), false, this->classLoader);
		if (((int32_t)($nc(cl)->getModifiers() & (uint32_t)$Modifier::PUBLIC)) == 0) {
			if (hasNonPublicInterface) {
				if (nonPublicLoader != cl->getClassLoader()) {
					$throwNew($IllegalAccessError, "conflicting non-public interface class loaders"_s);
				}
			} else {
				$assign(nonPublicLoader, cl->getClassLoader());
				hasNonPublicInterface = true;
			}
		}
		classObjs->set(i, cl);
	}
	try {
		$Class* proxyClass = $Proxy::getProxyClass(hasNonPublicInterface ? nonPublicLoader : this->classLoader, classObjs);
		return proxyClass;
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, e, $catch());
		$throwNew($ClassNotFoundException, nullptr, e);
	}
	$shouldNotReachHere();
}

Obj$LoaderInputStream::Obj$LoaderInputStream() {
}

$Class* Obj$LoaderInputStream::load$($String* name, bool initialize) {
	$loadClass(Obj$LoaderInputStream, name, initialize, &_Obj$LoaderInputStream_ClassInfo_, allocate$Obj$LoaderInputStream);
	return class$;
}

$Class* Obj$LoaderInputStream::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com