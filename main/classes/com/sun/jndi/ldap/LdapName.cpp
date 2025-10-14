#include <com/sun/jndi/ldap/LdapName.h>

#include <com/sun/jndi/ldap/LdapName$1.h>
#include <com/sun/jndi/ldap/LdapName$DnParser.h>
#include <com/sun/jndi/ldap/LdapName$Rdn.h>
#include <com/sun/jndi/ldap/LdapName$TypeAndValue.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/StreamCorruptedException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/Name.h>
#include <jcpp.h>

using $LdapName$1 = ::com::sun::jndi::ldap::LdapName$1;
using $LdapName$DnParser = ::com::sun::jndi::ldap::LdapName$DnParser;
using $LdapName$Rdn = ::com::sun::jndi::ldap::LdapName$Rdn;
using $LdapName$TypeAndValue = ::com::sun::jndi::ldap::LdapName$TypeAndValue;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $Name = ::javax::naming::Name;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapName_FieldInfo_[] = {
	{"unparsed", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(LdapName, unparsed)},
	{"rdns", "Ljava/util/Vector;", "Ljava/util/Vector<Lcom/sun/jndi/ldap/LdapName$Rdn;>;", $PRIVATE | $TRANSIENT, $field(LdapName, rdns)},
	{"valuesCaseSensitive", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(LdapName, valuesCaseSensitive)},
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(LdapName, serialVersionUID)},
	{}
};

