#include <com/sun/jndi/toolkit/dir/SearchFilter$NotFilter.h>

#include <com/sun/jndi/toolkit/dir/SearchFilter$StringFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/directory/Attributes.h>
#include <jcpp.h>

using $AttrFilter = ::com::sun::jndi::toolkit::dir::AttrFilter;
using $SearchFilter = ::com::sun::jndi::toolkit::dir::SearchFilter;
using $SearchFilter$StringFilter = ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attributes = ::javax::naming::directory::Attributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _SearchFilter$NotFilter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jndi/toolkit/dir/SearchFilter;", nullptr, $FINAL | $SYNTHETIC, $field(SearchFilter$NotFilter, this$0)},
	{"filter", "Lcom/sun/jndi/toolkit/dir/SearchFilter$StringFilter;", nullptr, $PRIVATE, $field(SearchFilter$NotFilter, filter)},
	{}
};

$MethodInfo _SearchFilter$NotFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/toolkit/dir/SearchFilter;)V", nullptr, 0, $method(static_cast<void(SearchFilter$NotFilter::*)($SearchFilter*)>(&SearchFilter$NotFilter::init$))},
	{"check", "(Ljavax/naming/directory/Attributes;)Z", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"parse", "()V", nullptr, $PUBLIC, nullptr, "javax.naming.directory.InvalidSearchFilterException"},
	{}
};

$InnerClassInfo _SearchFilter$NotFilter_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.dir.SearchFilter$NotFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "NotFilter", $FINAL},
	{"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "StringFilter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SearchFilter$NotFilter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.SearchFilter$NotFilter",
	"java.lang.Object",
	"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter",
	_SearchFilter$NotFilter_FieldInfo_,
	_SearchFilter$NotFilter_MethodInfo_,
	nullptr,
	nullptr,
	_SearchFilter$NotFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.dir.SearchFilter"
};

$Object* allocate$SearchFilter$NotFilter($Class* clazz) {
	return $of($alloc(SearchFilter$NotFilter));
}

void SearchFilter$NotFilter::init$($SearchFilter* this$0) {
	$set(this, this$0, this$0);
}

void SearchFilter$NotFilter::parse() {
	this->this$0->consumeChar();
	$set(this, filter, this->this$0->createNextFilter());
}

bool SearchFilter$NotFilter::check($Attributes* targetAttrs) {
	return !$nc(this->filter)->check(targetAttrs);
}

SearchFilter$NotFilter::SearchFilter$NotFilter() {
}

$Class* SearchFilter$NotFilter::load$($String* name, bool initialize) {
	$loadClass(SearchFilter$NotFilter, name, initialize, &_SearchFilter$NotFilter_ClassInfo_, allocate$SearchFilter$NotFilter);
	return class$;
}

$Class* SearchFilter$NotFilter::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com