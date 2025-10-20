#include <javax/naming/ldap/Rfc2253Parser.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/ldap/Rdn.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $Rdn = ::javax::naming::ldap::Rdn;

namespace javax {
	namespace naming {
		namespace ldap {

$FieldInfo _Rfc2253Parser_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Rfc2253Parser, name)},
	{"chars", "[C", nullptr, $PRIVATE | $FINAL, $field(Rfc2253Parser, chars)},
	{"len", "I", nullptr, $PRIVATE | $FINAL, $field(Rfc2253Parser, len)},
	{"cur", "I", nullptr, $PRIVATE, $field(Rfc2253Parser, cur)},
	{}
};

$MethodInfo _Rfc2253Parser_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Rfc2253Parser::*)($String*)>(&Rfc2253Parser::init$))},
	{"atTerminator", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(Rfc2253Parser::*)()>(&Rfc2253Parser::atTerminator))},
	{"consumeWhitespace", "()V", nullptr, $PRIVATE, $method(static_cast<void(Rfc2253Parser::*)()>(&Rfc2253Parser::consumeWhitespace))},
	{"doParse", "(Ljavax/naming/ldap/Rdn;)Ljavax/naming/ldap/Rdn;", nullptr, $PRIVATE, $method(static_cast<$Rdn*(Rfc2253Parser::*)($Rdn*)>(&Rfc2253Parser::doParse)), "javax.naming.InvalidNameException"},
	{"isWhitespace", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Rfc2253Parser::isWhitespace))},
	{"parseAttrType", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Rfc2253Parser::*)()>(&Rfc2253Parser::parseAttrType)), "javax.naming.InvalidNameException"},
	{"parseAttrValue", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Rfc2253Parser::*)()>(&Rfc2253Parser::parseAttrValue)), "javax.naming.InvalidNameException"},
	{"parseBinaryAttrValue", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Rfc2253Parser::*)()>(&Rfc2253Parser::parseBinaryAttrValue)), "javax.naming.InvalidNameException"},
	{"parseDn", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/naming/ldap/Rdn;>;", 0, $method(static_cast<$List*(Rfc2253Parser::*)()>(&Rfc2253Parser::parseDn)), "javax.naming.InvalidNameException"},
	{"parseQuotedAttrValue", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Rfc2253Parser::*)()>(&Rfc2253Parser::parseQuotedAttrValue)), "javax.naming.InvalidNameException"},
	{"parseRdn", "()Ljavax/naming/ldap/Rdn;", nullptr, 0, $method(static_cast<$Rdn*(Rfc2253Parser::*)()>(&Rfc2253Parser::parseRdn)), "javax.naming.InvalidNameException"},
	{"parseRdn", "(Ljavax/naming/ldap/Rdn;)Ljavax/naming/ldap/Rdn;", nullptr, 0, $method(static_cast<$Rdn*(Rfc2253Parser::*)($Rdn*)>(&Rfc2253Parser::parseRdn)), "javax.naming.InvalidNameException"},
	{"parseStringAttrValue", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(Rfc2253Parser::*)()>(&Rfc2253Parser::parseStringAttrValue)), "javax.naming.InvalidNameException"},
	{}
};

$ClassInfo _Rfc2253Parser_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.naming.ldap.Rfc2253Parser",
	"java.lang.Object",
	nullptr,
	_Rfc2253Parser_FieldInfo_,
	_Rfc2253Parser_MethodInfo_
};

$Object* allocate$Rfc2253Parser($Class* clazz) {
	return $of($alloc(Rfc2253Parser));
}

void Rfc2253Parser::init$($String* name) {
	this->cur = 0;
	$set(this, name, name);
	this->len = $nc(name)->length();
	$set(this, chars, name->toCharArray());
}

$List* Rfc2253Parser::parseDn() {
	$useLocalCurrentObjectStackCache();
	this->cur = 0;
	$var($ArrayList, rdns, $new($ArrayList, this->len / 3 + 10));
	if (this->len == 0) {
		return rdns;
	}
	rdns->add($(doParse($$new($Rdn))));
	while (this->cur < this->len) {
		if ($nc(this->chars)->get(this->cur) == u',' || $nc(this->chars)->get(this->cur) == u';') {
			++this->cur;
			rdns->add(0, $(doParse($$new($Rdn))));
		} else {
			$throwNew($InvalidNameException, $$str({"Invalid name: "_s, this->name}));
		}
	}
	return rdns;
}

$Rdn* Rfc2253Parser::parseRdn() {
	return parseRdn($$new($Rdn));
}

