#include <com/sun/jndi/ldap/LdapReferralException.h>

#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/LdapReferralContext.h>
#include <java/io/PrintStream.h>
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
#include <java/util/Vector.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/ReferralException.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/LdapContext.h>
#include <javax/naming/ldap/LdapReferralException.h>
#include <jcpp.h>

#undef LDAP_REF_FOLLOW
#undef LDAP_REF_FOLLOW_SCHEME

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $LdapReferralContext = ::com::sun::jndi::ldap::LdapReferralContext;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NamingException = ::javax::naming::NamingException;
using $ReferralException = ::javax::naming::ReferralException;
using $DirContext = ::javax::naming::directory::DirContext;
using $Control = ::javax::naming::ldap::Control;
using $LdapContext = ::javax::naming::ldap::LdapContext;
using $LdapReferralException = ::javax::naming::ldap::LdapReferralException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapReferralException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LdapReferralException, serialVersionUID)},
	{"handleReferrals", "I", nullptr, $PRIVATE, $field(LdapReferralException, handleReferrals)},
	{"envprops", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<**>;", $PRIVATE, $field(LdapReferralException, envprops)},
	{"nextName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapReferralException, nextName)},
	{"reqCtls", "[Ljavax/naming/ldap/Control;", nullptr, $PRIVATE, $field(LdapReferralException, reqCtls)},
	{"referrals", "Ljava/util/Vector;", "Ljava/util/Vector<*>;", $PRIVATE, $field(LdapReferralException, referrals)},
	{"referralIndex", "I", nullptr, $PRIVATE, $field(LdapReferralException, referralIndex)},
	{"referralCount", "I", nullptr, $PRIVATE, $field(LdapReferralException, referralCount)},
	{"foundEntry", "Z", nullptr, $PRIVATE, $field(LdapReferralException, foundEntry)},
	{"skipThisReferral", "Z", nullptr, $PRIVATE, $field(LdapReferralException, skipThisReferral)},
	{"hopCount", "I", nullptr, $PRIVATE, $field(LdapReferralException, hopCount)},
	{"errorEx", "Ljavax/naming/NamingException;", nullptr, $PRIVATE, $field(LdapReferralException, errorEx)},
	{"newRdn", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapReferralException, newRdn)},
	{"debug", "Z", nullptr, $PRIVATE, $field(LdapReferralException, debug)},
	{"nextReferralEx", "Lcom/sun/jndi/ldap/LdapReferralException;", nullptr, 0, $field(LdapReferralException, nextReferralEx)},
	{}
};

$MethodInfo _LdapReferralException_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/Name;Ljava/lang/String;Ljava/util/Hashtable;Ljava/lang/String;I[Ljavax/naming/ldap/Control;)V", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/Name;Ljava/lang/String;Ljava/util/Hashtable<**>;Ljava/lang/String;I[Ljavax/naming/ldap/Control;)V", 0, $method(static_cast<void(LdapReferralException::*)($Name*,Object$*,$Name*,$String*,$Hashtable*,$String*,int32_t,$ControlArray*)>(&LdapReferralException::init$))},
	{"appendUnprocessedReferrals", "(Lcom/sun/jndi/ldap/LdapReferralException;)Lcom/sun/jndi/ldap/LdapReferralException;", nullptr, 0, $method(static_cast<LdapReferralException*(LdapReferralException::*)(LdapReferralException*)>(&LdapReferralException::appendUnprocessedReferrals))},
	{"dump", "()V", nullptr, 0, $method(static_cast<void(LdapReferralException::*)()>(&LdapReferralException::dump))},
	{"dumpState", "()V", nullptr, $PRIVATE, $method(static_cast<void(LdapReferralException::*)()>(&LdapReferralException::dumpState))},
	{"getNamingException", "()Ljavax/naming/NamingException;", nullptr, 0, $method(static_cast<$NamingException*(LdapReferralException::*)()>(&LdapReferralException::getNamingException))},
	{"getNewRdn", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(LdapReferralException::*)()>(&LdapReferralException::getNewRdn))},
	{"getNextReferral", "()Ljava/lang/String;", nullptr, 0, $method(static_cast<$String*(LdapReferralException::*)()>(&LdapReferralException::getNextReferral)), "javax.naming.ReferralException"},
	{"getReferralContext", "()Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getReferralContext", "(Ljava/util/Hashtable;)Ljavax/naming/Context;", "(Ljava/util/Hashtable<**>;)Ljavax/naming/Context;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getReferralContext", "(Ljava/util/Hashtable;[Ljavax/naming/ldap/Control;)Ljavax/naming/Context;", "(Ljava/util/Hashtable<**>;[Ljavax/naming/ldap/Control;)Ljavax/naming/Context;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getReferralInfo", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hasMoreReferralExceptions", "()Z", nullptr, 0, $method(static_cast<bool(LdapReferralException::*)()>(&LdapReferralException::hasMoreReferralExceptions))},
	{"hasMoreReferrals", "()Z", nullptr, 0, $method(static_cast<bool(LdapReferralException::*)()>(&LdapReferralException::hasMoreReferrals))},
	{"retryReferral", "()V", nullptr, $PUBLIC},
	{"setHopCount", "(I)V", nullptr, 0, $method(static_cast<void(LdapReferralException::*)(int32_t)>(&LdapReferralException::setHopCount))},
	{"setNameResolved", "(Z)V", nullptr, 0, $method(static_cast<void(LdapReferralException::*)(bool)>(&LdapReferralException::setNameResolved))},
	{"setNamingException", "(Ljavax/naming/NamingException;)V", nullptr, 0, $method(static_cast<void(LdapReferralException::*)($NamingException*)>(&LdapReferralException::setNamingException))},
	{"setNewRdn", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(LdapReferralException::*)($String*)>(&LdapReferralException::setNewRdn))},
	{"setReferralInfo", "(Ljava/util/Vector;Z)V", "(Ljava/util/Vector<*>;Z)V", 0, $method(static_cast<void(LdapReferralException::*)($Vector*,bool)>(&LdapReferralException::setReferralInfo))},
	{"skipReferral", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LdapReferralException_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapReferralException",
	"javax.naming.ldap.LdapReferralException",
	nullptr,
	_LdapReferralException_FieldInfo_,
	_LdapReferralException_MethodInfo_
};

