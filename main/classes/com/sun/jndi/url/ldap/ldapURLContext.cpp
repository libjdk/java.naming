#include <com/sun/jndi/url/ldap/ldapURLContext.h>

#include <com/sun/jndi/ldap/LdapURL.h>
#include <com/sun/jndi/toolkit/url/GenericURLContext.h>
#include <com/sun/jndi/toolkit/url/GenericURLDirContext.h>
#include <com/sun/jndi/url/ldap/ldapURLContextFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <java/util/StringTokenizer.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/spi/ResolveResult.h>
#include <jcpp.h>

#undef OBJECT_SCOPE
#undef ONELEVEL_SCOPE
#undef SUBTREE_SCOPE

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $LdapURL = ::com::sun::jndi::ldap::LdapURL;
using $GenericURLContext = ::com::sun::jndi::toolkit::url::GenericURLContext;
using $GenericURLDirContext = ::com::sun::jndi::toolkit::url::GenericURLDirContext;
using $ldapURLContextFactory = ::com::sun::jndi::url::ldap::ldapURLContextFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $StringTokenizer = ::java::util::StringTokenizer;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $ResolveResult = ::javax::naming::spi::ResolveResult;

namespace com {
	namespace sun {
		namespace jndi {
			namespace url {
				namespace ldap {

$MethodInfo _ldapURLContext_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", 0, $method(static_cast<void(ldapURLContext::*)($Hashtable*)>(&ldapURLContext::init$))},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getRootURLContext", "(Ljava/lang/String;Ljava/util/Hashtable;)Ljavax/naming/spi/ResolveResult;", "(Ljava/lang/String;Ljava/util/Hashtable<**>;)Ljavax/naming/spi/ResolveResult;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getSchema", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchema", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getURLSuffix", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"list", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"list", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"listBindings", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"listBindings", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookup", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookupLink", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookupLink", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljava/lang/String;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljava/lang/String;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"searchUsingURL", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PRIVATE, $method(static_cast<$NamingEnumeration*(ldapURLContext::*)($String*)>(&ldapURLContext::searchUsingURL)), "javax.naming.NamingException"},
	{"setFilterUsingURL", "(Lcom/sun/jndi/ldap/LdapURL;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($LdapURL*)>(&ldapURLContext::setFilterUsingURL))},
	{"setSearchControlsUsingURL", "(Lcom/sun/jndi/ldap/LdapURL;)Ljavax/naming/directory/SearchControls;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SearchControls*(*)($LdapURL*)>(&ldapURLContext::setSearchControlsUsingURL))},
	{"unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _ldapURLContext_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.url.ldap.ldapURLContext",
	"com.sun.jndi.toolkit.url.GenericURLDirContext",
	nullptr,
	nullptr,
	_ldapURLContext_MethodInfo_
};

$Object* allocate$ldapURLContext($Class* clazz) {
	return $of($alloc(ldapURLContext));
}

void ldapURLContext::init$($Hashtable* env) {
	$GenericURLDirContext::init$(env);
}

$ResolveResult* ldapURLContext::getRootURLContext($String* name, $Hashtable* env) {
	return $ldapURLContextFactory::getUsingURLIgnoreRootDN(name, env);
}

$Name* ldapURLContext::getURLSuffix($String* prefix, $String* url) {
	$useLocalCurrentObjectStackCache();
	$var($LdapURL, ldapUrl, $new($LdapURL, url));
	$var($String, dn, ldapUrl->getDN() != nullptr ? ldapUrl->getDN() : ""_s);
	$var($CompositeName, remaining, $new($CompositeName));
	if (!""_s->equals(dn)) {
		remaining->add(dn);
	}
	return remaining;
}

$Object* ldapURLContext::lookup($String* name) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		return $of($GenericURLDirContext::lookup(name));
	}
}

$Object* ldapURLContext::lookup($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		return $of($GenericURLDirContext::lookup(name));
	}
}

void ldapURLContext::bind($String* name, Object$* obj) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		$GenericURLDirContext::bind(name, obj);
	}
}

void ldapURLContext::bind($Name* name, Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		$GenericURLDirContext::bind(name, obj);
	}
}

void ldapURLContext::rebind($String* name, Object$* obj) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		$GenericURLDirContext::rebind(name, obj);
	}
}

