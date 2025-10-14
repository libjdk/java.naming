#include <javax/naming/spi/ObjectFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;

namespace javax {
	namespace naming {
		namespace spi {

$MethodInfo _ObjectFactory_MethodInfo_[] = {
	{"getObjectInstance", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _ObjectFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.spi.ObjectFactory",
	nullptr,
	nullptr,
	nullptr,
	_ObjectFactory_MethodInfo_
};

$Object* allocate$ObjectFactory($Class* clazz) {
	return $of($alloc(ObjectFactory));
}

$Class* ObjectFactory::load$($String* name, bool initialize) {
	$loadClass(ObjectFactory, name, initialize, &_ObjectFactory_ClassInfo_, allocate$ObjectFactory);
	return class$;
}

$Class* ObjectFactory::class$ = nullptr;

		} // spi
	} // naming
} // javax