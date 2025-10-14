#include <javax/naming/directory/BasicAttribute.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Vector.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/OperationNotSupportedException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/BasicAttribute$ValuesEnumImpl.h>
#include <javax/naming/directory/DirContext.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Vector = ::java::util::Vector;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $OperationNotSupportedException = ::javax::naming::OperationNotSupportedException;
using $Attribute = ::javax::naming::directory::Attribute;
using $BasicAttribute$ValuesEnumImpl = ::javax::naming::directory::BasicAttribute$ValuesEnumImpl;
using $DirContext = ::javax::naming::directory::DirContext;

namespace javax {
	namespace naming {
		namespace directory {

$FieldInfo _BasicAttribute_FieldInfo_[] = {
	{"attrID", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicAttribute, attrID)},
	{"values", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Object;>;", $PROTECTED | $TRANSIENT, $field(BasicAttribute, values)},
	{"ordered", "Z", nullptr, $PROTECTED, $field(BasicAttribute, ordered)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicAttribute, serialVersionUID)},
	{}
};

$MethodInfo _BasicAttribute_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicAttribute::*)($String*)>(&BasicAttribute::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicAttribute::*)($String*,Object$*)>(&BasicAttribute::init$))},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(BasicAttribute::*)($String*,bool)>(&BasicAttribute::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;Z)V", nullptr, $PUBLIC, $method(static_cast<void(BasicAttribute::*)($String*,Object$*,bool)>(&BasicAttribute::init$))},
	{"add", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"add", "(ILjava/lang/Object;)V", nullptr, $PUBLIC},
	{"arrayEquals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&BasicAttribute::arrayEquals))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"contains", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"find", "(Ljava/lang/Object;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicAttribute::*)(Object$*)>(&BasicAttribute::find))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"get", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAll", "()Ljavax/naming/NamingEnumeration;", "()Ljavax/naming/NamingEnumeration<*>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributeDefinition", "()Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributeSyntaxDefinition", "()Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isOrdered", "()Z", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicAttribute::*)($ObjectInputStream*)>(&BasicAttribute::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"set", "(ILjava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueEquals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&BasicAttribute::valueEquals))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicAttribute::*)($ObjectOutputStream*)>(&BasicAttribute::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _BasicAttribute_InnerClassesInfo_[] = {
	{"javax.naming.directory.BasicAttribute$ValuesEnumImpl", "javax.naming.directory.BasicAttribute", "ValuesEnumImpl", 0},
	{}
};

$ClassInfo _BasicAttribute_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.directory.BasicAttribute",
	"java.lang.Object",
	"javax.naming.directory.Attribute",
	_BasicAttribute_FieldInfo_,
	_BasicAttribute_MethodInfo_,
	nullptr,
	nullptr,
	_BasicAttribute_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.naming.directory.BasicAttribute$ValuesEnumImpl"
};

$Object* allocate$BasicAttribute($Class* clazz) {
	return $of($alloc(BasicAttribute));
}

$Object* BasicAttribute::clone() {
	$var(BasicAttribute, attr, nullptr);
	try {
		$assign(attr, $cast(BasicAttribute, $Attribute::clone()));
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$assign(attr, $new(BasicAttribute, this->attrID, this->ordered));
	}
	$set($nc(attr), values, $cast($Vector, $nc(this->values)->clone()));
	return $of(attr);
}

