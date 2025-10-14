#include <com/sun/jndi/toolkit/dir/LazySearchEnumerationImpl.h>

#include <com/sun/jndi/toolkit/dir/AttrFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <java/util/NoSuchElementException.h>
#include <javax/naming/Binding.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/directory/SearchResult.h>
#include <javax/naming/spi/DirectoryManager.h>
#include <jcpp.h>

using $AttrFilter = ::com::sun::jndi::toolkit::dir::AttrFilter;
using $SearchFilter = ::com::sun::jndi::toolkit::dir::SearchFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Binding = ::javax::naming::Binding;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NameClassPair = ::javax::naming::NameClassPair;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $SearchResult = ::javax::naming::directory::SearchResult;
using $DirectoryManager = ::javax::naming::spi::DirectoryManager;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _LazySearchEnumerationImpl_FieldInfo_[] = {
	{"candidates", "Ljavax/naming/NamingEnumeration;", "Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PRIVATE, $field(LazySearchEnumerationImpl, candidates)},
	{"nextMatch", "Ljavax/naming/directory/SearchResult;", nullptr, $PRIVATE, $field(LazySearchEnumerationImpl, nextMatch)},
	{"cons", "Ljavax/naming/directory/SearchControls;", nullptr, $PRIVATE, $field(LazySearchEnumerationImpl, cons)},
	{"filter", "Lcom/sun/jndi/toolkit/dir/AttrFilter;", nullptr, $PRIVATE, $field(LazySearchEnumerationImpl, filter)},
	{"context", "Ljavax/naming/Context;", nullptr, $PRIVATE, $field(LazySearchEnumerationImpl, context)},
	{"env", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(LazySearchEnumerationImpl, env)},
	{"useFactory", "Z", nullptr, $PRIVATE, $field(LazySearchEnumerationImpl, useFactory)},
	{}
};

$MethodInfo _LazySearchEnumerationImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/NamingEnumeration;Lcom/sun/jndi/toolkit/dir/AttrFilter;Ljavax/naming/directory/SearchControls;)V", "(Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;Lcom/sun/jndi/toolkit/dir/AttrFilter;Ljavax/naming/directory/SearchControls;)V", $PUBLIC, $method(static_cast<void(LazySearchEnumerationImpl::*)($NamingEnumeration*,$AttrFilter*,$SearchControls*)>(&LazySearchEnumerationImpl::init$)), "javax.naming.NamingException"},
	{"<init>", "(Ljavax/naming/NamingEnumeration;Lcom/sun/jndi/toolkit/dir/AttrFilter;Ljavax/naming/directory/SearchControls;Ljavax/naming/Context;Ljava/util/Hashtable;Z)V", "(Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;Lcom/sun/jndi/toolkit/dir/AttrFilter;Ljavax/naming/directory/SearchControls;Ljavax/naming/Context;Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;Z)V", $PUBLIC, $method(static_cast<void(LazySearchEnumerationImpl::*)($NamingEnumeration*,$AttrFilter*,$SearchControls*,$Context*,$Hashtable*,bool)>(&LazySearchEnumerationImpl::init$)), "javax.naming.NamingException"},
	{"<init>", "(Ljavax/naming/NamingEnumeration;Lcom/sun/jndi/toolkit/dir/AttrFilter;Ljavax/naming/directory/SearchControls;Ljavax/naming/Context;Ljava/util/Hashtable;)V", "(Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;Lcom/sun/jndi/toolkit/dir/AttrFilter;Ljavax/naming/directory/SearchControls;Ljavax/naming/Context;Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(LazySearchEnumerationImpl::*)($NamingEnumeration*,$AttrFilter*,$SearchControls*,$Context*,$Hashtable*)>(&LazySearchEnumerationImpl::init$)), "javax.naming.NamingException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"findNextMatch", "(Z)Ljavax/naming/directory/SearchResult;", nullptr, $PRIVATE, $method(static_cast<$SearchResult*(LazySearchEnumerationImpl::*)(bool)>(&LazySearchEnumerationImpl::findNextMatch)), "javax.naming.NamingException"},
	{"hasMore", "()Z", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljavax/naming/directory/SearchResult;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"nextElement", "()Ljavax/naming/directory/SearchResult;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LazySearchEnumerationImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.LazySearchEnumerationImpl",
	"java.lang.Object",
	"javax.naming.NamingEnumeration",
	_LazySearchEnumerationImpl_FieldInfo_,
	_LazySearchEnumerationImpl_MethodInfo_,
	"Ljava/lang/Object;Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;"
};