$Object* allocate$LdapReferralException($Class* clazz) {
	return $of($alloc(LdapReferralException));
}

void LdapReferralException::init$($Name* resolvedName, Object$* resolvedObj, $Name* remainingName, $String* explanation, $Hashtable* envprops, $String* nextName, int32_t handleReferrals, $ControlArray* reqCtls) {
	$LdapReferralException::init$(explanation);
	$set(this, referrals, nullptr);
	this->referralIndex = 0;
	this->referralCount = 0;
	this->foundEntry = false;
	this->skipThisReferral = false;
	this->hopCount = 1;
	$set(this, errorEx, nullptr);
	$set(this, newRdn, nullptr);
	this->debug = false;
	$set(this, nextReferralEx, nullptr);
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException constructor"_s);
	}
	setResolvedName(resolvedName);
	setResolvedObj(resolvedObj);
	setRemainingName(remainingName);
	$set(this, envprops, envprops);
	$set(this, nextName, nextName);
	this->handleReferrals = handleReferrals;
	$set(this, reqCtls, handleReferrals == $LdapClient::LDAP_REF_FOLLOW || handleReferrals == $LdapClient::LDAP_REF_FOLLOW_SCHEME ? reqCtls : ($ControlArray*)nullptr);
}

$Context* LdapReferralException::getReferralContext() {
	return getReferralContext(this->envprops, nullptr);
}

$Context* LdapReferralException::getReferralContext($Hashtable* newProps) {
	return getReferralContext(newProps, nullptr);
}

$Context* LdapReferralException::getReferralContext($Hashtable* newProps, $ControlArray* connCtls) {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.getReferralContext"_s);
	}
	$var($LdapReferralContext, refCtx, $new($LdapReferralContext, this, newProps, connCtls, this->reqCtls, this->nextName, this->skipThisReferral, this->handleReferrals));
	refCtx->setHopCount(this->hopCount + 1);
	if (this->skipThisReferral) {
		this->skipThisReferral = false;
	}
	return static_cast<$Context*>(refCtx);
}

$Object* LdapReferralException::getReferralInfo() {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.getReferralInfo"_s);
		$nc($System::out)->println($$str({"  referralIndex="_s, $$str(this->referralIndex)}));
	}
	if (hasMoreReferrals()) {
		return $of($nc(this->referrals)->elementAt(this->referralIndex));
	} else {
		return $of(nullptr);
	}
}

void LdapReferralException::retryReferral() {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.retryReferral"_s);
	}
	if (this->referralIndex > 0) {
		--this->referralIndex;
	}
}

bool LdapReferralException::skipReferral() {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.skipReferral"_s);
	}
	this->skipThisReferral = true;
	try {
		getNextReferral();
	} catch ($ReferralException&) {
		$catch();
	}
	bool var$0 = hasMoreReferrals();
	return (var$0 || hasMoreReferralExceptions());
}

void LdapReferralException::setReferralInfo($Vector* referrals, bool continuationRef) {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.setReferralInfo"_s);
	}
	$set(this, referrals, referrals);
	this->referralCount = (referrals == nullptr) ? 0 : $nc(referrals)->size();
	if (this->debug) {
		if (referrals != nullptr) {
			for (int32_t i = 0; i < this->referralCount; ++i) {
				$init($System);
				$nc($System::out)->println($$str({"  ["_s, $$str(i), "] "_s, $(referrals->elementAt(i))}));
			}
		} else {
			$init($System);
			$nc($System::out)->println("setReferralInfo : referrals == null"_s);
		}
	}
}

