#include <javax/naming/spi/ObjectFactoryBuilder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/spi/ObjectFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $ObjectFactory = ::javax::naming::spi::ObjectFactory;

namespace javax {
	namespace naming {
		namespace spi {

$MethodInfo _ObjectFactoryBuilder_MethodInfo_[] = {
	{"createObjectFactory", "(Ljava/lang/Object;Ljava/util/Hashtable;)Ljavax/naming/spi/ObjectFactory;", "(Ljava/lang/Object;Ljava/util/Hashtable<**>;)Ljavax/naming/spi/ObjectFactory;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _ObjectFactoryBuilder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.spi.ObjectFactoryBuilder",
	nullptr,
	nullptr,
	nullptr,
	_ObjectFactoryBuilder_MethodInfo_
};

$Object* allocate$ObjectFactoryBuilder($Class* clazz) {
	return $of($alloc(ObjectFactoryBuilder));
}

$Class* ObjectFactoryBuilder::load$($String* name, bool initialize) {
	$loadClass(ObjectFactoryBuilder, name, initialize, &_ObjectFactoryBuilder_ClassInfo_, allocate$ObjectFactoryBuilder);
	return class$;
}

$Class* ObjectFactoryBuilder::class$ = nullptr;

		} // spi
	} // naming
} // javax