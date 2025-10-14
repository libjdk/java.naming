#include <com/sun/jndi/toolkit/url/GenericURLContext.h>

#include <com/sun/jndi/toolkit/url/UrlUtil.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/util/Hashtable.h>
#include <javax/naming/CannotProceedException.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/OperationNotSupportedException.h>
#include <javax/naming/spi/NamingManager.h>
#include <javax/naming/spi/ResolveResult.h>
#include <jcpp.h>

using $UrlUtil = ::com::sun::jndi::toolkit::url::UrlUtil;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $Hashtable = ::java::util::Hashtable;
using $CannotProceedException = ::javax::naming::CannotProceedException;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $OperationNotSupportedException = ::javax::naming::OperationNotSupportedException;
using $NamingManager = ::javax::naming::spi::NamingManager;
using $ResolveResult = ::javax::naming::spi::ResolveResult;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace url {

$FieldInfo _GenericURLContext_FieldInfo_[] = {
	{"myEnv", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PROTECTED, $field(GenericURLContext, myEnv)},
	{}
};

$MethodInfo _GenericURLContext_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC, $method(static_cast<void(GenericURLContext::*)($Hashtable*)>(&GenericURLContext::init$))},
	{"addToEnvironment", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getContinuationContext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getEnvironment", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getRootURLContext", "(Ljava/lang/String;Ljava/util/Hashtable;)Ljavax/naming/spi/ResolveResult;", "(Ljava/lang/String;Ljava/util/Hashtable<**>;)Ljavax/naming/spi/ResolveResult;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"getURLPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getURLSuffix", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"list", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"list", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"listBindings", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"listBindings", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookup", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookupLink", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookupLink", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"removeFromEnvironment", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"urlEquals", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PROTECTED},
	{}
};

$ClassInfo _GenericURLContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jndi.toolkit.url.GenericURLContext",
	"java.lang.Object",
	"javax.naming.Context",
	_GenericURLContext_FieldInfo_,
	_GenericURLContext_MethodInfo_
};

$Object* allocate$GenericURLContext($Class* clazz) {
	return $of($alloc(GenericURLContext));
}

void GenericURLContext::init$($Hashtable* env) {
	$set(this, myEnv, nullptr);
	$set(this, myEnv, ($cast($Hashtable, (env == nullptr ? ($Object*)nullptr : $nc(env)->clone()))));
}

void GenericURLContext::close() {
	$set(this, myEnv, nullptr);
}

$String* GenericURLContext::getNameInNamespace() {
	return ""_s;
}

$Name* GenericURLContext::getURLSuffix($String* prefix, $String* url) {
	$var($String, suffix, $nc(url)->substring($nc(prefix)->length()));
	if (suffix->length() == 0) {
		return $new($CompositeName);
	}
	if (suffix->charAt(0) == u'/') {
		$assign(suffix, suffix->substring(1));
	}
	try {
		return $$new($CompositeName)->add($($UrlUtil::decode(suffix)));
	} catch ($MalformedURLException&) {
		$var($MalformedURLException, e, $catch());
		$throwNew($InvalidNameException, $(e->getMessage()));
	}
	$shouldNotReachHere();
}

$String* GenericURLContext::getURLPrefix($String* url) {
	int32_t start = $nc(url)->indexOf((int32_t)u':');
	if (start < 0) {
		$throwNew($OperationNotSupportedException, $$str({"Invalid URL: "_s, url}));
	}
	++start;
	if (url->startsWith("//"_s, start)) {
		start += 2;
		int32_t posn = url->indexOf((int32_t)u'/', start);
		if (posn >= 0) {
			start = posn;
		} else {
			start = url->length();
		}
	}
	return url->substring(0, start);
}

bool GenericURLContext::urlEquals($String* url1, $String* url2) {
	return $nc(url1)->equals(url2);
}

$Context* GenericURLContext::getContinuationContext($Name* n) {
	$var($Object, obj, lookup($($nc(n)->get(0))));
	$var($CannotProceedException, cpe, $new($CannotProceedException));
	cpe->setResolvedObj(obj);
	cpe->setEnvironment(this->myEnv);
	return $NamingManager::getContinuationContext(cpe);
}