void ldapURLContext::rebind($Name* name, Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		$GenericURLDirContext::rebind(name, obj);
	}
}

void ldapURLContext::unbind($String* name) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		$GenericURLDirContext::unbind(name);
	}
}

void ldapURLContext::unbind($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		$GenericURLDirContext::unbind(name);
	}
}

void ldapURLContext::rename($String* oldName, $String* newName) {
	if ($LdapURL::hasQueryComponents(oldName)) {
		$throwNew($InvalidNameException, oldName);
	} else if ($LdapURL::hasQueryComponents(newName)) {
		$throwNew($InvalidNameException, newName);
	} else {
		$GenericURLDirContext::rename(oldName, newName);
	}
}

void ldapURLContext::rename($Name* oldName, $Name* newName) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(oldName)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(oldName))->toString()));
	} else if ($LdapURL::hasQueryComponents($($nc(newName)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(newName))->toString()));
	} else {
		$GenericURLDirContext::rename(oldName, newName);
	}
}

$NamingEnumeration* ldapURLContext::list($String* name) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		return $GenericURLDirContext::list(name);
	}
}

$NamingEnumeration* ldapURLContext::list($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		return $GenericURLDirContext::list(name);
	}
}

$NamingEnumeration* ldapURLContext::listBindings($String* name) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		return $GenericURLDirContext::listBindings(name);
	}
}

$NamingEnumeration* ldapURLContext::listBindings($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		return $GenericURLDirContext::listBindings(name);
	}
}

void ldapURLContext::destroySubcontext($String* name) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		$GenericURLDirContext::destroySubcontext(name);
	}
}

void ldapURLContext::destroySubcontext($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		$GenericURLDirContext::destroySubcontext(name);
	}
}

$Context* ldapURLContext::createSubcontext($String* name) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		return $GenericURLDirContext::createSubcontext(name);
	}
}

$Context* ldapURLContext::createSubcontext($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		return $GenericURLDirContext::createSubcontext(name);
	}
}

$Object* ldapURLContext::lookupLink($String* name) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		return $of($GenericURLDirContext::lookupLink(name));
	}
}

$Object* ldapURLContext::lookupLink($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		return $of($GenericURLDirContext::lookupLink(name));
	}
}

$NameParser* ldapURLContext::getNameParser($String* name) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		return $GenericURLDirContext::getNameParser(name);
	}
}

$NameParser* ldapURLContext::getNameParser($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		return $GenericURLDirContext::getNameParser(name);
	}
}

$String* ldapURLContext::composeName($String* name, $String* prefix) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else if ($LdapURL::hasQueryComponents(prefix)) {
		$throwNew($InvalidNameException, prefix);
	} else {
		return $GenericURLDirContext::composeName(name, prefix);
	}
}

$Name* ldapURLContext::composeName($Name* name, $Name* prefix) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else if ($LdapURL::hasQueryComponents($($nc(prefix)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(prefix))->toString()));
	} else {
		return $GenericURLDirContext::composeName(name, prefix);
	}
}

$Attributes* ldapURLContext::getAttributes($String* name) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		return $GenericURLDirContext::getAttributes(name);
	}
}

$Attributes* ldapURLContext::getAttributes($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		return $GenericURLDirContext::getAttributes(name);
	}
}

$Attributes* ldapURLContext::getAttributes($String* name, $StringArray* attrIds) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		return $GenericURLDirContext::getAttributes(name, attrIds);
	}
}

$Attributes* ldapURLContext::getAttributes($Name* name, $StringArray* attrIds) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		return $GenericURLDirContext::getAttributes(name, attrIds);
	}
}

