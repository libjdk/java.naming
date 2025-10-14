#include <com/sun/jndi/ldap/AbstractLdapNamingEnumeration.h>

#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapEntry.h>
#include <com/sun/jndi/ldap/LdapName.h>
#include <com/sun/jndi/ldap/LdapReferralContext.h>
#include <com/sun/jndi/ldap/LdapReferralException.h>
#include <com/sun/jndi/ldap/LdapResult.h>
#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Vector.h>
#include <javax/naming/Context.h>
#include <javax/naming/LimitExceededException.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameClassPair.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/PartialResultException.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/ldap/Control.h>
#include <jcpp.h>

#undef DN
#undef LDAP_ADMIN_LIMIT_EXCEEDED
#undef LDAP_PARTIAL_RESULTS
#undef LDAP_REFERRAL
#undef LDAP_REF_THROW
#undef LDAP_SIZE_LIMIT_EXCEEDED
#undef LDAP_SUCCESS
#undef LDAP_TIME_LIMIT_EXCEEDED

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapEntry = ::com::sun::jndi::ldap::LdapEntry;
using $LdapName = ::com::sun::jndi::ldap::LdapName;
using $LdapReferralContext = ::com::sun::jndi::ldap::LdapReferralContext;
using $LdapReferralException = ::com::sun::jndi::ldap::LdapReferralException;
using $LdapResult = ::com::sun::jndi::ldap::LdapResult;
using $ReferralEnumeration = ::com::sun::jndi::ldap::ReferralEnumeration;
using $Continuation = ::com::sun::jndi::toolkit::ctx::Continuation;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Hashtable = ::java::util::Hashtable;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Vector = ::java::util::Vector;
using $Context = ::javax::naming::Context;
using $LimitExceededException = ::javax::naming::LimitExceededException;
using $Name = ::javax::naming::Name;
using $NameClassPair = ::javax::naming::NameClassPair;
using $NamingException = ::javax::naming::NamingException;
using $PartialResultException = ::javax::naming::PartialResultException;
using $Attributes = ::javax::naming::directory::Attributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _AbstractLdapNamingEnumeration_FieldInfo_[] = {
	{"listArg", "Ljavax/naming/Name;", nullptr, $PROTECTED, $field(AbstractLdapNamingEnumeration, listArg)},
	{"cleaned", "Z", nullptr, $PRIVATE, $field(AbstractLdapNamingEnumeration, cleaned)},
	{"res", "Lcom/sun/jndi/ldap/LdapResult;", nullptr, $PRIVATE, $field(AbstractLdapNamingEnumeration, res)},
	{"enumClnt", "Lcom/sun/jndi/ldap/LdapClient;", nullptr, $PRIVATE, $field(AbstractLdapNamingEnumeration, enumClnt)},
	{"cont", "Lcom/sun/jndi/toolkit/ctx/Continuation;", nullptr, $PRIVATE, $field(AbstractLdapNamingEnumeration, cont)},
	{"entries", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/sun/jndi/ldap/LdapEntry;>;", $PRIVATE, $field(AbstractLdapNamingEnumeration, entries)},
	{"limit", "I", nullptr, $PRIVATE, $field(AbstractLdapNamingEnumeration, limit)},
	{"posn", "I", nullptr, $PRIVATE, $field(AbstractLdapNamingEnumeration, posn)},
	{"homeCtx", "Lcom/sun/jndi/ldap/LdapCtx;", nullptr, $PROTECTED, $field(AbstractLdapNamingEnumeration, homeCtx)},
	{"refEx", "Lcom/sun/jndi/ldap/LdapReferralException;", nullptr, $PRIVATE, $field(AbstractLdapNamingEnumeration, refEx)},
	{"errEx", "Ljavax/naming/NamingException;", nullptr, $PRIVATE, $field(AbstractLdapNamingEnumeration, errEx)},
	{"more", "Z", nullptr, $PRIVATE, $field(AbstractLdapNamingEnumeration, more)},
	{"hasMoreCalled", "Z", nullptr, $PRIVATE, $field(AbstractLdapNamingEnumeration, hasMoreCalled)},
	{}
};

$MethodInfo _AbstractLdapNamingEnumeration_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/LdapCtx;Lcom/sun/jndi/ldap/LdapResult;Ljavax/naming/Name;Lcom/sun/jndi/toolkit/ctx/Continuation;)V", nullptr, 0, $method(static_cast<void(AbstractLdapNamingEnumeration::*)($LdapCtx*,$LdapResult*,$Name*,$Continuation*)>(&AbstractLdapNamingEnumeration::init$)), "javax.naming.NamingException"},
	{"appendUnprocessedReferrals", "(Lcom/sun/jndi/ldap/LdapReferralException;)V", nullptr, $PUBLIC},
	{"cleanup", "()V", nullptr, $PROTECTED | $FINAL, $method(static_cast<void(AbstractLdapNamingEnumeration::*)()>(&AbstractLdapNamingEnumeration::cleanup))},
	{"close", "()V", nullptr, $PUBLIC | $FINAL},
	{"createItem", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector;)Ljavax/naming/NameClassPair;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector<Ljavax/naming/ldap/Control;>;)TT;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"getAtom", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $FINAL, $method(static_cast<$String*(AbstractLdapNamingEnumeration::*)($String*)>(&AbstractLdapNamingEnumeration::getAtom))},
	{"getNextBatch", "()V", nullptr, $PRIVATE, $method(static_cast<void(AbstractLdapNamingEnumeration::*)()>(&AbstractLdapNamingEnumeration::getNextBatch)), "javax.naming.NamingException"},
	{"getReferredResults", "(Lcom/sun/jndi/ldap/LdapReferralContext;)Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration;", "(Lcom/sun/jndi/ldap/LdapReferralContext;)Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration<+Ljavax/naming/NameClassPair;>;", $PROTECTED | $ABSTRACT, nullptr, "javax.naming.NamingException"},
	{"hasMore", "()Z", nullptr, $PUBLIC | $FINAL, nullptr, "javax.naming.NamingException"},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC | $FINAL},
	{"hasMoreImpl", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(AbstractLdapNamingEnumeration::*)()>(&AbstractLdapNamingEnumeration::hasMoreImpl)), "javax.naming.NamingException"},
	{"hasMoreReferrals", "()Z", nullptr, $PROTECTED | $FINAL, $method(static_cast<bool(AbstractLdapNamingEnumeration::*)()>(&AbstractLdapNamingEnumeration::hasMoreReferrals)), "javax.naming.NamingException"},
	{"next", "()Ljavax/naming/NameClassPair;", "()TT;", $PUBLIC | $FINAL, nullptr, "javax.naming.NamingException"},
	{"nextAux", "()Ljavax/naming/NameClassPair;", "()TT;", $PRIVATE, $method(static_cast<$NameClassPair*(AbstractLdapNamingEnumeration::*)()>(&AbstractLdapNamingEnumeration::nextAux)), "javax.naming.NamingException"},
	{"nextElement", "()Ljavax/naming/NameClassPair;", "()TT;", $PUBLIC | $FINAL},
	{"nextImpl", "()Ljavax/naming/NameClassPair;", "()TT;", $PRIVATE, $method(static_cast<$NameClassPair*(AbstractLdapNamingEnumeration::*)()>(&AbstractLdapNamingEnumeration::nextImpl)), "javax.naming.NamingException"},
	{"setNamingException", "(Ljavax/naming/NamingException;)V", nullptr, $FINAL, $method(static_cast<void(AbstractLdapNamingEnumeration::*)($NamingException*)>(&AbstractLdapNamingEnumeration::setNamingException))},
	{"update", "(Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration;)V", "(Lcom/sun/jndi/ldap/AbstractLdapNamingEnumeration<+Ljavax/naming/NameClassPair;>;)V", $PROTECTED},
	{}
};

