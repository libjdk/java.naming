#include <javax/naming/directory/SchemaViolationException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {
		namespace directory {

$FieldInfo _SchemaViolationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SchemaViolationException, serialVersionUID)},
	{}
};

$MethodInfo _SchemaViolationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SchemaViolationException::*)()>(&SchemaViolationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SchemaViolationException::*)($String*)>(&SchemaViolationException::init$))},
	{}
};

$ClassInfo _SchemaViolationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.SchemaViolationException",
	"javax.naming.NamingException",
	nullptr,
	_SchemaViolationException_FieldInfo_,
	_SchemaViolationException_MethodInfo_
};

$Object* allocate$SchemaViolationException($Class* clazz) {
	return $of($alloc(SchemaViolationException));
}

void SchemaViolationException::init$() {
	$NamingException::init$();
}

void SchemaViolationException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

SchemaViolationException::SchemaViolationException() {
}

SchemaViolationException::SchemaViolationException(const SchemaViolationException& e) {
}

SchemaViolationException SchemaViolationException::wrapper$() {
	$pendingException(this);
	return *this;
}

void SchemaViolationException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* SchemaViolationException::load$($String* name, bool initialize) {
	$loadClass(SchemaViolationException, name, initialize, &_SchemaViolationException_ClassInfo_, allocate$SchemaViolationException);
	return class$;
}

$Class* SchemaViolationException::class$ = nullptr;

		} // directory
	} // naming
} // javax