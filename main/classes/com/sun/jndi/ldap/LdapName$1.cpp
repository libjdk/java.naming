#include <com/sun/jndi/ldap/LdapName$1.h>

#include <com/sun/jndi/ldap/LdapName$Rdn.h>
#include <com/sun/jndi/ldap/LdapName.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

using $LdapName = ::com::sun::jndi::ldap::LdapName;
using $LdapName$Rdn = ::com::sun::jndi::ldap::LdapName$Rdn;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapName$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/jndi/ldap/LdapName;", nullptr, $FINAL | $SYNTHETIC, $field(LdapName$1, this$0)},
	{"val$enum_", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(LdapName$1, val$enum_)},
	{}
};

$MethodInfo _LdapName$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/LdapName;Ljava/util/Enumeration;)V", "()V", 0, $method(static_cast<void(LdapName$1::*)($LdapName*,$Enumeration*)>(&LdapName$1::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LdapName$1_EnclosingMethodInfo_ = {
	"com.sun.jndi.ldap.LdapName",
	"getAll",
	"()Ljava/util/Enumeration;"
};

$InnerClassInfo _LdapName$1_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.LdapName$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LdapName$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.LdapName$1",
	"java.lang.Object",
	"java.util.Enumeration",
	_LdapName$1_FieldInfo_,
	_LdapName$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/String;>;",
	&_LdapName$1_EnclosingMethodInfo_,
	_LdapName$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.LdapName"
};

$Object* allocate$LdapName$1($Class* clazz) {
	return $of($alloc(LdapName$1));
}

void LdapName$1::init$($LdapName* this$0, $Enumeration* val$enum_) {
	$set(this, this$0, this$0);
	$set(this, val$enum_, val$enum_);
}

bool LdapName$1::hasMoreElements() {
	return $nc(this->val$enum_)->hasMoreElements();
}

$Object* LdapName$1::nextElement() {
	return $of($nc(($cast($LdapName$Rdn, $($nc(this->val$enum_)->nextElement()))))->toString());
}

LdapName$1::LdapName$1() {
}

$Class* LdapName$1::load$($String* name, bool initialize) {
	$loadClass(LdapName$1, name, initialize, &_LdapName$1_ClassInfo_, allocate$LdapName$1);
	return class$;
}

$Class* LdapName$1::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com