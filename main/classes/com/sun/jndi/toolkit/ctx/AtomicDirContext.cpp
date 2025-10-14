#include <com/sun/jndi/toolkit/ctx/AtomicDirContext.h>

#include <com/sun/jndi/toolkit/ctx/AtomicContext.h>
#include <com/sun/jndi/toolkit/ctx/ComponentDirContext.h>
#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeContext.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/Name.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/SearchControls.h>
#include <jcpp.h>

#undef _ATOMIC

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $AtomicContext = ::com::sun::jndi::toolkit::ctx::AtomicContext;
using $ComponentDirContext = ::com::sun::jndi::toolkit::ctx::ComponentDirContext;
using $Continuation = ::com::sun::jndi::toolkit::ctx::Continuation;
using $PartialCompositeContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::naming::Name;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $SearchControls = ::javax::naming::directory::SearchControls;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace ctx {

$MethodInfo _AtomicDirContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AtomicDirContext::*)()>(&AtomicDirContext::init$))},
	{"a_bind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_bind_nns", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_createSubcontext", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_createSubcontext_nns", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_getAttributes", "(Ljava/lang/String;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_getAttributes_nns", "(Ljava/lang/String;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_getSchema", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_getSchemaClassDefinition", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_getSchemaDefinition_nns", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_getSchema_nns", "(Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_modifyAttributes", "(Ljava/lang/String;ILjavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_modifyAttributes", "(Ljava/lang/String;[Ljavax/naming/directory/ModificationItem;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_modifyAttributes_nns", "(Ljava/lang/String;ILjavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_modifyAttributes_nns", "(Ljava/lang/String;[Ljavax/naming/directory/ModificationItem;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_rebind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_rebind_nns", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_search", "(Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_search", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_search", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"a_search_nns", "(Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_search_nns", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"a_search_nns", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_bind_nns", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_createSubcontext_nns", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getAttributes_nns", "(Ljavax/naming/Name;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getSchema", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getSchemaClassDefinition", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getSchemaClassDefinition_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_getSchema_nns", "(Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_modifyAttributes_nns", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_modifyAttributes_nns", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_rebind_nns", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_search_nns", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_search_nns", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"c_search_nns", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;Lcom/sun/jndi/toolkit/ctx/Continuation;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _AtomicDirContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jndi.toolkit.ctx.AtomicDirContext",
	"com.sun.jndi.toolkit.ctx.ComponentDirContext",
	nullptr,
	nullptr,
	_AtomicDirContext_MethodInfo_
};

$Object* allocate$AtomicDirContext($Class* clazz) {
	return $of($alloc(AtomicDirContext));
}

void AtomicDirContext::init$() {
	$ComponentDirContext::init$();
	this->_contextType = $PartialCompositeContext::_ATOMIC;
}

$Attributes* AtomicDirContext::a_getAttributes_nns($String* name, $StringArray* attrIds, $Continuation* cont) {
	a_processJunction_nns(name, cont);
	return nullptr;
}

void AtomicDirContext::a_modifyAttributes_nns($String* name, int32_t mod_op, $Attributes* attrs, $Continuation* cont) {
	a_processJunction_nns(name, cont);
}

void AtomicDirContext::a_modifyAttributes_nns($String* name, $ModificationItemArray* mods, $Continuation* cont) {
	a_processJunction_nns(name, cont);
}

void AtomicDirContext::a_bind_nns($String* name, Object$* obj, $Attributes* attrs, $Continuation* cont) {
	a_processJunction_nns(name, cont);
}

void AtomicDirContext::a_rebind_nns($String* name, Object$* obj, $Attributes* attrs, $Continuation* cont) {
	a_processJunction_nns(name, cont);
}

$DirContext* AtomicDirContext::a_createSubcontext_nns($String* name, $Attributes* attrs, $Continuation* cont) {
	a_processJunction_nns(name, cont);
	return nullptr;
}

$NamingEnumeration* AtomicDirContext::a_search_nns($Attributes* matchingAttributes, $StringArray* attributesToReturn, $Continuation* cont) {
	a_processJunction_nns(cont);
	return nullptr;
}

$NamingEnumeration* AtomicDirContext::a_search_nns($String* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons, $Continuation* cont) {
	a_processJunction_nns(name, cont);
	return nullptr;
}

$NamingEnumeration* AtomicDirContext::a_search_nns($String* name, $String* filter, $SearchControls* cons, $Continuation* cont) {
	a_processJunction_nns(name, cont);
	return nullptr;
}

$DirContext* AtomicDirContext::a_getSchema_nns($Continuation* cont) {
	a_processJunction_nns(cont);
	return nullptr;
}

$DirContext* AtomicDirContext::a_getSchemaDefinition_nns($Continuation* cont) {
	a_processJunction_nns(cont);
	return nullptr;
}

$Attributes* AtomicDirContext::c_getAttributes($Name* name, $StringArray* attrIds, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		return a_getAttributes($($nc($of(name))->toString()), attrIds, cont);
	}
	return nullptr;
}

void AtomicDirContext::c_modifyAttributes($Name* name, int32_t mod_op, $Attributes* attrs, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		a_modifyAttributes($($nc($of(name))->toString()), mod_op, attrs, cont);
	}
}

void AtomicDirContext::c_modifyAttributes($Name* name, $ModificationItemArray* mods, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		a_modifyAttributes($($nc($of(name))->toString()), mods, cont);
	}
}

void AtomicDirContext::c_bind($Name* name, Object$* obj, $Attributes* attrs, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		a_bind($($nc($of(name))->toString()), obj, attrs, cont);
	}
}

void AtomicDirContext::c_rebind($Name* name, Object$* obj, $Attributes* attrs, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		a_rebind($($nc($of(name))->toString()), obj, attrs, cont);
	}
}

