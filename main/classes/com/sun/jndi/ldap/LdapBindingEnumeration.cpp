#include <com/sun/jndi/ldap/LdapBindingEnumeration.h>

#include <com/sun/jndi/ldap/AbstractLdapNamingEnumeration.h>
#include <com/sun/jndi/ldap/BindingWithControls.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapReferralContext.h>
#include <com/sun/jndi/ldap/LdapResult.h>
#include <com/sun/jndi/ldap/Obj.h>
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
#include <javax/naming/ldap/Control.h>
#include <javax/naming/spi/DirectoryManager.h>
#include <jcpp.h>

#undef CLASSNAME
#undef JAVA_ATTRIBUTES

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $AbstractLdapNamingEnumeration = ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration;
using $BindingWithControls = ::com::sun::jndi::ldap::BindingWithControls;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapReferralContext = ::com::sun::jndi::ldap::LdapReferralContext;
using $LdapResult = ::com::sun::jndi::ldap::LdapResult;
using $Obj = ::com::sun::jndi::ldap::Obj;
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
using $DirectoryManager = ::javax::naming::spi::DirectoryManager;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class LdapBindingEnumeration$$Lambda$lambda$createItem$0 : public $PrivilegedExceptionAction {
	$class(LdapBindingEnumeration$$Lambda$lambda$createItem$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Attributes* attrs) {
		$set(this, attrs, attrs);
	}
	virtual $Object* run() override {
		 return LdapBindingEnumeration::lambda$createItem$0(attrs);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<LdapBindingEnumeration$$Lambda$lambda$createItem$0>());
	}
	$Attributes* attrs = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo LdapBindingEnumeration$$Lambda$lambda$createItem$0::fieldInfos[2] = {
	{"attrs", "Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, $field(LdapBindingEnumeration$$Lambda$lambda$createItem$0, attrs)},
	{}
};
$MethodInfo LdapBindingEnumeration$$Lambda$lambda$createItem$0::methodInfos[3] = {
	{"<init>", "(Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, $method(static_cast<void(LdapBindingEnumeration$$Lambda$lambda$createItem$0::*)($Attributes*)>(&LdapBindingEnumeration$$Lambda$lambda$createItem$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo LdapBindingEnumeration$$Lambda$lambda$createItem$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.jndi.ldap.LdapBindingEnumeration$$Lambda$lambda$createItem$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* LdapBindingEnumeration$$Lambda$lambda$createItem$0::load$($String* name, bool initialize) {
	$loadClass(LdapBindingEnumeration$$Lambda$lambda$createItem$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* LdapBindingEnumeration$$Lambda$lambda$createItem$0::class$ = nullptr;

$FieldInfo _LdapBindingEnumeration_FieldInfo_[] = {
	{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(LdapBindingEnumeration, acc)},
	{}
};

$MethodInfo _LdapBindingEnumeration_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/LdapCtx;Lcom/sun/jndi/ldap/LdapResult;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, 0, $method(static_cast<void(LdapBindingEnumeration::*)($LdapCtx*,$LdapResult*,$Name*,$Continuation*)>(&LdapBindingEnumeration::init$)), "javax.naming.NamingException"},
	{"createItem", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector;)Ljavax/naming/Binding;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector<Ljavax/naming/ldap/Control;>;)Ljavax/naming/Binding;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getReferredResults", "(Lcom/sun/jndi/ldap/LdapReferralContext;)Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration;", "(Lcom/sun/jndi/ldap/LdapReferralContext;)Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration<+Ljavax/naming/NameClassPair;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"lambda$createItem$0", "(Ljavax/naming/directory/Attributes;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Object*(*)($Attributes*)>(&LdapBindingEnumeration::lambda$createItem$0)), "java.lang.Exception"},
	{}
};

$ClassInfo _LdapBindingEnumeration_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapBindingEnumeration",
	"com.sun.jndi.ldap.AbstractLdapNamingEnumeration",
	nullptr,
	_LdapBindingEnumeration_FieldInfo_,
	_LdapBindingEnumeration_MethodInfo_,
	"Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration<Ljavax/naming/Binding;>;"
};

$Object* allocate$LdapBindingEnumeration($Class* clazz) {
	return $of($alloc(LdapBindingEnumeration));
}

void LdapBindingEnumeration::init$($LdapCtx* homeCtx, $LdapResult* answer, $Name* remain, $Continuation* cont) {
	$AbstractLdapNamingEnumeration::init$(homeCtx, answer, remain, cont);
	$set(this, acc, $AccessController::getContext());
}

$NameClassPair* LdapBindingEnumeration::createItem($String* dn, $Attributes* attrs, $Vector* respCtls) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($Object, obj, nullptr);
	$var($String, atom, getAtom(dn));
	$init($Obj);
	if ($nc(attrs)->get($nc($Obj::JAVA_ATTRIBUTES)->get($Obj::CLASSNAME)) != nullptr) {
		try {
			$var($PrivilegedExceptionAction, pa, static_cast<$PrivilegedExceptionAction*>($new(LdapBindingEnumeration$$Lambda$lambda$createItem$0, attrs)));
			$assign(obj, $AccessController::doPrivileged(pa, this->acc));
		} catch ($PrivilegedActionException&) {
			$var($PrivilegedActionException, e, $catch());
			$throw($cast($NamingException, $(e->getException())));
		}
	}
	if (obj == nullptr) {
		$assign(obj, $new($LdapCtx, this->homeCtx, dn));
	}
	$var($CompositeName, cn, $new($CompositeName));
	cn->add(atom);
	try {
		$assign(obj, $DirectoryManager::getObjectInstance(obj, cn, static_cast<$Context*>(static_cast<$PartialCompositeContext*>(static_cast<$ComponentContext*>(static_cast<$AtomicContext*>(static_cast<$PartialCompositeDirContext*>(static_cast<$ComponentDirContext*>(this->homeCtx)))))), $nc(this->homeCtx)->envprops, attrs));
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throw(e);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($NamingException, ne, $new($NamingException, "problem generating object using object factory"_s));
		ne->setRootCause(e);
		$throw(ne);
	}
	$var($Binding, binding, nullptr);
	if (respCtls != nullptr) {
		$var($String, var$0, cn->toString());
		$var($Object, var$1, obj);
		$assign(binding, $new($BindingWithControls, var$0, var$1, $($nc(this->homeCtx)->convertControls(respCtls))));
	} else {
		$assign(binding, $new($Binding, $(cn->toString()), obj));
	}
	$nc(binding)->setNameInNamespace(dn);
	return binding;
}

$AbstractLdapNamingEnumeration* LdapBindingEnumeration::getReferredResults($LdapReferralContext* refCtx) {
	return $cast($AbstractLdapNamingEnumeration, $nc(refCtx)->listBindings(this->listArg));
}

$Object* LdapBindingEnumeration::lambda$createItem$0($Attributes* attrs) {
	$init(LdapBindingEnumeration);
	return $of($Obj::decodeObject(attrs));
}

LdapBindingEnumeration::LdapBindingEnumeration() {
}

$Class* LdapBindingEnumeration::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(LdapBindingEnumeration$$Lambda$lambda$createItem$0::classInfo$.name)) {
			return LdapBindingEnumeration$$Lambda$lambda$createItem$0::load$(name, initialize);
		}
	}
	$loadClass(LdapBindingEnumeration, name, initialize, &_LdapBindingEnumeration_ClassInfo_, allocate$LdapBindingEnumeration);
	return class$;
}

$Class* LdapBindingEnumeration::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com