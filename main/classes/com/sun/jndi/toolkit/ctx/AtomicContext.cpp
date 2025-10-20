#include <com/sun/jndi/toolkit/ctx/AtomicContext.h>

#include <com/sun/jndi/toolkit/ctx/AtomicContext$1.h>
#include <com/sun/jndi/toolkit/ctx/AtomicContext$2.h>
#include <com/sun/jndi/toolkit/ctx/ComponentContext.h>
#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeContext.h>
#include <com/sun/jndi/toolkit/ctx/StringHeadTail.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/LinkRef.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameNotFoundException.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/RefAddr.h>
#include <javax/naming/Reference.h>
#include <jcpp.h>

#undef _ATOMIC
#undef _NNS_NAME

using $AtomicContext$1 = ::com::sun::jndi::toolkit::ctx::AtomicContext$1;
using $AtomicContext$2 = ::com::sun::jndi::toolkit::ctx::AtomicContext$2;
using $ComponentContext = ::com::sun::jndi::toolkit::ctx::ComponentContext;
using $Continuation = ::com::sun::jndi::toolkit::ctx::Continuation;
using $PartialCompositeContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeContext;
using $StringHeadTail = ::com::sun::jndi::toolkit::ctx::StringHeadTail;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $LinkRef = ::javax::naming::LinkRef;
using $Name = ::javax::naming::Name;
using $NameNotFoundException = ::javax::naming::NameNotFoundException;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $RefAddr = ::javax::naming::RefAddr;
using $Reference = ::javax::naming::Reference;
using $ResolveResult = ::javax::naming::spi::ResolveResult;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

$FieldInfo _AtomicContext_FieldInfo_[] = {
	{"debug", "I", nullptr, $PRIVATE | $STATIC, $staticField(AtomicContext, debug)},
	{}
};

$MethodInfo _AtomicContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AtomicContext::*)()>(&AtomicContext::init$))},
	{"a_bind", "(Ljava/lang/String;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_bind_nns", "(Ljava/lang/String;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_createSubcontext", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/Context;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_createSubcontext_nns", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/Context;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_destroySubcontext", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_destroySubcontext_nns", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_getNameParser", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NameParser;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_getNameParser_nns", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NameParser;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_list", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_listBindings", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_listBindings_nns", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_list_nns", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_lookup", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_lookupLink", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_lookupLink_nns", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_lookup_nns", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_processJunction_nns", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_processJunction_nns", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_rebind", "(Ljava/lang/String;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_rebind_nns", "(Ljava/lang/String;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_rename", "(Ljava/lang/String;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_rename_nns", "(Ljava/lang/String;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_resolveIntermediate_nns", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_unbind", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_unbind_nns", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_bind", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_bind_nns", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_createSubcontext", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/Context;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_createSubcontext_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/Context;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_destroySubcontext", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_destroySubcontext_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getNameParser", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NameParser;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getNameParser_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NameParser;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_list", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_listBindings", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_listBindings_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_list_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_lookup", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_lookupLink", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_lookupLink_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_lookup_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_parseComponent", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Lcom/sun/jndi/toolkit/ctx/StringHeadTail;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"c_rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_rebind_nns", "(Ljavax/naming/Name;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_rename", "(Ljavax/naming/Name;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_rename_nns", "(Ljavax/naming/Name;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_resolveIntermediate_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_unbind", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_unbind_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"isEmpty", "(Ljava/lang/String;)Z", nullptr, $PROTECTED},
	{"resolve_to_context", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Z", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"resolve_to_nns_and_continue", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"resolve_to_penultimate_context", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Z", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"resolve_to_penultimate_context_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Z", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{}
};

