#include <com/sun/jndi/ldap/LdapReferralContext.h>

#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapReferralException.h>
#include <com/sun/jndi/ldap/LdapURL.h>
#include <com/sun/jndi/ldap/ReferralEnumeration.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <java/util/StringTokenizer.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/NotContextException.h>
#include <javax/naming/RefAddr.h>
#include <javax/naming/Reference.h>
#include <javax/naming/StringRefAddr.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/ExtendedRequest.h>
#include <javax/naming/ldap/ExtendedResponse.h>
#include <javax/naming/ldap/LdapContext.h>
#include <javax/naming/spi/NamingManager.h>
#include <jcpp.h>

#undef BIND_CONTROLS
#undef LDAP_REF_THROW
#undef OBJECT_SCOPE
#undef ONELEVEL_SCOPE
#undef SUBTREE_SCOPE

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapReferralException = ::com::sun::jndi::ldap::LdapReferralException;
using $LdapURL = ::com::sun::jndi::ldap::LdapURL;
using $ReferralEnumeration = ::com::sun::jndi::ldap::ReferralEnumeration;
using $SearchFilter = ::com::sun::jndi::toolkit::dir::SearchFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $StringTokenizer = ::java::util::StringTokenizer;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $NotContextException = ::javax::naming::NotContextException;
using $RefAddr = ::javax::naming::RefAddr;
using $Reference = ::javax::naming::Reference;
using $StringRefAddr = ::javax::naming::StringRefAddr;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $Control = ::javax::naming::ldap::Control;
using $ExtendedRequest = ::javax::naming::ldap::ExtendedRequest;
using $ExtendedResponse = ::javax::naming::ldap::ExtendedResponse;
using $LdapContext = ::javax::naming::ldap::LdapContext;
using $NamingManager = ::javax::naming::spi::NamingManager;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapReferralContext_FieldInfo_[] = {
	{"refCtx", "Ljavax/naming/directory/DirContext;", nullptr, $PRIVATE, $field(LdapReferralContext, refCtx)},
	{"urlName", "Ljavax/naming/Name;", nullptr, $PRIVATE, $field(LdapReferralContext, urlName)},
	{"urlAttrs", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapReferralContext, urlAttrs)},
	{"urlScope", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapReferralContext, urlScope)},
	{"urlFilter", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapReferralContext, urlFilter)},
	{"refEx", "Lcom/sun/jndi/ldap/LdapReferralException;", nullptr, $PRIVATE, $field(LdapReferralContext, refEx)},
	{"skipThisReferral", "Z", nullptr, $PRIVATE, $field(LdapReferralContext, skipThisReferral)},
	{"hopCount", "I", nullptr, $PRIVATE, $field(LdapReferralContext, hopCount)},
	{"previousEx", "Ljavax/naming/NamingException;", nullptr, $PRIVATE, $field(LdapReferralContext, previousEx)},
	{}
};