$String* LdapReferralException::getNextReferral() {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.getNextReferral"_s);
	}
	if (hasMoreReferrals()) {
		return $cast($String, $nc(this->referrals)->elementAt(this->referralIndex++));
	} else if (hasMoreReferralExceptions()) {
		$throw(this->nextReferralEx);
	} else {
		return nullptr;
	}
}

LdapReferralException* LdapReferralException::appendUnprocessedReferrals(LdapReferralException* back$renamed) {
	$var(LdapReferralException, back, back$renamed);
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.appendUnprocessedReferrals"_s);
		dump();
		if (back != nullptr) {
			back->dump();
		}
	}
	$var(LdapReferralException, front, this);
	if (!front->hasMoreReferrals()) {
		$assign(front, this->nextReferralEx);
		if ((this->errorEx != nullptr) && (front != nullptr)) {
			front->setNamingException(this->errorEx);
		}
	}
	if (this == back) {
		return front;
	}
	if ((back != nullptr) && (!back->hasMoreReferrals())) {
		$assign(back, back->nextReferralEx);
	}
	if (back == nullptr) {
		return front;
	}
	$var(LdapReferralException, ptr, front);
	while ($nc(ptr)->nextReferralEx != nullptr) {
		$assign(ptr, ptr->nextReferralEx);
	}
	$set($nc(ptr), nextReferralEx, back);
	return front;
}

bool LdapReferralException::hasMoreReferrals() {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.hasMoreReferrals"_s);
	}
	return (!this->foundEntry) && (this->referralIndex < this->referralCount);
}

bool LdapReferralException::hasMoreReferralExceptions() {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.hasMoreReferralExceptions"_s);
	}
	return (this->nextReferralEx != nullptr);
}

void LdapReferralException::setHopCount(int32_t hopCount) {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.setHopCount"_s);
	}
	this->hopCount = hopCount;
}

void LdapReferralException::setNameResolved(bool resolved) {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.setNameResolved"_s);
	}
	this->foundEntry = resolved;
}

void LdapReferralException::setNamingException($NamingException* e) {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.setNamingException"_s);
	}
	if (this->errorEx == nullptr) {
		$nc(e)->setRootCause(this);
		$set(this, errorEx, e);
	}
}

$String* LdapReferralException::getNewRdn() {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.getNewRdn"_s);
	}
	return this->newRdn;
}

void LdapReferralException::setNewRdn($String* newRdn) {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.setNewRdn"_s);
	}
	$set(this, newRdn, newRdn);
}

$NamingException* LdapReferralException::getNamingException() {
	if (this->debug) {
		$init($System);
		$nc($System::out)->println("LdapReferralException.getNamingException"_s);
	}
	return this->errorEx;
}

void LdapReferralException::dump() {
	$init($System);
	$nc($System::out)->println();
	$nc($System::out)->println("LdapReferralException.dump"_s);
	$var(LdapReferralException, ptr, this);
	while (ptr != nullptr) {
		ptr->dumpState();
		$assign(ptr, ptr->nextReferralEx);
	}
}

void LdapReferralException::dumpState() {
	$init($System);
	$nc($System::out)->println("LdapReferralException.dumpState"_s);
	$nc($System::out)->println($$str({"  hashCode="_s, $$str(hashCode())}));
	$nc($System::out)->println($$str({"  foundEntry="_s, $$str(this->foundEntry)}));
	$nc($System::out)->println($$str({"  skipThisReferral="_s, $$str(this->skipThisReferral)}));
	$nc($System::out)->println($$str({"  referralIndex="_s, $$str(this->referralIndex)}));
	if (this->referrals != nullptr) {
		$nc($System::out)->println("  referrals:"_s);
		for (int32_t i = 0; i < this->referralCount; ++i) {
			$nc($System::out)->println($$str({"    ["_s, $$str(i), "] "_s, $($nc(this->referrals)->elementAt(i))}));
		}
	} else {
		$nc($System::out)->println("  referrals=null"_s);
	}
	$nc($System::out)->println($$str({"  errorEx="_s, this->errorEx}));
	if (this->nextReferralEx == nullptr) {
		$nc($System::out)->println("  nextRefEx=null"_s);
	} else {
		$nc($System::out)->println($$str({"  nextRefEx="_s, $$str($nc($of(this->nextReferralEx))->hashCode())}));
	}
	$nc($System::out)->println();
}

LdapReferralException::LdapReferralException() {
}

LdapReferralException::LdapReferralException(const LdapReferralException& e) {
}

LdapReferralException LdapReferralException::wrapper$() {
	$pendingException(this);
	return *this;
}

void LdapReferralException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* LdapReferralException::load$($String* name, bool initialize) {
	$loadClass(LdapReferralException, name, initialize, &_LdapReferralException_ClassInfo_, allocate$LdapReferralException);
	return class$;
}

$Class* LdapReferralException::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com