$Rdn* Rfc2253Parser::parseRdn($Rdn* rdn$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Rdn, rdn, rdn$renamed);
	$assign(rdn, doParse(rdn));
	if (this->cur < this->len) {
		$throwNew($InvalidNameException, $$str({"Invalid RDN: "_s, this->name}));
	}
	return rdn;
}

$Rdn* Rfc2253Parser::doParse($Rdn* rdn) {
	$useLocalCurrentObjectStackCache();
	while (this->cur < this->len) {
		consumeWhitespace();
		$var($String, attrType, parseAttrType());
		consumeWhitespace();
		if (this->cur >= this->len || $nc(this->chars)->get(this->cur) != u'=') {
			$throwNew($InvalidNameException, $$str({"Invalid name: "_s, this->name}));
		}
		++this->cur;
		consumeWhitespace();
		$var($String, value, parseAttrValue());
		consumeWhitespace();
		$nc(rdn)->put(attrType, $($Rdn::unescapeValue(value)));
		if (this->cur >= this->len || $nc(this->chars)->get(this->cur) != u'+') {
			break;
		}
		++this->cur;
	}
	$nc(rdn)->sort();
	return rdn;
}

$String* Rfc2253Parser::parseAttrType() {
	int32_t beg = this->cur;
	while (this->cur < this->len) {
		char16_t c = $nc(this->chars)->get(this->cur);
		if ($Character::isLetterOrDigit(c) || c == u'.' || c == u'-' || c == u' ') {
			++this->cur;
		} else {
			break;
		}
	}
	while ((this->cur > beg) && ($nc(this->chars)->get(this->cur - 1) == u' ')) {
		--this->cur;
	}
	if (beg == this->cur) {
		$throwNew($InvalidNameException, $$str({"Invalid name: "_s, this->name}));
	}
	return $new($String, this->chars, beg, this->cur - beg);
}

$String* Rfc2253Parser::parseAttrValue() {
	if (this->cur < this->len && $nc(this->chars)->get(this->cur) == u'#') {
		return parseBinaryAttrValue();
	} else if (this->cur < this->len && $nc(this->chars)->get(this->cur) == u'\"') {
		return parseQuotedAttrValue();
	} else {
		return parseStringAttrValue();
	}
}

$String* Rfc2253Parser::parseBinaryAttrValue() {
	int32_t beg = this->cur;
	++this->cur;
	while ((this->cur < this->len) && $Character::isLetterOrDigit($nc(this->chars)->get(this->cur))) {
		++this->cur;
	}
	return $new($String, this->chars, beg, this->cur - beg);
}

$String* Rfc2253Parser::parseQuotedAttrValue() {
	int32_t beg = this->cur;
	++this->cur;
	while ((this->cur < this->len) && $nc(this->chars)->get(this->cur) != u'\"') {
		if ($nc(this->chars)->get(this->cur) == u'\\') {
			++this->cur;
		}
		++this->cur;
	}
	if (this->cur >= this->len) {
		$throwNew($InvalidNameException, $$str({"Invalid name: "_s, this->name}));
	}
	++this->cur;
	return $new($String, this->chars, beg, this->cur - beg);
}

$String* Rfc2253Parser::parseStringAttrValue() {
	int32_t beg = this->cur;
	int32_t esc = -1;
	while ((this->cur < this->len) && !atTerminator()) {
		if ($nc(this->chars)->get(this->cur) == u'\\') {
			++this->cur;
			esc = this->cur;
		}
		++this->cur;
	}
	if (this->cur > this->len) {
		$throwNew($InvalidNameException, $$str({"Invalid name: "_s, this->name}));
	}
	int32_t end = 0;
	for (end = this->cur; end > beg; --end) {
		if (!isWhitespace($nc(this->chars)->get(end - 1)) || (esc == end - 1)) {
			break;
		}
	}
	return $new($String, this->chars, beg, end - beg);
}

void Rfc2253Parser::consumeWhitespace() {
	while ((this->cur < this->len) && isWhitespace($nc(this->chars)->get(this->cur))) {
		++this->cur;
	}
}

bool Rfc2253Parser::atTerminator() {
	return (this->cur < this->len && ($nc(this->chars)->get(this->cur) == u',' || $nc(this->chars)->get(this->cur) == u';' || $nc(this->chars)->get(this->cur) == u'+'));
}

bool Rfc2253Parser::isWhitespace(char16_t c) {
	return (c == u' ' || c == u'\r');
}

Rfc2253Parser::Rfc2253Parser() {
}

$Class* Rfc2253Parser::load$($String* name, bool initialize) {
	$loadClass(Rfc2253Parser, name, initialize, &_Rfc2253Parser_ClassInfo_, allocate$Rfc2253Parser);
	return class$;
}

$Class* Rfc2253Parser::class$ = nullptr;

		} // ldap
	} // naming
} // javax