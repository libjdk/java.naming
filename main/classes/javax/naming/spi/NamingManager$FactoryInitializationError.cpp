#include <javax/naming/spi/NamingManager$FactoryInitializationError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/NoInitialContextException.h>
#include <javax/naming/spi/NamingManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;
using $NoInitialContextException = ::javax::naming::NoInitialContextException;
using $NamingManager = ::javax::naming::spi::NamingManager;

namespace javax {
	namespace naming {
		namespace spi {

$FieldInfo _NamingManager$FactoryInitializationError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NamingManager$FactoryInitializationError, serialVersionUID)},
	{}
};

$MethodInfo _NamingManager$FactoryInitializationError_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/NoInitialContextException;)V", nullptr, $PRIVATE, $method(static_cast<void(NamingManager$FactoryInitializationError::*)($NoInitialContextException*)>(&NamingManager$FactoryInitializationError::init$))},
	{"getCause", "()Ljavax/naming/NoInitialContextException;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _NamingManager$FactoryInitializationError_InnerClassesInfo_[] = {
	{"javax.naming.spi.NamingManager$FactoryInitializationError", "javax.naming.spi.NamingManager", "FactoryInitializationError", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _NamingManager$FactoryInitializationError_ClassInfo_ = {
	$ACC_SUPER,
	"javax.naming.spi.NamingManager$FactoryInitializationError",
	"java.lang.Error",
	nullptr,
	_NamingManager$FactoryInitializationError_FieldInfo_,
	_NamingManager$FactoryInitializationError_MethodInfo_,
	nullptr,
	nullptr,
	_NamingManager$FactoryInitializationError_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.naming.spi.NamingManager"
};

$Object* allocate$NamingManager$FactoryInitializationError($Class* clazz) {
	return $of($alloc(NamingManager$FactoryInitializationError));
}

void NamingManager$FactoryInitializationError::init$($NoInitialContextException* cause) {
	$Error::init$(static_cast<$Throwable*>(cause));
}

$Throwable* NamingManager$FactoryInitializationError::getCause() {
	return $cast($NoInitialContextException, $Error::getCause());
}

NamingManager$FactoryInitializationError::NamingManager$FactoryInitializationError() {
}

NamingManager$FactoryInitializationError::NamingManager$FactoryInitializationError(const NamingManager$FactoryInitializationError& e) {
}

NamingManager$FactoryInitializationError NamingManager$FactoryInitializationError::wrapper$() {
	$pendingException(this);
	return *this;
}

void NamingManager$FactoryInitializationError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NamingManager$FactoryInitializationError::load$($String* name, bool initialize) {
	$loadClass(NamingManager$FactoryInitializationError, name, initialize, &_NamingManager$FactoryInitializationError_ClassInfo_, allocate$NamingManager$FactoryInitializationError);
	return class$;
}

$Class* NamingManager$FactoryInitializationError::class$ = nullptr;

		} // spi
	} // naming
} // javax