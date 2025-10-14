#include <javax/naming/spi/DirStateFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/spi/DirStateFactory$Result.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirStateFactory$Result = ::javax::naming::spi::DirStateFactory$Result;
using $StateFactory = ::javax::naming::spi::StateFactory;

namespace javax {
	namespace naming {
		namespace spi {

$MethodInfo _DirStateFactory_MethodInfo_[] = {
	{"getStateToBind", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable;Ljavax/naming/directory/Attributes;)Ljavax/naming/spi/DirStateFactory$Result;", "(Ljava/lang/Object;Ljavax/naming/Name;Ljavax/naming/Context;Ljava/util/Hashtable<**>;Ljavax/naming/directory/Attributes;)Ljavax/naming/spi/DirStateFactory$Result;", $PUBLIC | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{}
};

$InnerClassInfo _DirStateFactory_InnerClassesInfo_[] = {
	{"javax.naming.spi.DirStateFactory$Result", "javax.naming.spi.DirStateFactory", "Result", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DirStateFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.spi.DirStateFactory",
	nullptr,
	"javax.naming.spi.StateFactory",
	nullptr,
	_DirStateFactory_MethodInfo_,
	nullptr,
	nullptr,
	_DirStateFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.naming.spi.DirStateFactory$Result"
};

$Object* allocate$DirStateFactory($Class* clazz) {
	return $of($alloc(DirStateFactory));
}

$Class* DirStateFactory::load$($String* name, bool initialize) {
	$loadClass(DirStateFactory, name, initialize, &_DirStateFactory_ClassInfo_, allocate$DirStateFactory);
	return class$;
}

$Class* DirStateFactory::class$ = nullptr;

		} // spi
	} // naming
} // javax