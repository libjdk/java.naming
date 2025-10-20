#include <com/sun/jndi/ldap/LdapResult.h>

#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/LdapEntry.h>
#include <com/sun/jndi/ldap/LdapReferralException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <jcpp.h>

#undef LDAP_COMPARE_FALSE
#undef LDAP_COMPARE_TRUE
#undef LDAP_SUCCESS

using $LdapClient = ::com::sun::jndi::ldap::LdapClient;
using $LdapEntry = ::com::sun::jndi::ldap::LdapEntry;
using $LdapReferralException = ::com::sun::jndi::ldap::LdapReferralException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapResult_FieldInfo_[] = {
	{"msgId", "I", nullptr, 0, $field(LdapResult, msgId)},
	{"status", "I", nullptr, $PUBLIC, $field(LdapResult, status)},
	{"matchedDN", "Ljava/lang/String;", nullptr, 0, $field(LdapResult, matchedDN)},
	{"errorMessage", "Ljava/lang/String;", nullptr, 0, $field(LdapResult, errorMessage)},
	{"referrals", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/util/Vector<Ljava/lang/String;>;>;", 0, $field(LdapResult, referrals)},
	{"refEx", "Lcom/sun/jndi/ldap/LdapReferralException;", nullptr, 0, $field(LdapResult, refEx)},
	{"entries", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/sun/jndi/ldap/LdapEntry;>;", 0, $field(LdapResult, entries)},
	{"resControls", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/naming/ldap/Control;>;", 0, $field(LdapResult, resControls)},
	{"serverCreds", "[B", nullptr, $PUBLIC, $field(LdapResult, serverCreds)},
	{"extensionId", "Ljava/lang/String;", nullptr, 0, $field(LdapResult, extensionId)},
	{"extensionValue", "[B", nullptr, 0, $field(LdapResult, extensionValue)},
	{}
};

$MethodInfo _LdapResult_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LdapResult::*)()>(&LdapResult::init$))},
	{"compareToSearchResult", "(Ljava/lang/String;)Z", nullptr, 0, $method(static_cast<bool(LdapResult::*)($String*)>(&LdapResult::compareToSearchResult))},
	{}
};

$ClassInfo _LdapResult_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapResult",
	"java.lang.Object",
	nullptr,
	_LdapResult_FieldInfo_,
	_LdapResult_MethodInfo_
};

$Object* allocate$LdapResult($Class* clazz) {
	return $of($alloc(LdapResult));
}

void LdapResult::init$() {
	$set(this, referrals, nullptr);
	$set(this, refEx, nullptr);
	$set(this, entries, nullptr);
	$set(this, resControls, nullptr);
	$set(this, serverCreds, nullptr);
	$set(this, extensionId, nullptr);
	$set(this, extensionValue, nullptr);
}

bool LdapResult::compareToSearchResult($String* name) {
	$useLocalCurrentObjectStackCache();
	bool successful = false;
	{
		$var($Attributes, attrs, nullptr)
		$var($LdapEntry, entry, nullptr)
		switch (this->status) {
		case $LdapClient::LDAP_COMPARE_TRUE:
			{
				this->status = $LdapClient::LDAP_SUCCESS;
				$set(this, entries, $new($Vector, 1, 1));
				$assign(attrs, $new($BasicAttributes, $LdapClient::caseIgnore));
				$assign(entry, $new($LdapEntry, name, attrs));
				$nc(this->entries)->addElement(entry);
				successful = true;
				break;
			}
		case $LdapClient::LDAP_COMPARE_FALSE:
			{
				this->status = $LdapClient::LDAP_SUCCESS;
				$set(this, entries, $new($Vector, 0));
				successful = true;
				break;
			}
		default:
			{
				successful = false;
				break;
			}
		}
	}
	return successful;
}

LdapResult::LdapResult() {
}

$Class* LdapResult::load$($String* name, bool initialize) {
	$loadClass(LdapResult, name, initialize, &_LdapResult_ClassInfo_, allocate$LdapResult);
	return class$;
}

$Class* LdapResult::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com