$MethodInfo _LdapReferralContext_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/LdapReferralException;Ljava/util/Hashtable;[Ljavax/naming/ldap/Control;[Ljavax/naming/ldap/Control;Ljava/lang/String;ZI)V", "(Lcom/sun/jndi/ldap/LdapReferralException;Ljava/util/Hashtable<**>;[Ljavax/naming/ldap/Control;[Ljavax/naming/ldap/Control;Ljava/lang/String;ZI)V", 0, $method(static_cast<void(LdapReferralContext::*)($LdapReferralException*,$Hashtable*,$ControlArray*,$ControlArray*,$String*,bool,int32_t)>(&LdapReferralContext::init$)), "javax.naming.NamingException"},
	{"addToEnvironment", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"extendedOperation", "(Ljavax/naming/ldap/ExtendedRequest;)Ljavax/naming/ldap/ExtendedResponse;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getConnectControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getEnvironment", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<**>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getRequestControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getResponseControls", "()[Ljavax/naming/ldap/Control;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchema", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchema", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"initDefaults", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapReferralContext::*)($String*,$String*)>(&LdapReferralContext::initDefaults)), "javax.naming.NamingException"},
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
	{"newInstance", "([Ljavax/naming/ldap/Control;)Ljavax/naming/ldap/LdapContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"overrideAttributesAndScope", "(Ljavax/naming/directory/SearchControls;)Ljavax/naming/directory/SearchControls;", nullptr, $PRIVATE, $method(static_cast<$SearchControls*(LdapReferralContext::*)($SearchControls*)>(&LdapReferralContext::overrideAttributesAndScope))},
	{"overrideFilter", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(LdapReferralContext::*)($String*)>(&LdapReferralContext::overrideFilter))},
	{"overrideName", "(Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(LdapReferralContext::*)($Name*)>(&LdapReferralContext::overrideName)), "javax.naming.InvalidNameException"},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"reconnect", "([Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"removeFromEnvironment", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
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
	{"setHopCount", "(I)V", nullptr, 0, $method(static_cast<void(LdapReferralContext::*)(int32_t)>(&LdapReferralContext::setHopCount))},
	{"setRequestControls", "([Ljavax/naming/ldap/Control;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"toName", "(Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PRIVATE, $method(static_cast<$Name*(LdapReferralContext::*)($String*)>(&LdapReferralContext::toName)), "javax.naming.InvalidNameException"},
	{"unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _LdapReferralContext_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapReferralContext",
	"java.lang.Object",
	"javax.naming.ldap.LdapContext",
	_LdapReferralContext_FieldInfo_,
	_LdapReferralContext_MethodInfo_
};

$Object* allocate$LdapReferralContext($Class* clazz) {
	return $of($alloc(LdapReferralContext));
}

void LdapReferralContext::init$($LdapReferralException* ex, $Hashtable* env$renamed, $ControlArray* connCtls, $ControlArray* reqCtls, $String* nextName, bool skipThisReferral, int32_t handleReferrals) {
	$useLocalCurrentObjectStackCache();
	$var($Hashtable, env, env$renamed);
	$set(this, refCtx, nullptr);
	$set(this, urlName, nullptr);
	$set(this, urlAttrs, nullptr);
	$set(this, urlScope, nullptr);
	$set(this, urlFilter, nullptr);
	$set(this, refEx, nullptr);
	this->skipThisReferral = false;
	this->hopCount = 1;
	$set(this, previousEx, nullptr);
	$set(this, refEx, ex);
	if (this->skipThisReferral = skipThisReferral) {
		return;
	}
	$var($String, referral, nullptr);
	if (env != nullptr) {
		$assign(env, $cast($Hashtable, env->clone()));
		if (connCtls == nullptr) {
			$init($LdapCtx);
			$nc(env)->remove($LdapCtx::BIND_CONTROLS);
		}
	} else if (connCtls != nullptr) {
		$assign(env, $new($Hashtable, 5));
	}
	if (connCtls != nullptr) {
		$var($ControlArray, copiedCtls, $new($ControlArray, connCtls->length));
		$System::arraycopy(connCtls, 0, copiedCtls, 0, connCtls->length);
		$init($LdapCtx);
		$nc((env))->put($LdapCtx::BIND_CONTROLS, copiedCtls);
	}
	while (true) {
		try {
			$assign(referral, $nc(this->refEx)->getNextReferral());
			if (referral == nullptr) {
				if (this->previousEx != nullptr) {
					$throw(($cast($NamingException, $($nc(this->previousEx)->fillInStackTrace()))));
				} else {
					$throwNew($NamingException, "Illegal encoding: referral is empty"_s);
				}
			}
		} catch ($LdapReferralException&) {
			$var($LdapReferralException, e, $catch());
			if (handleReferrals == $LdapClient::LDAP_REF_THROW) {
				$throw(e);
			} else {
				$set(this, refEx, e);
				continue;
			}
		}
		$var($Reference, ref, $new($Reference, "javax.naming.directory.DirContext"_s, $$new($StringRefAddr, "URL"_s, referral)));
		$var($Object, obj, nullptr);
		try {
			$assign(obj, $NamingManager::getObjectInstance(ref, nullptr, nullptr, env));
		} catch ($NamingException&) {
			$var($NamingException, e, $catch());
			if (handleReferrals == $LdapClient::LDAP_REF_THROW) {
				$throw(e);
			}
			$set(this, previousEx, e);
			continue;
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$var($NamingException, e2, $new($NamingException, "problem generating object using object factory"_s));
			e2->setRootCause(e);
			$throw(e2);
		}
		if ($instanceOf($DirContext, obj)) {
			$set(this, refCtx, $cast($DirContext, obj));
			if ($instanceOf($LdapContext, this->refCtx) && reqCtls != nullptr) {
				$nc(($cast($LdapContext, this->refCtx)))->setRequestControls(reqCtls);
			}
			initDefaults(referral, nextName);
			break;
		} else {
			$var($NamingException, ne, $new($NotContextException, $$str({"Cannot create context for: "_s, referral})));
			ne->setRemainingName($(($$new($CompositeName))->add(nextName)));
			$throw(ne);
		}
	}
}

void LdapReferralContext::initDefaults($String* referral, $String* nextName) {
	$useLocalCurrentObjectStackCache();
	$var($String, urlString, nullptr);
	try {
		$var($LdapURL, url, $new($LdapURL, referral));
		$assign(urlString, url->getDN());
		$set(this, urlAttrs, url->getAttributes());
		$set(this, urlScope, url->getScope());
		$set(this, urlFilter, url->getFilter());
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$assign(urlString, referral);
		$set(this, urlAttrs, ($assignField(this, urlScope, ($assignField(this, urlFilter, nullptr)))));
	}
	if (urlString == nullptr) {
		$assign(urlString, nextName);
	} else {
		$assign(urlString, ""_s);
	}
	if (urlString == nullptr) {
		$set(this, urlName, nullptr);
	} else {
		$set(this, urlName, $nc(urlString)->isEmpty() ? static_cast<$Name*>($new($CompositeName)) : $$new($CompositeName)->add(urlString));
	}
}

void LdapReferralContext::close() {
	if (this->refCtx != nullptr) {
		$nc(this->refCtx)->close();
		$set(this, refCtx, nullptr);
	}
	$set(this, refEx, nullptr);
}

void LdapReferralContext::setHopCount(int32_t hopCount) {
	this->hopCount = hopCount;
	if ((this->refCtx != nullptr) && ($instanceOf($LdapCtx, this->refCtx))) {
		$nc(($cast($LdapCtx, this->refCtx)))->setHopCount(hopCount);
	}
}

$Object* LdapReferralContext::lookup($String* name) {
	return $of(lookup($(toName(name))));
}

$Object* LdapReferralContext::lookup($Name* name) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $of($nc(this->refCtx)->lookup($(overrideName(name))));
}

void LdapReferralContext::bind($String* name, Object$* obj) {
	bind($(toName(name)), obj);
}

void LdapReferralContext::bind($Name* name, Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	$nc(this->refCtx)->bind($(overrideName(name)), obj);
}

void LdapReferralContext::rebind($String* name, Object$* obj) {
	rebind($(toName(name)), obj);
}

void LdapReferralContext::rebind($Name* name, Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	$nc(this->refCtx)->rebind($(overrideName(name)), obj);
}

void LdapReferralContext::unbind($String* name) {
	unbind($(toName(name)));
}

void LdapReferralContext::unbind($Name* name) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	$nc(this->refCtx)->unbind($(overrideName(name)));
}

void LdapReferralContext::rename($String* oldName, $String* newName) {
	$useLocalCurrentObjectStackCache();
	$var($Name, var$0, toName(oldName));
	rename(var$0, $(toName(newName)));
}

void LdapReferralContext::rename($Name* oldName, $Name* newName) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	$var($Name, var$0, overrideName(oldName));
	$nc(this->refCtx)->rename(var$0, $(toName($($nc(this->refEx)->getNewRdn()))));
}

$NamingEnumeration* LdapReferralContext::list($String* name) {
	return list($(toName(name)));
}

$NamingEnumeration* LdapReferralContext::list($Name* name) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	try {
		$var($NamingEnumeration, ne, nullptr);
		if (this->urlScope != nullptr && $nc(this->urlScope)->equals("base"_s)) {
			$var($SearchControls, cons, $new($SearchControls));
			cons->setReturningObjFlag(true);
			cons->setSearchScope($SearchControls::OBJECT_SCOPE);
			$assign(ne, $nc(this->refCtx)->search($(overrideName(name)), "(objectclass=*)"_s, cons));
		} else {
			$assign(ne, $nc(this->refCtx)->list($(overrideName(name))));
		}
		$nc(this->refEx)->setNameResolved(true);
		$nc(($cast($ReferralEnumeration, ne)))->appendUnprocessedReferrals(this->refEx);
		return (ne);
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		e->appendUnprocessedReferrals(this->refEx);
		$throw(($cast($NamingException, $(e->fillInStackTrace()))));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		if ((this->refEx != nullptr) && (!$nc(this->refEx)->hasMoreReferrals())) {
			$nc(this->refEx)->setNamingException(e);
		}
		bool var$0 = (this->refEx != nullptr);
		if (var$0) {
			bool var$1 = $nc(this->refEx)->hasMoreReferrals();
			var$0 = (var$1 || $nc(this->refEx)->hasMoreReferralExceptions());
		}
		if (var$0) {
			$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
		} else {
			$throw(e);
		}
	}
	$shouldNotReachHere();
}

$NamingEnumeration* LdapReferralContext::listBindings($String* name) {
	return listBindings($(toName(name)));
}

$NamingEnumeration* LdapReferralContext::listBindings($Name* name) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	try {
		$var($NamingEnumeration, be, nullptr);
		if (this->urlScope != nullptr && $nc(this->urlScope)->equals("base"_s)) {
			$var($SearchControls, cons, $new($SearchControls));
			cons->setReturningObjFlag(true);
			cons->setSearchScope($SearchControls::OBJECT_SCOPE);
			$assign(be, $nc(this->refCtx)->search($(overrideName(name)), "(objectclass=*)"_s, cons));
		} else {
			$assign(be, $nc(this->refCtx)->listBindings($(overrideName(name))));
		}
		$nc(this->refEx)->setNameResolved(true);
		$nc(($cast($ReferralEnumeration, be)))->appendUnprocessedReferrals(this->refEx);
		return (be);
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		e->appendUnprocessedReferrals(this->refEx);
		$throw(($cast($NamingException, $(e->fillInStackTrace()))));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		if ((this->refEx != nullptr) && (!$nc(this->refEx)->hasMoreReferrals())) {
			$nc(this->refEx)->setNamingException(e);
		}
		bool var$0 = (this->refEx != nullptr);
		if (var$0) {
			bool var$1 = $nc(this->refEx)->hasMoreReferrals();
			var$0 = (var$1 || $nc(this->refEx)->hasMoreReferralExceptions());
		}
		if (var$0) {
			$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
		} else {
			$throw(e);
		}
	}
	$shouldNotReachHere();
}

void LdapReferralContext::destroySubcontext($String* name) {
	destroySubcontext($(toName(name)));
}

void LdapReferralContext::destroySubcontext($Name* name) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	$nc(this->refCtx)->destroySubcontext($(overrideName(name)));
}

