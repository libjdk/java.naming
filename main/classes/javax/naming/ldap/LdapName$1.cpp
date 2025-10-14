#include <javax/naming/ldap/LdapName$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <javax/naming/ldap/LdapName.h>
#include <javax/naming/ldap/Rdn.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $LdapName = ::javax::naming::ldap::LdapName;
using $Rdn = ::javax::naming::ldap::Rdn;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _LdapName$1_FieldInfo_[] = {
	{"this$0", "Ljavax/naming/ldap/LdapName;", nullptr, $FINAL | $SYNTHETIC, $field(LdapName$1, this$0)},
	{"val$iter", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(LdapName$1, val$iter)},
	{}
};

$MethodInfo _LdapName$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/ldap/LdapName;Ljava/util/Iterator;)V", "()V", 0, $method(static_cast<void(LdapName$1::*)($LdapName*,$Iterator*)>(&LdapName$1::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _LdapName$1_EnclosingMethodInfo_ = {
	"javax.naming.ldap.LdapName",
	"getAll",
	"()Ljava/util/Enumeration;"
};

$InnerClassInfo _LdapName$1_InnerClassesInfo_[] = {
	{"javax.naming.ldap.LdapName$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LdapName$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.naming.ldap.LdapName$1",
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
	"javax.naming.ldap.LdapName"
};

$Object* allocate$LdapName$1($Class* clazz) {
	return $of($alloc(LdapName$1));
}

void LdapName$1::init$($LdapName* this$0, $Iterator* val$iter) {
	$set(this, this$0, this$0);
	$set(this, val$iter, val$iter);
}

bool LdapName$1::hasMoreElements() {
	return $nc(this->val$iter)->hasNext();
}

$Object* LdapName$1::nextElement() {
	return $of($nc(($cast($Rdn, $($nc(this->val$iter)->next()))))->toString());
}

LdapName$1::LdapName$1() {
}

$Class* LdapName$1::load$($String* name, bool initialize) {
	$loadClass(LdapName$1, name, initialize, &_LdapName$1_ClassInfo_, allocate$LdapName$1);
	return class$;
}

$Class* LdapName$1::class$ = nullptr;

		} // ldap
	} // naming
} // javax