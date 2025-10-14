#include <com/sun/jndi/ldap/LdapSearchEnumeration.h>

#include <com/sun/jndi/ldap/AbstractLdapNamingEnumeration.h>
#include <com/sun/jndi/ldap/LdapCtx$SearchArgs.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapReferralContext.h>
#include <com/sun/jndi/ldap/LdapReferralException.h>
#include <com/sun/jndi/ldap/LdapResult.h>
#include <com/sun/jndi/ldap/LdapURL.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <com/sun/jndi/ldap/SearchResultWithControls.h>
#include <com/sun/jndi/toolkit/ctx/AtomicContext.h>
#include <com/sun/jndi/toolkit/ctx/ComponentContext.h>
#include <com/sun/jndi/toolkit/ctx/ComponentDirContext.h>
#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeContext.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeDirContext.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/naming/Binding.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameClassPair.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/directory/SearchResult.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/LdapName.h>
#include <javax/naming/spi/DirectoryManager.h>
#include <jcpp.h>

#undef CLASSNAME
#undef JAVA_ATTRIBUTES

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $AbstractLdapNamingEnumeration = ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapCtx$SearchArgs = ::com::sun::jndi::ldap::LdapCtx$SearchArgs;
using $LdapReferralContext = ::com::sun::jndi::ldap::LdapReferralContext;
using $LdapReferralException = ::com::sun::jndi::ldap::LdapReferralException;
using $LdapResult = ::com::sun::jndi::ldap::LdapResult;
using $LdapURL = ::com::sun::jndi::ldap::LdapURL;
using $Obj = ::com::sun::jndi::ldap::Obj;
using $SearchResultWithControls = ::com::sun::jndi::ldap::SearchResultWithControls;
using $AtomicContext = ::com::sun::jndi::toolkit::ctx::AtomicContext;
using $ComponentContext = ::com::sun::jndi::toolkit::ctx::ComponentContext;
using $ComponentDirContext = ::com::sun::jndi::toolkit::ctx::ComponentDirContext;
using $Continuation = ::com::sun::jndi::toolkit::ctx::Continuation;
using $PartialCompositeContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeContext;
using $PartialCompositeDirContext = ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $Binding = ::javax::naming::Binding;
using $CompositeName = ::javax::naming::CompositeName;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NameClassPair = ::javax::naming::NameClassPair;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $SearchResult = ::javax::naming::directory::SearchResult;
using $LdapName = ::javax::naming::ldap::LdapName;
using $DirectoryManager = ::javax::naming::spi::DirectoryManager;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapSearchEnumeration$$Lambda$lambda$createItem$0 : public $PrivilegedExceptionAction {
	$class(LdapSearchEnumeration$$Lambda$lambda$createItem$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Attributes* attrs) {
		$set(this, attrs, attrs);
	}
	virtual $Object* run() override {
		 return LdapSearchEnumeration::lambda$createItem$0(attrs);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LdapSearchEnumeration$$Lambda$lambda$createItem$0>());
	}
	$Attributes* attrs = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LdapSearchEnumeration$$Lambda$lambda$createItem$0::fieldInfos[2] = {
	{"attrs", "Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, $field(LdapSearchEnumeration$$Lambda$lambda$createItem$0, attrs)},
	{}
};
$MethodInfo LdapSearchEnumeration$$Lambda$lambda$createItem$0::methodInfos[3] = {
	{"<init>", "(Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, $method(static_cast<void(LdapSearchEnumeration$$Lambda$lambda$createItem$0::*)($Attributes*)>(&LdapSearchEnumeration$$Lambda$lambda$createItem$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LdapSearchEnumeration$$Lambda$lambda$createItem$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.LdapSearchEnumeration$$Lambda$lambda$createItem$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* LdapSearchEnumeration$$Lambda$lambda$createItem$0::load$($String* name, bool initialize) {
	$loadClass(LdapSearchEnumeration$$Lambda$lambda$createItem$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LdapSearchEnumeration$$Lambda$lambda$createItem$0::class$ = nullptr;

$FieldInfo _LdapSearchEnumeration_FieldInfo_[] = {
	{"startName", "Ljavax/naming/Name;", nullptr, $PRIVATE, $field(LdapSearchEnumeration, startName)},
	{"searchArgs", "Lcom/sun/jndi/ldap/LdapCtx$SearchArgs;", nullptr, $PRIVATE, $field(LdapSearchEnumeration, searchArgs)},
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(LdapSearchEnumeration, acc)},
	{}
};

$MethodInfo _LdapSearchEnumeration_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/LdapCtx;Lcom/sun/jndi/ldap/LdapResult;Ljava/lang/String;Lcom/sun/jndi/ldap/LdapCtx$SearchArgs;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, 0, $method(static_cast<void(LdapSearchEnumeration::*)($LdapCtx*,$LdapResult*,$String*,$LdapCtx$SearchArgs*,$Continuation*)>(&LdapSearchEnumeration::init$)), "javax.naming.NamingException"},
	{"appendUnprocessedReferrals", "(Lcom/sun/jndi/ldap/LdapReferralException;)V", nullptr, $PUBLIC},
	{"createItem", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector;)Ljavax/naming/directory/SearchResult;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector<Ljavax/naming/ldap/Control;>;)Ljavax/naming/directory/SearchResult;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getReferredResults", "(Lcom/sun/jndi/ldap/LdapReferralContext;)Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration;", "(Lcom/sun/jndi/ldap/LdapReferralContext;)Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration<+Ljavax/naming/NameClassPair;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"lambda$createItem$0", "(Ljavax/naming/directory/Attributes;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($Attributes*)>(&LdapSearchEnumeration::lambda$createItem$0)), "java.lang.Exception"},
	{"setStartName", "(Ljavax/naming/Name;)V", nullptr, 0, $method(static_cast<void(LdapSearchEnumeration::*)($Name*)>(&LdapSearchEnumeration::setStartName))},
	{"update", "(Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration;)V", "(Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration<+Ljavax/naming/NameClassPair;>;)V", $PROTECTED},
	{}
};