$Context* LdapReferralContext::createSubcontext($String* name) {
	return createSubcontext($(toName(name)));
}

$Context* LdapReferralContext::createSubcontext($Name* name) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $nc(this->refCtx)->createSubcontext($(overrideName(name)));
}

$Object* LdapReferralContext::lookupLink($String* name) {
	return $of(lookupLink($(toName(name))));
}

$Object* LdapReferralContext::lookupLink($Name* name) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $of($nc(this->refCtx)->lookupLink($(overrideName(name))));
}

$NameParser* LdapReferralContext::getNameParser($String* name) {
	return getNameParser($(toName(name)));
}

$NameParser* LdapReferralContext::getNameParser($Name* name) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $nc(this->refCtx)->getNameParser($(overrideName(name)));
}

$String* LdapReferralContext::composeName($String* name, $String* prefix) {
	$useLocalCurrentObjectStackCache();
	$var($Name, var$0, toName(name));
	return $nc($of($(composeName(var$0, $(toName(prefix))))))->toString();
}

$Name* LdapReferralContext::composeName($Name* name, $Name* prefix) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $nc(this->refCtx)->composeName(name, prefix);
}

$Object* LdapReferralContext::addToEnvironment($String* propName, Object$* propVal) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $of($nc(this->refCtx)->addToEnvironment(propName, propVal));
}

