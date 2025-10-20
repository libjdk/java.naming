#include <javax/naming/ldap/Rdn.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/io/StreamCorruptedException.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <javax/naming/ldap/Rdn$RdnEntry.h>
#include <javax/naming/ldap/Rfc2253Parser.h>
#include <jcpp.h>

#undef DEFAULT_SIZE

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $StreamCorruptedException = ::java::io::StreamCorruptedException;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $Character = ::java::lang::Character;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $Attribute = ::javax::naming::directory::Attribute;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;
using $Rdn$RdnEntry = ::javax::naming::ldap::Rdn$RdnEntry;
using $Rfc2253Parser = ::javax::naming::ldap::Rfc2253Parser;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _Rdn_FieldInfo_[] = {
	{"entries", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/naming/ldap/Rdn$RdnEntry;>;", $PRIVATE | $TRANSIENT, $field(Rdn, entries)},
	{"DEFAULT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Rdn, DEFAULT_SIZE)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Rdn, serialVersionUID)},
	{"escapees", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Rdn, escapees)},
	{}
};

$MethodInfo _Rdn_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, $method(static_cast<void(Rdn::*)($Attributes*)>(&Rdn::init$)), "javax.naming.InvalidNameException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Rdn::*)($String*)>(&Rdn::init$)), "javax.naming.InvalidNameException"},
	{"<init>", "(Ljavax/naming/ldap/Rdn;)V", nullptr, $PUBLIC, $method(static_cast<void(Rdn::*)(Rdn*)>(&Rdn::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Rdn::*)($String*,Object$*)>(&Rdn::init$)), "javax.naming.InvalidNameException"},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Rdn::*)()>(&Rdn::init$))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"decodeHexPairs", "([CII)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($chars*,int32_t,int32_t)>(&Rdn::decodeHexPairs))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"escapeBinaryValue", "([B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($bytes*)>(&Rdn::escapeBinaryValue))},
	{"escapeStringValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Rdn::escapeStringValue))},
	{"escapeValue", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(Object$*)>(&Rdn::escapeValue))},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUtf8Octets", "([CII)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($chars*,int32_t,int32_t)>(&Rdn::getUtf8Octets))},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isEmptyValue", "(Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(static_cast<bool(Rdn::*)(Object$*)>(&Rdn::isEmptyValue))},
	{"isWhitespace", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Rdn::isWhitespace))},
	{"put", "(Ljava/lang/String;Ljava/lang/Object;)Ljavax/naming/ldap/Rdn;", nullptr, 0},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Rdn::*)($ObjectInputStream*)>(&Rdn::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"size", "()I", nullptr, $PUBLIC},
	{"sort", "()V", nullptr, 0},
	{"toAttributes", "()Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unescapeValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($String*)>(&Rdn::unescapeValue))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Rdn::*)($ObjectOutputStream*)>(&Rdn::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _Rdn_InnerClassesInfo_[] = {
	{"javax.naming.ldap.Rdn$RdnEntry", "javax.naming.ldap.Rdn", "RdnEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Rdn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.ldap.Rdn",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Comparable",
	_Rdn_FieldInfo_,
	_Rdn_MethodInfo_,
	"Ljava/lang/Object;Ljava/io/Serializable;Ljava/lang/Comparable<Ljava/lang/Object;>;",
	nullptr,
	_Rdn_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.naming.ldap.Rdn$RdnEntry"
};

$Object* allocate$Rdn($Class* clazz) {
	return $of($alloc(Rdn));
}

$Object* Rdn::clone() {
	 return this->$Serializable::clone();
}

void Rdn::finalize() {
	this->$Serializable::finalize();
}

$String* Rdn::escapees = nullptr;

void Rdn::init$($Attributes* attrSet) {
	$useLocalCurrentObjectStackCache();
	if ($nc(attrSet)->size() == 0) {
		$throwNew($InvalidNameException, "Attributes cannot be empty"_s);
	}
	$set(this, entries, $new($ArrayList, $nc(attrSet)->size()));
	$var($NamingEnumeration, attrs, $nc(attrSet)->getAll());
	try {
		for (int32_t nEntries = 0; $nc(attrs)->hasMore(); ++nEntries) {
			$var($Rdn$RdnEntry, entry, $new($Rdn$RdnEntry));
			$var($Attribute, attr, $cast($Attribute, attrs->next()));
			$set(entry, type, $nc(attr)->getID());
			$set(entry, value, attr->get());
			$nc(this->entries)->add(nEntries, entry);
		}
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$var($InvalidNameException, e2, $new($InvalidNameException, $(e->getMessage())));
		e2->initCause(e);
		$throw(e2);
	}
	sort();
}

void Rdn::init$($String* rdnString) {
	$set(this, entries, $new($ArrayList, Rdn::DEFAULT_SIZE));
	($$new($Rfc2253Parser, rdnString))->parseRdn(this);
}

void Rdn::init$(Rdn* rdn) {
	$set(this, entries, $new($ArrayList, $nc($nc(rdn)->entries)->size()));
	$nc(this->entries)->addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>($nc(rdn)->entries))));
}

