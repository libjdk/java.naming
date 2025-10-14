#include <javax/naming/LinkRef.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/naming/MalformedLinkException.h>
#include <javax/naming/Name.h>
#include <javax/naming/RefAddr.h>
#include <javax/naming/Reference.h>
#include <javax/naming/StringRefAddr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedLinkException = ::javax::naming::MalformedLinkException;
using $Name = ::javax::naming::Name;
using $RefAddr = ::javax::naming::RefAddr;
using $Reference = ::javax::naming::Reference;
using $StringRefAddr = ::javax::naming::StringRefAddr;

namespace javax {
	namespace naming {

$FieldInfo _LinkRef_FieldInfo_[] = {
	{"linkClassName", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LinkRef, linkClassName)},
	{"linkAddrType", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(LinkRef, linkAddrType)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinkRef, serialVersionUID)},
	{}
};

$MethodInfo _LinkRef_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, $method(static_cast<void(LinkRef::*)($Name*)>(&LinkRef::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LinkRef::*)($String*)>(&LinkRef::init$))},
	{"getLinkName", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{}
};

$ClassInfo _LinkRef_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.LinkRef",
	"javax.naming.Reference",
	nullptr,
	_LinkRef_FieldInfo_,
	_LinkRef_MethodInfo_
};

$Object* allocate$LinkRef($Class* clazz) {
	return $of($alloc(LinkRef));
}

$String* LinkRef::linkClassName = nullptr;
$String* LinkRef::linkAddrType = nullptr;

void LinkRef::init$($Name* linkName) {
	$Reference::init$(LinkRef::linkClassName, $$new($StringRefAddr, LinkRef::linkAddrType, $($nc($of(linkName))->toString())));
}

void LinkRef::init$($String* linkName) {
	$Reference::init$(LinkRef::linkClassName, $$new($StringRefAddr, LinkRef::linkAddrType, linkName));
}

$String* LinkRef::getLinkName() {
	if (this->className != nullptr && $nc(this->className)->equals(LinkRef::linkClassName)) {
		$var($RefAddr, addr, get(LinkRef::linkAddrType));
		if (addr != nullptr && $instanceOf($StringRefAddr, addr)) {
			return $cast($String, $nc(($cast($StringRefAddr, addr)))->getContent());
		}
	}
	$throwNew($MalformedLinkException);
}

void clinit$LinkRef($Class* class$) {
	$assignStatic(LinkRef::linkAddrType, "LinkAddress"_s);
	$assignStatic(LinkRef::linkClassName, LinkRef::class$->getName());
}

LinkRef::LinkRef() {
}

$Class* LinkRef::load$($String* name, bool initialize) {
	$loadClass(LinkRef, name, initialize, &_LinkRef_ClassInfo_, clinit$LinkRef, allocate$LinkRef);
	return class$;
}

$Class* LinkRef::class$ = nullptr;

	} // naming
} // javax