$InnerClassInfo _AtomicContext_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.ctx.AtomicContext$2", nullptr, nullptr, 0},
	{"com.sun.jndi.toolkit.ctx.AtomicContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AtomicContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jndi.toolkit.ctx.AtomicContext",
	"com.sun.jndi.toolkit.ctx.ComponentContext",
	nullptr,
	_AtomicContext_FieldInfo_,
	_AtomicContext_MethodInfo_,
	nullptr,
	nullptr,
	_AtomicContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.ctx.AtomicContext$2,com.sun.jndi.toolkit.ctx.AtomicContext$1"
};

$Object* allocate$AtomicContext($Class* clazz) {
	return $of($alloc(AtomicContext));
}

int32_t AtomicContext::debug = 0;

void AtomicContext::init$() {
	$ComponentContext::init$();
	this->_contextType = $PartialCompositeContext::_ATOMIC;
}

$Object* AtomicContext::a_resolveIntermediate_nns($String* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Object, obj, a_lookup(name, cont));
		if (obj != nullptr && $of(this)->getClass()->isInstance(obj)) {
			$nc(cont)->setContinueNNS(obj, name, static_cast<$Context*>(this));
			return $of(nullptr);
		} else if (obj != nullptr && !($instanceOf($Context, obj))) {
			$var($RefAddr, addr, $new($AtomicContext$1, this, "nns"_s, obj));
			$var($Reference, ref, $new($Reference, "java.lang.Object"_s, addr));
			$var($CompositeName, resName, $new($CompositeName));
			resName->add(name);
			resName->add(""_s);
			$nc(cont)->setContinue(ref, resName, this);
			return $of(nullptr);
		} else {
			return $of(obj);
		}
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		e->appendRemainingComponent(""_s);
		$throw(e);
	}
	$shouldNotReachHere();
}

$Object* AtomicContext::a_lookup_nns($String* name, $Continuation* cont) {
	a_processJunction_nns(name, cont);
	return $of(nullptr);
}

$Object* AtomicContext::a_lookupLink_nns($String* name, $Continuation* cont) {
	a_processJunction_nns(name, cont);
	return $of(nullptr);
}

$NamingEnumeration* AtomicContext::a_list_nns($Continuation* cont) {
	a_processJunction_nns(cont);
	return nullptr;
}

$NamingEnumeration* AtomicContext::a_listBindings_nns($Continuation* cont) {
	a_processJunction_nns(cont);
	return nullptr;
}

void AtomicContext::a_bind_nns($String* name, Object$* obj, $Continuation* cont) {
	a_processJunction_nns(name, cont);
}

void AtomicContext::a_rebind_nns($String* name, Object$* obj, $Continuation* cont) {
	a_processJunction_nns(name, cont);
}

void AtomicContext::a_unbind_nns($String* name, $Continuation* cont) {
	a_processJunction_nns(name, cont);
}

$Context* AtomicContext::a_createSubcontext_nns($String* name, $Continuation* cont) {
	a_processJunction_nns(name, cont);
	return nullptr;
}

void AtomicContext::a_destroySubcontext_nns($String* name, $Continuation* cont) {
	a_processJunction_nns(name, cont);
}

void AtomicContext::a_rename_nns($String* oldname, $Name* newname, $Continuation* cont) {
	a_processJunction_nns(oldname, cont);
}

$NameParser* AtomicContext::a_getNameParser_nns($Continuation* cont) {
	a_processJunction_nns(cont);
	return nullptr;
}

bool AtomicContext::isEmpty($String* name) {
	return name == nullptr || $nc(name)->isEmpty();
}

$Object* AtomicContext::c_lookup($Name* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($Object, ret, nullptr);
	if (resolve_to_penultimate_context(name, cont)) {
		$assign(ret, a_lookup($($nc($of(name))->toString()), cont));
		if (ret != nullptr && $instanceOf($LinkRef, ret)) {
			$nc(cont)->setContinue(ret, name, this);
			$assign(ret, nullptr);
		}
	}
	return $of(ret);
}

$Object* AtomicContext::c_lookupLink($Name* name, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		return $of(a_lookupLink($($nc($of(name))->toString()), cont));
	}
	return $of(nullptr);
}

