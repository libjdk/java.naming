#include <com/sun/jndi/ldap/LdapName$TypeAndValue.h>

#include <com/sun/jndi/ldap/LdapName.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <jcpp.h>

#undef ENGLISH

using $LdapName = ::com::sun::jndi::ldap::LdapName;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Locale = ::java::util::Locale;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _LdapName$TypeAndValue_FieldInfo_[] = {
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LdapName$TypeAndValue, type)},
	{"value", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(LdapName$TypeAndValue, value)},
	{"binary", "Z", nullptr, $PRIVATE | $FINAL, $field(LdapName$TypeAndValue, binary)},
	{"valueCaseSensitive", "Z", nullptr, $PRIVATE | $FINAL, $field(LdapName$TypeAndValue, valueCaseSensitive)},
	{"comparable", "Ljava/lang/String;", nullptr, $PRIVATE, $field(LdapName$TypeAndValue, comparable)},
	{}
};

$MethodInfo _LdapName$TypeAndValue_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $method(static_cast<void(LdapName$TypeAndValue::*)($String*,$String*,bool)>(&LdapName$TypeAndValue::init$))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC},
	{"decodeHexPairs", "([CII)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($chars*,int32_t,int32_t)>(&LdapName$TypeAndValue::decodeHexPairs))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"escapeBinaryValue", "([B)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($bytes*)>(&LdapName$TypeAndValue::escapeBinaryValue))},
	{"escapeStringValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&LdapName$TypeAndValue::escapeStringValue))},
	{"escapeValue", "(Ljava/lang/Object;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)(Object$*)>(&LdapName$TypeAndValue::escapeValue))},
	{"getType", "()Ljava/lang/String;", nullptr, 0},
	{"getUnescapedValue", "()Ljava/lang/Object;", nullptr, 0},
	{"getUtf8Octets", "([CII)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($chars*,int32_t,int32_t)>(&LdapName$TypeAndValue::getUtf8Octets))},
	{"getValueComparable", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(LdapName$TypeAndValue::*)()>(&LdapName$TypeAndValue::getValueComparable))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unescapeValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $STATIC, $method(static_cast<$Object*(*)($String*)>(&LdapName$TypeAndValue::unescapeValue))},
	{}
};

$InnerClassInfo _LdapName$TypeAndValue_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.LdapName$TypeAndValue", "com.sun.jndi.ldap.LdapName", "TypeAndValue", $STATIC},
	{}
};

$ClassInfo _LdapName$TypeAndValue_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.LdapName$TypeAndValue",
	"java.lang.Object",
	nullptr,
	_LdapName$TypeAndValue_FieldInfo_,
	_LdapName$TypeAndValue_MethodInfo_,
	nullptr,
	nullptr,
	_LdapName$TypeAndValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.LdapName"
};

$Object* allocate$LdapName$TypeAndValue($Class* clazz) {
	return $of($alloc(LdapName$TypeAndValue));
}

void LdapName$TypeAndValue::init$($String* type, $String* value, bool valueCaseSensitive) {
	$set(this, comparable, nullptr);
	$set(this, type, type);
	$set(this, value, value);
	this->binary = $nc(value)->startsWith("#"_s);
	this->valueCaseSensitive = valueCaseSensitive;
}

$String* LdapName$TypeAndValue::toString() {
	return ($str({this->type, "="_s, this->value}));
}

int32_t LdapName$TypeAndValue::compareTo(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	$var(LdapName$TypeAndValue, that, $cast(LdapName$TypeAndValue, obj));
	int32_t diff = $nc(this->type)->compareToIgnoreCase($nc(that)->type);
	if (diff != 0) {
		return diff;
	}
	if ($nc(this->value)->equals($nc(that)->value)) {
		return 0;
	}
	return $nc($(getValueComparable()))->compareTo($($nc(that)->getValueComparable()));
}

bool LdapName$TypeAndValue::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(LdapName$TypeAndValue, obj))) {
		return false;
	}
	$var(LdapName$TypeAndValue, that, $cast(LdapName$TypeAndValue, obj));
	bool var$0 = $nc(this->type)->equalsIgnoreCase($nc(that)->type);
	if (var$0) {
		bool var$1 = $nc(this->value)->equals($nc(that)->value);
		var$0 = (var$1 || $nc($(getValueComparable()))->equals($($nc(that)->getValueComparable())));
	}
	return (var$0);
}

int32_t LdapName$TypeAndValue::hashCode() {
	$useLocalCurrentObjectStackCache();
	$init($Locale);
	int32_t var$0 = $($nc(this->type)->toUpperCase($Locale::ENGLISH))->hashCode();
	return (var$0 + $nc($(getValueComparable()))->hashCode());
}

$String* LdapName$TypeAndValue::getType() {
	return this->type;
}

$Object* LdapName$TypeAndValue::getUnescapedValue() {
	return $of(unescapeValue(this->value));
}

