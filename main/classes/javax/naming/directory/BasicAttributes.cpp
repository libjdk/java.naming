#include <javax/naming/directory/BasicAttributes.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <java/util/Locale.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttribute.h>
#include <javax/naming/directory/BasicAttributes$AttrEnumImpl.h>
#include <javax/naming/directory/BasicAttributes$IDEnumImpl.h>
#include <jcpp.h>

#undef ENGLISH

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $Locale = ::java::util::Locale;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttribute = ::javax::naming::directory::BasicAttribute;
using $BasicAttributes$AttrEnumImpl = ::javax::naming::directory::BasicAttributes$AttrEnumImpl;
using $BasicAttributes$IDEnumImpl = ::javax::naming::directory::BasicAttributes$IDEnumImpl;

namespace javax {
	namespace naming {
		namespace directory {

$FieldInfo _BasicAttributes_FieldInfo_[] = {
	{"ignoreCase", "Z", nullptr, $PRIVATE, $field(BasicAttributes, ignoreCase)},
	{"attrs", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljavax/naming/directory/Attribute;>;", $TRANSIENT, $field(BasicAttributes, attrs)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicAttributes, serialVersionUID)},
	{}
};

$MethodInfo _BasicAttributes_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicAttributes::*)()>(&BasicAttributes::init$))},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(BasicAttributes::*)(bool)>(&BasicAttributes::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicAttributes::*)($String*,Object$*)>(&BasicAttributes::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $method(static_cast<void(BasicAttributes::*)($String*,Object$*,bool)>(&BasicAttributes::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;)Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC},
	{"getAll", "()Ljavax/naming/NamingEnumeration;", "()Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/Attribute;>;", $PUBLIC},
	{"getIDs", "()Ljavax/naming/NamingEnumeration;", "()Ljavax/naming/NamingEnumeration<Ljava/lang/String;>;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isCaseIgnored", "()Z", nullptr, $PUBLIC},
	{"put", "(Ljava/lang/String;Ljava/lang/Object;)Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC},
	{"put", "(Ljavax/naming/directory/Attribute;)Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicAttributes::*)($ObjectInputStream*)>(&BasicAttributes::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(Ljava/lang/String;)Ljavax/naming/directory/Attribute;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicAttributes::*)($ObjectOutputStream*)>(&BasicAttributes::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _BasicAttributes_InnerClassesInfo_[] = {
	{"javax.naming.directory.BasicAttributes$IDEnumImpl", "javax.naming.directory.BasicAttributes", "IDEnumImpl", 0},
	{"javax.naming.directory.BasicAttributes$AttrEnumImpl", "javax.naming.directory.BasicAttributes", "AttrEnumImpl", 0},
	{}
};

$ClassInfo _BasicAttributes_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.BasicAttributes",
	"java.lang.Object",
	"javax.naming.directory.Attributes",
	_BasicAttributes_FieldInfo_,
	_BasicAttributes_MethodInfo_,
	nullptr,
	nullptr,
	_BasicAttributes_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.naming.directory.BasicAttributes$IDEnumImpl,javax.naming.directory.BasicAttributes$AttrEnumImpl"
};

$Object* allocate$BasicAttributes($Class* clazz) {
	return $of($alloc(BasicAttributes));
}

void BasicAttributes::init$() {
	this->ignoreCase = false;
	$set(this, attrs, $new($Hashtable, 11));
}

void BasicAttributes::init$(bool ignoreCase) {
	this->ignoreCase = false;
	$set(this, attrs, $new($Hashtable, 11));
	this->ignoreCase = ignoreCase;
}

void BasicAttributes::init$($String* attrID, Object$* val) {
	BasicAttributes::init$();
	this->put($$new($BasicAttribute, attrID, val));
}

void BasicAttributes::init$($String* attrID, Object$* val, bool ignoreCase) {
	BasicAttributes::init$(ignoreCase);
	this->put($$new($BasicAttribute, attrID, val));
}

$Object* BasicAttributes::clone() {
	$useLocalCurrentObjectStackCache();
	$var(BasicAttributes, attrset, nullptr);
	try {
		$assign(attrset, $cast(BasicAttributes, $Attributes::clone()));
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$assign(attrset, $new(BasicAttributes, this->ignoreCase));
	}
	$set($nc(attrset), attrs, $cast($Hashtable, $nc(this->attrs)->clone()));
	return $of(attrset);
}

bool BasicAttributes::isCaseIgnored() {
	return this->ignoreCase;
}

int32_t BasicAttributes::size() {
	return $nc(this->attrs)->size();
}

$Attribute* BasicAttributes::get($String* attrID) {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	$var($Attribute, attr, $cast($Attribute, $nc(this->attrs)->get(this->ignoreCase ? $($of($nc(attrID)->toLowerCase($Locale::ENGLISH))) : $of(attrID))));
	return (attr);
}

$NamingEnumeration* BasicAttributes::getAll() {
	return $new($BasicAttributes$AttrEnumImpl, this);
}

$NamingEnumeration* BasicAttributes::getIDs() {
	return $new($BasicAttributes$IDEnumImpl, this);
}

$Attribute* BasicAttributes::put($String* attrID, Object$* val) {
	return this->put($$new($BasicAttribute, attrID, val));
}

$Attribute* BasicAttributes::put($Attribute* attr) {
	$var($String, id, $nc(attr)->getID());
	if (this->ignoreCase) {
		$init($Locale);
		$assign(id, $nc(id)->toLowerCase($Locale::ENGLISH));
	}
	return $cast($Attribute, $nc(this->attrs)->put(id, attr));
}

$Attribute* BasicAttributes::remove($String* attrID) {
	$init($Locale);
	$var($String, id, this->ignoreCase ? $nc(attrID)->toLowerCase($Locale::ENGLISH) : attrID);
	return $cast($Attribute, $nc(this->attrs)->remove(id));
}

$String* BasicAttributes::toString() {
	if ($nc(this->attrs)->size() == 0) {
		return ("No attributes"_s);
	} else {
		return $nc(this->attrs)->toString();
	}
}

bool BasicAttributes::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ((obj != nullptr) && ($instanceOf($Attributes, obj))) {
		$var($Attributes, target, $cast($Attributes, obj));
		if (this->ignoreCase != target->isCaseIgnored()) {
			return false;
		}
		int32_t var$0 = size();
		if (var$0 == target->size()) {
			$var($Attribute, their, nullptr);
			$var($Attribute, mine, nullptr);
			try {
				$var($NamingEnumeration, theirs, target->getAll());
				while ($nc(theirs)->hasMore()) {
					$assign(their, $cast($Attribute, theirs->next()));
					$assign(mine, get($($nc(their)->getID())));
					if (!$nc($of(their))->equals(mine)) {
						return false;
					}
				}
			} catch ($NamingException&) {
				$var($NamingException, e, $catch());
				return false;
			}
			return true;
		}
	}
	return false;
}

int32_t BasicAttributes::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t hash = (this->ignoreCase ? 1 : 0);
	try {
		$var($NamingEnumeration, all, getAll());
		while ($nc(all)->hasMore()) {
			hash += $nc($of($(all->next())))->hashCode();
		}
	} catch ($NamingException&) {
		$catch();
	}
	return hash;
}

void BasicAttributes::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultWriteObject();
	s->writeInt($nc(this->attrs)->size());
	$var($Enumeration, attrEnum, $nc(this->attrs)->elements());
	while ($nc(attrEnum)->hasMoreElements()) {
		s->writeObject($(attrEnum->nextElement()));
	}
}

void BasicAttributes::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	int32_t n = s->readInt();
	$set(this, attrs, (n >= 1) ? $new($Hashtable, 1 + $cast(int32_t, ($Math::min(768, n) / 0.75f))) : $new($Hashtable, 2));
	while (--n >= 0) {
		put($cast($Attribute, $(s->readObject())));
	}
}

BasicAttributes::BasicAttributes() {
}

$Class* BasicAttributes::load$($String* name, bool initialize) {
	$loadClass(BasicAttributes, name, initialize, &_BasicAttributes_ClassInfo_, allocate$BasicAttributes);
	return class$;
}

$Class* BasicAttributes::class$ = nullptr;

		} // directory
	} // naming
} // javax