$NamingEnumeration* AtomicContext::c_list($Name* name, $Continuation* cont) {
	if (resolve_to_context(name, cont)) {
		return a_list(cont);
	}
	return nullptr;
}

$NamingEnumeration* AtomicContext::c_listBindings($Name* name, $Continuation* cont) {
	if (resolve_to_context(name, cont)) {
		return a_listBindings(cont);
	}
	return nullptr;
}

void AtomicContext::c_bind($Name* name, Object$* obj, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		a_bind($($nc($of(name))->toString()), obj, cont);
	}
}

void AtomicContext::c_rebind($Name* name, Object$* obj, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		a_rebind($($nc($of(name))->toString()), obj, cont);
	}
}

void AtomicContext::c_unbind($Name* name, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		a_unbind($($nc($of(name))->toString()), cont);
	}
}

void AtomicContext::c_destroySubcontext($Name* name, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		a_destroySubcontext($($nc($of(name))->toString()), cont);
	}
}

$Context* AtomicContext::c_createSubcontext($Name* name, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		return a_createSubcontext($($nc($of(name))->toString()), cont);
	} else {
		return nullptr;
	}
}

void AtomicContext::c_rename($Name* oldname, $Name* newname, $Continuation* cont) {
	if (resolve_to_penultimate_context(oldname, cont)) {
		a_rename($($nc($of(oldname))->toString()), newname, cont);
	}
}

$NameParser* AtomicContext::c_getNameParser($Name* name, $Continuation* cont) {
	if (resolve_to_context(name, cont)) {
		return a_getNameParser(cont);
	}
	return nullptr;
}

$Object* AtomicContext::c_resolveIntermediate_nns($Name* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	if (this->_contextType == $PartialCompositeContext::_ATOMIC) {
		$var($Object, ret, nullptr);
		if (resolve_to_penultimate_context_nns(name, cont)) {
			$assign(ret, a_resolveIntermediate_nns($($nc($of(name))->toString()), cont));
			if (ret != nullptr && $instanceOf($LinkRef, ret)) {
				$nc(cont)->setContinue(ret, name, this);
				$assign(ret, nullptr);
			}
		}
		return $of(ret);
	} else {
		return $of($ComponentContext::c_resolveIntermediate_nns(name, cont));
	}
}

$Object* AtomicContext::c_lookup_nns($Name* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	if (this->_contextType == $PartialCompositeContext::_ATOMIC) {
		$var($Object, ret, nullptr);
		if (resolve_to_penultimate_context_nns(name, cont)) {
			$assign(ret, a_lookup_nns($($nc($of(name))->toString()), cont));
			if (ret != nullptr && $instanceOf($LinkRef, ret)) {
				$nc(cont)->setContinue(ret, name, this);
				$assign(ret, nullptr);
			}
		}
		return $of(ret);
	} else {
		return $of($ComponentContext::c_lookup_nns(name, cont));
	}
}

$Object* AtomicContext::c_lookupLink_nns($Name* name, $Continuation* cont) {
	if (this->_contextType == $PartialCompositeContext::_ATOMIC) {
		resolve_to_nns_and_continue(name, cont);
		return $of(nullptr);
	} else {
		return $of($ComponentContext::c_lookupLink_nns(name, cont));
	}
}

$NamingEnumeration* AtomicContext::c_list_nns($Name* name, $Continuation* cont) {
	if (this->_contextType == $PartialCompositeContext::_ATOMIC) {
		resolve_to_nns_and_continue(name, cont);
		return nullptr;
	} else {
		return $ComponentContext::c_list_nns(name, cont);
	}
}

$NamingEnumeration* AtomicContext::c_listBindings_nns($Name* name, $Continuation* cont) {
	if (this->_contextType == $PartialCompositeContext::_ATOMIC) {
		resolve_to_nns_and_continue(name, cont);
		return nullptr;
	} else {
		return $ComponentContext::c_listBindings_nns(name, cont);
	}
}

