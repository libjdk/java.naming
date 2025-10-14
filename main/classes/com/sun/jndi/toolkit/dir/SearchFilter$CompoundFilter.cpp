#include <com/sun/jndi/toolkit/dir/SearchFilter$CompoundFilter.h>

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
#include <java/util/Vector.h>
#include <javax/naming/directory/Attributes.h>
#include <jcpp.h>

using $AttrFilter = ::com::sun::jndi::toolkit::dir::AttrFilter;
using $SearchFilter = ::com::sun::jndi::toolkit::dir::SearchFilter;
using $SearchFilter$StringFilter = ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Attributes = ::javax::naming::directory::Attributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _SearchFilter$CompoundFilter_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jndi/toolkit/dir/SearchFilter;", nullptr, $FINAL | $SYNTHETIC, $field(SearchFilter$CompoundFilter, this$0)},
	{"subFilters", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/sun/jndi/toolkit/dir/SearchFilter$StringFilter;>;", $PRIVATE, $field(SearchFilter$CompoundFilter, subFilters)},
	{"polarity", "Z", nullptr, $PRIVATE, $field(SearchFilter$CompoundFilter, polarity)},
	{}
};

$MethodInfo _SearchFilter$CompoundFilter_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/toolkit/dir/SearchFilter;Z)V", nullptr, 0, $method(static_cast<void(SearchFilter$CompoundFilter::*)($SearchFilter*,bool)>(&SearchFilter$CompoundFilter::init$))},
	{"check", "(Ljavax/naming/directory/Attributes;)Z", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"parse", "()V", nullptr, $PUBLIC, nullptr, "javax.naming.directory.InvalidSearchFilterException"},
	{}
};

$InnerClassInfo _SearchFilter$CompoundFilter_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.dir.SearchFilter$CompoundFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "CompoundFilter", $FINAL},
	{"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter", "com.sun.jndi.toolkit.dir.SearchFilter", "StringFilter", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SearchFilter$CompoundFilter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.SearchFilter$CompoundFilter",
	"java.lang.Object",
	"com.sun.jndi.toolkit.dir.SearchFilter$StringFilter",
	_SearchFilter$CompoundFilter_FieldInfo_,
	_SearchFilter$CompoundFilter_MethodInfo_,
	nullptr,
	nullptr,
	_SearchFilter$CompoundFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.dir.SearchFilter"
};

$Object* allocate$SearchFilter$CompoundFilter($Class* clazz) {
	return $of($alloc(SearchFilter$CompoundFilter));
}

void SearchFilter$CompoundFilter::init$($SearchFilter* this$0, bool polarity) {
	$set(this, this$0, this$0);
	$set(this, subFilters, $new($Vector));
	this->polarity = polarity;
}

void SearchFilter$CompoundFilter::parse() {
	this->this$0->consumeChar();
	while (this->this$0->getCurrentChar() != u')') {
		$var($SearchFilter$StringFilter, filter, this->this$0->createNextFilter());
		$nc(this->subFilters)->addElement(filter);
		this->this$0->skipWhiteSpace();
	}
}

bool SearchFilter$CompoundFilter::check($Attributes* targetAttrs) {
	for (int32_t i = 0; i < $nc(this->subFilters)->size(); ++i) {
		$var($SearchFilter$StringFilter, filter, $cast($SearchFilter$StringFilter, $nc(this->subFilters)->elementAt(i)));
		if ($nc(filter)->check(targetAttrs) != this->polarity) {
			return !this->polarity;
		}
	}
	return this->polarity;
}

SearchFilter$CompoundFilter::SearchFilter$CompoundFilter() {
}

$Class* SearchFilter$CompoundFilter::load$($String* name, bool initialize) {
	$loadClass(SearchFilter$CompoundFilter, name, initialize, &_SearchFilter$CompoundFilter_ClassInfo_, allocate$SearchFilter$CompoundFilter);
	return class$;
}

$Class* SearchFilter$CompoundFilter::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com