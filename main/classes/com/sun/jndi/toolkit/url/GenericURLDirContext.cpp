#include <com/sun/jndi/toolkit/url/GenericURLDirContext.h>

#include <com/sun/jndi/toolkit/url/GenericURLContext.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/CannotProceedException.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/spi/DirectoryManager.h>
#include <javax/naming/spi/ResolveResult.h>
#include <jcpp.h>

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $GenericURLContext = ::com::sun::jndi::toolkit::url::GenericURLContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $CannotProceedException = ::javax::naming::CannotProceedException;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $DirectoryManager = ::javax::naming::spi::DirectoryManager;
using $ResolveResult = ::javax::naming::spi::ResolveResult;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace url {

$MethodInfo _GenericURLDirContext_MethodInfo_[] = {
	{"*addToEnvironment", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC},
	{"*composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"*destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getEnvironment", "()Ljava/util/Hashtable;", nullptr, $PUBLIC},
	{"*getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC},
	{"*getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PROTECTED, $method(static_cast<void(GenericURLDirContext::*)($Hashtable*)>(&GenericURLDirContext::init$))},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getContinuationDirContext", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getSchema", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchema", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*list", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*list", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*listBindings", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*listBindings", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", nullptr, $PUBLIC},
	{"*lookup", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookupLink", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*lookupLink", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"modifyAttributes", "(Ljava/lang/String;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljava/lang/String;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*removeFromEnvironment", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*rename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GenericURLDirContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jndi.toolkit.url.GenericURLDirContext",
	"com.sun.jndi.toolkit.url.GenericURLContext",
	"javax.naming.directory.DirContext",
	nullptr,
	_GenericURLDirContext_MethodInfo_
};

$Object* allocate$GenericURLDirContext($Class* clazz) {
	return $of($alloc(GenericURLDirContext));
}

void GenericURLDirContext::close() {
	this->$GenericURLContext::close();
}

$String* GenericURLDirContext::getNameInNamespace() {
	 return this->$GenericURLContext::getNameInNamespace();
}

$Object* GenericURLDirContext::lookup($String* name) {
	 return this->$GenericURLContext::lookup(name);
}

$Object* GenericURLDirContext::lookup($Name* name) {
	 return this->$GenericURLContext::lookup(name);
}

void GenericURLDirContext::bind($String* name, Object$* obj) {
	this->$GenericURLContext::bind(name, obj);
}

void GenericURLDirContext::bind($Name* name, Object$* obj) {
	this->$GenericURLContext::bind(name, obj);
}

void GenericURLDirContext::rebind($String* name, Object$* obj) {
	this->$GenericURLContext::rebind(name, obj);
}

void GenericURLDirContext::rebind($Name* name, Object$* obj) {
	this->$GenericURLContext::rebind(name, obj);
}

void GenericURLDirContext::unbind($String* name) {
	this->$GenericURLContext::unbind(name);
}

void GenericURLDirContext::unbind($Name* name) {
	this->$GenericURLContext::unbind(name);
}

void GenericURLDirContext::rename($String* oldName, $String* newName) {
	this->$GenericURLContext::rename(oldName, newName);
}

void GenericURLDirContext::rename($Name* name, $Name* newName) {
	this->$GenericURLContext::rename(name, newName);
}

$NamingEnumeration* GenericURLDirContext::list($String* name) {
	 return this->$GenericURLContext::list(name);
}

$NamingEnumeration* GenericURLDirContext::list($Name* name) {
	 return this->$GenericURLContext::list(name);
}

$NamingEnumeration* GenericURLDirContext::listBindings($String* name) {
	 return this->$GenericURLContext::listBindings(name);
}

$NamingEnumeration* GenericURLDirContext::listBindings($Name* name) {
	 return this->$GenericURLContext::listBindings(name);
}

void GenericURLDirContext::destroySubcontext($String* name) {
	this->$GenericURLContext::destroySubcontext(name);
}

void GenericURLDirContext::destroySubcontext($Name* name) {
	this->$GenericURLContext::destroySubcontext(name);
}

$Context* GenericURLDirContext::createSubcontext($String* name) {
	 return this->$GenericURLContext::createSubcontext(name);
}

$Context* GenericURLDirContext::createSubcontext($Name* name) {
	 return this->$GenericURLContext::createSubcontext(name);
}

$Object* GenericURLDirContext::lookupLink($String* name) {
	 return this->$GenericURLContext::lookupLink(name);
}

$Object* GenericURLDirContext::lookupLink($Name* name) {
	 return this->$GenericURLContext::lookupLink(name);
}

$NameParser* GenericURLDirContext::getNameParser($String* name) {
	 return this->$GenericURLContext::getNameParser(name);
}

$NameParser* GenericURLDirContext::getNameParser($Name* name) {
	 return this->$GenericURLContext::getNameParser(name);
}

$String* GenericURLDirContext::composeName($String* name, $String* prefix) {
	 return this->$GenericURLContext::composeName(name, prefix);
}

$Name* GenericURLDirContext::composeName($Name* name, $Name* prefix) {
	 return this->$GenericURLContext::composeName(name, prefix);
}

$Object* GenericURLDirContext::removeFromEnvironment($String* propName) {
	 return this->$GenericURLContext::removeFromEnvironment(propName);
}

$Object* GenericURLDirContext::addToEnvironment($String* propName, Object$* propVal) {
	 return this->$GenericURLContext::addToEnvironment(propName, propVal);
}

$Hashtable* GenericURLDirContext::getEnvironment() {
	 return this->$GenericURLContext::getEnvironment();
}

int32_t GenericURLDirContext::hashCode() {
	 return this->$GenericURLContext::hashCode();
}

bool GenericURLDirContext::equals(Object$* arg0) {
	 return this->$GenericURLContext::equals(arg0);
}

$Object* GenericURLDirContext::clone() {
	 return this->$GenericURLContext::clone();
}

$String* GenericURLDirContext::toString() {
	 return this->$GenericURLContext::toString();
}

void GenericURLDirContext::finalize() {
	this->$GenericURLContext::finalize();
}

void GenericURLDirContext::init$($Hashtable* env) {
	$GenericURLContext::init$(env);
}

$DirContext* GenericURLDirContext::getContinuationDirContext($Name* n) {
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, lookup($($nc(n)->get(0))));
	$var($CannotProceedException, cpe, $new($CannotProceedException));
	cpe->setResolvedObj(obj);
	cpe->setEnvironment(this->myEnv);
	return $DirectoryManager::getContinuationDirContext(cpe);
}

$Attributes* GenericURLDirContext::getAttributes($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($Attributes, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->getAttributes($(res->getRemainingName())));
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

$Attributes* GenericURLDirContext::getAttributes($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return getAttributes($(name->get(0)));
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($Attributes, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->getAttributes($(name->getSuffix(1))));
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

$Attributes* GenericURLDirContext::getAttributes($String* name, $StringArray* attrIds) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($Attributes, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->getAttributes($(res->getRemainingName()), attrIds));
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

$Attributes* GenericURLDirContext::getAttributes($Name* name, $StringArray* attrIds) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return getAttributes($(name->get(0)), attrIds);
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($Attributes, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->getAttributes($(name->getSuffix(1)), attrIds));
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

void GenericURLDirContext::modifyAttributes($String* name, int32_t mod_op, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(ctx)->modifyAttributes($(res->getRemainingName()), mod_op, attrs);
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

void GenericURLDirContext::modifyAttributes($Name* name, int32_t mod_op, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		modifyAttributes($(name->get(0)), mod_op, attrs);
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(ctx)->modifyAttributes($(name->getSuffix(1)), mod_op, attrs);
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

void GenericURLDirContext::modifyAttributes($String* name, $ModificationItemArray* mods) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(ctx)->modifyAttributes($(res->getRemainingName()), mods);
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

void GenericURLDirContext::modifyAttributes($Name* name, $ModificationItemArray* mods) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		modifyAttributes($(name->get(0)), mods);
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(ctx)->modifyAttributes($(name->getSuffix(1)), mods);
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

void GenericURLDirContext::bind($String* name, Object$* obj, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(ctx)->bind($(res->getRemainingName()), obj, attrs);
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

void GenericURLDirContext::bind($Name* name, Object$* obj, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		bind($(name->get(0)), obj, attrs);
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(ctx)->bind($(name->getSuffix(1)), obj, attrs);
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

void GenericURLDirContext::rebind($String* name, Object$* obj, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(ctx)->rebind($(res->getRemainingName()), obj, attrs);
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

void GenericURLDirContext::rebind($Name* name, Object$* obj, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		rebind($(name->get(0)), obj, attrs);
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			try {
				$nc(ctx)->rebind($(name->getSuffix(1)), obj, attrs);
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

$DirContext* GenericURLDirContext::createSubcontext($String* name, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($DirContext, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->createSubcontext($(res->getRemainingName()), attrs));
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

$DirContext* GenericURLDirContext::createSubcontext($Name* name, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return createSubcontext($(name->get(0)), attrs);
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($DirContext, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->createSubcontext($(name->getSuffix(1)), attrs));
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

$DirContext* GenericURLDirContext::getSchema($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	return $nc(ctx)->getSchema($(res->getRemainingName()));
}

$DirContext* GenericURLDirContext::getSchema($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return getSchema($(name->get(0)));
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($DirContext, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->getSchema($(name->getSuffix(1))));
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

$DirContext* GenericURLDirContext::getSchemaClassDefinition($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($DirContext, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->getSchemaClassDefinition($(res->getRemainingName())));
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

$DirContext* GenericURLDirContext::getSchemaClassDefinition($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return getSchemaClassDefinition($(name->get(0)));
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($DirContext, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->getSchemaClassDefinition($(name->getSuffix(1))));
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

$NamingEnumeration* GenericURLDirContext::search($String* name, $Attributes* matchingAttributes) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($NamingEnumeration, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->search($(res->getRemainingName()), matchingAttributes));
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

$NamingEnumeration* GenericURLDirContext::search($Name* name, $Attributes* matchingAttributes) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return search($(name->get(0)), matchingAttributes);
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($NamingEnumeration, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->search($(name->getSuffix(1)), matchingAttributes));
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

$NamingEnumeration* GenericURLDirContext::search($String* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($NamingEnumeration, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->search($(res->getRemainingName()), matchingAttributes, attributesToReturn));
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

$NamingEnumeration* GenericURLDirContext::search($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return search($(name->get(0)), matchingAttributes, attributesToReturn);
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($NamingEnumeration, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->search($(name->getSuffix(1)), matchingAttributes, attributesToReturn));
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

$NamingEnumeration* GenericURLDirContext::search($String* name, $String* filter, $SearchControls* cons) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($NamingEnumeration, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->search($(res->getRemainingName()), filter, cons));
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

$NamingEnumeration* GenericURLDirContext::search($Name* name, $String* filter, $SearchControls* cons) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return search($(name->get(0)), filter, cons);
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($NamingEnumeration, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->search($(name->getSuffix(1)), filter, cons));
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

$NamingEnumeration* GenericURLDirContext::search($String* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	$useLocalCurrentObjectStackCache();
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($NamingEnumeration, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $nc(ctx)->search($(res->getRemainingName()), filterExpr, filterArgs, cons));
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

$NamingEnumeration* GenericURLDirContext::search($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return search($(name->get(0)), filterExpr, filterArgs, cons);
	} else {
		$var($DirContext, ctx, getContinuationDirContext(name));
		{
			$var($Throwable, var$0, nullptr);
			$var($NamingEnumeration, var$2, nullptr);
			bool return$1 = false;
			try {
				$assign(var$2, $nc(ctx)->search($(name->getSuffix(1)), filterExpr, filterArgs, cons));
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

GenericURLDirContext::GenericURLDirContext() {
}

$Class* GenericURLDirContext::load$($String* name, bool initialize) {
	$loadClass(GenericURLDirContext, name, initialize, &_GenericURLDirContext_ClassInfo_, allocate$GenericURLDirContext);
	return class$;
}

$Class* GenericURLDirContext::class$ = nullptr;

				} // url
			} // toolkit
		} // jndi
	} // sun
} // com