$DirContext* AtomicDirContext::c_createSubcontext($Name* name, $Attributes* attrs, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		return a_createSubcontext($($nc($of(name))->toString()), attrs, cont);
	}
	return nullptr;
}

$NamingEnumeration* AtomicDirContext::c_search($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn, $Continuation* cont) {
	if (resolve_to_context(name, cont)) {
		return a_search(matchingAttributes, attributesToReturn, cont);
	}
	return nullptr;
}

$NamingEnumeration* AtomicDirContext::c_search($Name* name, $String* filter, $SearchControls* cons, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		return a_search($($nc($of(name))->toString()), filter, cons, cont);
	}
	return nullptr;
}

$NamingEnumeration* AtomicDirContext::c_search($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons, $Continuation* cont) {
	if (resolve_to_penultimate_context(name, cont)) {
		return a_search($($nc($of(name))->toString()), filterExpr, filterArgs, cons, cont);
	}
	return nullptr;
}

$DirContext* AtomicDirContext::c_getSchema($Name* name, $Continuation* cont) {
	if (resolve_to_context(name, cont)) {
		return a_getSchema(cont);
	}
	return nullptr;
}

$DirContext* AtomicDirContext::c_getSchemaClassDefinition($Name* name, $Continuation* cont) {
	if (resolve_to_context(name, cont)) {
		return a_getSchemaClassDefinition(cont);
	}
	return nullptr;
}

$Attributes* AtomicDirContext::c_getAttributes_nns($Name* name, $StringArray* attrIds, $Continuation* cont) {
	if (resolve_to_penultimate_context_nns(name, cont)) {
		return a_getAttributes_nns($($nc($of(name))->toString()), attrIds, cont);
	}
	return nullptr;
}

void AtomicDirContext::c_modifyAttributes_nns($Name* name, int32_t mod_op, $Attributes* attrs, $Continuation* cont) {
	if (resolve_to_penultimate_context_nns(name, cont)) {
		a_modifyAttributes_nns($($nc($of(name))->toString()), mod_op, attrs, cont);
	}
}

void AtomicDirContext::c_modifyAttributes_nns($Name* name, $ModificationItemArray* mods, $Continuation* cont) {
	if (resolve_to_penultimate_context_nns(name, cont)) {
		a_modifyAttributes_nns($($nc($of(name))->toString()), mods, cont);
	}
}

void AtomicDirContext::c_bind_nns($Name* name, Object$* obj, $Attributes* attrs, $Continuation* cont) {
	if (resolve_to_penultimate_context_nns(name, cont)) {
		a_bind_nns($($nc($of(name))->toString()), obj, attrs, cont);
	}
}

void AtomicDirContext::c_rebind_nns($Name* name, Object$* obj, $Attributes* attrs, $Continuation* cont) {
	if (resolve_to_penultimate_context_nns(name, cont)) {
		a_rebind_nns($($nc($of(name))->toString()), obj, attrs, cont);
	}
}

$DirContext* AtomicDirContext::c_createSubcontext_nns($Name* name, $Attributes* attrs, $Continuation* cont) {
	if (resolve_to_penultimate_context_nns(name, cont)) {
		return a_createSubcontext_nns($($nc($of(name))->toString()), attrs, cont);
	}
	return nullptr;
}

$NamingEnumeration* AtomicDirContext::c_search_nns($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn, $Continuation* cont) {
	resolve_to_nns_and_continue(name, cont);
	return nullptr;
}

$NamingEnumeration* AtomicDirContext::c_search_nns($Name* name, $String* filter, $SearchControls* cons, $Continuation* cont) {
	if (resolve_to_penultimate_context_nns(name, cont)) {
		return a_search_nns($($nc($of(name))->toString()), filter, cons, cont);
	}
	return nullptr;
}

$NamingEnumeration* AtomicDirContext::c_search_nns($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons, $Continuation* cont) {
	if (resolve_to_penultimate_context_nns(name, cont)) {
		return a_search_nns($($nc($of(name))->toString()), filterExpr, filterArgs, cons, cont);
	}
	return nullptr;
}

$DirContext* AtomicDirContext::c_getSchema_nns($Name* name, $Continuation* cont) {
	resolve_to_nns_and_continue(name, cont);
	return nullptr;
}

$DirContext* AtomicDirContext::c_getSchemaClassDefinition_nns($Name* name, $Continuation* cont) {
	resolve_to_nns_and_continue(name, cont);
	return nullptr;
}

AtomicDirContext::AtomicDirContext() {
}

$Class* AtomicDirContext::load$($String* name, bool initialize) {
	$loadClass(AtomicDirContext, name, initialize, &_AtomicDirContext_ClassInfo_, allocate$AtomicDirContext);
	return class$;
}

$Class* AtomicDirContext::class$ = nullptr;

				} // ctx
			} // toolkit
		} // jndi
	} // sun
} // com