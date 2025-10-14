#include <com/sun/jndi/ldap/LdapEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/naming/directory/Attributes.h>
#include <jcpp.h>

#undef DN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Attributes = ::javax::naming::directory::Attributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapEntry_FieldInfo_[] = {
	{"DN", "Ljava/lang/String;", nullptr, 0, $field(LdapEntry, DN)},
	{"attributes", "Ljavax/naming/directory/Attributes;", nullptr, 0, $field(LdapEntry, attributes)},
	{"respCtls", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/naming/ldap/Control;>;", 0, $field(LdapEntry, respCtls)},
	{}
};

$MethodInfo _LdapEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)V", nullptr, 0, $method(static_cast<void(LdapEntry::*)($String*,$Attributes*)>(&LdapEntry::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector;)V", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;Ljava/util/Vector<Ljavax/naming/ldap/Control;>;)V", 0, $method(static_cast<void(LdapEntry::*)($String*,$Attributes*,$Vector*)>(&LdapEntry::init$))},
	{}
};

$ClassInfo _LdapEntry_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapEntry",
	"java.lang.Object",
	nullptr,
	_LdapEntry_FieldInfo_,
	_LdapEntry_MethodInfo_
};

$Object* allocate$LdapEntry($Class* clazz) {
	return $of($alloc(LdapEntry));
}

void LdapEntry::init$($String* DN, $Attributes* attrs) {
	$set(this, respCtls, nullptr);
	$set(this, DN, DN);
	$set(this, attributes, attrs);
}

void LdapEntry::init$($String* DN, $Attributes* attrs, $Vector* respCtls) {
	$set(this, respCtls, nullptr);
	$set(this, DN, DN);
	$set(this, attributes, attrs);
	$set(this, respCtls, respCtls);
}

LdapEntry::LdapEntry() {
}

$Class* LdapEntry::load$($String* name, bool initialize) {
	$loadClass(LdapEntry, name, initialize, &_LdapEntry_ClassInfo_, allocate$LdapEntry);
	return class$;
}

$Class* LdapEntry::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com