$ClassInfo _AbstractLdapNamingEnumeration_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.jndi.ldap.AbstractLdapNamingEnumeration",
	"java.lang.Object",
	"com.sun.jndi.ldap.ReferralEnumeration",
	_AbstractLdapNamingEnumeration_FieldInfo_,
	_AbstractLdapNamingEnumeration_MethodInfo_,
	"<T:Ljavax/naming/NameClassPair;>Ljava/lang/Object;Ljavax/naming/NamingEnumeration<TT;>;Lcom/sun/jndi/ldap/ReferralEnumeration<TT;>;"
};

$Object* allocate$AbstractLdapNamingEnumeration($Class* clazz) {
	return $of($alloc(AbstractLdapNamingEnumeration));
}

void AbstractLdapNamingEnumeration::init$($LdapCtx* homeCtx, $LdapResult* answer, $Name* listArg, $Continuation* cont) {
	this->cleaned = false;
	$set(this, entries, nullptr);
	this->limit = 0;
	this->posn = 0;
	$set(this, refEx, nullptr);
	$set(this, errEx, nullptr);
	this->more = true;
	this->hasMoreCalled = false;
	if (($nc(answer)->status != $LdapClient::LDAP_SUCCESS) && (answer->status != $LdapClient::LDAP_SIZE_LIMIT_EXCEEDED) && (answer->status != $LdapClient::LDAP_TIME_LIMIT_EXCEEDED) && (answer->status != $LdapClient::LDAP_ADMIN_LIMIT_EXCEEDED) && (answer->status != $LdapClient::LDAP_REFERRAL) && (answer->status != $LdapClient::LDAP_PARTIAL_RESULTS)) {
		$var($NamingException, e, $new($NamingException, $($LdapClient::getErrorMessage(answer->status, answer->errorMessage))));
		$throw($($nc(cont)->fillInException(e)));
	}
	$set(this, res, answer);
	$set(this, entries, $nc(answer)->entries);
	this->limit = (this->entries == nullptr) ? 0 : $nc(this->entries)->size();
	$set(this, listArg, listArg);
	$set(this, cont, cont);
	if (answer->refEx != nullptr) {
		$set(this, refEx, answer->refEx);
	}
	$set(this, homeCtx, homeCtx);
	$nc(homeCtx)->incEnumCount();
	$set(this, enumClnt, homeCtx->clnt);
}