$ClassInfo _LdapSearchEnumeration_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapSearchEnumeration",
	"com.sun.jndi.ldap.AbstractLdapNamingEnumeration",
	nullptr,
	_LdapSearchEnumeration_FieldInfo_,
	_LdapSearchEnumeration_MethodInfo_,
	"Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration<Ljavax/naming/directory/SearchResult;>;"
};

$Object* allocate$LdapSearchEnumeration($Class* clazz) {
	return $of($alloc(LdapSearchEnumeration));
}

void LdapSearchEnumeration::init$($LdapCtx* homeCtx, $LdapResult* search_results, $String* starter, $LdapCtx$SearchArgs* args, $Continuation* cont) {
	$AbstractLdapNamingEnumeration::init$(homeCtx, search_results, $nc(args)->name, cont);
	$set(this, searchArgs, nullptr);
	$set(this, acc, $AccessController::getContext());
	$set(this, startName, $new($LdapName, starter));
	$set(this, searchArgs, args);
}

$NameClassPair* LdapSearchEnumeration::createItem($String* dn, $Attributes* attrs, $Vector* respCtls) {
	$beforeCallerSensitive();
	$var($Object, obj, nullptr);
	$var($String, relStart, nullptr);
	$var($String, relHome, nullptr);
	bool relative = true;
	try {
		$var($Name, parsed, $new($LdapName, dn));
		if (this->startName != nullptr && parsed->startsWith(this->startName)) {
			$assign(relStart, $nc($of($(parsed->getSuffix($nc(this->startName)->size()))))->toString());
			$assign(relHome, $nc($of($(parsed->getSuffix($nc($nc(this->homeCtx)->currentParsedDN)->size()))))->toString());
		} else {
			relative = false;
			$assign(relHome, ($assign(relStart, $LdapURL::toUrlString($nc(this->homeCtx)->hostname, $nc(this->homeCtx)->port_number, dn, $nc(this->homeCtx)->hasLdapsScheme))));
		}
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		relative = false;
		$assign(relHome, ($assign(relStart, $LdapURL::toUrlString($nc(this->homeCtx)->hostname, $nc(this->homeCtx)->port_number, dn, $nc(this->homeCtx)->hasLdapsScheme))));
	}
	$var($CompositeName, cn, $new($CompositeName));
	if (!$nc(relStart)->isEmpty()) {
		cn->add(relStart);
	}
	$var($CompositeName, rcn, $new($CompositeName));
	if (!$nc(relHome)->isEmpty()) {
		rcn->add(relHome);
	}
	$nc(this->homeCtx)->setParents(attrs, rcn);
	if ($nc($nc(this->searchArgs)->cons)->getReturningObjFlag()) {
		$init($Obj);
		if ($nc(attrs)->get($nc($Obj::JAVA_ATTRIBUTES)->get($Obj::CLASSNAME)) != nullptr) {
			try {
				$var($PrivilegedExceptionAction, pea, static_cast<$PrivilegedExceptionAction*>($new(LdapSearchEnumeration$$Lambda$lambda$createItem$0, attrs)));
				$assign(obj, $AccessController::doPrivileged(pea, this->acc));
			} catch ($PrivilegedActionException&) {
				$var($PrivilegedActionException, e, $catch());
				$throw($cast($NamingException, $(e->getException())));
			}
		}
		if (obj == nullptr) {
			$assign(obj, $new($LdapCtx, this->homeCtx, dn));
		}
		try {
			$assign(obj, $DirectoryManager::getObjectInstance(obj, rcn, (relative ? static_cast<$Context*>(static_cast<$PartialCompositeContext*>(static_cast<$ComponentContext*>(static_cast<$AtomicContext*>(static_cast<$PartialCompositeDirContext*>(static_cast<$ComponentDirContext*>(this->homeCtx)))))) : ($Context*)nullptr), $nc(this->homeCtx)->envprops, attrs));
		} catch ($NamingException&) {
			$var($NamingException, e, $catch());
			$throw(e);
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$var($NamingException, ne, $new($NamingException, "problem generating object using object factory"_s));
			ne->setRootCause(e);
			$throw(ne);
		}
		$var($StringArray, reqAttrs, nullptr);
		if (($assign(reqAttrs, $nc(this->searchArgs)->reqAttrs)) != nullptr) {
			$var($Attributes, rattrs, $new($BasicAttributes, true));
			for (int32_t i = 0; i < $nc(reqAttrs)->length; ++i) {
				rattrs->put(reqAttrs->get(i), nullptr);
			}
			for (int32_t i = 0; i < $nc($Obj::JAVA_ATTRIBUTES)->length; ++i) {
				if (rattrs->get($nc($Obj::JAVA_ATTRIBUTES)->get(i)) == nullptr) {
					$nc(attrs)->remove($nc($Obj::JAVA_ATTRIBUTES)->get(i));
				}
			}
		}
	}
	$var($SearchResult, sr, nullptr);
	if (respCtls != nullptr) {
		$var($String, var$0, (relative ? cn->toString() : relStart));
		$var($Object, var$1, obj);
		$var($Attributes, var$2, attrs);
		bool var$3 = relative;
		$assign(sr, $new($SearchResultWithControls, var$0, var$1, var$2, var$3, $($nc(this->homeCtx)->convertControls(respCtls))));
	} else {
		$assign(sr, $new($SearchResult, (relative ? $(cn->toString()) : relStart), obj, attrs, relative));
	}
	$nc(sr)->setNameInNamespace(dn);
	return sr;
}

