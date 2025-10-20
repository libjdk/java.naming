#include <com/sun/jndi/toolkit/ctx/PartialCompositeDirContext.h>

#include <com/sun/jndi/toolkit/ctx/AtomicContext.h>
#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeContext.h>
#include <com/sun/jndi/toolkit/ctx/StringHeadTail.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <javax/naming/CannotProceedException.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/NotContextException.h>
#include <javax/naming/OperationNotSupportedException.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/spi/DirectoryManager.h>
#include <jcpp.h>

#undef _PARTIAL

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $AtomicContext = ::com::sun::jndi::toolkit::ctx::AtomicContext;
using $Continuation = ::com::sun::jndi::toolkit::ctx::Continuation;
using $PartialCompositeContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeContext;
using $StringHeadTail = ::com::sun::jndi::toolkit::ctx::StringHeadTail;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $CannotProceedException = ::javax::naming::CannotProceedException;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $NotContextException = ::javax::naming::NotContextException;
using $OperationNotSupportedException = ::javax::naming::OperationNotSupportedException;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $DirectoryManager = ::javax::naming::spi::DirectoryManager;
using $ResolveResult = ::javax::naming::spi::ResolveResult;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

$MethodInfo _PartialCompositeDirContext_MethodInfo_[] = {
	{"*addToEnvironment", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"*bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"*createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC},
	{"*destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getEnvironment", "()Ljava/util/Hashtable;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"*getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC},
	{"*getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(PartialCompositeDirContext::*)()>(&PartialCompositeDirContext::init$))},
	{"a_bind", "(Ljava/lang/String;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_createSubcontext", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/Context;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_destroySubcontext", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_getNameParser", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NameParser;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_list", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_listBindings", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_lookup", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_lookupLink", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_rebind", "(Ljava/lang/String;Ljava/lang/Object;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_rename", "(Ljava/lang/String;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_unbind", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"c_parseComponent", "(Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Lcom/sun/jndi/toolkit/ctx/StringHeadTail;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getPCDirContext", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Lcom/sun/jndi/toolkit/ctx/PartialCompositeDirContext;", nullptr, $PROTECTED | $STATIC, $method(static_cast<PartialCompositeDirContext*(*)($Continuation*)>(&PartialCompositeDirContext::getPCDirContext)), "javax.naming.NamingException"},
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
	{"p_bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_getSchema", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_getSchemaClassDefinition", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"p_search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"*rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"*rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"*removeFromEnvironment", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
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

$ClassInfo _PartialCompositeDirContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jndi.toolkit.ctx.PartialCompositeDirContext",
	"com.sun.jndi.toolkit.ctx.AtomicContext",
	"javax.naming.directory.DirContext",
	nullptr,
	_PartialCompositeDirContext_MethodInfo_
};

$Object* allocate$PartialCompositeDirContext($Class* clazz) {
	return $of($alloc(PartialCompositeDirContext));
}

$Object* PartialCompositeDirContext::lookup($String* name) {
	 return this->$AtomicContext::lookup(name);
}

$Object* PartialCompositeDirContext::lookup($Name* name) {
	 return this->$AtomicContext::lookup(name);
}

void PartialCompositeDirContext::bind($String* name, Object$* newObj) {
	this->$AtomicContext::bind(name, newObj);
}

void PartialCompositeDirContext::bind($Name* name, Object$* newObj) {
	this->$AtomicContext::bind(name, newObj);
}

void PartialCompositeDirContext::rebind($String* name, Object$* newObj) {
	this->$AtomicContext::rebind(name, newObj);
}

void PartialCompositeDirContext::rebind($Name* name, Object$* newObj) {
	this->$AtomicContext::rebind(name, newObj);
}

void PartialCompositeDirContext::unbind($String* name) {
	this->$AtomicContext::unbind(name);
}

void PartialCompositeDirContext::unbind($Name* name) {
	this->$AtomicContext::unbind(name);
}

void PartialCompositeDirContext::rename($String* oldName, $String* newName) {
	this->$AtomicContext::rename(oldName, newName);
}

void PartialCompositeDirContext::rename($Name* oldName, $Name* newName) {
	this->$AtomicContext::rename(oldName, newName);
}

$NamingEnumeration* PartialCompositeDirContext::list($String* name) {
	 return this->$AtomicContext::list(name);
}

$NamingEnumeration* PartialCompositeDirContext::list($Name* name) {
	 return this->$AtomicContext::list(name);
}

$NamingEnumeration* PartialCompositeDirContext::listBindings($String* name) {
	 return this->$AtomicContext::listBindings(name);
}

$NamingEnumeration* PartialCompositeDirContext::listBindings($Name* name) {
	 return this->$AtomicContext::listBindings(name);
}

void PartialCompositeDirContext::destroySubcontext($String* name) {
	this->$AtomicContext::destroySubcontext(name);
}

void PartialCompositeDirContext::destroySubcontext($Name* name) {
	this->$AtomicContext::destroySubcontext(name);
}

$Context* PartialCompositeDirContext::createSubcontext($String* name) {
	 return this->$AtomicContext::createSubcontext(name);
}

$Context* PartialCompositeDirContext::createSubcontext($Name* name) {
	 return this->$AtomicContext::createSubcontext(name);
}

$Object* PartialCompositeDirContext::lookupLink($String* name) {
	 return this->$AtomicContext::lookupLink(name);
}

$Object* PartialCompositeDirContext::lookupLink($Name* name) {
	 return this->$AtomicContext::lookupLink(name);
}

$NameParser* PartialCompositeDirContext::getNameParser($String* name) {
	 return this->$AtomicContext::getNameParser(name);
}

$NameParser* PartialCompositeDirContext::getNameParser($Name* name) {
	 return this->$AtomicContext::getNameParser(name);
}

$String* PartialCompositeDirContext::composeName($String* name, $String* prefix) {
	 return this->$AtomicContext::composeName(name, prefix);
}

$Name* PartialCompositeDirContext::composeName($Name* name, $Name* prefix) {
	 return this->$AtomicContext::composeName(name, prefix);
}

int32_t PartialCompositeDirContext::hashCode() {
	 return this->$AtomicContext::hashCode();
}

bool PartialCompositeDirContext::equals(Object$* arg0) {
	 return this->$AtomicContext::equals(arg0);
}

$Object* PartialCompositeDirContext::clone() {
	 return this->$AtomicContext::clone();
}

$String* PartialCompositeDirContext::toString() {
	 return this->$AtomicContext::toString();
}

void PartialCompositeDirContext::finalize() {
	this->$AtomicContext::finalize();
}

void PartialCompositeDirContext::init$() {
	$AtomicContext::init$();
	this->_contextType = $PartialCompositeContext::_PARTIAL;
}

$Attributes* PartialCompositeDirContext::getAttributes($String* name) {
	return getAttributes(name, ($StringArray*)nullptr);
}

$Attributes* PartialCompositeDirContext::getAttributes($Name* name) {
	return getAttributes(name, ($StringArray*)nullptr);
}

$Attributes* PartialCompositeDirContext::getAttributes($String* name, $StringArray* attrIds) {
	return getAttributes(static_cast<$Name*>($$new($CompositeName, name)), attrIds);
}

$Attributes* PartialCompositeDirContext::getAttributes($Name* name, $StringArray* attrIds) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeDirContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($Attributes, answer, nullptr);
	$var($Name, nm, name);
	try {
		$assign(answer, ctx->p_getAttributes(nm, attrIds, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCDirContext(cont));
			$assign(answer, $nc(ctx)->p_getAttributes(nm, attrIds, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($DirContext, cctx, $DirectoryManager::getContinuationDirContext(e));
		$assign(answer, $nc(cctx)->getAttributes($(e->getRemainingName()), attrIds));
	}
	return answer;
}

void PartialCompositeDirContext::modifyAttributes($String* name, int32_t mod_op, $Attributes* attrs) {
	modifyAttributes(static_cast<$Name*>($$new($CompositeName, name)), mod_op, attrs);
}

void PartialCompositeDirContext::modifyAttributes($Name* name, int32_t mod_op, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeDirContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($Name, nm, name);
	try {
		ctx->p_modifyAttributes(nm, mod_op, attrs, cont);
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCDirContext(cont));
			$nc(ctx)->p_modifyAttributes(nm, mod_op, attrs, cont);
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($DirContext, cctx, $DirectoryManager::getContinuationDirContext(e));
		$nc(cctx)->modifyAttributes($(e->getRemainingName()), mod_op, attrs);
	}
}

void PartialCompositeDirContext::modifyAttributes($String* name, $ModificationItemArray* mods) {
	modifyAttributes(static_cast<$Name*>($$new($CompositeName, name)), mods);
}

void PartialCompositeDirContext::modifyAttributes($Name* name, $ModificationItemArray* mods) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeDirContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($Name, nm, name);
	try {
		ctx->p_modifyAttributes(nm, mods, cont);
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCDirContext(cont));
			$nc(ctx)->p_modifyAttributes(nm, mods, cont);
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($DirContext, cctx, $DirectoryManager::getContinuationDirContext(e));
		$nc(cctx)->modifyAttributes($(e->getRemainingName()), mods);
	}
}

void PartialCompositeDirContext::bind($String* name, Object$* obj, $Attributes* attrs) {
	bind(static_cast<$Name*>($$new($CompositeName, name)), obj, attrs);
}

void PartialCompositeDirContext::bind($Name* name, Object$* obj, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeDirContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($Name, nm, name);
	try {
		ctx->p_bind(nm, obj, attrs, cont);
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCDirContext(cont));
			$nc(ctx)->p_bind(nm, obj, attrs, cont);
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($DirContext, cctx, $DirectoryManager::getContinuationDirContext(e));
		$nc(cctx)->bind($(e->getRemainingName()), obj, attrs);
	}
}

void PartialCompositeDirContext::rebind($String* name, Object$* obj, $Attributes* attrs) {
	rebind(static_cast<$Name*>($$new($CompositeName, name)), obj, attrs);
}

void PartialCompositeDirContext::rebind($Name* name, Object$* obj, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeDirContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($Name, nm, name);
	try {
		ctx->p_rebind(nm, obj, attrs, cont);
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCDirContext(cont));
			$nc(ctx)->p_rebind(nm, obj, attrs, cont);
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($DirContext, cctx, $DirectoryManager::getContinuationDirContext(e));
		$nc(cctx)->rebind($(e->getRemainingName()), obj, attrs);
	}
}

$DirContext* PartialCompositeDirContext::createSubcontext($String* name, $Attributes* attrs) {
	return createSubcontext(static_cast<$Name*>($$new($CompositeName, name)), attrs);
}

$DirContext* PartialCompositeDirContext::createSubcontext($Name* name, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeDirContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($DirContext, answer, nullptr);
	$var($Name, nm, name);
	try {
		$assign(answer, ctx->p_createSubcontext(nm, attrs, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCDirContext(cont));
			$assign(answer, $nc(ctx)->p_createSubcontext(nm, attrs, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($DirContext, cctx, $DirectoryManager::getContinuationDirContext(e));
		$assign(answer, $nc(cctx)->createSubcontext($(e->getRemainingName()), attrs));
	}
	return answer;
}

$NamingEnumeration* PartialCompositeDirContext::search($String* name, $Attributes* matchingAttributes) {
	return search(name, matchingAttributes, ($StringArray*)nullptr);
}

$NamingEnumeration* PartialCompositeDirContext::search($Name* name, $Attributes* matchingAttributes) {
	return search(name, matchingAttributes, ($StringArray*)nullptr);
}

$NamingEnumeration* PartialCompositeDirContext::search($String* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	return search(static_cast<$Name*>($$new($CompositeName, name)), matchingAttributes, attributesToReturn);
}

$NamingEnumeration* PartialCompositeDirContext::search($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeDirContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($NamingEnumeration, answer, nullptr);
	$var($Name, nm, name);
	try {
		$assign(answer, ctx->p_search(nm, matchingAttributes, attributesToReturn, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCDirContext(cont));
			$assign(answer, $nc(ctx)->p_search(nm, matchingAttributes, attributesToReturn, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($DirContext, cctx, $DirectoryManager::getContinuationDirContext(e));
		$assign(answer, $nc(cctx)->search($(e->getRemainingName()), matchingAttributes, attributesToReturn));
	}
	return answer;
}

$NamingEnumeration* PartialCompositeDirContext::search($String* name, $String* filter, $SearchControls* cons) {
	return search(static_cast<$Name*>($$new($CompositeName, name)), filter, cons);
}

$NamingEnumeration* PartialCompositeDirContext::search($Name* name, $String* filter, $SearchControls* cons) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeDirContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($NamingEnumeration, answer, nullptr);
	$var($Name, nm, name);
	try {
		$assign(answer, ctx->p_search(nm, filter, cons, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCDirContext(cont));
			$assign(answer, $nc(ctx)->p_search(nm, filter, cons, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($DirContext, cctx, $DirectoryManager::getContinuationDirContext(e));
		$assign(answer, $nc(cctx)->search($(e->getRemainingName()), filter, cons));
	}
	return answer;
}

$NamingEnumeration* PartialCompositeDirContext::search($String* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	return search(static_cast<$Name*>($$new($CompositeName, name)), filterExpr, filterArgs, cons);
}

$NamingEnumeration* PartialCompositeDirContext::search($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeDirContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($NamingEnumeration, answer, nullptr);
	$var($Name, nm, name);
	try {
		$assign(answer, ctx->p_search(nm, filterExpr, filterArgs, cons, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCDirContext(cont));
			$assign(answer, $nc(ctx)->p_search(nm, filterExpr, filterArgs, cons, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($DirContext, cctx, $DirectoryManager::getContinuationDirContext(e));
		$assign(answer, $nc(cctx)->search($(e->getRemainingName()), filterExpr, filterArgs, cons));
	}
	return answer;
}

$DirContext* PartialCompositeDirContext::getSchema($String* name) {
	return getSchema(static_cast<$Name*>($$new($CompositeName, name)));
}

$DirContext* PartialCompositeDirContext::getSchema($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeDirContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($DirContext, answer, nullptr);
	$var($Name, nm, name);
	try {
		$assign(answer, ctx->p_getSchema(nm, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCDirContext(cont));
			$assign(answer, $nc(ctx)->p_getSchema(nm, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($DirContext, cctx, $DirectoryManager::getContinuationDirContext(e));
		$assign(answer, $nc(cctx)->getSchema($(e->getRemainingName())));
	}
	return answer;
}

$DirContext* PartialCompositeDirContext::getSchemaClassDefinition($String* name) {
	return getSchemaClassDefinition(static_cast<$Name*>($$new($CompositeName, name)));
}

$DirContext* PartialCompositeDirContext::getSchemaClassDefinition($Name* name) {
	$useLocalCurrentObjectStackCache();
	$var(PartialCompositeDirContext, ctx, this);
	$var($Hashtable, env, p_getEnvironment());
	$var($Continuation, cont, $new($Continuation, name, env));
	$var($DirContext, answer, nullptr);
	$var($Name, nm, name);
	try {
		$assign(answer, ctx->p_getSchemaClassDefinition(nm, cont));
		while (cont->isContinue()) {
			$assign(nm, cont->getRemainingName());
			$assign(ctx, getPCDirContext(cont));
			$assign(answer, $nc(ctx)->p_getSchemaClassDefinition(nm, cont));
		}
	} catch ($CannotProceedException&) {
		$var($CannotProceedException, e, $catch());
		$var($DirContext, cctx, $DirectoryManager::getContinuationDirContext(e));
		$assign(answer, $nc(cctx)->getSchemaClassDefinition($(e->getRemainingName())));
	}
	return answer;
}

PartialCompositeDirContext* PartialCompositeDirContext::getPCDirContext($Continuation* cont) {
	$init(PartialCompositeDirContext);
	$useLocalCurrentObjectStackCache();
	$var($PartialCompositeContext, pctx, $PartialCompositeContext::getPCContext(cont));
	if (!($instanceOf(PartialCompositeDirContext, pctx))) {
		$throw($($nc(cont)->fillInException($$new($NotContextException, "Resolved object is not a DirContext."_s))));
	}
	return $cast(PartialCompositeDirContext, pctx);
}

$StringHeadTail* PartialCompositeDirContext::c_parseComponent($String* inputName, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($OperationNotSupportedException, e, $new($OperationNotSupportedException));
	$throw($($nc(cont)->fillInException(e)));
	$shouldNotReachHere();
}

$Object* PartialCompositeDirContext::a_lookup($String* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($OperationNotSupportedException, e, $new($OperationNotSupportedException));
	$throw($($nc(cont)->fillInException(e)));
	$shouldNotReachHere();
}

$Object* PartialCompositeDirContext::a_lookupLink($String* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($OperationNotSupportedException, e, $new($OperationNotSupportedException));
	$throw($($nc(cont)->fillInException(e)));
	$shouldNotReachHere();
}

$NamingEnumeration* PartialCompositeDirContext::a_list($Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($OperationNotSupportedException, e, $new($OperationNotSupportedException));
	$throw($($nc(cont)->fillInException(e)));
	$shouldNotReachHere();
}

$NamingEnumeration* PartialCompositeDirContext::a_listBindings($Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($OperationNotSupportedException, e, $new($OperationNotSupportedException));
	$throw($($nc(cont)->fillInException(e)));
	$shouldNotReachHere();
}

void PartialCompositeDirContext::a_bind($String* name, Object$* obj, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($OperationNotSupportedException, e, $new($OperationNotSupportedException));
	$throw($($nc(cont)->fillInException(e)));
}

void PartialCompositeDirContext::a_rebind($String* name, Object$* obj, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($OperationNotSupportedException, e, $new($OperationNotSupportedException));
	$throw($($nc(cont)->fillInException(e)));
}

void PartialCompositeDirContext::a_unbind($String* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($OperationNotSupportedException, e, $new($OperationNotSupportedException));
	$throw($($nc(cont)->fillInException(e)));
}

void PartialCompositeDirContext::a_destroySubcontext($String* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($OperationNotSupportedException, e, $new($OperationNotSupportedException));
	$throw($($nc(cont)->fillInException(e)));
}

$Context* PartialCompositeDirContext::a_createSubcontext($String* name, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($OperationNotSupportedException, e, $new($OperationNotSupportedException));
	$throw($($nc(cont)->fillInException(e)));
	$shouldNotReachHere();
}

void PartialCompositeDirContext::a_rename($String* oldname, $Name* newname, $Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($OperationNotSupportedException, e, $new($OperationNotSupportedException));
	$throw($($nc(cont)->fillInException(e)));
}

$NameParser* PartialCompositeDirContext::a_getNameParser($Continuation* cont) {
	$useLocalCurrentObjectStackCache();
	$var($OperationNotSupportedException, e, $new($OperationNotSupportedException));
	$throw($($nc(cont)->fillInException(e)));
	$shouldNotReachHere();
}

PartialCompositeDirContext::PartialCompositeDirContext() {
}

$Class* PartialCompositeDirContext::load$($String* name, bool initialize) {
	$loadClass(PartialCompositeDirContext, name, initialize, &_PartialCompositeDirContext_ClassInfo_, allocate$PartialCompositeDirContext);
	return class$;
}

$Class* PartialCompositeDirContext::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com