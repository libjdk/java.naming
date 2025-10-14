#include <com/sun/jndi/ldap/DefaultResponseControlFactory.h>

#include <com/sun/jndi/ldap/BasicControl.h>
#include <com/sun/jndi/ldap/EntryChangeResponseControl.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/ldap/BasicControl.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/ControlFactory.h>
#include <javax/naming/ldap/PagedResultsResponseControl.h>
#include <javax/naming/ldap/SortResponseControl.h>
#include <jcpp.h>

#undef OID

using $1BasicControl = ::com::sun::jndi::ldap::BasicControl;
using $EntryChangeResponseControl = ::com::sun::jndi::ldap::EntryChangeResponseControl;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NamingException = ::javax::naming::NamingException;
using $BasicControl = ::javax::naming::ldap::BasicControl;
using $Control = ::javax::naming::ldap::Control;
using $ControlFactory = ::javax::naming::ldap::ControlFactory;
using $PagedResultsResponseControl = ::javax::naming::ldap::PagedResultsResponseControl;
using $SortResponseControl = ::javax::naming::ldap::SortResponseControl;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$MethodInfo _DefaultResponseControlFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultResponseControlFactory::*)()>(&DefaultResponseControlFactory::init$))},
	{"getControlInstance", "(Ljavax/naming/ldap/Control;)Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _DefaultResponseControlFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.ldap.DefaultResponseControlFactory",
	"javax.naming.ldap.ControlFactory",
	nullptr,
	nullptr,
	_DefaultResponseControlFactory_MethodInfo_
};

$Object* allocate$DefaultResponseControlFactory($Class* clazz) {
	return $of($alloc(DefaultResponseControlFactory));
}

void DefaultResponseControlFactory::init$() {
	$ControlFactory::init$();
}

$Control* DefaultResponseControlFactory::getControlInstance($Control* ctl) {
	$var($String, id, $nc(ctl)->getID());
	try {
		$init($SortResponseControl);
		if ($nc(id)->equals($SortResponseControl::OID)) {
			$var($String, var$0, id);
			bool var$1 = ctl->isCritical();
			return $new($SortResponseControl, var$0, var$1, $(ctl->getEncodedValue()));
		} else {
			$init($PagedResultsResponseControl);
			if (id->equals($PagedResultsResponseControl::OID)) {
				$var($String, var$2, id);
				bool var$3 = ctl->isCritical();
				return $new($PagedResultsResponseControl, var$2, var$3, $(ctl->getEncodedValue()));
			} else {
				$init($EntryChangeResponseControl);
				if (id->equals($EntryChangeResponseControl::OID)) {
					$var($String, var$4, id);
					bool var$5 = ctl->isCritical();
					return $new($EntryChangeResponseControl, var$4, var$5, $(ctl->getEncodedValue()));
				}
			}
		}
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, ne, $new($NamingException));
		ne->setRootCause(e);
		$throw(ne);
	}
	return nullptr;
}

DefaultResponseControlFactory::DefaultResponseControlFactory() {
}

$Class* DefaultResponseControlFactory::load$($String* name, bool initialize) {
	$loadClass(DefaultResponseControlFactory, name, initialize, &_DefaultResponseControlFactory_ClassInfo_, allocate$DefaultResponseControlFactory);
	return class$;
}

$Class* DefaultResponseControlFactory::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com