$Object* GenericURLContext::lookup($String* name) {
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($Context, ctx, $cast($Context, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->lookup($(res->getRemainingName())));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(ctx)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Object* GenericURLContext::lookup($Name* name) {
	if ($nc(name)->size() == 1) {
		return $of(lookup($(name->get(0))));
	} else {
		$var($Context, ctx, getContinuationContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($Object, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->lookup($(name->getSuffix(1))));
				return$1 = true;
				goto $finally;
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				$nc(ctx)->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

void GenericURLContext::bind($String* name, Object$* obj) {
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($Context, ctx, $cast($Context, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(ctx)->bind($(res->getRemainingName()), obj);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(ctx)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void GenericURLContext::bind($Name* name, Object$* obj) {
	if ($nc(name)->size() == 1) {
		bind($(name->get(0)), obj);
	} else {
		$var($Context, ctx, getContinuationContext(name));
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(ctx)->bind($(name->getSuffix(1)), obj);
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(ctx)->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void GenericURLContext::rebind($String* name, Object$* obj) {
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($Context, ctx, $cast($Context, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(ctx)->rebind($(res->getRemainingName()), obj);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(ctx)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void GenericURLContext::rebind($Name* name, Object$* obj) {
	if ($nc(name)->size() == 1) {
		rebind($(name->get(0)), obj);
	} else {
		$var($Context, ctx, getContinuationContext(name));
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(ctx)->rebind($(name->getSuffix(1)), obj);
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(ctx)->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void GenericURLContext::unbind($String* name) {
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($Context, ctx, $cast($Context, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(ctx)->unbind($(res->getRemainingName()));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(ctx)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void GenericURLContext::unbind($Name* name) {
	if ($nc(name)->size() == 1) {
		unbind($(name->get(0)));
	} else {
		$var($Context, ctx, getContinuationContext(name));
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(ctx)->unbind($(name->getSuffix(1)));
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(ctx)->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void GenericURLContext::rename($String* oldName, $String* newName) {
	$var($String, oldPrefix, getURLPrefix(oldName));
	$var($String, newPrefix, getURLPrefix(newName));
	if (!urlEquals(oldPrefix, newPrefix)) {
		$throwNew($OperationNotSupportedException, $$str({"Renaming using different URL prefixes not supported : "_s, oldName, " "_s, newName}));
	}
	$var($ResolveResult, res, getRootURLContext(oldName, this->myEnv));
	$var($Context, ctx, $cast($Context, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Name, var$1, res->getRemainingName());
			$nc(ctx)->rename(var$1, $(getURLSuffix(newPrefix, newName)));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(ctx)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void GenericURLContext::rename($Name* name, $Name* newName) {
	if ($nc(name)->size() == 1) {
		if ($nc(newName)->size() != 1) {
			$throwNew($OperationNotSupportedException, $$str({"Renaming to a Name with more components not supported: "_s, newName}));
		}
		$var($String, var$0, name->get(0));
		rename(var$0, $($nc(newName)->get(0)));
	} else {
		$var($String, var$1, name->get(0));
		if (!urlEquals(var$1, $($nc(newName)->get(0)))) {
			$throwNew($OperationNotSupportedException, $$str({"Renaming using different URLs as first components not supported: "_s, name, " "_s, newName}));
		}
		$var($Context, ctx, getContinuationContext(name));
		{
			$var($Throwable, var$2, nullptr);
			try {
				$var($Name, var$3, name->getSuffix(1));
				$nc(ctx)->rename(var$3, $($nc(newName)->getSuffix(1)));
			} catch ($Throwable&) {
				$assign(var$2, $catch());
			} /*finally*/ {
				$nc(ctx)->close();
			}
			if (var$2 != nullptr) {
				$throw(var$2);
			}
		}
	}
}

$NamingEnumeration* GenericURLContext::list($String* name) {
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($Context, ctx, $cast($Context, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($NamingEnumeration, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->list($(res->getRemainingName())));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(ctx)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$NamingEnumeration* GenericURLContext::list($Name* name) {
	if ($nc(name)->size() == 1) {
		return list($(name->get(0)));
	} else {
		$var($Context, ctx, getContinuationContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($NamingEnumeration, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->list($(name->getSuffix(1))));
				return$1 = true;
				goto $finally;
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				$nc(ctx)->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$NamingEnumeration* GenericURLContext::listBindings($String* name) {
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($Context, ctx, $cast($Context, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($NamingEnumeration, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->listBindings($(res->getRemainingName())));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(ctx)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$NamingEnumeration* GenericURLContext::listBindings($Name* name) {
	if ($nc(name)->size() == 1) {
		return listBindings($(name->get(0)));
	} else {
		$var($Context, ctx, getContinuationContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($NamingEnumeration, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->listBindings($(name->getSuffix(1))));
				return$1 = true;
				goto $finally;
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				$nc(ctx)->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

void GenericURLContext::destroySubcontext($String* name) {
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($Context, ctx, $cast($Context, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(ctx)->destroySubcontext($(res->getRemainingName()));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$nc(ctx)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void GenericURLContext::destroySubcontext($Name* name) {
	if ($nc(name)->size() == 1) {
		destroySubcontext($(name->get(0)));
	} else {
		$var($Context, ctx, getContinuationContext(name));
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(ctx)->destroySubcontext($(name->getSuffix(1)));
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				$nc(ctx)->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$Context* GenericURLContext::createSubcontext($String* name) {
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($Context, ctx, $cast($Context, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($Context, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->createSubcontext($(res->getRemainingName())));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(ctx)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Context* GenericURLContext::createSubcontext($Name* name) {
	if ($nc(name)->size() == 1) {
		return createSubcontext($(name->get(0)));
	} else {
		$var($Context, ctx, getContinuationContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($Context, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->createSubcontext($(name->getSuffix(1))));
				return$1 = true;
				goto $finally;
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				$nc(ctx)->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$Object* GenericURLContext::lookupLink($String* name) {
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($Context, ctx, $cast($Context, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($Object, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->lookupLink($(res->getRemainingName())));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(ctx)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Object* GenericURLContext::lookupLink($Name* name) {
	if ($nc(name)->size() == 1) {
		return $of(lookupLink($(name->get(0))));
	} else {
		$var($Context, ctx, getContinuationContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($Object, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->lookupLink($(name->getSuffix(1))));
				return$1 = true;
				goto $finally;
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				$nc(ctx)->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$NameParser* GenericURLContext::getNameParser($String* name) {
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($Context, ctx, $cast($Context, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($NameParser, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->getNameParser($(res->getRemainingName())));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$nc(ctx)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$NameParser* GenericURLContext::getNameParser($Name* name) {
	if ($nc(name)->size() == 1) {
		return getNameParser($(name->get(0)));
	} else {
		$var($Context, ctx, getContinuationContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($NameParser, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->getNameParser($(name->getSuffix(1))));
				return$1 = true;
				goto $finally;
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				$nc(ctx)->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$String* GenericURLContext::composeName($String* name, $String* prefix) {
	if ($nc(prefix)->isEmpty()) {
		return name;
	} else if ($nc(name)->isEmpty()) {
		return prefix;
	} else {
		return ($str({prefix, "/"_s, name}));
	}
}

$Name* GenericURLContext::composeName($Name* name, $Name* prefix) {
	$var($Name, result, $cast($Name, $nc(prefix)->clone()));
	$nc(result)->addAll(name);
	return result;
}

$Object* GenericURLContext::removeFromEnvironment($String* propName) {
	if (this->myEnv == nullptr) {
		return $of(nullptr);
	}
	return $of($nc(this->myEnv)->remove(propName));
}

$Object* GenericURLContext::addToEnvironment($String* propName, Object$* propVal) {
	if (this->myEnv == nullptr) {
		$set(this, myEnv, $new($Hashtable, 11, 0.75f));
	}
	return $of($nc(this->myEnv)->put(propName, propVal));
}

$Hashtable* GenericURLContext::getEnvironment() {
	if (this->myEnv == nullptr) {
		return $new($Hashtable, 5, 0.75f);
	} else {
		return $cast($Hashtable, $nc(this->myEnv)->clone());
	}
}

GenericURLContext::GenericURLContext() {
}

$Class* GenericURLContext::load$($String* name, bool initialize) {
	$loadClass(GenericURLContext, name, initialize, &_GenericURLContext_ClassInfo_, allocate$GenericURLContext);
	return class$;
}

$Class* GenericURLContext::class$ = nullptr;

				} // url
			} // toolkit
		} // jndi
	} // sun
} // com