void Rdn::init$($String* type, Object$* value) {
	if (value == nullptr) {
		$throwNew($NullPointerException, "Cannot set value to null"_s);
	}
	bool var$0 = $nc(type)->equals(""_s);
	if (var$0 || isEmptyValue(value)) {
		$throwNew($InvalidNameException, $$str({"type or value cannot be empty, type:"_s, type, " value:"_s, value}));
	}
	$set(this, entries, $new($ArrayList, Rdn::DEFAULT_SIZE));
	put(type, value);
}

bool Rdn::isEmptyValue(Object$* val) {
	return (($instanceOf($String, val)) && $nc($of(val))->equals(""_s)) || (($instanceOf($bytes, val)) && ($nc(($cast($bytes, val)))->length == 0));
}

void Rdn::init$() {
	$set(this, entries, $new($ArrayList, Rdn::DEFAULT_SIZE));
}

Rdn* Rdn::put($String* type, Object$* value) {
	$var($Rdn$RdnEntry, newEntry, $new($Rdn$RdnEntry));
	$set(newEntry, type, type);
	if ($instanceOf($bytes, value)) {
		$set(newEntry, value, $nc(($cast($bytes, value)))->clone());
	} else {
		$set(newEntry, value, value);
	}
	$nc(this->entries)->add(newEntry);
	return this;
}

void Rdn::sort() {
	if ($nc(this->entries)->size() > 1) {
		$Collections::sort(this->entries);
	}
}

$Object* Rdn::getValue() {
	return $of($nc(($cast($Rdn$RdnEntry, $($nc(this->entries)->get(0)))))->getValue());
}

$String* Rdn::getType() {
	return $nc(($cast($Rdn$RdnEntry, $($nc(this->entries)->get(0)))))->getType();
}

$String* Rdn::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, builder, $new($StringBuilder));
	int32_t size = $nc(this->entries)->size();
	if (size > 0) {
		builder->append($($nc(this->entries)->get(0)));
	}
	for (int32_t next = 1; next < size; ++next) {
		builder->append(u'+');
		builder->append($($nc(this->entries)->get(next)));
	}
	return builder->toString();
}

int32_t Rdn::compareTo(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(Rdn, obj))) {
		$throwNew($ClassCastException, "The obj is not a Rdn"_s);
	}
	if ($equals(obj, this)) {
		return 0;
	}
	$var(Rdn, that, $cast(Rdn, obj));
	int32_t var$0 = $nc(this->entries)->size();
	int32_t minSize = $Math::min(var$0, $nc($nc(that)->entries)->size());
	for (int32_t i = 0; i < minSize; ++i) {
		int32_t diff = $nc(($cast($Rdn$RdnEntry, $($nc(this->entries)->get(i)))))->compareTo($cast($Rdn$RdnEntry, $($nc($nc(that)->entries)->get(i))));
		if (diff != 0) {
			return diff;
		}
	}
	int32_t var$1 = $nc(this->entries)->size();
	return (var$1 - $nc($nc(that)->entries)->size());
}

