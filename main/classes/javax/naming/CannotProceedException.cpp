#include <javax/naming/CannotProceedException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

$FieldInfo _CannotProceedException_FieldInfo_[] = {
	{"remainingNewName", "Ljavax/naming/Name;", nullptr, $PROTECTED, $field(CannotProceedException, remainingNewName)},
	{"environment", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<**>;", $PROTECTED, $field(CannotProceedException, environment)},
	{"altName", "Ljavax/naming/Name;", nullptr, $PROTECTED, $field(CannotProceedException, altName)},
	{"altNameCtx", "Ljavax/naming/Context;", nullptr, $PROTECTED, $field(CannotProceedException, altNameCtx)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CannotProceedException, serialVersionUID)},
	{}
};

$MethodInfo _CannotProceedException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(CannotProceedException::*)($String*)>(&CannotProceedException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CannotProceedException::*)()>(&CannotProceedException::init$))},
	{"getAltName", "()Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"getAltNameCtx", "()Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"getEnvironment", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<**>;", $PUBLIC},
	{"getRemainingNewName", "()Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"setAltName", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"setAltNameCtx", "(Ljavax/naming/Context;)V", nullptr, $PUBLIC},
	{"setEnvironment", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC},
	{"setRemainingNewName", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CannotProceedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.CannotProceedException",
	"javax.naming.NamingException",
	nullptr,
	_CannotProceedException_FieldInfo_,
	_CannotProceedException_MethodInfo_
};

$Object* allocate$CannotProceedException($Class* clazz) {
	return $of($alloc(CannotProceedException));
}

void CannotProceedException::init$($String* explanation) {
	$NamingException::init$(explanation);
	$set(this, remainingNewName, nullptr);
	$set(this, environment, nullptr);
	$set(this, altName, nullptr);
	$set(this, altNameCtx, nullptr);
}

void CannotProceedException::init$() {
	$NamingException::init$();
	$set(this, remainingNewName, nullptr);
	$set(this, environment, nullptr);
	$set(this, altName, nullptr);
	$set(this, altNameCtx, nullptr);
}

$Hashtable* CannotProceedException::getEnvironment() {
	return this->environment;
}

void CannotProceedException::setEnvironment($Hashtable* environment) {
	$set(this, environment, environment);
}

$Name* CannotProceedException::getRemainingNewName() {
	return this->remainingNewName;
}

void CannotProceedException::setRemainingNewName($Name* newName) {
	if (newName != nullptr) {
		$set(this, remainingNewName, ($cast($Name, newName->clone())));
	} else {
		$set(this, remainingNewName, nullptr);
	}
}

$Name* CannotProceedException::getAltName() {
	return this->altName;
}

void CannotProceedException::setAltName($Name* altName) {
	$set(this, altName, altName);
}

$Context* CannotProceedException::getAltNameCtx() {
	return this->altNameCtx;
}

void CannotProceedException::setAltNameCtx($Context* altNameCtx) {
	$set(this, altNameCtx, altNameCtx);
}

CannotProceedException::CannotProceedException() {
}

CannotProceedException::CannotProceedException(const CannotProceedException& e) {
}

CannotProceedException CannotProceedException::wrapper$() {
	$pendingException(this);
	return *this;
}

void CannotProceedException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* CannotProceedException::load$($String* name, bool initialize) {
	$loadClass(CannotProceedException, name, initialize, &_CannotProceedException_ClassInfo_, allocate$CannotProceedException);
	return class$;
}

$Class* CannotProceedException::class$ = nullptr;

	} // naming
} // javax