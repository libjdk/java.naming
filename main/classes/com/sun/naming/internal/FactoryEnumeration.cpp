#include <com/sun/naming/internal/FactoryEnumeration.h>

#include <com/sun/naming/internal/NamedWeakReference.h>
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
#include <java/lang/Throwable.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $NamedWeakReference = ::com::sun::naming::internal::NamedWeakReference;
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
using $Reference = ::java::lang::ref::Reference;
using $List = ::java::util::List;
using $NamingException = ::javax::naming::NamingException;

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

$FieldInfo _FactoryEnumeration_FieldInfo_[] = {
	{"factories", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/naming/internal/NamedWeakReference<Ljava/lang/Object;>;>;", $PRIVATE, $field(FactoryEnumeration, factories)},
	{"posn", "I", nullptr, $PRIVATE, $field(FactoryEnumeration, posn)},
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $field(FactoryEnumeration, loader)},
	{}
};

$MethodInfo _FactoryEnumeration_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;Ljava/lang/ClassLoader;)V", "(Ljava/util/List<Lcom/sun/naming/internal/NamedWeakReference<Ljava/lang/Object;>;>;Ljava/lang/ClassLoader;)V", 0, $method(static_cast<void(FactoryEnumeration::*)($List*,$ClassLoader*)>(&FactoryEnumeration::init$))},
	{"hasMore", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(FactoryEnumeration::*)()>(&FactoryEnumeration::hasMore))},
	{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC, $method(static_cast<$Object*(FactoryEnumeration::*)()>(&FactoryEnumeration::next)), "javax.naming.NamingException"},
	{}
};

$ClassInfo _FactoryEnumeration_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.naming.internal.FactoryEnumeration",
	"java.lang.Object",
	nullptr,
	_FactoryEnumeration_FieldInfo_,
	_FactoryEnumeration_MethodInfo_
};

$Object* allocate$FactoryEnumeration($Class* clazz) {
	return $of($alloc(FactoryEnumeration));
}

void FactoryEnumeration::init$($List* factories, $ClassLoader* loader) {
	this->posn = 0;
	$set(this, factories, factories);
	$set(this, loader, loader);
}

$Object* FactoryEnumeration::next() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$synchronized(this->factories) {
		$var($NamedWeakReference, ref, $cast($NamedWeakReference, $nc(this->factories)->get(this->posn++)));
		$var($Object, answer, $nc(ref)->get());
		if ((answer != nullptr) && !($instanceOf($Class, answer))) {
			return $of(answer);
		}
		$var($String, className, ref->getName());
		try {
			if (answer == nullptr) {
				$Class* cls = $Class::forName(className, true, this->loader);
				$assign(answer, cls);
			}
			$var($Object, tmp, $nc(($cast($Class, answer)))->newInstance());
			$assign(answer, tmp);
			$assign(ref, $new($NamedWeakReference, answer, className));
			$nc(this->factories)->set(this->posn - 1, ref);
			return $of(answer);
		} catch ($ClassNotFoundException&) {
			$var($ClassNotFoundException, e, $catch());
			$var($NamingException, ne, $new($NamingException, $$str({"No longer able to load "_s, className})));
			ne->setRootCause(e);
			$throw(ne);
		} catch ($InstantiationException&) {
			$var($InstantiationException, e, $catch());
			$var($NamingException, ne, $new($NamingException, $$str({"Cannot instantiate "_s, answer})));
			ne->setRootCause(e);
			$throw(ne);
		} catch ($IllegalAccessException&) {
			$var($IllegalAccessException, e, $catch());
			$var($NamingException, ne, $new($NamingException, $$str({"Cannot access "_s, answer})));
			ne->setRootCause(e);
			$throw(ne);
		}
	}
	$shouldNotReachHere();
}

bool FactoryEnumeration::hasMore() {
	$synchronized(this->factories) {
		return this->posn < $nc(this->factories)->size();
	}
}

FactoryEnumeration::FactoryEnumeration() {
}

$Class* FactoryEnumeration::load$($String* name, bool initialize) {
	$loadClass(FactoryEnumeration, name, initialize, &_FactoryEnumeration_ClassInfo_, allocate$FactoryEnumeration);
	return class$;
}

$Class* FactoryEnumeration::class$ = nullptr;

			} // internal
		} // naming
	} // sun
} // com