bool Rdn::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(obj, this)) {
		return true;
	}
	if (!($instanceOf(Rdn, obj))) {
		return false;
	}
	$var(Rdn, that, $cast(Rdn, obj));
	int32_t var$0 = $nc(this->entries)->size();
	if (var$0 != $nc(that)->size()) {
		return false;
	}
	for (int32_t i = 0; i < $nc(this->entries)->size(); ++i) {
		if (!$nc(($cast($Rdn$RdnEntry, $($nc(this->entries)->get(i)))))->equals($($nc($nc(that)->entries)->get(i)))) {
			return false;
		}
	}
	return true;
}

int32_t Rdn::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t hash = 0;
	for (int32_t i = 0; i < $nc(this->entries)->size(); ++i) {
		hash += $nc(($cast($Rdn$RdnEntry, $($nc(this->entries)->get(i)))))->hashCode();
	}
	return hash;
}

$Attributes* Rdn::toAttributes() {
	$useLocalCurrentObjectStackCache();
	$var($Attributes, attrs, $new($BasicAttributes, true));
	for (int32_t i = 0; i < $nc(this->entries)->size(); ++i) {
		$var($Rdn$RdnEntry, entry, $cast($Rdn$RdnEntry, $nc(this->entries)->get(i)));
		$var($String, var$0, $nc(entry)->getType());
		$var($Attribute, attr, attrs->put(var$0, $(entry->getValue())));
		if (attr != nullptr) {
			attr->add($($nc(entry)->getValue()));
			attrs->put(attr);
		}
	}
	return attrs;
}

int32_t Rdn::size() {
	return $nc(this->entries)->size();
}

$String* Rdn::escapeValue(Object$* val) {
	$init(Rdn);
	return ($instanceOf($bytes, val)) ? escapeBinaryValue($cast($bytes, val)) : escapeStringValue($cast($String, val));
}

$String* Rdn::escapeStringValue($String* val) {
	$init(Rdn);
	$useLocalCurrentObjectStackCache();
	$var($chars, chars, $nc(val)->toCharArray());
	$var($StringBuilder, builder, $new($StringBuilder, 2 * val->length()));
	int32_t lead = 0;
	for (lead = 0; lead < chars->length; ++lead) {
		if (!isWhitespace(chars->get(lead))) {
			break;
		}
	}
	int32_t trail = 0;
	for (trail = chars->length - 1; trail >= 0; --trail) {
		if (!isWhitespace(chars->get(trail))) {
			break;
		}
	}
	for (int32_t i = 0; i < chars->length; ++i) {
		char16_t c = chars->get(i);
		if ((i < lead) || (i > trail) || ($nc(Rdn::escapees)->indexOf((int32_t)c) >= 0)) {
			builder->append(u'\\');
		}
		builder->append(c);
	}
	return builder->toString();
}

$String* Rdn::escapeBinaryValue($bytes* val) {
	$init(Rdn);
	$var($StringBuilder, builder, $new($StringBuilder, 1 + 2 * $nc(val)->length));
	builder->append("#"_s);
	for (int32_t i = 0; i < $nc(val)->length; ++i) {
		int8_t b = val->get(i);
		builder->append($Character::forDigit((int32_t)(15 & (uint32_t)((int32_t)((uint32_t)b >> 4))), 16));
		builder->append($Character::forDigit((int32_t)(15 & (uint32_t)(int32_t)b), 16));
	}
	return builder->toString();
}