$Object* AbstractLdapNamingEnumeration::nextElement() {
	try {
		return $of(next());
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		cleanup();
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

bool AbstractLdapNamingEnumeration::hasMoreElements() {
	try {
		return hasMore();
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		cleanup();
		return false;
	}
	$shouldNotReachHere();
}

void AbstractLdapNamingEnumeration::getNextBatch() {
	$set(this, res, $nc(this->homeCtx)->getSearchReply(this->enumClnt, this->res));
	if (this->res == nullptr) {
		this->limit = (this->posn = 0);
		return;
	}
	$set(this, entries, $nc(this->res)->entries);
	this->limit = (this->entries == nullptr) ? 0 : $nc(this->entries)->size();
	this->posn = 0;
	if (($nc(this->res)->status != $LdapClient::LDAP_SUCCESS) || (($nc(this->res)->status == $LdapClient::LDAP_SUCCESS) && ($nc(this->res)->referrals != nullptr))) {
		try {
			$nc(this->homeCtx)->processReturnCode(this->res, this->listArg);
		} catch ($LimitExceededException&) {
			$var($NamingException, e, $catch());
			setNamingException(e);
		} catch ($PartialResultException&) {
			$var($NamingException, e, $catch());
			setNamingException(e);
		}
	}
	if ($nc(this->res)->refEx != nullptr) {
		if (this->refEx == nullptr) {
			$set(this, refEx, $nc(this->res)->refEx);
		} else {
			$set(this, refEx, $nc(this->refEx)->appendUnprocessedReferrals($nc(this->res)->refEx));
		}
		$set($nc(this->res), refEx, nullptr);
	}
	if ($nc(this->res)->resControls != nullptr) {
		$set($nc(this->homeCtx), respCtls, $nc(this->res)->resControls);
	}
}

bool AbstractLdapNamingEnumeration::hasMore() {
	if (this->hasMoreCalled) {
		return this->more;
	}
	this->hasMoreCalled = true;
	if (!this->more) {
		return false;
	} else {
		return (this->more = hasMoreImpl());
	}
}

$Object* AbstractLdapNamingEnumeration::next() {
	if (!this->hasMoreCalled) {
		hasMore();
	}
	this->hasMoreCalled = false;
	return $of(nextImpl());
}

bool AbstractLdapNamingEnumeration::hasMoreImpl() {
	if (this->posn == this->limit) {
		getNextBatch();
	}
	if (this->posn < this->limit) {
		return true;
	} else {
		try {
			return hasMoreReferrals();
		} catch ($LdapReferralException&) {
			$var($NamingException, e, $catch());
			cleanup();
			$throw(e);
		} catch ($LimitExceededException&) {
			$var($NamingException, e, $catch());
			cleanup();
			$throw(e);
		} catch ($PartialResultException&) {
			$var($NamingException, e, $catch());
			cleanup();
			$throw(e);
		} catch ($NamingException&) {
			$var($NamingException, e, $catch());
			cleanup();
			$var($PartialResultException, pre, $new($PartialResultException));
			pre->setRootCause(e);
			$throw(pre);
		}
	}
	$shouldNotReachHere();
}

$NameClassPair* AbstractLdapNamingEnumeration::nextImpl() {
	try {
		return nextAux();
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		cleanup();
		$throw($($nc(this->cont)->fillInException(e)));
	}
	$shouldNotReachHere();
}

$NameClassPair* AbstractLdapNamingEnumeration::nextAux() {
	if (this->posn == this->limit) {
		getNextBatch();
	}
	if (this->posn >= this->limit) {
		cleanup();
		$throwNew($NoSuchElementException, "invalid enumeration handle"_s);
	}
	$var($LdapEntry, result, $cast($LdapEntry, $nc(this->entries)->elementAt(this->posn++)));
	return createItem($nc(result)->DN, result->attributes, result->respCtls);
}

$String* AbstractLdapNamingEnumeration::getAtom($String* dn) {
	try {
		$var($Name, parsed, $new($LdapName, dn));
		return parsed->get(parsed->size() - 1);
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		return dn;
	}
	$shouldNotReachHere();
}

void AbstractLdapNamingEnumeration::appendUnprocessedReferrals($LdapReferralException* ex) {
	if (this->refEx != nullptr) {
		$set(this, refEx, $nc(this->refEx)->appendUnprocessedReferrals(ex));
	} else {
		$set(this, refEx, $nc(ex)->appendUnprocessedReferrals(this->refEx));
	}
}

void AbstractLdapNamingEnumeration::setNamingException($NamingException* e) {
	$set(this, errEx, e);
}

bool AbstractLdapNamingEnumeration::hasMoreReferrals() {
	bool var$0 = (this->refEx != nullptr);
	if (var$0) {
		bool var$1 = $nc(this->refEx)->hasMoreReferrals();
		var$0 = (var$1 || $nc(this->refEx)->hasMoreReferralExceptions() && !($instanceOf($LimitExceededException, this->errEx)));
	}
	if (var$0) {
		if ($nc(this->homeCtx)->handleReferrals == $LdapClient::LDAP_REF_THROW) {
			$throw(($cast($NamingException, $($nc(this->refEx)->fillInStackTrace()))));
		}
		while (true) {
			$var($LdapReferralContext, refCtx, $cast($LdapReferralContext, $nc(this->refEx)->getReferralContext($nc(this->homeCtx)->envprops, $nc(this->homeCtx)->reqCtls)));
			{
				$var($Throwable, var$2, nullptr);
				bool break$3 = false;
				bool continue$4 = false;
				try {
					try {
						update($(getReferredResults(refCtx)));
						// break;
						break$3 = true;
						goto $finally;
					} catch ($LdapReferralException&) {
						$var($LdapReferralException, re, $catch());
						if (this->errEx == nullptr) {
							$set(this, errEx, re->getNamingException());
						}
						$set(this, refEx, re);
						// continue;
						continue$4 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$assign(var$2, $catch());
				} $finally: {
					$nc(refCtx)->close();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
				if (break$3) {
					break;
				}
				if (continue$4) {
					continue;
				}
			}
		}
		return hasMoreImpl();
	} else {
		cleanup();
		if (this->errEx != nullptr) {
			$throw(this->errEx);
		}
		return (false);
	}
}

void AbstractLdapNamingEnumeration::update(AbstractLdapNamingEnumeration* ne) {
	$nc(this->homeCtx)->decEnumCount();
	$set(this, homeCtx, $nc(ne)->homeCtx);
	$set(this, enumClnt, ne->enumClnt);
	$set(ne, homeCtx, nullptr);
	this->posn = ne->posn;
	this->limit = ne->limit;
	$set(this, res, ne->res);
	$set(this, entries, ne->entries);
	$set(this, refEx, ne->refEx);
	$set(this, listArg, ne->listArg);
}

void AbstractLdapNamingEnumeration::finalize() {
	cleanup();
}

void AbstractLdapNamingEnumeration::cleanup() {
	if (this->cleaned) {
		return;
	}
	if (this->enumClnt != nullptr) {
		$nc(this->enumClnt)->clearSearchReply(this->res, $nc(this->homeCtx)->reqCtls);
	}
	$set(this, enumClnt, nullptr);
	this->cleaned = true;
	if (this->homeCtx != nullptr) {
		$nc(this->homeCtx)->decEnumCount();
		$set(this, homeCtx, nullptr);
	}
}

void AbstractLdapNamingEnumeration::close() {
	cleanup();
}

AbstractLdapNamingEnumeration::AbstractLdapNamingEnumeration() {
}

$Class* AbstractLdapNamingEnumeration::load$($String* name, bool initialize) {
	$loadClass(AbstractLdapNamingEnumeration, name, initialize, &_AbstractLdapNamingEnumeration_ClassInfo_, allocate$AbstractLdapNamingEnumeration);
	return class$;
}

$Class* AbstractLdapNamingEnumeration::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com