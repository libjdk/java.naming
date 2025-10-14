#include <javax/naming/spi/DirObjectFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/directory/Attributes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $Attributes = ::javax::naming::directory::Attributes;
using $ObjectFactory = ::javax::naming::spi::ObjectFactory;

namespace javax {
	namespace naming {
		namespace spi {

$MethodInfo _DirObjectFactory_MethodInfo_[] = {
	{"getObjectInstance", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;Ljavax/naming/directory/Attributes;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;Ljavax/naming/directory/Attributes;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, nullptr, "java.lang.Exception"},
	{}
};

$ClassInfo _DirObjectFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.spi.DirObjectFactory",
	nullptr,
	"javax.naming.spi.ObjectFactory",
	nullptr,
	_DirObjectFactory_MethodInfo_
};

$Object* allocate$DirObjectFactory($Class* clazz) {
	return $of($alloc(DirObjectFactory));
}

$Class* DirObjectFactory::load$($String* name, bool initialize) {
	$loadClass(DirObjectFactory, name, initialize, &_DirObjectFactory_ClassInfo_, allocate$DirObjectFactory);
	return class$;
}

$Class* DirObjectFactory::class$ = nullptr;

		} // spi
	} // naming
} // javax