$Object* LdapReferralContext::removeFromEnvironment($String* propName) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $of($nc(this->refCtx)->removeFromEnvironment(propName));
}

$Hashtable* LdapReferralContext::getEnvironment() {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $nc(this->refCtx)->getEnvironment();
}

$Attributes* LdapReferralContext::getAttributes($String* name) {
	return getAttributes($(toName(name)));
}

$Attributes* LdapReferralContext::getAttributes($Name* name) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $nc(this->refCtx)->getAttributes($(overrideName(name)));
}

$Attributes* LdapReferralContext::getAttributes($String* name, $StringArray* attrIds) {
	return getAttributes($(toName(name)), attrIds);
}

$Attributes* LdapReferralContext::getAttributes($Name* name, $StringArray* attrIds) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $nc(this->refCtx)->getAttributes($(overrideName(name)), attrIds);
}

void LdapReferralContext::modifyAttributes($String* name, int32_t mod_op, $Attributes* attrs) {
	modifyAttributes($(toName(name)), mod_op, attrs);
}

void LdapReferralContext::modifyAttributes($Name* name, int32_t mod_op, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	$nc(this->refCtx)->modifyAttributes($(overrideName(name)), mod_op, attrs);
}

void LdapReferralContext::modifyAttributes($String* name, $ModificationItemArray* mods) {
	modifyAttributes($(toName(name)), mods);
}