$MethodInfo _LdapName_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LdapName::*)($String*)>(&LdapName::init$)), "javax.naming.InvalidNameException"},
	{"<init>", "(Ljava/lang/String;Ljava/util/Vector;)V", "(Ljava/lang/String;Ljava/util/Vector<Lcom/sun/jndi/ldap/LdapName$Rdn;>;)V", $PRIVATE, $method(static_cast<void(LdapName::*)($String*,$Vector*)>(&LdapName::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/util/Vector;II)V", "(Ljava/lang/String;Ljava/util/Vector<Lcom/sun/jndi/ldap/LdapName$Rdn;>;II)V", $PRIVATE, $method(static_cast<void(LdapName::*)($String*,$Vector*,int32_t,int32_t)>(&LdapName::init$))},
	{"add", "(Ljava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"add", "(ILjava/lang/String;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"addAll", "(Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"addAll", "(ILjavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"endsWith", "(Ljavax/naming/Name;)Z", nullptr, $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"escapeAttributeValue", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(Object$*)>(&LdapName::escapeAttributeValue))},
	{"get", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAll", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getPrefix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"getSuffix", "(I)Ljavax/naming/Name;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"isWhitespace", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&LdapName::isWhitespace))},
	{"matches", "(IILjavax/naming/Name;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LdapName::*)(int32_t,int32_t,$Name*)>(&LdapName::matches))},
	{"parse", "()V", nullptr, $PRIVATE, $method(static_cast<void(LdapName::*)()>(&LdapName::parse)), "javax.naming.InvalidNameException"},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapName::*)($ObjectInputStream*)>(&LdapName::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"setValuesCaseSensitive", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(LdapName::*)(bool)>(&LdapName::setValuesCaseSensitive))},
	{"size", "()I", nullptr, $PUBLIC},
	{"startsWith", "(Ljavax/naming/Name;)Z", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unescapeAttributeValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($String*)>(&LdapName::unescapeAttributeValue))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LdapName::*)($ObjectOutputStream*)>(&LdapName::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _LdapName_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.LdapName$TypeAndValue", "com.sun.jndi.ldap.LdapName", "TypeAndValue", $STATIC},
	{"com.sun.jndi.ldap.LdapName$Rdn", "com.sun.jndi.ldap.LdapName", "Rdn", $STATIC},
	{"com.sun.jndi.ldap.LdapName$DnParser", "com.sun.jndi.ldap.LdapName", "DnParser", $STATIC},
	{"com.sun.jndi.ldap.LdapName$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LdapName_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.LdapName",
	"java.lang.Object",
	"javax.naming.Name",
	_LdapName_FieldInfo_,
	_LdapName_MethodInfo_,
	nullptr,
	nullptr,
	_LdapName_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.LdapName$TypeAndValue,com.sun.jndi.ldap.LdapName$Rdn,com.sun.jndi.ldap.LdapName$DnParser,com.sun.jndi.ldap.LdapName$1"
};

$Object* allocate$LdapName($Class* clazz) {
	return $of($alloc(LdapName));
}

void LdapName::init$($String* name) {
	this->valuesCaseSensitive = false;
	$set(this, unparsed, name);
	parse();
}

void LdapName::init$($String* name, $Vector* rdns) {
	this->valuesCaseSensitive = false;
	$set(this, unparsed, name);
	$set(this, rdns, $cast($Vector, $nc(rdns)->clone()));
}

void LdapName::init$($String* name, $Vector* rdns, int32_t beg, int32_t end) {
	this->valuesCaseSensitive = false;
	$set(this, unparsed, name);
	$set(this, rdns, $new($Vector));
	for (int32_t i = beg; i < end; ++i) {
		$nc(this->rdns)->addElement($cast($LdapName$Rdn, $($nc(rdns)->elementAt(i))));
	}
}

$Object* LdapName::clone() {
	return $of($new(LdapName, this->unparsed, this->rdns));
}

$String* LdapName::toString() {
	if (this->unparsed != nullptr) {
		return this->unparsed;
	}
	$var($StringBuffer, buf, $new($StringBuffer));
	for (int32_t i = $nc(this->rdns)->size() - 1; i >= 0; --i) {
		if (i < $nc(this->rdns)->size() - 1) {
			buf->append(u',');
		}
		$var($LdapName$Rdn, rdn, $cast($LdapName$Rdn, $nc(this->rdns)->elementAt(i)));
		buf->append($of(rdn));
	}
	$set(this, unparsed, $new($String, buf));
	return this->unparsed;
}

bool LdapName::equals(Object$* obj) {
	return (($instanceOf(LdapName, obj)) && (compareTo(obj) == 0));
}

int32_t LdapName::compareTo(Object$* obj) {
	$var(LdapName, that, $cast(LdapName, obj));
	if (($equals(obj, this)) || (this->unparsed != nullptr && $nc(this->unparsed)->equals($nc(that)->unparsed))) {
		return 0;
	}
	int32_t var$0 = $nc(this->rdns)->size();
	int32_t minSize = $Math::min(var$0, $nc($nc(that)->rdns)->size());
	for (int32_t i = 0; i < minSize; ++i) {
		$var($LdapName$Rdn, rdn1, $cast($LdapName$Rdn, $nc(this->rdns)->elementAt(i)));
		$var($LdapName$Rdn, rdn2, $cast($LdapName$Rdn, $nc($nc(that)->rdns)->elementAt(i)));
		int32_t diff = $nc(rdn1)->compareTo(rdn2);
		if (diff != 0) {
			return diff;
		}
	}
	int32_t var$1 = $nc(this->rdns)->size();
	return (var$1 - $nc($nc(that)->rdns)->size());
}

int32_t LdapName::hashCode() {
	int32_t hash = 0;
	for (int32_t i = 0; i < $nc(this->rdns)->size(); ++i) {
		$var($LdapName$Rdn, rdn, $cast($LdapName$Rdn, $nc(this->rdns)->elementAt(i)));
		hash += $nc(rdn)->hashCode();
	}
	return hash;
}

int32_t LdapName::size() {
	return $nc(this->rdns)->size();
}

bool LdapName::isEmpty() {
	return $nc(this->rdns)->isEmpty();
}

$Enumeration* LdapName::getAll() {
	$var($Enumeration, enum_, $nc(this->rdns)->elements());
	return $new($LdapName$1, this, enum_);
}

$String* LdapName::get(int32_t pos) {
	return $nc(($cast($LdapName$Rdn, $($nc(this->rdns)->elementAt(pos)))))->toString();
}

$Name* LdapName::getPrefix(int32_t pos) {
	return $new(LdapName, nullptr, this->rdns, 0, pos);
}

$Name* LdapName::getSuffix(int32_t pos) {
	return $new(LdapName, nullptr, this->rdns, pos, $nc(this->rdns)->size());
}

bool LdapName::startsWith($Name* n) {
	int32_t len1 = $nc(this->rdns)->size();
	int32_t len2 = $nc(n)->size();
	return (len1 >= len2 && matches(0, len2, n));
}

bool LdapName::endsWith($Name* n) {
	int32_t len1 = $nc(this->rdns)->size();
	int32_t len2 = $nc(n)->size();
	return (len1 >= len2 && matches(len1 - len2, len1, n));
}

void LdapName::setValuesCaseSensitive(bool caseSensitive) {
	toString();
	$set(this, rdns, nullptr);
	try {
		parse();
	} catch ($InvalidNameException&) {
		$var($InvalidNameException, e, $catch());
		$throwNew($IllegalStateException, $$str({"Cannot parse name: "_s, this->unparsed}));
	}
	this->valuesCaseSensitive = caseSensitive;
}

bool LdapName::matches(int32_t beg, int32_t end, $Name* n) {
	for (int32_t i = beg; i < end; ++i) {
		$var($LdapName$Rdn, rdn, nullptr);
		if ($instanceOf(LdapName, n)) {
			$var(LdapName, ln, $cast(LdapName, n));
			$assign(rdn, $cast($LdapName$Rdn, $nc($nc(ln)->rdns)->elementAt(i - beg)));
		} else {
			$var($String, rdnString, $nc(n)->get(i - beg));
			try {
				$assign(rdn, ($$new($LdapName$DnParser, rdnString, this->valuesCaseSensitive))->getRdn());
			} catch ($InvalidNameException&) {
				$var($InvalidNameException, e, $catch());
				return false;
			}
		}
		if (!$nc(rdn)->equals($($nc(this->rdns)->elementAt(i)))) {
			return false;
		}
	}
	return true;
}

$Name* LdapName::addAll($Name* suffix) {
	return addAll(size(), suffix);
}

$Name* LdapName::addAll(int32_t pos, $Name* suffix) {
	if ($instanceOf(LdapName, suffix)) {
		$var(LdapName, s, $cast(LdapName, suffix));
		for (int32_t i = 0; i < $nc($nc(s)->rdns)->size(); ++i) {
			$nc(this->rdns)->insertElementAt($cast($LdapName$Rdn, $($nc(s->rdns)->elementAt(i))), pos++);
		}
	} else {
		$var($Enumeration, comps, $nc(suffix)->getAll());
		while ($nc(comps)->hasMoreElements()) {
			$var($LdapName$DnParser, p, $new($LdapName$DnParser, $cast($String, $(comps->nextElement())), this->valuesCaseSensitive));
			$nc(this->rdns)->insertElementAt($(p->getRdn()), pos++);
		}
	}
	$set(this, unparsed, nullptr);
	return this;
}

$Name* LdapName::add($String* comp) {
	return add(size(), comp);
}

$Name* LdapName::add(int32_t pos, $String* comp) {
	$var($LdapName$Rdn, rdn, ($$new($LdapName$DnParser, comp, this->valuesCaseSensitive))->getRdn());
	$nc(this->rdns)->insertElementAt(rdn, pos);
	$set(this, unparsed, nullptr);
	return this;
}

$Object* LdapName::remove(int32_t pos) {
	$var($String, comp, get(pos));
	$nc(this->rdns)->removeElementAt(pos);
	$set(this, unparsed, nullptr);
	return $of(comp);
}

void LdapName::parse() {
	$set(this, rdns, ($$new($LdapName$DnParser, this->unparsed, this->valuesCaseSensitive))->getDn());
}

bool LdapName::isWhitespace(char16_t c) {
	$init(LdapName);
	return (c == u' ' || c == u'\r');
}

$String* LdapName::escapeAttributeValue(Object$* val) {
	$init(LdapName);
	return $LdapName$TypeAndValue::escapeValue(val);
}

$Object* LdapName::unescapeAttributeValue($String* val) {
	$init(LdapName);
	return $of($LdapName$TypeAndValue::unescapeValue(val));
}

void LdapName::writeObject($ObjectOutputStream* s) {
	$nc(s)->writeObject($(toString()));
	s->writeBoolean(this->valuesCaseSensitive);
}

void LdapName::readObject($ObjectInputStream* s) {
	$set(this, unparsed, $cast($String, $nc(s)->readObject()));
	this->valuesCaseSensitive = s->readBoolean();
	try {
		parse();
	} catch ($InvalidNameException&) {
		$var($InvalidNameException, e, $catch());
		$throwNew($StreamCorruptedException, $$str({"Invalid name: "_s, this->unparsed}));
	}
}

LdapName::LdapName() {
}

$Class* LdapName::load$($String* name, bool initialize) {
	$loadClass(LdapName, name, initialize, &_LdapName_ClassInfo_, allocate$LdapName);
	return class$;
}

$Class* LdapName::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com