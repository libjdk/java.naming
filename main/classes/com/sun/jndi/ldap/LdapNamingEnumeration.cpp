#include <com/sun/jndi/ldap/LdapNamingEnumeration.h>

#include <com/sun/jndi/ldap/AbstractLdapNamingEnumeration.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapReferralContext.h>
#include <com/sun/jndi/ldap/LdapResult.h>
#include <com/sun/jndi/ldap/NameClassPairWithControls.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameClassPair.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

#undef CLASSNAME
#undef JAVA_ATTRIBUTES

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $AbstractLdapNamingEnumeration = ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapReferralContext = ::com::sun::jndi::ldap::LdapReferralContext;
using $LdapResult = ::com::sun::jndi::ldap::LdapResult;
using $NameClassPairWithControls = ::com::sun::jndi::ldap::NameClassPairWithControls;
using $Obj = ::com::sun::jndi::ldap::Obj;
using $Continuation = ::com::sun::jndi::toolkit::ctx::Continuation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $CompositeName = ::javax::naming::CompositeName;
using $Name = ::javax::naming::Name;
using $NameClassPair = ::javax::naming::NameClassPair;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $DirContext = ::javax::naming::directory::DirContext;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapNamingEnumeration_FieldInfo_[] = {
	{"defaultClassName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LdapNamingEnumeration, defaultClassName)},
	{}
};

$MethodInfo _LdapNamingEnumeration_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/LdapCtx;Lcom/sun/jndi/ldap/LdapResult;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, 0, $method(static_cast<void(LdapNamingEnumeration::*)($LdapCtx*,$LdapResult*,$Name*,$Continuation*)>(&LdapNamingEnumeration::init$)), "javax.naming.NamingException"},
	{"createItem", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector;)Ljavax/naming/NameClassPair;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector<Ljavax/naming/ldap/Control;>;)Ljavax/naming/NameClassPair;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getReferredResults", "(Lcom/sun/jndi/ldap/LdapReferralContext;)Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration;", "(Lcom/sun/jndi/ldap/LdapReferralContext;)Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration<+Ljavax/naming/NameClassPair;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _LdapNamingEnumeration_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapNamingEnumeration",
	"com.sun.jndi.ldap.AbstractLdapNamingEnumeration",
	nullptr,
	_LdapNamingEnumeration_FieldInfo_,
	_LdapNamingEnumeration_MethodInfo_,
	"Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration<Ljavax/naming/NameClassPair;>;"
};

$Object* allocate$LdapNamingEnumeration($Class* clazz) {
	return $of($alloc(LdapNamingEnumeration));
}

$String* LdapNamingEnumeration::defaultClassName = nullptr;

void LdapNamingEnumeration::init$($LdapCtx* homeCtx, $LdapResult* answer, $Name* listArg, $Continuation* cont) {
	$AbstractLdapNamingEnumeration::init$(homeCtx, answer, listArg, cont);
}

$NameClassPair* LdapNamingEnumeration::createItem($String* dn, $Attributes* attrs, $Vector* respCtls) {
	$var($Attribute, attr, nullptr);
	$var($String, className, nullptr);
	$init($Obj);
	if (($assign(attr, $nc(attrs)->get($nc($Obj::JAVA_ATTRIBUTES)->get($Obj::CLASSNAME)))) != nullptr) {
		$assign(className, $cast($String, $nc(attr)->get()));
	} else {
		$assign(className, LdapNamingEnumeration::defaultClassName);
	}
	$var($CompositeName, cn, $new($CompositeName));
	cn->add($(getAtom(dn)));
	$var($NameClassPair, ncp, nullptr);
	if (respCtls != nullptr) {
		$var($String, var$0, cn->toString());
		$var($String, var$1, className);
		$assign(ncp, $new($NameClassPairWithControls, var$0, var$1, $($nc(this->homeCtx)->convertControls(respCtls))));
	} else {
		$assign(ncp, $new($NameClassPair, $(cn->toString()), className));
	}
	$nc(ncp)->setNameInNamespace(dn);
	return ncp;
}

$AbstractLdapNamingEnumeration* LdapNamingEnumeration::getReferredResults($LdapReferralContext* refCtx) {
	return $cast($AbstractLdapNamingEnumeration, $nc(refCtx)->list(this->listArg));
}

void clinit$LdapNamingEnumeration($Class* class$) {
	$load($DirContext);
	$assignStatic(LdapNamingEnumeration::defaultClassName, $DirContext::class$->getName());
}

LdapNamingEnumeration::LdapNamingEnumeration() {
}

$Class* LdapNamingEnumeration::load$($String* name, bool initialize) {
	$loadClass(LdapNamingEnumeration, name, initialize, &_LdapNamingEnumeration_ClassInfo_, clinit$LdapNamingEnumeration, allocate$LdapNamingEnumeration);
	return class$;
}

$Class* LdapNamingEnumeration::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com