void LdapReferralContext::modifyAttributes($Name* name, $ModificationItemArray* mods) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	$nc(this->refCtx)->modifyAttributes($(overrideName(name)), mods);
}

void LdapReferralContext::bind($String* name, Object$* obj, $Attributes* attrs) {
	bind($(toName(name)), obj, attrs);
}

void LdapReferralContext::bind($Name* name, Object$* obj, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	$nc(this->refCtx)->bind($(overrideName(name)), obj, attrs);
}

void LdapReferralContext::rebind($String* name, Object$* obj, $Attributes* attrs) {
	rebind($(toName(name)), obj, attrs);
}

void LdapReferralContext::rebind($Name* name, Object$* obj, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	$nc(this->refCtx)->rebind($(overrideName(name)), obj, attrs);
}

$DirContext* LdapReferralContext::createSubcontext($String* name, $Attributes* attrs) {
	return createSubcontext($(toName(name)), attrs);
}

$DirContext* LdapReferralContext::createSubcontext($Name* name, $Attributes* attrs) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $nc(this->refCtx)->createSubcontext($(overrideName(name)), attrs);
}

$DirContext* LdapReferralContext::getSchema($String* name) {
	return getSchema($(toName(name)));
}

$DirContext* LdapReferralContext::getSchema($Name* name) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $nc(this->refCtx)->getSchema($(overrideName(name)));
}

$DirContext* LdapReferralContext::getSchemaClassDefinition($String* name) {
	return getSchemaClassDefinition($(toName(name)));
}

$DirContext* LdapReferralContext::getSchemaClassDefinition($Name* name) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return $nc(this->refCtx)->getSchemaClassDefinition($(overrideName(name)));
}

$NamingEnumeration* LdapReferralContext::search($String* name, $Attributes* matchingAttributes) {
	$useLocalCurrentObjectStackCache();
	$var($Name, var$0, toName(name));
	$var($String, var$1, $SearchFilter::format(matchingAttributes));
	return search(var$0, var$1, $$new($SearchControls));
}

$NamingEnumeration* LdapReferralContext::search($Name* name, $Attributes* matchingAttributes) {
	$useLocalCurrentObjectStackCache();
	$var($Name, var$0, name);
	$var($String, var$1, $SearchFilter::format(matchingAttributes));
	return search(var$0, var$1, $$new($SearchControls));
}

$NamingEnumeration* LdapReferralContext::search($String* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	$useLocalCurrentObjectStackCache();
	$var($SearchControls, cons, $new($SearchControls));
	cons->setReturningAttributes(attributesToReturn);
	$var($Name, var$0, toName(name));
	return search(var$0, $($SearchFilter::format(matchingAttributes)), cons);
}

$NamingEnumeration* LdapReferralContext::search($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	$useLocalCurrentObjectStackCache();
	$var($SearchControls, cons, $new($SearchControls));
	cons->setReturningAttributes(attributesToReturn);
	return search(name, $($SearchFilter::format(matchingAttributes)), cons);
}

