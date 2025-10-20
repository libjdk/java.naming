#include <javax/naming/directory/AttributeModificationException.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/ModificationItem.h>
#include <jcpp.h>

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;
using $ModificationItem = ::javax::naming::directory::ModificationItem;

namespace javax {
	namespace naming {
		namespace directory {

$FieldInfo _AttributeModificationException_FieldInfo_[] = {
	{"unexecs", "[Ljavax/naming/directory/ModificationItem;", nullptr, $PRIVATE, $field(AttributeModificationException, unexecs)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeModificationException, serialVersionUID)},
	{}
};

$MethodInfo _AttributeModificationException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AttributeModificationException::*)($String*)>(&AttributeModificationException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttributeModificationException::*)()>(&AttributeModificationException::init$))},
	{"getUnexecutedModifications", "()[Ljavax/naming/directory/ModificationItem;", nullptr, $PUBLIC},
	{"setUnexecutedModifications", "([Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AttributeModificationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.AttributeModificationException",
	"javax.naming.NamingException",
	nullptr,
	_AttributeModificationException_FieldInfo_,
	_AttributeModificationException_MethodInfo_
};

$Object* allocate$AttributeModificationException($Class* clazz) {
	return $of($alloc(AttributeModificationException));
}

void AttributeModificationException::init$($String* explanation) {
	$NamingException::init$(explanation);
	$set(this, unexecs, nullptr);
}

void AttributeModificationException::init$() {
	$NamingException::init$();
	$set(this, unexecs, nullptr);
}

void AttributeModificationException::setUnexecutedModifications($ModificationItemArray* e) {
	$set(this, unexecs, e);
}

$ModificationItemArray* AttributeModificationException::getUnexecutedModifications() {
	return this->unexecs;
}

$String* AttributeModificationException::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, orig, $NamingException::toString());
	if (this->unexecs != nullptr) {
		$plusAssign(orig, ($$str({"First unexecuted modification: "_s, $($nc($nc(this->unexecs)->get(0))->toString())})));
	}
	return orig;
}

AttributeModificationException::AttributeModificationException() {
}

AttributeModificationException::AttributeModificationException(const AttributeModificationException& e) {
}

AttributeModificationException AttributeModificationException::wrapper$() {
	$pendingException(this);
	return *this;
}

void AttributeModificationException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AttributeModificationException::load$($String* name, bool initialize) {
	$loadClass(AttributeModificationException, name, initialize, &_AttributeModificationException_ClassInfo_, allocate$AttributeModificationException);
	return class$;
}

$Class* AttributeModificationException::class$ = nullptr;

		} // directory
	} // naming
} // javax