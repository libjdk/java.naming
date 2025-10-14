#include <javax/naming/spi/ResolveResult.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeName = ::javax::naming::CompositeName;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $Name = ::javax::naming::Name;

namespace javax {
	namespace naming {
		namespace spi {

$FieldInfo _ResolveResult_FieldInfo_[] = {
	{"resolvedObj", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(ResolveResult, resolvedObj)},
	{"remainingName", "Ljavax/naming/Name;", nullptr, $PROTECTED, $field(ResolveResult, remainingName)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResolveResult, serialVersionUID)},
	{}
};

$MethodInfo _ResolveResult_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ResolveResult::*)()>(&ResolveResult::init$))},
	{"<init>", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ResolveResult::*)(Object$*,$String*)>(&ResolveResult::init$))},
	{"<init>", "(Ljava/lang/Object;Ljavax/naming/Name;)V", nullptr, $PUBLIC, $method(static_cast<void(ResolveResult::*)(Object$*,$Name*)>(&ResolveResult::init$))},
	{"appendRemainingComponent", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"appendRemainingName", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"getRemainingName", "()Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"getResolvedObj", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setRemainingName", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"setResolvedObj", "(Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ResolveResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.spi.ResolveResult",
	"java.lang.Object",
	"java.io.Serializable",
	_ResolveResult_FieldInfo_,
	_ResolveResult_MethodInfo_
};

$Object* allocate$ResolveResult($Class* clazz) {
	return $of($alloc(ResolveResult));
}

void ResolveResult::init$() {
	$set(this, resolvedObj, nullptr);
	$set(this, remainingName, nullptr);
}

void ResolveResult::init$(Object$* robj, $String* rcomp) {
	$set(this, resolvedObj, robj);
	try {
		$set(this, remainingName, $new($CompositeName, rcomp));
	} catch ($InvalidNameException&) {
		$catch();
	}
}

void ResolveResult::init$(Object$* robj, $Name* rname) {
	$set(this, resolvedObj, robj);
	setRemainingName(rname);
}

$Name* ResolveResult::getRemainingName() {
	return this->remainingName;
}

$Object* ResolveResult::getResolvedObj() {
	return $of(this->resolvedObj);
}

void ResolveResult::setRemainingName($Name* name) {
	if (name != nullptr) {
		$set(this, remainingName, ($cast($Name, name->clone())));
	} else {
		$set(this, remainingName, nullptr);
	}
}

void ResolveResult::appendRemainingName($Name* name) {
	if (name != nullptr) {
		if (this->remainingName != nullptr) {
			try {
				$nc(this->remainingName)->addAll(name);
			} catch ($InvalidNameException&) {
				$catch();
			}
		} else {
			$set(this, remainingName, ($cast($Name, name->clone())));
		}
	}
}

void ResolveResult::appendRemainingComponent($String* name) {
	if (name != nullptr) {
		$var($CompositeName, rname, $new($CompositeName));
		try {
			rname->add(name);
		} catch ($InvalidNameException&) {
			$catch();
		}
		appendRemainingName(rname);
	}
}

void ResolveResult::setResolvedObj(Object$* obj) {
	$set(this, resolvedObj, obj);
}

ResolveResult::ResolveResult() {
}

$Class* ResolveResult::load$($String* name, bool initialize) {
	$loadClass(ResolveResult, name, initialize, &_ResolveResult_ClassInfo_, allocate$ResolveResult);
	return class$;
}

$Class* ResolveResult::class$ = nullptr;

		} // spi
	} // naming
} // javax