void AtomicContext::c_bind_nns($Name* name, Object$* obj, $Continuation* cont) {
	if (this->_contextType == $PartialCompositeContext::_ATOMIC) {
		if (resolve_to_penultimate_context_nns(name, cont)) {
			a_bind_nns($($nc($of(name))->toString()), obj, cont);
		}
	} else {
		$ComponentContext::c_bind_nns(name, obj, cont);
	}
}

void AtomicContext::c_rebind_nns($Name* name, Object$* obj, $Continuation* cont) {
	if (this->_contextType == $PartialCompositeContext::_ATOMIC) {
		if (resolve_to_penultimate_context_nns(name, cont)) {
			a_rebind_nns($($nc($of(name))->toString()), obj, cont);
		}
	} else {
		$ComponentContext::c_rebind_nns(name, obj, cont);
	}
}

void AtomicContext::c_unbind_nns($Name* name, $Continuation* cont) {
	if (this->_contextType == $PartialCompositeContext::_ATOMIC) {
		if (resolve_to_penultimate_context_nns(name, cont)) {
			a_unbind_nns($($nc($of(name))->toString()), cont);
		}
	} else {
		$ComponentContext::c_unbind_nns(name, cont);
	}
}

$Context* AtomicContext::c_createSubcontext_nns($Name* name, $Continuation* cont) {
	if (this->_contextType == $PartialCompositeContext::_ATOMIC) {
		if (resolve_to_penultimate_context_nns(name, cont)) {
			return a_createSubcontext_nns($($nc($of(name))->toString()), cont);
		} else {
			return nullptr;
		}
	} else {
		return $ComponentContext::c_createSubcontext_nns(name, cont);
	}
}

void AtomicContext::c_destroySubcontext_nns($Name* name, $Continuation* cont) {
	if (this->_contextType == $PartialCompositeContext::_ATOMIC) {
		if (resolve_to_penultimate_context_nns(name, cont)) {
			a_destroySubcontext_nns($($nc($of(name))->toString()), cont);
		}
	} else {
		$ComponentContext::c_destroySubcontext_nns(name, cont);
	}
}

void AtomicContext::c_rename_nns($Name* oldname, $Name* newname, $Continuation* cont) {
	if (this->_contextType == $PartialCompositeContext::_ATOMIC) {
		if (resolve_to_penultimate_context_nns(oldname, cont)) {
			a_rename_nns($($nc($of(oldname))->toString()), newname, cont);
		}
	} else {
		$ComponentContext::c_rename_nns(oldname, newname, cont);
	}
}

$NameParser* AtomicContext::c_getNameParser_nns($Name* name, $Continuation* cont) {
	if (this->_contextType == $PartialCompositeContext::_ATOMIC) {
		resolve_to_nns_and_continue(name, cont);
		return nullptr;
	} else {
		return $ComponentContext::c_getNameParser_nns(name, cont);
	}
}

void AtomicContext::a_processJunction_nns($String* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->isEmpty()) {
		$var($NameNotFoundException, e, $new($NameNotFoundException));
		$nc(cont)->setErrorNNS($of(this), name);
		$throw($(cont->fillInException(e)));
	}
	try {
		$var($Object, target, a_lookup(name, cont));
		if ($nc(cont)->isContinue()) {
			cont->appendRemainingComponent(""_s);
		} else {
			cont->setContinueNNS(target, name, static_cast<$Context*>(this));
		}
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		e->appendRemainingComponent(""_s);
		$throw(e);
	}
}

void AtomicContext::a_processJunction_nns($Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($RefAddr, addr, $new($AtomicContext$2, this, "nns"_s));
	$var($Reference, ref, $new($Reference, "java.lang.Object"_s, addr));
	$init($PartialCompositeContext);
	$nc(cont)->setContinue(ref, $PartialCompositeContext::_NNS_NAME, this);
}