void ldapURLContext::modifyAttributes($String* name, int32_t mod_op, $Attributes* attrs) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		$GenericURLDirContext::modifyAttributes(name, mod_op, attrs);
	}
}

void ldapURLContext::modifyAttributes($Name* name, int32_t mod_op, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		$GenericURLDirContext::modifyAttributes(name, mod_op, attrs);
	}
}

void ldapURLContext::modifyAttributes($String* name, $ModificationItemArray* mods) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		$GenericURLDirContext::modifyAttributes(name, mods);
	}
}

void ldapURLContext::modifyAttributes($Name* name, $ModificationItemArray* mods) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		$GenericURLDirContext::modifyAttributes(name, mods);
	}
}

void ldapURLContext::bind($String* name, Object$* obj, $Attributes* attrs) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		$GenericURLDirContext::bind(name, obj, attrs);
	}
}

void ldapURLContext::bind($Name* name, Object$* obj, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		$GenericURLDirContext::bind(name, obj, attrs);
	}
}

void ldapURLContext::rebind($String* name, Object$* obj, $Attributes* attrs) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		$GenericURLDirContext::rebind(name, obj, attrs);
	}
}

void ldapURLContext::rebind($Name* name, Object$* obj, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		$GenericURLDirContext::rebind(name, obj, attrs);
	}
}

$DirContext* ldapURLContext::createSubcontext($String* name, $Attributes* attrs) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		return $GenericURLDirContext::createSubcontext(name, attrs);
	}
}

$DirContext* ldapURLContext::createSubcontext($Name* name, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		return $GenericURLDirContext::createSubcontext(name, attrs);
	}
}

$DirContext* ldapURLContext::getSchema($String* name) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		return $GenericURLDirContext::getSchema(name);
	}
}

$DirContext* ldapURLContext::getSchema($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		return $GenericURLDirContext::getSchema(name);
	}
}

$DirContext* ldapURLContext::getSchemaClassDefinition($String* name) {
	if ($LdapURL::hasQueryComponents(name)) {
		$throwNew($InvalidNameException, name);
	} else {
		return $GenericURLDirContext::getSchemaClassDefinition(name);
	}
}

$DirContext* ldapURLContext::getSchemaClassDefinition($Name* name) {
	$useLocalCurrentObjectStackCache();
	if ($LdapURL::hasQueryComponents($($nc(name)->get(0)))) {
		$throwNew($InvalidNameException, $($nc($of(name))->toString()));
	} else {
		return $GenericURLDirContext::getSchemaClassDefinition(name);
	}
}

$NamingEnumeration* ldapURLContext::search($String* name, $Attributes* matchingAttributes) {
	if ($LdapURL::hasQueryComponents(name)) {
		return searchUsingURL(name);
	} else {
		return $GenericURLDirContext::search(name, matchingAttributes);
	}
}

$NamingEnumeration* ldapURLContext::search($Name* name, $Attributes* matchingAttributes) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return search($(name->get(0)), matchingAttributes);
	} else if ($LdapURL::hasQueryComponents($(name->get(0)))) {
		$throwNew($InvalidNameException, $($of(name)->toString()));
	} else {
		return $GenericURLDirContext::search(name, matchingAttributes);
	}
}

$NamingEnumeration* ldapURLContext::search($String* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	if ($LdapURL::hasQueryComponents(name)) {
		return searchUsingURL(name);
	} else {
		return $GenericURLDirContext::search(name, matchingAttributes, attributesToReturn);
	}
}

$NamingEnumeration* ldapURLContext::search($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return search($(name->get(0)), matchingAttributes, attributesToReturn);
	} else if ($LdapURL::hasQueryComponents($(name->get(0)))) {
		$throwNew($InvalidNameException, $($of(name)->toString()));
	} else {
		return $GenericURLDirContext::search(name, matchingAttributes, attributesToReturn);
	}
}

