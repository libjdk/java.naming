#include <com/sun/jndi/ldap/LdapName$Rdn.h>

#include <com/sun/jndi/ldap/LdapName$TypeAndValue.h>
#include <com/sun/jndi/ldap/LdapName.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Vector.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <jcpp.h>

using $LdapName = ::com::sun::jndi::ldap::LdapName;
using $LdapName$TypeAndValue = ::com::sun::jndi::ldap::LdapName$TypeAndValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Vector = ::java::util::Vector;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapName$Rdn_FieldInfo_[] = {
	{"tvs", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/sun/jndi/ldap/LdapName$TypeAndValue;>;", $PRIVATE | $FINAL, $field(LdapName$Rdn, tvs)},
	{}
};

$MethodInfo _LdapName$Rdn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(LdapName$Rdn::*)()>(&LdapName$Rdn::init$))},
	{"add", "(Lcom/sun/jndi/ldap/LdapName$TypeAndValue;)V", nullptr, 0},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toAttributes", "()Ljavax/naming/directory/Attributes;", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LdapName$Rdn_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.LdapName$Rdn", "com.sun.jndi.ldap.LdapName", "Rdn", $STATIC},
	{}
};

$ClassInfo _LdapName$Rdn_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.LdapName$Rdn",
	"java.lang.Object",
	nullptr,
	_LdapName$Rdn_FieldInfo_,
	_LdapName$Rdn_MethodInfo_,
	nullptr,
	nullptr,
	_LdapName$Rdn_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.LdapName"
};

$Object* allocate$LdapName$Rdn($Class* clazz) {
	return $of($alloc(LdapName$Rdn));
}

void LdapName$Rdn::init$() {
	$set(this, tvs, $new($Vector));
}

void LdapName$Rdn::add($LdapName$TypeAndValue* tv) {
	$useLocalCurrentObjectStackCache();
	int32_t i = 0;
	for (i = 0; i < $nc(this->tvs)->size(); ++i) {
		int32_t diff = $nc(tv)->compareTo($($nc(this->tvs)->elementAt(i)));
		if (diff == 0) {
			return;
		} else if (diff < 0) {
			break;
		}
	}
	$nc(this->tvs)->insertElementAt(tv, i);
}

$String* LdapName$Rdn::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, buf, $new($StringBuffer));
	for (int32_t i = 0; i < $nc(this->tvs)->size(); ++i) {
		if (i > 0) {
			buf->append(u'+');
		}
		buf->append($($nc(this->tvs)->elementAt(i)));
	}
	return $new($String, buf);
}

bool LdapName$Rdn::equals(Object$* obj) {
	return (($instanceOf(LdapName$Rdn, obj)) && (compareTo(obj) == 0));
}

int32_t LdapName$Rdn::compareTo(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	$var(LdapName$Rdn, that, $cast(LdapName$Rdn, obj));
	int32_t var$0 = $nc(this->tvs)->size();
	int32_t minSize = $Math::min(var$0, $nc($nc(that)->tvs)->size());
	for (int32_t i = 0; i < minSize; ++i) {
		$var($LdapName$TypeAndValue, tv, $cast($LdapName$TypeAndValue, $nc(this->tvs)->elementAt(i)));
		int32_t diff = $nc(tv)->compareTo($($nc($nc(that)->tvs)->elementAt(i)));
		if (diff != 0) {
			return diff;
		}
	}
	int32_t var$1 = $nc(this->tvs)->size();
	return (var$1 - $nc($nc(that)->tvs)->size());
}

int32_t LdapName$Rdn::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t hash = 0;
	for (int32_t i = 0; i < $nc(this->tvs)->size(); ++i) {
		hash += $nc(($cast($LdapName$TypeAndValue, $($nc(this->tvs)->elementAt(i)))))->hashCode();
	}
	return hash;
}

$Attributes* LdapName$Rdn::toAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($Attributes, attrs, $new($BasicAttributes, true));
	$var($LdapName$TypeAndValue, tv, nullptr);
	$var($Attribute, attr, nullptr);
	for (int32_t i = 0; i < $nc(this->tvs)->size(); ++i) {
		$assign(tv, $cast($LdapName$TypeAndValue, $nc(this->tvs)->elementAt(i)));
		if (($assign(attr, attrs->get($($nc(tv)->getType())))) == nullptr) {
			$var($String, var$0, $nc(tv)->getType());
			attrs->put(var$0, $(tv->getUnescapedValue()));
		} else {
			$nc(attr)->add($($nc(tv)->getUnescapedValue()));
		}
	}
	return attrs;
}

LdapName$Rdn::LdapName$Rdn() {
}

$Class* LdapName$Rdn::load$($String* name, bool initialize) {
	$loadClass(LdapName$Rdn, name, initialize, &_LdapName$Rdn_ClassInfo_, allocate$LdapName$Rdn);
	return class$;
}

$Class* LdapName$Rdn::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com