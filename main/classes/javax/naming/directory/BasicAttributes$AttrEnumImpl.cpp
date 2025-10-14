#include <javax/naming/directory/BasicAttributes$AttrEnumImpl.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $Attribute = ::javax::naming::directory::Attribute;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;

namespace javax {
	namespace naming {
		namespace directory {

$FieldInfo _BasicAttributes$AttrEnumImpl_FieldInfo_[] = {
	{"this$0", "Ljavax/naming/directory/BasicAttributes;", nullptr, $FINAL | $SYNTHETIC, $field(BasicAttributes$AttrEnumImpl, this$0)},
	{"elements", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljavax/naming/directory/Attribute;>;", 0, $field(BasicAttributes$AttrEnumImpl, elements)},
	{}
};

$MethodInfo _BasicAttributes$AttrEnumImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/directory/BasicAttributes;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicAttributes$AttrEnumImpl::*)($BasicAttributes*)>(&BasicAttributes$AttrEnumImpl::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"hasMore", "()Z", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"nextElement", "()Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicAttributes$AttrEnumImpl_InnerClassesInfo_[] = {
	{"javax.naming.directory.BasicAttributes$AttrEnumImpl", "javax.naming.directory.BasicAttributes", "AttrEnumImpl", 0},
	{}
};

$ClassInfo _BasicAttributes$AttrEnumImpl_ClassInfo_ = {
	$ACC_SUPER,
	"javax.naming.directory.BasicAttributes$AttrEnumImpl",
	"java.lang.Object",
	"javax.naming.NamingEnumeration",
	_BasicAttributes$AttrEnumImpl_FieldInfo_,
	_BasicAttributes$AttrEnumImpl_MethodInfo_,
	"Ljava/lang/Object;Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/Attribute;>;",
	nullptr,
	_BasicAttributes$AttrEnumImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.naming.directory.BasicAttributes"
};

$Object* allocate$BasicAttributes$AttrEnumImpl($Class* clazz) {
	return $of($alloc(BasicAttributes$AttrEnumImpl));
}

void BasicAttributes$AttrEnumImpl::init$($BasicAttributes* this$0) {
	$set(this, this$0, this$0);
	$set(this, elements, $nc(this$0->attrs)->elements());
}

bool BasicAttributes$AttrEnumImpl::hasMoreElements() {
	return $nc(this->elements)->hasMoreElements();
}

$Object* BasicAttributes$AttrEnumImpl::nextElement() {
	return $of($cast($Attribute, $nc(this->elements)->nextElement()));
}

bool BasicAttributes$AttrEnumImpl::hasMore() {
	return hasMoreElements();
}

$Object* BasicAttributes$AttrEnumImpl::next() {
	return $of(nextElement());
}

void BasicAttributes$AttrEnumImpl::close() {
	$set(this, elements, nullptr);
}

BasicAttributes$AttrEnumImpl::BasicAttributes$AttrEnumImpl() {
}

$Class* BasicAttributes$AttrEnumImpl::load$($String* name, bool initialize) {
	$loadClass(BasicAttributes$AttrEnumImpl, name, initialize, &_BasicAttributes$AttrEnumImpl_ClassInfo_, allocate$BasicAttributes$AttrEnumImpl);
	return class$;
}

$Class* BasicAttributes$AttrEnumImpl::class$ = nullptr;

		} // directory
	} // naming
} // javax