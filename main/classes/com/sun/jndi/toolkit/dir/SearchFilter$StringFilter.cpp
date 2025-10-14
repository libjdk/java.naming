#include <com/sun/jndi/toolkit/dir/SearchFilter$StringFilter.h>

#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $AttrFilter = ::com::sun::jndi::toolkit::dir::AttrFilter;
using $SearchFilter = ::com::sun::jndi::toolkit::dir::SearchFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$MethodInfo _SearchFilter$StringFilter_MethodInfo_[] = {
	{"parse", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.naming.directory.InvalidSearchFilterException"},
	{}
};

$InnerClassInfo _SearchFilter$StringFilter_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "StringFilter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SearchFilter$StringFilter_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter",
	nullptr,
	"com.sun.jndi.toolkit.dir.AttrFilter",
	nullptr,
	_SearchFilter$StringFilter_MethodInfo_,
	nullptr,
	nullptr,
	_SearchFilter$StringFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.dir.SearchFilter"
};

$Object* allocate$SearchFilter$StringFilter($Class* clazz) {
	return $of($alloc(SearchFilter$StringFilter));
}

$Class* SearchFilter$StringFilter::load$($String* name, bool initialize) {
	$loadClass(SearchFilter$StringFilter, name, initialize, &_SearchFilter$StringFilter_ClassInfo_, allocate$SearchFilter$StringFilter);
	return class$;
}

$Class* SearchFilter$StringFilter::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com