void LdapSearchEnumeration::appendUnprocessedReferrals($LdapReferralException* ex) {
	$set(this, startName, nullptr);
	$AbstractLdapNamingEnumeration::appendUnprocessedReferrals(ex);
}

$AbstractLdapNamingEnumeration* LdapSearchEnumeration::getReferredResults($LdapReferralContext* refCtx) {
	return $cast($AbstractLdapNamingEnumeration, $nc(refCtx)->search($nc(this->searchArgs)->name, $nc(this->searchArgs)->filter, $nc(this->searchArgs)->cons));
}

void LdapSearchEnumeration::update($AbstractLdapNamingEnumeration* ne) {
	$AbstractLdapNamingEnumeration::update(ne);
	$var(LdapSearchEnumeration, se, $cast(LdapSearchEnumeration, ne));
	$set(this, startName, $nc(se)->startName);
}

void LdapSearchEnumeration::setStartName($Name* nm) {
	$set(this, startName, nm);
}

$Object* LdapSearchEnumeration::lambda$createItem$0($Attributes* attrs) {
	$init(LdapSearchEnumeration);
	return $of($Obj::decodeObject(attrs));
}

LdapSearchEnumeration::LdapSearchEnumeration() {
}

$Class* LdapSearchEnumeration::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LdapSearchEnumeration$$Lambda$lambda$createItem$0::classInfo$.name)) {
			return LdapSearchEnumeration$$Lambda$lambda$createItem$0::load$(name, initialize);
		}
	}
	$loadClass(LdapSearchEnumeration, name, initialize, &_LdapSearchEnumeration_ClassInfo_, allocate$LdapSearchEnumeration);
	return class$;
}

$Class* LdapSearchEnumeration::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com