bool BasicAttribute::equals(Object$* obj) {
	if ((obj != nullptr) && ($instanceOf($Attribute, obj))) {
		$var($Attribute, target, $cast($Attribute, obj));
		bool var$0 = isOrdered();
		if (var$0 != target->isOrdered()) {
			return false;
		}
		int32_t len = 0;
		bool var$1 = $nc(this->attrID)->equals($(target->getID()));
		if (var$1) {
			int32_t var$2 = (len = size());
			var$1 = var$2 == target->size();
		}
		if (var$1) {
			try {
				if (isOrdered()) {
					for (int32_t i = 0; i < len; ++i) {
						$var($Object, var$3, get(i));
						if (!valueEquals(var$3, $(target->get(i)))) {
							return false;
						}
					}
				} else {
					$var($Enumeration, theirs, target->getAll());
					while ($nc(theirs)->hasMoreElements()) {
						if (find($(theirs->nextElement())) < 0) {
							return false;
						}
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

int32_t BasicAttribute::hashCode() {
	int32_t hash = $nc(this->attrID)->hashCode();
	int32_t num = $nc(this->values)->size();
	$var($Object, val, nullptr);
	for (int32_t i = 0; i < num; ++i) {
		$assign(val, $nc(this->values)->elementAt(i));
		if (val != nullptr) {
			if ($of(val)->getClass()->isArray()) {
				$var($Object, it, nullptr);
				int32_t len = $1Array::getLength(val);
				for (int32_t j = 0; j < len; ++j) {
					$assign(it, $1Array::get(val, j));
					if (it != nullptr) {
						hash += $of(it)->hashCode();
					}
				}
			} else {
				hash += $of(val)->hashCode();
			}
		}
	}
	return hash;
}

$String* BasicAttribute::toString() {
	$var($StringBuilder, answer, $new($StringBuilder, $$str({this->attrID, ": "_s})));
	if ($nc(this->values)->size() == 0) {
		answer->append("No values"_s);
	} else {
		bool start = true;
		{
			$var($Enumeration, e, $nc(this->values)->elements());
			for (; $nc(e)->hasMoreElements();) {
				if (!start) {
					answer->append(", "_s);
				}
				answer->append($(e->nextElement()));
				start = false;
			}
		}
	}
	return answer->toString();
}

void BasicAttribute::init$($String* id) {
	BasicAttribute::init$(id, false);
}

void BasicAttribute::init$($String* id, Object$* value) {
	BasicAttribute::init$(id, value, false);
}

void BasicAttribute::init$($String* id, bool ordered) {
	this->ordered = false;
	$set(this, attrID, id);
	$set(this, values, $new($Vector));
	this->ordered = ordered;
}

void BasicAttribute::init$($String* id, Object$* value, bool ordered) {
	BasicAttribute::init$(id, ordered);
	$nc(this->values)->addElement(value);
}

$NamingEnumeration* BasicAttribute::getAll() {
	return $new($BasicAttribute$ValuesEnumImpl, this);
}

$Object* BasicAttribute::get() {
	if ($nc(this->values)->size() == 0) {
		$throwNew($NoSuchElementException, $$str({"Attribute "_s, $(getID()), " has no value"_s}));
	} else {
		return $of($nc(this->values)->elementAt(0));
	}
}

int32_t BasicAttribute::size() {
	return $nc(this->values)->size();
}

$String* BasicAttribute::getID() {
	return this->attrID;
}

bool BasicAttribute::contains(Object$* attrVal) {
	return (find(attrVal) >= 0);
}

int32_t BasicAttribute::find(Object$* target) {
	$Class* cl = nullptr;
	if (target == nullptr) {
		int32_t ct = $nc(this->values)->size();
		for (int32_t i = 0; i < ct; ++i) {
			if ($nc(this->values)->elementAt(i) == nullptr) {
				return i;
			}
		}
	} else if ($nc((cl = $nc($of(target))->getClass()))->isArray()) {
		int32_t ct = $nc(this->values)->size();
		$var($Object, it, nullptr);
		for (int32_t i = 0; i < ct; ++i) {
			$assign(it, $nc(this->values)->elementAt(i));
			bool var$0 = it != nullptr && cl == $of(it)->getClass();
			if (var$0 && arrayEquals(target, it)) {
				return i;
			}
		}
	} else {
		return $nc(this->values)->indexOf(target, 0);
	}
	return -1;
}

bool BasicAttribute::valueEquals(Object$* obj1, Object$* obj2) {
	$init(BasicAttribute);
	if ($equals(obj1, obj2)) {
		return true;
	}
	if (obj1 == nullptr) {
		return false;
	}
	bool var$0 = $nc($of(obj1))->getClass()->isArray();
	if (var$0 && $nc($of(obj2))->getClass()->isArray()) {
		return arrayEquals(obj1, obj2);
	}
	return ($nc($of(obj1))->equals(obj2));
}

bool BasicAttribute::arrayEquals(Object$* a1, Object$* a2) {
	$init(BasicAttribute);
	int32_t len = 0;
	int32_t var$0 = (len = $1Array::getLength(a1));
	if (var$0 != $1Array::getLength(a2)) {
		return false;
	}
	for (int32_t j = 0; j < len; ++j) {
		$var($Object, i1, $1Array::get(a1, j));
		$var($Object, i2, $1Array::get(a2, j));
		if (i1 == nullptr || i2 == nullptr) {
			if (!$equals(i1, i2)) {
				return false;
			}
		} else if (!$nc($of(i1))->equals(i2)) {
			return false;
		}
	}
	return true;
}

bool BasicAttribute::add(Object$* attrVal) {
	bool var$0 = isOrdered();
	if (var$0 || (find(attrVal) < 0)) {
		$nc(this->values)->addElement(attrVal);
		return true;
	} else {
		return false;
	}
}

bool BasicAttribute::remove(Object$* attrval) {
	int32_t i = find(attrval);
	if (i >= 0) {
		$nc(this->values)->removeElementAt(i);
		return true;
	}
	return false;
}

void BasicAttribute::clear() {
	$nc(this->values)->setSize(0);
}

bool BasicAttribute::isOrdered() {
	return this->ordered;
}

$Object* BasicAttribute::get(int32_t ix) {
	return $of($nc(this->values)->elementAt(ix));
}

$Object* BasicAttribute::remove(int32_t ix) {
	$var($Object, answer, $nc(this->values)->elementAt(ix));
	$nc(this->values)->removeElementAt(ix);
	return $of(answer);
}

void BasicAttribute::add(int32_t ix, Object$* attrVal) {
	bool var$0 = !isOrdered();
	if (var$0 && contains(attrVal)) {
		$throwNew($IllegalStateException, "Cannot add duplicate to unordered attribute"_s);
	}
	$nc(this->values)->insertElementAt(attrVal, ix);
}

$Object* BasicAttribute::set(int32_t ix, Object$* attrVal) {
	bool var$0 = !isOrdered();
	if (var$0 && contains(attrVal)) {
		$throwNew($IllegalStateException, "Cannot add duplicate to unordered attribute"_s);
	}
	$var($Object, answer, $nc(this->values)->elementAt(ix));
	$nc(this->values)->setElementAt(attrVal, ix);
	return $of(answer);
}

$DirContext* BasicAttribute::getAttributeSyntaxDefinition() {
	$throwNew($OperationNotSupportedException, "attribute syntax"_s);
	$shouldNotReachHere();
}

$DirContext* BasicAttribute::getAttributeDefinition() {
	$throwNew($OperationNotSupportedException, "attribute definition"_s);
	$shouldNotReachHere();
}

void BasicAttribute::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeInt($nc(this->values)->size());
	for (int32_t i = 0; i < $nc(this->values)->size(); ++i) {
		s->writeObject($($nc(this->values)->elementAt(i)));
	}
}

void BasicAttribute::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	int32_t n = s->readInt();
	$set(this, values, $new($Vector, $Math::min(1024, n)));
	while (--n >= 0) {
		$nc(this->values)->addElement($(s->readObject()));
	}
}

BasicAttribute::BasicAttribute() {
}

$Class* BasicAttribute::load$($String* name, bool initialize) {
	$loadClass(BasicAttribute, name, initialize, &_BasicAttribute_ClassInfo_, allocate$BasicAttribute);
	return class$;
}

$Class* BasicAttribute::class$ = nullptr;

		} // directory
	} // naming
} // javax