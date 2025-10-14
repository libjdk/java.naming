#include <javax/naming/spi/InitialContextFactoryBuilder.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/spi/InitialContextFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $InitialContextFactory = ::javax::naming::spi::InitialContextFactory;

namespace javax {
	namespace naming {
		namespace spi {

$MethodInfo _InitialContextFactoryBuilder_MethodInfo_[] = {
	{"createInitialContextFactory", "(Ljava/util/Hashtable;)Ljavax/naming/spi/InitialContextFactory;", "(Ljava/util/Hashtable<**>;)Ljavax/naming/spi/InitialContextFactory;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _InitialContextFactoryBuilder_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.spi.InitialContextFactoryBuilder",
	nullptr,
	nullptr,
	nullptr,
	_InitialContextFactoryBuilder_MethodInfo_
};

$Object* allocate$InitialContextFactoryBuilder($Class* clazz) {
	return $of($alloc(InitialContextFactoryBuilder));
}

$Class* InitialContextFactoryBuilder::load$($String* name, bool initialize) {
	$loadClass(InitialContextFactoryBuilder, name, initialize, &_InitialContextFactoryBuilder_ClassInfo_, allocate$InitialContextFactoryBuilder);
	return class$;
}

$Class* InitialContextFactoryBuilder::class$ = nullptr;

		} // spi
	} // naming
} // javax