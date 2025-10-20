#include <com/sun/jndi/toolkit/dir/ContainmentFilter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <jcpp.h>

using $AttrFilter = ::com::sun::jndi::toolkit::dir::AttrFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _ContainmentFilter_FieldInfo_[] = {
	{"matchingAttrs", "Ljavax/naming/directory/Attributes;", nullptr, $PRIVATE, $field(ContainmentFilter, matchingAttrs)},
	{}
};

$MethodInfo _ContainmentFilter_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, $method(static_cast<void(ContainmentFilter::*)($Attributes*)>(&ContainmentFilter::init$))},
	{"check", "(Ljavax/naming/directory/Attributes;)Z", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"contains", "(Ljavax/naming/directory/Attributes;Ljavax/naming/directory/Attributes;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Attributes*,$Attributes*)>(&ContainmentFilter::contains)), "javax.naming.NamingException"},
	{}
};

$ClassInfo _ContainmentFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.ContainmentFilter",
	"java.lang.Object",
	"com.sun.jndi.toolkit.dir.AttrFilter",
	_ContainmentFilter_FieldInfo_,
	_ContainmentFilter_MethodInfo_
};

$Object* allocate$ContainmentFilter($Class* clazz) {
	return $of($alloc(ContainmentFilter));
}

void ContainmentFilter::init$($Attributes* match) {
	$set(this, matchingAttrs, match);
}

bool ContainmentFilter::check($Attributes* attrs) {
	bool var$0 = this->matchingAttrs == nullptr || $nc(this->matchingAttrs)->size() == 0;
	return var$0 || contains(attrs, this->matchingAttrs);
}

bool ContainmentFilter::contains($Attributes* superset, $Attributes* subset) {
	$init(ContainmentFilter);
	$useLocalCurrentObjectStackCache();
	if (subset == nullptr) {
		return true;
	}
	$var($NamingEnumeration, m, $nc(subset)->getAll());
	while ($nc(m)->hasMore()) {
		if (superset == nullptr) {
			return false;
		}
		$var($Attribute, target, $cast($Attribute, m->next()));
		$var($Attribute, fromSuper, $nc(superset)->get($($nc(target)->getID())));
		if (fromSuper == nullptr) {
			return false;
		} else if ($nc(target)->size() > 0) {
			$var($NamingEnumeration, vals, target->getAll());
			while ($nc(vals)->hasMore()) {
				if (!$nc(fromSuper)->contains($(vals->next()))) {
					return false;
				}
			}
		}
	}
	return true;
}

ContainmentFilter::ContainmentFilter() {
}

$Class* ContainmentFilter::load$($String* name, bool initialize) {
	$loadClass(ContainmentFilter, name, initialize, &_ContainmentFilter_ClassInfo_, allocate$ContainmentFilter);
	return class$;
}

$Class* ContainmentFilter::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com