bool AtomicContext::resolve_to_context($Name* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($String, target, $nc($of(name))->toString());
	$var($StringHeadTail, ht, c_parseComponent(target, cont));
	$var($String, tail, $nc(ht)->getTail());
	$var($String, head, ht->getHead());
	if (AtomicContext::debug > 0) {
		$init($System);
		$nc($System::out)->println($$str({"RESOLVE TO CONTEXT("_s, target, ") = {"_s, head, ", "_s, tail, "}"_s}));
	}
	if (head == nullptr) {
		$var($InvalidNameException, e, $new($InvalidNameException));
		$throw($($nc(cont)->fillInException(e)));
	}
	if (!isEmpty(head)) {
		try {
			$var($Object, headCtx, a_lookup(head, cont));
			if (headCtx != nullptr) {
				$nc(cont)->setContinue(headCtx, head, static_cast<$Context*>(this), (tail == nullptr ? ""_s : tail));
			} else if ($nc(cont)->isContinue()) {
				cont->appendRemainingComponent(tail);
			}
		} catch ($NamingException&) {
			$var($NamingException, e, $catch());
			e->appendRemainingComponent(tail);
			$throw(e);
		}
	} else {
		$nc(cont)->setSuccess();
		return true;
	}
	return false;
}

bool AtomicContext::resolve_to_penultimate_context($Name* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($String, target, $nc($of(name))->toString());
	if (AtomicContext::debug > 0) {
		$init($System);
		$nc($System::out)->println($$str({"RESOLVE TO PENULTIMATE"_s, target}));
	}
	$var($StringHeadTail, ht, c_parseComponent(target, cont));
	$var($String, tail, $nc(ht)->getTail());
	$var($String, head, ht->getHead());
	if (head == nullptr) {
		$var($InvalidNameException, e, $new($InvalidNameException));
		$throw($($nc(cont)->fillInException(e)));
	}
	if (!isEmpty(tail)) {
		try {
			$var($Object, headCtx, a_lookup(head, cont));
			if (headCtx != nullptr) {
				$nc(cont)->setContinue(headCtx, head, static_cast<$Context*>(this), tail);
			} else if ($nc(cont)->isContinue()) {
				cont->appendRemainingComponent(tail);
			}
		} catch ($NamingException&) {
			$var($NamingException, e, $catch());
			e->appendRemainingComponent(tail);
			$throw(e);
		}
	} else {
		$nc(cont)->setSuccess();
		return true;
	}
	return false;
}

bool AtomicContext::resolve_to_penultimate_context_nns($Name* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	try {
		if (AtomicContext::debug > 0) {
			$init($System);
			$nc($System::out)->println($$str({"RESOLVE TO PENULTIMATE NNS"_s, $($nc($of(name))->toString())}));
		}
		bool answer = resolve_to_penultimate_context(name, cont);
		if ($nc(cont)->isContinue()) {
			cont->appendRemainingComponent(""_s);
		}
		return answer;
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		e->appendRemainingComponent(""_s);
		$throw(e);
	}
	$shouldNotReachHere();
}

void AtomicContext::resolve_to_nns_and_continue($Name* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	if (AtomicContext::debug > 0) {
		$init($System);
		$nc($System::out)->println($$str({"RESOLVE TO NNS AND CONTINUE"_s, $($nc($of(name))->toString())}));
	}
	if (resolve_to_penultimate_context_nns(name, cont)) {
		$var($Object, nns, a_lookup_nns($($nc($of(name))->toString()), cont));
		if (nns != nullptr) {
			$nc(cont)->setContinue(nns, name, this);
		}
	}
}

void clinit$AtomicContext($Class* class$) {
	AtomicContext::debug = 0;
}

AtomicContext::AtomicContext() {
}

$Class* AtomicContext::load$($String* name, bool initialize) {
	$loadClass(AtomicContext, name, initialize, &_AtomicContext_ClassInfo_, clinit$AtomicContext, allocate$AtomicContext);
	return class$;
}

$Class* AtomicContext::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com