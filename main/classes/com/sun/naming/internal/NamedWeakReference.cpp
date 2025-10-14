#include <com/sun/naming/internal/NamedWeakReference.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

$FieldInfo _NamedWeakReference_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(NamedWeakReference, name)},
	{}
};

$MethodInfo _NamedWeakReference_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljava/lang/String;)V", "(TT;Ljava/lang/String;)V", 0, $method(static_cast<void(NamedWeakReference::*)(Object$*,$String*)>(&NamedWeakReference::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$ClassInfo _NamedWeakReference_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.naming.internal.NamedWeakReference",
	"java.lang.ref.WeakReference",
	nullptr,
	_NamedWeakReference_FieldInfo_,
	_NamedWeakReference_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/ref/WeakReference<TT;>;"
};

$Object* allocate$NamedWeakReference($Class* clazz) {
	return $of($alloc(NamedWeakReference));
}

void NamedWeakReference::init$(Object$* referent, $String* name) {
	$WeakReference::init$(referent);
	$set(this, name, name);
}

$String* NamedWeakReference::getName() {
	return this->name;
}

NamedWeakReference::NamedWeakReference() {
}

$Class* NamedWeakReference::load$($String* name, bool initialize) {
	$loadClass(NamedWeakReference, name, initialize, &_NamedWeakReference_ClassInfo_, allocate$NamedWeakReference);
	return class$;
}

$Class* NamedWeakReference::class$ = nullptr;

			} // internal
		} // naming
	} // sun
} // com