$Object* Rdn::unescapeValue($String* val) {
	$init(Rdn);
	$useLocalCurrentObjectStackCache();
	$var($chars, chars, $nc(val)->toCharArray());
	int32_t beg = 0;
	int32_t end = chars->length;
	while ((beg < end) && isWhitespace(chars->get(beg))) {
		++beg;
	}
	while ((beg < end) && isWhitespace(chars->get(end - 1))) {
		--end;
	}
	if (end != chars->length && (beg < end) && chars->get(end - 1) == u'\\') {
		++end;
	}
	if (beg >= end) {
		return $of(""_s);
	}
	if (chars->get(beg) == u'#') {
		return $of(decodeHexPairs(chars, ++beg, end));
	}
	if ((chars->get(beg) == u'\"') && (chars->get(end - 1) == u'\"')) {
		++beg;
		--end;
	}
	$var($StringBuilder, builder, $new($StringBuilder, end - beg));
	int32_t esc = -1;
	for (int32_t i = beg; i < end; ++i) {
		if ((chars->get(i) == u'\\') && (i + 1 < end)) {
			if (!$Character::isLetterOrDigit(chars->get(i + 1))) {
				++i;
				builder->append(chars->get(i));
				esc = i;
			} else {
				$var($bytes, utf8, getUtf8Octets(chars, i, end));
				if ($nc(utf8)->length > 0) {
					try {
						builder->append($$new($String, utf8, "UTF8"_s));
					} catch ($UnsupportedEncodingException&) {
						$catch();
					}
					i += utf8->length * 3 - 1;
				} else {
					$throwNew($IllegalArgumentException, $$str({"Not a valid attribute string value:"_s, val, ",improper usage of backslash"_s}));
				}
			}
		} else {
			builder->append(chars->get(i));
		}
	}
	int32_t len = builder->length();
	if (isWhitespace(builder->charAt(len - 1)) && esc != (end - 1)) {
		builder->setLength(len - 1);
	}
	return $of(builder->toString());
}

$bytes* Rdn::decodeHexPairs($chars* chars, int32_t beg, int32_t end) {
	$init(Rdn);
	$useLocalCurrentObjectStackCache();
	$var($bytes, bytes, $new($bytes, (end - beg) / 2));
	for (int32_t i = 0; beg + 1 < end; ++i) {
		int32_t hi = $Character::digit($nc(chars)->get(beg), 16);
		int32_t lo = $Character::digit($nc(chars)->get(beg + 1), 16);
		if (hi < 0 || lo < 0) {
			break;
		}
		bytes->set(i, (int8_t)((hi << 4) + lo));
		beg += 2;
	}
	if (beg != end) {
		$throwNew($IllegalArgumentException, $$str({"Illegal attribute value: "_s, $$new($String, chars)}));
	}
	return bytes;
}

$bytes* Rdn::getUtf8Octets($chars* chars, int32_t beg, int32_t end) {
	$init(Rdn);
	$useLocalCurrentObjectStackCache();
	$var($bytes, utf8, $new($bytes, (end - beg) / 3));
	int32_t len = 0;
	while (true) {
		bool var$0 = (beg + 2 < end);
		if (!(var$0 && ($nc(chars)->get(beg++) == u'\\'))) {
			break;
		}
		{
			int32_t hi = $Character::digit(chars->get(beg++), 16);
			int32_t lo = $Character::digit(chars->get(beg++), 16);
			if (hi < 0 || lo < 0) {
				break;
			}
			utf8->set(len++, (int8_t)((hi << 4) + lo));
		}
	}
	if (len == utf8->length) {
		return utf8;
	} else {
		$var($bytes, res, $new($bytes, len));
		$System::arraycopy(utf8, 0, res, 0, len);
		return res;
	}
}

bool Rdn::isWhitespace(char16_t c) {
	$init(Rdn);
	return (c == u' ' || c == u'\r');
}

void Rdn::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeObject($(toString()));
}

void Rdn::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	$set(this, entries, $new($ArrayList, Rdn::DEFAULT_SIZE));
	$var($String, unparsed, $cast($String, s->readObject()));
	try {
		($$new($Rfc2253Parser, unparsed))->parseRdn(this);
	} catch ($InvalidNameException&) {
		$var($InvalidNameException, e, $catch());
		$throwNew($StreamCorruptedException, $$str({"Invalid name: "_s, unparsed}));
	}
}

Rdn::Rdn() {
}

void clinit$Rdn($Class* class$) {
	$assignStatic(Rdn::escapees, ",=+<>#;\"\\"_s);
}

$Class* Rdn::load$($String* name, bool initialize) {
	$loadClass(Rdn, name, initialize, &_Rdn_ClassInfo_, clinit$Rdn, allocate$Rdn);
	return class$;
}

$Class* Rdn::class$ = nullptr;

		} // ldap
	} // naming
} // javax