$String* LdapName$TypeAndValue::getValueComparable() {
	if (this->comparable != nullptr) {
		return this->comparable;
	}
	if (this->binary) {
		$init($Locale);
		$set(this, comparable, $nc(this->value)->toUpperCase($Locale::ENGLISH));
	} else {
		$set(this, comparable, $cast($String, unescapeValue(this->value)));
		if (!this->valueCaseSensitive) {
			$init($Locale);
			$set(this, comparable, $nc(this->comparable)->toUpperCase($Locale::ENGLISH));
		}
	}
	return this->comparable;
}

$String* LdapName$TypeAndValue::escapeValue(Object$* val) {
	return ($instanceOf($bytes, val)) ? escapeBinaryValue($cast($bytes, val)) : escapeStringValue($cast($String, val));
}

$String* LdapName$TypeAndValue::escapeStringValue($String* val) {
	$useLocalCurrentObjectStackCache();
	$var($String, escapees, ",=+<>#;\"\\"_s);
	$var($chars, chars, $nc(val)->toCharArray());
	$var($StringBuffer, buf, $new($StringBuffer, 2 * val->length()));
	int32_t lead = 0;
	for (lead = 0; lead < chars->length; ++lead) {
		if (!$LdapName::isWhitespace(chars->get(lead))) {
			break;
		}
	}
	int32_t trail = 0;
	for (trail = chars->length - 1; trail >= 0; --trail) {
		if (!$LdapName::isWhitespace(chars->get(trail))) {
			break;
		}
	}
	for (int32_t i = 0; i < chars->length; ++i) {
		char16_t c = chars->get(i);
		if ((i < lead) || (i > trail) || (escapees->indexOf((int32_t)c) >= 0)) {
			buf->append(u'\\');
		}
		buf->append(c);
	}
	return $new($String, buf);
}

$String* LdapName$TypeAndValue::escapeBinaryValue($bytes* val) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, buf, $new($StringBuffer, 1 + 2 * $nc(val)->length));
	buf->append("#"_s);
	for (int32_t i = 0; i < $nc(val)->length; ++i) {
		int8_t b = val->get(i);
		buf->append($Character::forDigit((int32_t)(15 & (uint32_t)((int32_t)((uint32_t)b >> 4))), 16));
		buf->append($Character::forDigit((int32_t)(15 & (uint32_t)(int32_t)b), 16));
	}
	$init($Locale);
	return ($$new($String, buf))->toUpperCase($Locale::ENGLISH);
}

$Object* LdapName$TypeAndValue::unescapeValue($String* val) {
	$useLocalCurrentObjectStackCache();
	$var($chars, chars, $nc(val)->toCharArray());
	int32_t beg = 0;
	int32_t end = chars->length;
	while ((beg < end) && $LdapName::isWhitespace(chars->get(beg))) {
		++beg;
	}
	while ((beg < end) && $LdapName::isWhitespace(chars->get(end - 1))) {
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
	$var($StringBuffer, buf, $new($StringBuffer, end - beg));
	int32_t esc = -1;
	for (int32_t i = beg; i < end; ++i) {
		if ((chars->get(i) == u'\\') && (i + 1 < end)) {
			if (!$Character::isLetterOrDigit(chars->get(i + 1))) {
				++i;
				buf->append(chars->get(i));
				esc = i;
			} else {
				$var($bytes, utf8, getUtf8Octets(chars, i, end));
				if ($nc(utf8)->length > 0) {
					try {
						buf->append($$new($String, utf8, "UTF8"_s));
					} catch ($UnsupportedEncodingException&) {
						$catch();
					}
					i += utf8->length * 3 - 1;
				} else {
					$throwNew($IllegalArgumentException, $$str({"Not a valid attribute string value:"_s, val, ", improper usage of backslash"_s}));
				}
			}
		} else {
			buf->append(chars->get(i));
		}
	}
	int32_t len = buf->length();
	if ($LdapName::isWhitespace(buf->charAt(len - 1)) && esc != (end - 1)) {
		buf->setLength(len - 1);
	}
	return $of($new($String, buf));
}

$bytes* LdapName$TypeAndValue::decodeHexPairs($chars* chars, int32_t beg, int32_t end) {
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
		$throwNew($IllegalArgumentException, $$str({"Illegal attribute value: #"_s, $$new($String, chars)}));
	}
	return bytes;
}

$bytes* LdapName$TypeAndValue::getUtf8Octets($chars* chars, int32_t beg, int32_t end) {
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

LdapName$TypeAndValue::LdapName$TypeAndValue() {
}

$Class* LdapName$TypeAndValue::load$($String* name, bool initialize) {
	$loadClass(LdapName$TypeAndValue, name, initialize, &_LdapName$TypeAndValue_ClassInfo_, allocate$LdapName$TypeAndValue);
	return class$;
}

$Class* LdapName$TypeAndValue::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com