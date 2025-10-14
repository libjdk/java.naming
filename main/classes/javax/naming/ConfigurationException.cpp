#include <javax/naming/ConfigurationException.h>

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

$FieldInfo _ConfigurationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ConfigurationException, serialVersionUID)},
	{}
};

$MethodInfo _ConfigurationException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ConfigurationException::*)($String*)>(&ConfigurationException::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ConfigurationException::*)()>(&ConfigurationException::init$))},
	{}
};

$ClassInfo _ConfigurationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.ConfigurationException",
	"javax.naming.NamingException",
	nullptr,
	_ConfigurationException_FieldInfo_,
	_ConfigurationException_MethodInfo_
};

$Object* allocate$ConfigurationException($Class* clazz) {
	return $of($alloc(ConfigurationException));
}

void ConfigurationException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void ConfigurationException::init$() {
	$NamingException::init$();
}

ConfigurationException::ConfigurationException() {
}

ConfigurationException::ConfigurationException(const ConfigurationException& e) {
}

ConfigurationException ConfigurationException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ConfigurationException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ConfigurationException::load$($String* name, bool initialize) {
	$loadClass(ConfigurationException, name, initialize, &_ConfigurationException_ClassInfo_, allocate$ConfigurationException);
	return class$;
}

$Class* ConfigurationException::class$ = nullptr;

	} // naming
} // javax