$NamingEnumeration* LdapReferralContext::search($String* name, $String* filter, $SearchControls* cons) {
	return search($(toName(name)), filter, cons);
}

$NamingEnumeration* LdapReferralContext::search($Name* name, $String* filter, $SearchControls* cons) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	try {
		$var($Name, var$0, overrideName(name));
		$var($String, var$1, overrideFilter(filter));
		$var($NamingEnumeration, se, $nc(this->refCtx)->search(var$0, var$1, $(overrideAttributesAndScope(cons))));
		$nc(this->refEx)->setNameResolved(true);
		$nc(($cast($ReferralEnumeration, se)))->appendUnprocessedReferrals(this->refEx);
		return (se);
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		e->appendUnprocessedReferrals(this->refEx);
		$throw(($cast($NamingException, $(e->fillInStackTrace()))));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		if ((this->refEx != nullptr) && (!$nc(this->refEx)->hasMoreReferrals())) {
			$nc(this->refEx)->setNamingException(e);
		}
		bool var$2 = (this->refEx != nullptr);
		if (var$2) {
			bool var$3 = $nc(this->refEx)->hasMoreReferrals();
			var$2 = (var$3 || $nc(this->refEx)->hasMoreReferralExceptions());
		}
		if (var$2) {
			$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
		} else {
			$throw(e);
		}
	}
	$shouldNotReachHere();
}

$NamingEnumeration* LdapReferralContext::search($String* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	return search($(toName(name)), filterExpr, filterArgs, cons);
}

$NamingEnumeration* LdapReferralContext::search($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	try {
		$var($NamingEnumeration, se, nullptr);
		if (this->urlFilter != nullptr) {
			$var($Name, var$0, overrideName(name));
			$var($String, var$1, this->urlFilter);
			$assign(se, $nc(this->refCtx)->search(var$0, var$1, $(overrideAttributesAndScope(cons))));
		} else {
			$var($Name, var$2, overrideName(name));
			$var($String, var$3, filterExpr);
			$var($ObjectArray, var$4, filterArgs);
			$assign(se, $nc(this->refCtx)->search(var$2, var$3, var$4, $(overrideAttributesAndScope(cons))));
		}
		$nc(this->refEx)->setNameResolved(true);
		$nc(($cast($ReferralEnumeration, se)))->appendUnprocessedReferrals(this->refEx);
		return (se);
	} catch ($LdapReferralException&) {
		$var($LdapReferralException, e, $catch());
		e->appendUnprocessedReferrals(this->refEx);
		$throw(($cast($NamingException, $(e->fillInStackTrace()))));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		if ((this->refEx != nullptr) && (!$nc(this->refEx)->hasMoreReferrals())) {
			$nc(this->refEx)->setNamingException(e);
		}
		bool var$5 = (this->refEx != nullptr);
		if (var$5) {
			bool var$6 = $nc(this->refEx)->hasMoreReferrals();
			var$5 = (var$6 || $nc(this->refEx)->hasMoreReferralExceptions());
		}
		if (var$5) {
			$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
		} else {
			$throw(e);
		}
	}
	$shouldNotReachHere();
}

$String* LdapReferralContext::getNameInNamespace() {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	return this->urlName != nullptr && !$nc(this->urlName)->isEmpty() ? $nc(this->urlName)->get(0) : ""_s;
}

$ExtendedResponse* LdapReferralContext::extendedOperation($ExtendedRequest* request) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	if (!($instanceOf($LdapContext, this->refCtx))) {
		$throwNew($NotContextException, "Referral context not an instance of LdapContext"_s);
	}
	return $nc(($cast($LdapContext, this->refCtx)))->extendedOperation(request);
}

$LdapContext* LdapReferralContext::newInstance($ControlArray* requestControls) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	if (!($instanceOf($LdapContext, this->refCtx))) {
		$throwNew($NotContextException, "Referral context not an instance of LdapContext"_s);
	}
	return $nc(($cast($LdapContext, this->refCtx)))->newInstance(requestControls);
}

