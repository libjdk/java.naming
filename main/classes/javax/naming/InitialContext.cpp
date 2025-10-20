#include <javax/naming/InitialContext.h>

#include <com/sun/naming/internal/ResourceManager.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NoInitialContextException.h>
#include <javax/naming/spi/NamingManager.h>
#include <jcpp.h>

#undef INITIAL_CONTEXT_FACTORY

using $ResourceManager = ::com::sun::naming::internal::ResourceManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NoInitialContextException = ::javax::naming::NoInitialContextException;
using $NamingManager = ::javax::naming::spi::NamingManager;

namespace javax {
	namespace naming {

$FieldInfo _InitialContext_FieldInfo_[] = {
	{"myProps", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Object;Ljava/lang/Object;>;", $PROTECTED, $field(InitialContext, myProps)},
	{"defaultInitCtx", "Ljavax/naming/Context;", nullptr, $PROTECTED, $field(InitialContext, defaultInitCtx)},
	{"gotDefault", "Z", nullptr, $PROTECTED, $field(InitialContext, gotDefault)},
	{}
};

$MethodInfo _InitialContext_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PROTECTED, $method(static_cast<void(InitialContext::*)(bool)>(&InitialContext::init$)), "javax.naming.NamingException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InitialContext::*)()>(&InitialContext::init$)), "javax.naming.NamingException"},
	{"<init>", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC, $method(static_cast<void(InitialContext::*)($Hashtable*)>(&InitialContext::init$)), "javax.naming.NamingException"},
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
	{"doLookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/naming/Name;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($Name*)>(&InitialContext::doLookup)), "javax.naming.NamingException"},
	{"doLookup", "(Ljava/lang/String;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;)TT;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($String*)>(&InitialContext::doLookup)), "javax.naming.NamingException"},
	{"getDefaultInitCtx", "()Ljavax/naming/Context;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getEnvironment", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<**>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getURLOrDefaultInitCtx", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getURLOrDefaultInitCtx", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getURLScheme", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&InitialContext::getURLScheme))},
	{"init", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PROTECTED, nullptr, "javax.naming.NamingException"},
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
	{}
};

$ClassInfo _InitialContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.InitialContext",
	"java.lang.Object",
	"javax.naming.Context",
	_InitialContext_FieldInfo_,
	_InitialContext_MethodInfo_
};

$Object* allocate$InitialContext($Class* clazz) {
	return $of($alloc(InitialContext));
}

void InitialContext::init$(bool lazy) {
	$set(this, myProps, nullptr);
	$set(this, defaultInitCtx, nullptr);
	this->gotDefault = false;
	if (!lazy) {
		init(nullptr);
	}
}

void InitialContext::init$() {
	$set(this, myProps, nullptr);
	$set(this, defaultInitCtx, nullptr);
	this->gotDefault = false;
	init(nullptr);
}

void InitialContext::init$($Hashtable* environment$renamed) {
	$var($Hashtable, environment, environment$renamed);
	$set(this, myProps, nullptr);
	$set(this, defaultInitCtx, nullptr);
	this->gotDefault = false;
	if (environment != nullptr) {
		$assign(environment, $cast($Hashtable, environment->clone()));
	}
	init(environment);
}

void InitialContext::init($Hashtable* environment) {
	$set(this, myProps, $ResourceManager::getInitialEnvironment(environment));
	$init($Context);
	if ($nc(this->myProps)->get($Context::INITIAL_CONTEXT_FACTORY) != nullptr) {
		getDefaultInitCtx();
	}
}

$Object* InitialContext::doLookup($Name* name) {
	$init(InitialContext);
	return $of(($$new(InitialContext))->lookup(name));
}

$Object* InitialContext::doLookup($String* name) {
	$init(InitialContext);
	return $of(($$new(InitialContext))->lookup(name));
}

$String* InitialContext::getURLScheme($String* str) {
	$init(InitialContext);
	int32_t colon_posn = $nc(str)->indexOf((int32_t)u':');
	int32_t slash_posn = str->indexOf((int32_t)u'/');
	if (colon_posn > 0 && (slash_posn == -1 || colon_posn < slash_posn)) {
		return str->substring(0, colon_posn);
	}
	return nullptr;
}

$Context* InitialContext::getDefaultInitCtx() {
	if (!this->gotDefault) {
		$set(this, defaultInitCtx, $NamingManager::getInitialContext(this->myProps));
		this->gotDefault = true;
	}
	if (this->defaultInitCtx == nullptr) {
		$throwNew($NoInitialContextException);
	}
	return this->defaultInitCtx;
}

$Context* InitialContext::getURLOrDefaultInitCtx($String* name) {
	$useLocalCurrentObjectStackCache();
	if ($NamingManager::hasInitialContextFactoryBuilder()) {
		return getDefaultInitCtx();
	}
	$var($String, scheme, getURLScheme(name));
	if (scheme != nullptr) {
		$var($Context, ctx, $NamingManager::getURLContext(scheme, this->myProps));
		if (ctx != nullptr) {
			return ctx;
		}
	}
	return getDefaultInitCtx();
}

$Context* InitialContext::getURLOrDefaultInitCtx($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($NamingManager::hasInitialContextFactoryBuilder()) {
		return getDefaultInitCtx();
	}
	if ($nc(name)->size() > 0) {
		$var($String, first, name->get(0));
		$var($String, scheme, getURLScheme(first));
		if (scheme != nullptr) {
			$var($Context, ctx, $NamingManager::getURLContext(scheme, this->myProps));
			if (ctx != nullptr) {
				return ctx;
			}
		}
	}
	return getDefaultInitCtx();
}

$Object* InitialContext::lookup($String* name) {
	return $of($nc($(getURLOrDefaultInitCtx(name)))->lookup(name));
}

$Object* InitialContext::lookup($Name* name) {
	return $of($nc($(getURLOrDefaultInitCtx(name)))->lookup(name));
}

void InitialContext::bind($String* name, Object$* obj) {
	$nc($(getURLOrDefaultInitCtx(name)))->bind(name, obj);
}

void InitialContext::bind($Name* name, Object$* obj) {
	$nc($(getURLOrDefaultInitCtx(name)))->bind(name, obj);
}

void InitialContext::rebind($String* name, Object$* obj) {
	$nc($(getURLOrDefaultInitCtx(name)))->rebind(name, obj);
}

void InitialContext::rebind($Name* name, Object$* obj) {
	$nc($(getURLOrDefaultInitCtx(name)))->rebind(name, obj);
}

void InitialContext::unbind($String* name) {
	$nc($(getURLOrDefaultInitCtx(name)))->unbind(name);
}

void InitialContext::unbind($Name* name) {
	$nc($(getURLOrDefaultInitCtx(name)))->unbind(name);
}

void InitialContext::rename($String* oldName, $String* newName) {
	$nc($(getURLOrDefaultInitCtx(oldName)))->rename(oldName, newName);
}

void InitialContext::rename($Name* oldName, $Name* newName) {
	$nc($(getURLOrDefaultInitCtx(oldName)))->rename(oldName, newName);
}

$NamingEnumeration* InitialContext::list($String* name) {
	return ($nc($(getURLOrDefaultInitCtx(name)))->list(name));
}

$NamingEnumeration* InitialContext::list($Name* name) {
	return ($nc($(getURLOrDefaultInitCtx(name)))->list(name));
}

$NamingEnumeration* InitialContext::listBindings($String* name) {
	return $nc($(getURLOrDefaultInitCtx(name)))->listBindings(name);
}

$NamingEnumeration* InitialContext::listBindings($Name* name) {
	return $nc($(getURLOrDefaultInitCtx(name)))->listBindings(name);
}

void InitialContext::destroySubcontext($String* name) {
	$nc($(getURLOrDefaultInitCtx(name)))->destroySubcontext(name);
}

void InitialContext::destroySubcontext($Name* name) {
	$nc($(getURLOrDefaultInitCtx(name)))->destroySubcontext(name);
}

$Context* InitialContext::createSubcontext($String* name) {
	return $nc($(getURLOrDefaultInitCtx(name)))->createSubcontext(name);
}

$Context* InitialContext::createSubcontext($Name* name) {
	return $nc($(getURLOrDefaultInitCtx(name)))->createSubcontext(name);
}

$Object* InitialContext::lookupLink($String* name) {
	return $of($nc($(getURLOrDefaultInitCtx(name)))->lookupLink(name));
}

$Object* InitialContext::lookupLink($Name* name) {
	return $of($nc($(getURLOrDefaultInitCtx(name)))->lookupLink(name));
}

$NameParser* InitialContext::getNameParser($String* name) {
	return $nc($(getURLOrDefaultInitCtx(name)))->getNameParser(name);
}

$NameParser* InitialContext::getNameParser($Name* name) {
	return $nc($(getURLOrDefaultInitCtx(name)))->getNameParser(name);
}

$String* InitialContext::composeName($String* name, $String* prefix) {
	return name;
}

$Name* InitialContext::composeName($Name* name, $Name* prefix) {
	return $cast($Name, $nc(name)->clone());
}

$Object* InitialContext::addToEnvironment($String* propName, Object$* propVal) {
	$nc(this->myProps)->put(propName, propVal);
	return $of($nc($(getDefaultInitCtx()))->addToEnvironment(propName, propVal));
}

$Object* InitialContext::removeFromEnvironment($String* propName) {
	$nc(this->myProps)->remove(propName);
	return $of($nc($(getDefaultInitCtx()))->removeFromEnvironment(propName));
}

$Hashtable* InitialContext::getEnvironment() {
	return $nc($(getDefaultInitCtx()))->getEnvironment();
}

void InitialContext::close() {
	$set(this, myProps, nullptr);
	if (this->defaultInitCtx != nullptr) {
		$nc(this->defaultInitCtx)->close();
		$set(this, defaultInitCtx, nullptr);
	}
	this->gotDefault = false;
}

$String* InitialContext::getNameInNamespace() {
	return $nc($(getDefaultInitCtx()))->getNameInNamespace();
}

InitialContext::InitialContext() {
}

$Class* InitialContext::load$($String* name, bool initialize) {
	$loadClass(InitialContext, name, initialize, &_InitialContext_ClassInfo_, allocate$InitialContext);
	return class$;
}

$Class* InitialContext::class$ = nullptr;

	} // naming
} // javax