$NamingEnumeration* ldapURLContext::search($String* name, $String* filter, $SearchControls* cons) {
	if ($LdapURL::hasQueryComponents(name)) {
		return searchUsingURL(name);
	} else {
		return $GenericURLDirContext::search(name, filter, cons);
	}
}

$NamingEnumeration* ldapURLContext::search($Name* name, $String* filter, $SearchControls* cons) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return search($(name->get(0)), filter, cons);
	} else if ($LdapURL::hasQueryComponents($(name->get(0)))) {
		$throwNew($InvalidNameException, $($of(name)->toString()));
	} else {
		return $GenericURLDirContext::search(name, filter, cons);
	}
}

$NamingEnumeration* ldapURLContext::search($String* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	if ($LdapURL::hasQueryComponents(name)) {
		return searchUsingURL(name);
	} else {
		return $GenericURLDirContext::search(name, filterExpr, filterArgs, cons);
	}
}

$NamingEnumeration* ldapURLContext::search($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	$useLocalCurrentObjectStackCache();
	if ($nc(name)->size() == 1) {
		return search($(name->get(0)), filterExpr, filterArgs, cons);
	} else if ($LdapURL::hasQueryComponents($(name->get(0)))) {
		$throwNew($InvalidNameException, $($of(name)->toString()));
	} else {
		return $GenericURLDirContext::search(name, filterExpr, filterArgs, cons);
	}
}

$NamingEnumeration* ldapURLContext::searchUsingURL($String* name) {
	$useLocalCurrentObjectStackCache();
	$var($LdapURL, url, $new($LdapURL, name));
	$var($ResolveResult, res, getRootURLContext(name, this->myEnv));
	$var($DirContext, ctx, $cast($DirContext, $nc(res)->getResolvedObj()));
	{
		$var($Throwable, var$0, nullptr);
		$var($NamingEnumeration, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($Name, var$3, res->getRemainingName());
			$var($String, var$4, setFilterUsingURL(url));
			$assign(var$2, $nc(ctx)->search(var$3, var$4, $(setSearchControlsUsingURL(url))));
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

$String* ldapURLContext::setFilterUsingURL($LdapURL* url) {
	$init(ldapURLContext);
	$var($String, filter, $nc(url)->getFilter());
	if (filter == nullptr) {
		$assign(filter, "(objectClass=*)"_s);
	}
	return filter;
}

$SearchControls* ldapURLContext::setSearchControlsUsingURL($LdapURL* url) {
	$init(ldapURLContext);
	$useLocalCurrentObjectStackCache();
	$var($SearchControls, cons, $new($SearchControls));
	$var($String, scope, $nc(url)->getScope());
	$var($String, attributes, url->getAttributes());
	if (scope == nullptr) {
		cons->setSearchScope($SearchControls::OBJECT_SCOPE);
	} else if ($nc(scope)->equals("sub"_s)) {
		cons->setSearchScope($SearchControls::SUBTREE_SCOPE);
	} else if (scope->equals("one"_s)) {
		cons->setSearchScope($SearchControls::ONELEVEL_SCOPE);
	} else if (scope->equals("base"_s)) {
		cons->setSearchScope($SearchControls::OBJECT_SCOPE);
	}
	if (attributes == nullptr) {
		cons->setReturningAttributes(nullptr);
	} else {
		$var($StringTokenizer, tokens, $new($StringTokenizer, attributes, ","_s));
		int32_t count = tokens->countTokens();
		$var($StringArray, attrs, $new($StringArray, count));
		for (int32_t i = 0; i < count; ++i) {
			attrs->set(i, $(tokens->nextToken()));
		}
		cons->setReturningAttributes(attrs);
	}
	return cons;
}

ldapURLContext::ldapURLContext() {
}

$Class* ldapURLContext::load$($String* name, bool initialize) {
	$loadClass(ldapURLContext, name, initialize, &_ldapURLContext_ClassInfo_, allocate$ldapURLContext);
	return class$;
}

$Class* ldapURLContext::class$ = nullptr;

				} // ldap
			} // url
		} // jndi
	} // sun
} // com