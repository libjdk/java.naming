#include <com/sun/jndi/toolkit/dir/DirSearch.h>

#include <com/sun/jndi/toolkit/dir/AttrFilter.h>
#include <com/sun/jndi/toolkit/dir/ContainmentFilter.h>
#include <com/sun/jndi/toolkit/dir/ContextEnumerator.h>
#include <com/sun/jndi/toolkit/dir/LazySearchEnumerationImpl.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Context.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/SearchControls.h>
#include <jcpp.h>

#undef ONELEVEL_SCOPE

using $AttrFilter = ::com::sun::jndi::toolkit::dir::AttrFilter;
using $ContainmentFilter = ::com::sun::jndi::toolkit::dir::ContainmentFilter;
using $ContextEnumerator = ::com::sun::jndi::toolkit::dir::ContextEnumerator;
using $LazySearchEnumerationImpl = ::com::sun::jndi::toolkit::dir::LazySearchEnumerationImpl;
using $SearchFilter = ::com::sun::jndi::toolkit::dir::SearchFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Context = ::javax::naming::Context;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $SearchControls = ::javax::naming::directory::SearchControls;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$MethodInfo _DirSearch_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DirSearch::*)()>(&DirSearch::init$))},
	{"search", "(Ljavax/naming/directory/DirContext;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/directory/DirContext;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $STATIC, $method(static_cast<$NamingEnumeration*(*)($DirContext*,$Attributes*,$StringArray*)>(&DirSearch::search)), "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/directory/DirContext;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/directory/DirContext;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $STATIC, $method(static_cast<$NamingEnumeration*(*)($DirContext*,$String*,$SearchControls*)>(&DirSearch::search)), "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/directory/DirContext;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/directory/DirContext;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC | $STATIC, $method(static_cast<$NamingEnumeration*(*)($DirContext*,$String*,$ObjectArray*,$SearchControls*)>(&DirSearch::search)), "javax.naming.NamingException"},
	{}
};

$ClassInfo _DirSearch_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.DirSearch",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DirSearch_MethodInfo_
};

$Object* allocate$DirSearch($Class* clazz) {
	return $of($alloc(DirSearch));
}

void DirSearch::init$() {
}

$NamingEnumeration* DirSearch::search($DirContext* ctx, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	$useLocalCurrentObjectStackCache();
	$var($SearchControls, cons, $new($SearchControls, $SearchControls::ONELEVEL_SCOPE, 0, 0, attributesToReturn, false, false));
	$var($NamingEnumeration, var$0, static_cast<$NamingEnumeration*>($new($ContextEnumerator, ctx, $SearchControls::ONELEVEL_SCOPE)));
	return $new($LazySearchEnumerationImpl, var$0, $$new($ContainmentFilter, matchingAttributes), cons);
}

$NamingEnumeration* DirSearch::search($DirContext* ctx, $String* filter, $SearchControls* cons$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SearchControls, cons, cons$renamed);
	if (cons == nullptr) {
		$assign(cons, $new($SearchControls));
	}
	$var($NamingEnumeration, var$0, static_cast<$NamingEnumeration*>($new($ContextEnumerator, ctx, $nc(cons)->getSearchScope())));
	return $new($LazySearchEnumerationImpl, var$0, $$new($SearchFilter, filter), cons);
}

$NamingEnumeration* DirSearch::search($DirContext* ctx, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	$var($String, strfilter, $SearchFilter::format(filterExpr, filterArgs));
	return search(ctx, strfilter, cons);
}

DirSearch::DirSearch() {
}

$Class* DirSearch::load$($String* name, bool initialize) {
	$loadClass(DirSearch, name, initialize, &_DirSearch_ClassInfo_, allocate$DirSearch);
	return class$;
}

$Class* DirSearch::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com