$Object* allocate$LazySearchEnumerationImpl($Class* clazz) {
	return $of($alloc(LazySearchEnumerationImpl));
}

void LazySearchEnumerationImpl::init$($NamingEnumeration* candidates, $AttrFilter* filter, $SearchControls* cons) {
	$set(this, nextMatch, nullptr);
	this->useFactory = true;
	$set(this, candidates, candidates);
	$set(this, filter, filter);
	if (cons == nullptr) {
		$set(this, cons, $new($SearchControls));
	} else {
		$set(this, cons, cons);
	}
}

void LazySearchEnumerationImpl::init$($NamingEnumeration* candidates, $AttrFilter* filter, $SearchControls* cons, $Context* ctx, $Hashtable* env, bool useFactory) {
	$set(this, nextMatch, nullptr);
	this->useFactory = true;
	$set(this, candidates, candidates);
	$set(this, filter, filter);
	$set(this, env, ($cast($Hashtable, ((env == nullptr) ? ($Object*)nullptr : $nc(env)->clone()))));
	$set(this, context, ctx);
	this->useFactory = useFactory;
	if (cons == nullptr) {
		$set(this, cons, $new($SearchControls));
	} else {
		$set(this, cons, cons);
	}
}

void LazySearchEnumerationImpl::init$($NamingEnumeration* candidates, $AttrFilter* filter, $SearchControls* cons, $Context* ctx, $Hashtable* env) {
	LazySearchEnumerationImpl::init$(candidates, filter, cons, ctx, env, true);
}

bool LazySearchEnumerationImpl::hasMore() {
	return findNextMatch(false) != nullptr;
}

bool LazySearchEnumerationImpl::hasMoreElements() {
	try {
		return hasMore();
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

$Object* LazySearchEnumerationImpl::nextElement() {
	try {
		return $of(findNextMatch(true));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throwNew($NoSuchElementException, $(e->toString()));
	}
	$shouldNotReachHere();
}

$Object* LazySearchEnumerationImpl::next() {
	return $of((findNextMatch(true)));
}

void LazySearchEnumerationImpl::close() {
	if (this->candidates != nullptr) {
		$nc(this->candidates)->close();
	}
}

$SearchResult* LazySearchEnumerationImpl::findNextMatch(bool remove) {
	$var($SearchResult, answer, nullptr);
	if (this->nextMatch != nullptr) {
		$assign(answer, this->nextMatch);
		if (remove) {
			$set(this, nextMatch, nullptr);
		}
		return answer;
	} else {
		$var($Binding, next, nullptr);
		$var($Object, obj, nullptr);
		$var($Attributes, targetAttrs, nullptr);
		while ($nc(this->candidates)->hasMore()) {
			$assign(next, $cast($Binding, $nc(this->candidates)->next()));
			$assign(obj, $nc(next)->getObject());
			if ($instanceOf($DirContext, obj)) {
				$assign(targetAttrs, $nc((($cast($DirContext, obj))))->getAttributes(""_s));
				if ($nc(this->filter)->check(targetAttrs)) {
					if (!$nc(this->cons)->getReturningObjFlag()) {
						$assign(obj, nullptr);
					} else if (this->useFactory) {
						try {
							$var($Name, nm, this->context != nullptr ? static_cast<$Name*>($new($CompositeName, $(next->getName()))) : ($Name*)nullptr);
							$assign(obj, $DirectoryManager::getObjectInstance(obj, nm, this->context, this->env, targetAttrs));
						} catch ($NamingException&) {
							$var($NamingException, e, $catch());
							$throw(e);
						} catch ($Exception&) {
							$var($Exception, e, $catch());
							$var($NamingException, e2, $new($NamingException, "problem generating object using object factory"_s));
							e2->setRootCause(e);
							$throw(e2);
						}
					}
					$var($String, var$0, next->getName());
					$var($String, var$1, next->getClassName());
					$var($Object, var$2, obj);
					$assign(answer, $new($SearchResult, var$0, var$1, var$2, $($SearchFilter::selectAttributes(targetAttrs, $($nc(this->cons)->getReturningAttributes()))), true));
					if (!remove) {
						$set(this, nextMatch, answer);
					}
					return answer;
				}
			}
		}
		return nullptr;
	}
}

LazySearchEnumerationImpl::LazySearchEnumerationImpl() {
}

$Class* LazySearchEnumerationImpl::load$($String* name, bool initialize) {
	$loadClass(LazySearchEnumerationImpl, name, initialize, &_LazySearchEnumerationImpl_ClassInfo_, allocate$LazySearchEnumerationImpl);
	return class$;
}

$Class* LazySearchEnumerationImpl::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com