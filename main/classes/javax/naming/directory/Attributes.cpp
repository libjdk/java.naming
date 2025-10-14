#include <javax/naming/directory/Attributes.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/directory/Attribute.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $Attribute = ::javax::naming::directory::Attribute;

namespace javax {
	namespace naming {
		namespace directory {

$MethodInfo _Attributes_MethodInfo_[] = {
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"get", "(Ljava/lang/String;)Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAll", "()Ljavax/naming/NamingEnumeration;", "()Ljavax/naming/NamingEnumeration<+Ljavax/naming/directory/Attribute;>;", $PUBLIC | $ABSTRACT},
	{"getIDs", "()Ljavax/naming/NamingEnumeration;", "()Ljavax/naming/NamingEnumeration<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isCaseIgnored", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/lang/String;Ljava/lang/Object;)Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljavax/naming/directory/Attribute;)Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/lang/String;)Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC | $ABSTRACT},
	{"size", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Attributes_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.directory.Attributes",
	nullptr,
	"java.lang.Cloneable,java.io.Serializable",
	nullptr,
	_Attributes_MethodInfo_
};

$Object* allocate$Attributes($Class* clazz) {
	return $of($alloc(Attributes));
}

$Object* Attributes::clone() {
	 return this->$Cloneable::clone();
}

int32_t Attributes::hashCode() {
	 return this->$Cloneable::hashCode();
}

bool Attributes::equals(Object$* arg0) {
	 return this->$Cloneable::equals(arg0);
}

$String* Attributes::toString() {
	 return this->$Cloneable::toString();
}

void Attributes::finalize() {
	this->$Cloneable::finalize();
}

$Class* Attributes::load$($String* name, bool initialize) {
	$loadClass(Attributes, name, initialize, &_Attributes_ClassInfo_, allocate$Attributes);
	return class$;
}

$Class* Attributes::class$ = nullptr;

		} // directory
	} // naming
} // javax