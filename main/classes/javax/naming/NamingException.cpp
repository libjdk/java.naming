#include <javax/naming/NamingException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeName = ::javax::naming::CompositeName;
using $Name = ::javax::naming::Name;

namespace javax {
	namespace naming {

$FieldInfo _NamingException_FieldInfo_[] = {
	{"resolvedName", "Ljavax/naming/Name;", nullptr, $PROTECTED, $field(NamingException, resolvedName)},
	{"resolvedObj", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(NamingException, resolvedObj)},
	{"remainingName", "Ljavax/naming/Name;", nullptr, $PROTECTED, $field(NamingException, remainingName)},
	{"rootException", "Ljava/lang/Throwable;", nullptr, $PROTECTED, $field(NamingException, rootException)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NamingException, serialVersionUID)},
	{}
};

$MethodInfo _NamingException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NamingException::*)($String*)>(&NamingException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NamingException::*)()>(&NamingException::init$))},
	{"appendRemainingComponent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"appendRemainingName", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getExplanation", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRemainingName", "()Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"getResolvedName", "()Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"getResolvedObj", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getRootCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"setRemainingName", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"setResolvedName", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"setResolvedObj", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setRootCause", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NamingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.NamingException",
	"java.lang.Exception",
	nullptr,
	_NamingException_FieldInfo_,
	_NamingException_MethodInfo_
};

$Object* allocate$NamingException($Class* clazz) {
	return $of($alloc(NamingException));
}

void NamingException::init$($String* explanation) {
	$Exception::init$(explanation);
	$set(this, rootException, nullptr);
	$set(this, resolvedName, ($assignField(this, remainingName, nullptr)));
	$set(this, resolvedObj, nullptr);
}

void NamingException::init$() {
	$Exception::init$();
	$set(this, rootException, nullptr);
	$set(this, resolvedName, ($assignField(this, remainingName, nullptr)));
	$set(this, resolvedObj, nullptr);
}

$Name* NamingException::getResolvedName() {
	return this->resolvedName;
}

$Name* NamingException::getRemainingName() {
	return this->remainingName;
}

$Object* NamingException::getResolvedObj() {
	return $of(this->resolvedObj);
}

$String* NamingException::getExplanation() {
	return getMessage();
}

void NamingException::setResolvedName($Name* name) {
	if (name != nullptr) {
		$set(this, resolvedName, ($cast($Name, name->clone())));
	} else {
		$set(this, resolvedName, nullptr);
	}
}

void NamingException::setRemainingName($Name* name) {
	if (name != nullptr) {
		$set(this, remainingName, ($cast($Name, name->clone())));
	} else {
		$set(this, remainingName, nullptr);
	}
}

void NamingException::setResolvedObj(Object$* obj) {
	$set(this, resolvedObj, obj);
}

void NamingException::appendRemainingComponent($String* name) {
	if (name != nullptr) {
		try {
			if (this->remainingName == nullptr) {
				$set(this, remainingName, $new($CompositeName));
			}
			$nc(this->remainingName)->add(name);
		} catch (NamingException&) {
			$var(NamingException, e, $catch());
			$throwNew($IllegalArgumentException, $(e->toString()));
		}
	}
}

void NamingException::appendRemainingName($Name* name) {
	if (name == nullptr) {
		return;
	}
	if (this->remainingName != nullptr) {
		try {
			$nc(this->remainingName)->addAll(name);
		} catch (NamingException&) {
			$var(NamingException, e, $catch());
			$throwNew($IllegalArgumentException, $(e->toString()));
		}
	} else {
		$set(this, remainingName, ($cast($Name, $nc(name)->clone())));
	}
}

$Throwable* NamingException::getRootCause() {
	return this->rootException;
}

void NamingException::setRootCause($Throwable* e) {
	if (!$equals(e, this)) {
		$set(this, rootException, e);
	}
}

$Throwable* NamingException::getCause() {
	return getRootCause();
}

$Throwable* NamingException::initCause($Throwable* cause) {
	$Exception::initCause(cause);
	setRootCause(cause);
	return this;
}

$String* NamingException::toString() {
	$var($String, answer, $Exception::toString());
	if (this->rootException != nullptr) {
		$plusAssign(answer, $$str({" [Root exception is "_s, this->rootException, "]"_s}));
	}
	if (this->remainingName != nullptr) {
		$plusAssign(answer, $$str({"; remaining name \'"_s, this->remainingName, "\'"_s}));
	}
	return answer;
}

$String* NamingException::toString(bool detail) {
	if (!detail || this->resolvedObj == nullptr) {
		return toString();
	} else {
		return ($str({$(toString()), "; resolved object "_s, this->resolvedObj}));
	}
}

NamingException::NamingException() {
}

NamingException::NamingException(const NamingException& e) {
}

NamingException NamingException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NamingException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NamingException::load$($String* name, bool initialize) {
	$loadClass(NamingException, name, initialize, &_NamingException_ClassInfo_, allocate$NamingException);
	return class$;
}

$Class* NamingException::class$ = nullptr;

	} // naming
} // javax