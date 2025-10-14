#include <javax/naming/spi/DirStateFactory$Result.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/spi/DirStateFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirStateFactory = ::javax::naming::spi::DirStateFactory;

namespace javax {
	namespace naming {
		namespace spi {

$FieldInfo _DirStateFactory$Result_FieldInfo_[] = {
	{"obj", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(DirStateFactory$Result, obj)},
	{"attrs", "Ljavax/naming/directory/Attributes;", nullptr, $PRIVATE, $field(DirStateFactory$Result, attrs)},
	{}
};

$MethodInfo _DirStateFactory$Result_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, $method(static_cast<void(DirStateFactory$Result::*)(Object$*,$Attributes*)>(&DirStateFactory$Result::init$))},
	{"getAttributes", "()Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC},
	{"getObject", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DirStateFactory$Result_InnerClassesInfo_[] = {
	{"javax.naming.spi.DirStateFactory$Result", "javax.naming.spi.DirStateFactory", "Result", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DirStateFactory$Result_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.spi.DirStateFactory$Result",
	"java.lang.Object",
	nullptr,
	_DirStateFactory$Result_FieldInfo_,
	_DirStateFactory$Result_MethodInfo_,
	nullptr,
	nullptr,
	_DirStateFactory$Result_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.naming.spi.DirStateFactory"
};

$Object* allocate$DirStateFactory$Result($Class* clazz) {
	return $of($alloc(DirStateFactory$Result));
}

void DirStateFactory$Result::init$(Object$* obj, $Attributes* outAttrs) {
	$set(this, obj, obj);
	$set(this, attrs, outAttrs);
}

$Object* DirStateFactory$Result::getObject() {
	return $of(this->obj);
}

$Attributes* DirStateFactory$Result::getAttributes() {
	return this->attrs;
}

DirStateFactory$Result::DirStateFactory$Result() {
}

$Class* DirStateFactory$Result::load$($String* name, bool initialize) {
	$loadClass(DirStateFactory$Result, name, initialize, &_DirStateFactory$Result_ClassInfo_, allocate$DirStateFactory$Result);
	return class$;
}

$Class* DirStateFactory$Result::class$ = nullptr;

		} // spi
	} // naming
} // javax