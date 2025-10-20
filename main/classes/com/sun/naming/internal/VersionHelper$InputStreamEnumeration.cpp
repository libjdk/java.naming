#include <com/sun/naming/internal/VersionHelper$InputStreamEnumeration.h>

#include <com/sun/naming/internal/VersionHelper.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $VersionHelper = ::com::sun::naming::internal::VersionHelper;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0 : public $PrivilegedAction {
	$class(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(VersionHelper$InputStreamEnumeration* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$getNextElement$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0>());
	}
	VersionHelper$InputStreamEnumeration* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0, inst$)},
	{}
};
$MethodInfo VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0::methodInfos[3] = {
	{"<init>", "(Lcom/sun/naming/internal/VersionHelper$InputStreamEnumeration;)V", nullptr, $PUBLIC, $method(static_cast<void(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0::*)(VersionHelper$InputStreamEnumeration*)>(&VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.naming.internal.VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0::load$($String* name, bool initialize) {
	$loadClass(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0::class$ = nullptr;

$FieldInfo _VersionHelper$InputStreamEnumeration_FieldInfo_[] = {
	{"this$0", "Lcom/sun/naming/internal/VersionHelper;", nullptr, $FINAL | $SYNTHETIC, $field(VersionHelper$InputStreamEnumeration, this$0)},
	{"urls", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/net/URL;>;", $PRIVATE | $FINAL, $field(VersionHelper$InputStreamEnumeration, urls)},
	{"nextElement", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(VersionHelper$InputStreamEnumeration, nextElement$)},
	{}
};

$MethodInfo _VersionHelper$InputStreamEnumeration_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/naming/internal/VersionHelper;Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<Ljava/net/URL;>;)V", 0, $method(static_cast<void(VersionHelper$InputStreamEnumeration::*)($VersionHelper*,$Enumeration*)>(&VersionHelper$InputStreamEnumeration::init$))},
	{"close", "()V", nullptr, $PUBLIC},
	{"getNextElement", "()Ljava/io/InputStream;", nullptr, $PRIVATE, $method(static_cast<$InputStream*(VersionHelper$InputStreamEnumeration::*)()>(&VersionHelper$InputStreamEnumeration::getNextElement))},
	{"hasMore", "()Z", nullptr, $PUBLIC},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"lambda$getNextElement$0", "()Ljava/io/InputStream;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$InputStream*(VersionHelper$InputStreamEnumeration::*)()>(&VersionHelper$InputStreamEnumeration::lambda$getNextElement$0))},
	{"next", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _VersionHelper$InputStreamEnumeration_InnerClassesInfo_[] = {
	{"com.sun.naming.internal.VersionHelper$InputStreamEnumeration", "com.sun.naming.internal.VersionHelper", "InputStreamEnumeration", $PRIVATE},
	{}
};

$ClassInfo _VersionHelper$InputStreamEnumeration_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.naming.internal.VersionHelper$InputStreamEnumeration",
	"java.lang.Object",
	"javax.naming.NamingEnumeration",
	_VersionHelper$InputStreamEnumeration_FieldInfo_,
	_VersionHelper$InputStreamEnumeration_MethodInfo_,
	"Ljava/lang/Object;Ljavax/naming/NamingEnumeration<Ljava/io/InputStream;>;",
	nullptr,
	_VersionHelper$InputStreamEnumeration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.naming.internal.VersionHelper"
};

$Object* allocate$VersionHelper$InputStreamEnumeration($Class* clazz) {
	return $of($alloc(VersionHelper$InputStreamEnumeration));
}

void VersionHelper$InputStreamEnumeration::init$($VersionHelper* this$0, $Enumeration* urls) {
	$set(this, this$0, this$0);
	$set(this, urls, urls);
}

$InputStream* VersionHelper$InputStreamEnumeration::getNextElement() {
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, static_cast<$PrivilegedAction*>($new(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0, this)));
	return $cast($InputStream, $AccessController::doPrivileged(act));
}

bool VersionHelper$InputStreamEnumeration::hasMore() {
	if (this->nextElement$ != nullptr) {
		return true;
	}
	$set(this, nextElement$, getNextElement());
	return (this->nextElement$ != nullptr);
}

bool VersionHelper$InputStreamEnumeration::hasMoreElements() {
	return hasMore();
}

$Object* VersionHelper$InputStreamEnumeration::next() {
	if (hasMore()) {
		$var($InputStream, res, this->nextElement$);
		$set(this, nextElement$, nullptr);
		return $of(res);
	} else {
		$throwNew($NoSuchElementException);
	}
}

$Object* VersionHelper$InputStreamEnumeration::nextElement() {
	return $of(next());
}

void VersionHelper$InputStreamEnumeration::close() {
}

$InputStream* VersionHelper$InputStreamEnumeration::lambda$getNextElement$0() {
	$useLocalCurrentObjectStackCache();
	while ($nc(this->urls)->hasMoreElements()) {
		try {
			return $nc(($cast($URL, $($nc(this->urls)->nextElement()))))->openStream();
		} catch ($IOException&) {
			$catch();
		}
	}
	return nullptr;
}

VersionHelper$InputStreamEnumeration::VersionHelper$InputStreamEnumeration() {
}

$Class* VersionHelper$InputStreamEnumeration::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0::classInfo$.name)) {
			return VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0::load$(name, initialize);
		}
	}
	$loadClass(VersionHelper$InputStreamEnumeration, name, initialize, &_VersionHelper$InputStreamEnumeration_ClassInfo_, allocate$VersionHelper$InputStreamEnumeration);
	return class$;
}

$Class* VersionHelper$InputStreamEnumeration::class$ = nullptr;

			} // internal
		} // naming
	} // sun
} // com