#include <javax/naming/Reference.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/naming/RefAddr.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $RefAddr = ::javax::naming::RefAddr;

namespace javax {
	namespace naming {

$FieldInfo _Reference_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Reference, className)},
	{"addrs", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/naming/RefAddr;>;", $PROTECTED, $field(Reference, addrs)},
	{"classFactory", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Reference, classFactory)},
	{"classFactoryLocation", "Ljava/lang/String;", nullptr, $PROTECTED, $field(Reference, classFactoryLocation)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Reference, serialVersionUID)},
	{}
};

$MethodInfo _Reference_MethodInfo_[] = {
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Reference::*)($String*)>(&Reference::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/naming/RefAddr;)V", nullptr, $PUBLIC, $method(static_cast<void(Reference::*)($String*,$RefAddr*)>(&Reference::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Reference::*)($String*,$String*,$String*)>(&Reference::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/naming/RefAddr;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Reference::*)($String*,$RefAddr*,$String*,$String*)>(&Reference::init$))},
	{"add", "(Ljavax/naming/RefAddr;)V", nullptr, $PUBLIC},
	{"add", "(ILjavax/naming/RefAddr;)V", nullptr, $PUBLIC},
	{"clear", "()V", nullptr, $PUBLIC},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"get", "(Ljava/lang/String;)Ljavax/naming/RefAddr;", nullptr, $PUBLIC},
	{"get", "(I)Ljavax/naming/RefAddr;", nullptr, $PUBLIC},
	{"getAll", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/naming/RefAddr;>;", $PUBLIC},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFactoryClassLocation", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getFactoryClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Reference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.Reference",
	"java.lang.Object",
	"java.lang.Cloneable,java.io.Serializable",
	_Reference_FieldInfo_,
	_Reference_MethodInfo_
};

$Object* allocate$Reference($Class* clazz) {
	return $of($alloc(Reference));
}

void Reference::finalize() {
	this->$Cloneable::finalize();
}

void Reference::init$($String* className) {
	$set(this, addrs, nullptr);
	$set(this, classFactory, nullptr);
	$set(this, classFactoryLocation, nullptr);
	$set(this, className, className);
	$set(this, addrs, $new($Vector));
}

void Reference::init$($String* className, $RefAddr* addr) {
	$set(this, addrs, nullptr);
	$set(this, classFactory, nullptr);
	$set(this, classFactoryLocation, nullptr);
	$set(this, className, className);
	$set(this, addrs, $new($Vector));
	$nc(this->addrs)->addElement(addr);
}

void Reference::init$($String* className, $String* factory, $String* factoryLocation) {
	Reference::init$(className);
	$set(this, classFactory, factory);
	$set(this, classFactoryLocation, factoryLocation);
}

void Reference::init$($String* className, $RefAddr* addr, $String* factory, $String* factoryLocation) {
	Reference::init$(className, addr);
	$set(this, classFactory, factory);
	$set(this, classFactoryLocation, factoryLocation);
}

$String* Reference::getClassName() {
	return this->className;
}

$String* Reference::getFactoryClassName() {
	return this->classFactory;
}

$String* Reference::getFactoryClassLocation() {
	return this->classFactoryLocation;
}

$RefAddr* Reference::get($String* addrType) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(this->addrs)->size();
	$var($RefAddr, addr, nullptr);
	for (int32_t i = 0; i < len; ++i) {
		$assign(addr, $cast($RefAddr, $nc(this->addrs)->elementAt(i)));
		if ($nc($($nc(addr)->getType()))->compareTo(addrType) == 0) {
			return addr;
		}
	}
	return nullptr;
}

$RefAddr* Reference::get(int32_t posn) {
	return $cast($RefAddr, $nc(this->addrs)->elementAt(posn));
}

$Enumeration* Reference::getAll() {
	return $nc(this->addrs)->elements();
}

int32_t Reference::size() {
	return $nc(this->addrs)->size();
}

void Reference::add($RefAddr* addr) {
	$nc(this->addrs)->addElement(addr);
}

void Reference::add(int32_t posn, $RefAddr* addr) {
	$nc(this->addrs)->insertElementAt(addr, posn);
}

$Object* Reference::remove(int32_t posn) {
	$var($Object, r, $nc(this->addrs)->elementAt(posn));
	$nc(this->addrs)->removeElementAt(posn);
	return $of(r);
}

void Reference::clear() {
	$nc(this->addrs)->setSize(0);
}

bool Reference::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ((obj != nullptr) && ($instanceOf(Reference, obj))) {
		$var(Reference, target, $cast(Reference, obj));
		bool var$0 = $nc(target->className)->equals(this->className);
		if (var$0) {
			int32_t var$1 = target->size();
			var$0 = var$1 == this->size();
		}
		if (var$0) {
			$var($Enumeration, mycomps, getAll());
			$var($Enumeration, comps, target->getAll());
			while ($nc(mycomps)->hasMoreElements()) {
				if (!($nc(($cast($RefAddr, $(mycomps->nextElement()))))->equals($($nc(comps)->nextElement())))) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

int32_t Reference::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t hash = $nc(this->className)->hashCode();
	{
		$var($Enumeration, e, getAll());
		for (; $nc(e)->hasMoreElements();) {
			hash += $nc(($cast($RefAddr, $(e->nextElement()))))->hashCode();
		}
	}
	return hash;
}

$String* Reference::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, $$str({"Reference Class Name: "_s, this->className, "\n"_s})));
	int32_t len = $nc(this->addrs)->size();
	for (int32_t i = 0; i < len; ++i) {
		sb->append($($nc($(get(i)))->toString()));
	}
	return sb->toString();
}

$Object* Reference::clone() {
	$useLocalCurrentObjectStackCache();
	$var(Reference, r, $new(Reference, this->className, this->classFactory, this->classFactoryLocation));
	$var($Enumeration, a, getAll());
	$set(r, addrs, $new($Vector));
	while ($nc(a)->hasMoreElements()) {
		$nc(r->addrs)->addElement($cast($RefAddr, $(a->nextElement())));
	}
	return $of(r);
}

Reference::Reference() {
}

$Class* Reference::load$($String* name, bool initialize) {
	$loadClass(Reference, name, initialize, &_Reference_ClassInfo_, allocate$Reference);
	return class$;
}

$Class* Reference::class$ = nullptr;

	} // naming
} // javax