void LdapReferralContext::reconnect($ControlArray* connCtls) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	if (!($instanceOf($LdapContext, this->refCtx))) {
		$throwNew($NotContextException, "Referral context not an instance of LdapContext"_s);
	}
	$nc(($cast($LdapContext, this->refCtx)))->reconnect(connCtls);
}

$ControlArray* LdapReferralContext::getConnectControls() {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	if (!($instanceOf($LdapContext, this->refCtx))) {
		$throwNew($NotContextException, "Referral context not an instance of LdapContext"_s);
	}
	return $nc(($cast($LdapContext, this->refCtx)))->getConnectControls();
}

void LdapReferralContext::setRequestControls($ControlArray* requestControls) {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	if (!($instanceOf($LdapContext, this->refCtx))) {
		$throwNew($NotContextException, "Referral context not an instance of LdapContext"_s);
	}
	$nc(($cast($LdapContext, this->refCtx)))->setRequestControls(requestControls);
}

$ControlArray* LdapReferralContext::getRequestControls() {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	if (!($instanceOf($LdapContext, this->refCtx))) {
		$throwNew($NotContextException, "Referral context not an instance of LdapContext"_s);
	}
	return $nc(($cast($LdapContext, this->refCtx)))->getRequestControls();
}

$ControlArray* LdapReferralContext::getResponseControls() {
	$useLocalCurrentObjectStackCache();
	if (this->skipThisReferral) {
		$throw(($cast($NamingException, $($nc(($($nc(this->refEx)->appendUnprocessedReferrals(nullptr))))->fillInStackTrace()))));
	}
	if (!($instanceOf($LdapContext, this->refCtx))) {
		$throwNew($NotContextException, "Referral context not an instance of LdapContext"_s);
	}
	return $nc(($cast($LdapContext, this->refCtx)))->getResponseControls();
}

$Name* LdapReferralContext::toName($String* name) {
	return $nc(name)->isEmpty() ? static_cast<$Name*>($new($CompositeName)) : $$new($CompositeName)->add(name);
}

$Name* LdapReferralContext::overrideName($Name* name) {
	return (this->urlName == nullptr ? name : this->urlName);
}

$SearchControls* LdapReferralContext::overrideAttributesAndScope($SearchControls* cons) {
	$useLocalCurrentObjectStackCache();
	$var($SearchControls, urlCons, nullptr);
	if ((this->urlScope != nullptr) || (this->urlAttrs != nullptr)) {
		int32_t var$0 = $nc(cons)->getSearchScope();
		int64_t var$1 = cons->getCountLimit();
		int32_t var$2 = cons->getTimeLimit();
		$var($StringArray, var$3, cons->getReturningAttributes());
		bool var$4 = cons->getReturningObjFlag();
		$assign(urlCons, $new($SearchControls, var$0, var$1, var$2, var$3, var$4, cons->getDerefLinkFlag()));
		if (this->urlScope != nullptr) {
			if ($nc(this->urlScope)->equals("base"_s)) {
				urlCons->setSearchScope($SearchControls::OBJECT_SCOPE);
			} else if ($nc(this->urlScope)->equals("one"_s)) {
				urlCons->setSearchScope($SearchControls::ONELEVEL_SCOPE);
			} else if ($nc(this->urlScope)->equals("sub"_s)) {
				urlCons->setSearchScope($SearchControls::SUBTREE_SCOPE);
			}
		}
		if (this->urlAttrs != nullptr) {
			$var($StringTokenizer, tokens, $new($StringTokenizer, this->urlAttrs, ","_s));
			int32_t count = tokens->countTokens();
			$var($StringArray, attrs, $new($StringArray, count));
			for (int32_t i = 0; i < count; ++i) {
				attrs->set(i, $(tokens->nextToken()));
			}
			urlCons->setReturningAttributes(attrs);
		}
		return urlCons;
	} else {
		return cons;
	}
}

$String* LdapReferralContext::overrideFilter($String* filter) {
	return (this->urlFilter == nullptr ? filter : this->urlFilter);
}

LdapReferralContext::LdapReferralContext() {
}

$Class* LdapReferralContext::load$($String* name, bool initialize) {
	$loadClass(LdapReferralContext, name, initialize, &_LdapReferralContext_ClassInfo_, allocate$LdapReferralContext);
	return class$;
}

$Class* LdapReferralContext::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com