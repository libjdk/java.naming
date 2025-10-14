#include <javax/naming/NameImpl.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Locale.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Properties.h>
#include <java/util/Vector.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/NameImplEnumerator.h>
#include <jcpp.h>

#undef ENGLISH
#undef FLAT
#undef LEFT_TO_RIGHT
#undef RIGHT_TO_LEFT
#undef STYLE_ESCAPE
#undef STYLE_NONE
#undef STYLE_QUOTE1
#undef STYLE_QUOTE2

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringBuffer = ::java::lang::StringBuffer;
using $Enumeration = ::java::util::Enumeration;
using $Locale = ::java::util::Locale;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Properties = ::java::util::Properties;
using $Vector = ::java::util::Vector;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $NameImplEnumerator = ::javax::naming::NameImplEnumerator;

namespace javax {
	namespace naming {

$FieldInfo _NameImpl_FieldInfo_[] = {
	{"LEFT_TO_RIGHT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameImpl, LEFT_TO_RIGHT)},
	{"RIGHT_TO_LEFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameImpl, RIGHT_TO_LEFT)},
	{"FLAT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameImpl, FLAT)},
	{"components", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", $PRIVATE, $field(NameImpl, components)},
	{"syntaxDirection", "B", nullptr, $PRIVATE, $field(NameImpl, syntaxDirection)},
	{"syntaxSeparator", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameImpl, syntaxSeparator)},
	{"syntaxSeparator2", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameImpl, syntaxSeparator2)},
	{"syntaxCaseInsensitive", "Z", nullptr, $PRIVATE, $field(NameImpl, syntaxCaseInsensitive)},
	{"syntaxTrimBlanks", "Z", nullptr, $PRIVATE, $field(NameImpl, syntaxTrimBlanks)},
	{"syntaxEscape", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameImpl, syntaxEscape)},
	{"syntaxBeginQuote1", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameImpl, syntaxBeginQuote1)},
	{"syntaxEndQuote1", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameImpl, syntaxEndQuote1)},
	{"syntaxBeginQuote2", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameImpl, syntaxBeginQuote2)},
	{"syntaxEndQuote2", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameImpl, syntaxEndQuote2)},
	{"syntaxAvaSeparator", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameImpl, syntaxAvaSeparator)},
	{"syntaxTypevalSeparator", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NameImpl, syntaxTypevalSeparator)},
	{"STYLE_NONE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameImpl, STYLE_NONE)},
	{"STYLE_QUOTE1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameImpl, STYLE_QUOTE1)},
	{"STYLE_QUOTE2", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameImpl, STYLE_QUOTE2)},
	{"STYLE_ESCAPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameImpl, STYLE_ESCAPE)},
	{"escapingStyle", "I", nullptr, $PRIVATE, $field(NameImpl, escapingStyle)},
	{}
};

$MethodInfo _NameImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Properties;)V", nullptr, 0, $method(static_cast<void(NameImpl::*)($Properties*)>(&NameImpl::init$))},
	{"<init>", "(Ljava/util/Properties;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(NameImpl::*)($Properties*,$String*)>(&NameImpl::init$)), "javax.naming.InvalidNameException"},
	{"<init>", "(Ljava/util/Properties;Ljava/util/Enumeration;)V", "(Ljava/util/Properties;Ljava/util/Enumeration<Ljava/lang/String;>;)V", 0, $method(static_cast<void(NameImpl::*)($Properties*,$Enumeration*)>(&NameImpl::init$))},
	{"add", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"add", "(ILjava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"addAll", "(Ljava/util/Enumeration;)Z", "(Ljava/util/Enumeration<Ljava/lang/String;>;)Z", $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"addAll", "(ILjava/util/Enumeration;)Z", "(ILjava/util/Enumeration<Ljava/lang/String;>;)Z", $PUBLIC, nullptr, "javax.naming.InvalidNameException"},
	{"compareTo", "(Ljavax/naming/NameImpl;)I", nullptr, $PUBLIC},
	{"endsWith", "(ILjava/util/Enumeration;)Z", "(ILjava/util/Enumeration<Ljava/lang/String;>;)Z", $PUBLIC},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"extractComp", "(Ljava/lang/String;IILjava/util/Vector;)I", "(Ljava/lang/String;IILjava/util/Vector<Ljava/lang/String;>;)I", $PRIVATE | $FINAL, $method(static_cast<int32_t(NameImpl::*)($String*,int32_t,int32_t,$Vector*)>(&NameImpl::extractComp)), "javax.naming.InvalidNameException"},
	{"get", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAll", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getBoolean", "(Ljava/util/Properties;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($Properties*,$String*)>(&NameImpl::getBoolean))},
	{"getPrefix", "(I)Ljava/util/Enumeration;", "(I)Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getSuffix", "(I)Ljava/util/Enumeration;", "(I)Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isA", "(Ljava/lang/String;ILjava/lang/String;)Z", nullptr, $PRIVATE | $FINAL, $method(static_cast<bool(NameImpl::*)($String*,int32_t,$String*)>(&NameImpl::isA))},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"isMeta", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $FINAL, $method(static_cast<bool(NameImpl::*)($String*,int32_t)>(&NameImpl::isMeta))},
	{"isSeparator", "(Ljava/lang/String;I)Z", nullptr, $PRIVATE | $FINAL, $method(static_cast<bool(NameImpl::*)($String*,int32_t)>(&NameImpl::isSeparator))},
	{"recordNamingConvention", "(Ljava/util/Properties;)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(NameImpl::*)($Properties*)>(&NameImpl::recordNamingConvention))},
	{"remove", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"size", "()I", nullptr, $PUBLIC},
	{"skipSeparator", "(Ljava/lang/String;I)I", nullptr, $PRIVATE | $FINAL, $method(static_cast<int32_t(NameImpl::*)($String*,int32_t)>(&NameImpl::skipSeparator))},
	{"startsWith", "(ILjava/util/Enumeration;)Z", "(ILjava/util/Enumeration<Ljava/lang/String;>;)Z", $PUBLIC},
	{"stringifyComp", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $method(static_cast<$String*(NameImpl::*)($String*)>(&NameImpl::stringifyComp))},
	{"toBoolean", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&NameImpl::toBoolean))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NameImpl_ClassInfo_ = {
	$ACC_SUPER,
	"javax.naming.NameImpl",
	"java.lang.Object",
	nullptr,
	_NameImpl_FieldInfo_,
	_NameImpl_MethodInfo_
};

$Object* allocate$NameImpl($Class* clazz) {
	return $of($alloc(NameImpl));
}

bool NameImpl::isA($String* n, int32_t i, $String* match) {
	return (match != nullptr && $nc(n)->startsWith(match, i));
}

bool NameImpl::isMeta($String* n, int32_t i) {
	bool var$2 = isA(n, i, this->syntaxEscape);
	bool var$1 = var$2 || isA(n, i, this->syntaxBeginQuote1);
	bool var$0 = var$1 || isA(n, i, this->syntaxBeginQuote2);
	return (var$0 || isSeparator(n, i));
}

bool NameImpl::isSeparator($String* n, int32_t i) {
	bool var$0 = isA(n, i, this->syntaxSeparator);
	return (var$0 || isA(n, i, this->syntaxSeparator2));
}

int32_t NameImpl::skipSeparator($String* name, int32_t i) {
	if (isA(name, i, this->syntaxSeparator)) {
		i += $nc(this->syntaxSeparator)->length();
	} else if (isA(name, i, this->syntaxSeparator2)) {
		i += $nc(this->syntaxSeparator2)->length();
	}
	return (i);
}

int32_t NameImpl::extractComp($String* name, int32_t i, int32_t len, $Vector* comps) {
	$var($String, beginQuote, nullptr);
	$var($String, endQuote, nullptr);
	bool start = true;
	bool one = false;
	$var($StringBuilder, answer, $new($StringBuilder, len));
	while (i < len) {
		bool var$0 = start;
		if (var$0) {
			bool var$1 = (one = isA(name, i, this->syntaxBeginQuote1));
			var$0 = (var$1 || isA(name, i, this->syntaxBeginQuote2));
		}
		if (var$0) {
			$assign(beginQuote, one ? this->syntaxBeginQuote1 : this->syntaxBeginQuote2);
			$assign(endQuote, one ? this->syntaxEndQuote1 : this->syntaxEndQuote2);
			if (this->escapingStyle == NameImpl::STYLE_NONE) {
				this->escapingStyle = one ? NameImpl::STYLE_QUOTE1 : NameImpl::STYLE_QUOTE2;
			}
			for (i += $nc(beginQuote)->length(); ((i < len) && !$nc(name)->startsWith(endQuote, i)); ++i) {
				bool var$2 = isA(name, i, this->syntaxEscape);
				if (var$2 && isA(name, i + $nc(this->syntaxEscape)->length(), endQuote)) {
					i += $nc(this->syntaxEscape)->length();
				}
				answer->append(name->charAt(i));
			}
			if (i >= len) {
				$throwNew($InvalidNameException, $$str({name, ": no close quote"_s}));
			}
			i += $nc(endQuote)->length();
			if (i == len || isSeparator(name, i)) {
				break;
			}
			$throw($$new($InvalidNameException, $$str({name, ": close quote appears before end of component"_s})));
		} else if (isSeparator(name, i)) {
			break;
		} else if (isA(name, i, this->syntaxEscape)) {
			if (isMeta(name, i + $nc(this->syntaxEscape)->length())) {
				i += $nc(this->syntaxEscape)->length();
				if (this->escapingStyle == NameImpl::STYLE_NONE) {
					this->escapingStyle = NameImpl::STYLE_ESCAPE;
				}
			} else if (i + $nc(this->syntaxEscape)->length() >= len) {
				$throw($$new($InvalidNameException, $$str({name, ": unescaped "_s, this->syntaxEscape, " at end of component"_s})));
			}
		} else {
			bool var$5 = isA(name, i, this->syntaxTypevalSeparator);
			if (var$5) {
				bool var$6 = (one = isA(name, i + $nc(this->syntaxTypevalSeparator)->length(), this->syntaxBeginQuote1));
				var$5 = (var$6 || isA(name, i + $nc(this->syntaxTypevalSeparator)->length(), this->syntaxBeginQuote2));
			}
			if (var$5) {
				$assign(beginQuote, one ? this->syntaxBeginQuote1 : this->syntaxBeginQuote2);
				$assign(endQuote, one ? this->syntaxEndQuote1 : this->syntaxEndQuote2);
				i += $nc(this->syntaxTypevalSeparator)->length();
				answer->append(this->syntaxTypevalSeparator)->append(beginQuote);
				for (i += $nc(beginQuote)->length(); ((i < len) && !$nc(name)->startsWith(endQuote, i)); ++i) {
					bool var$7 = isA(name, i, this->syntaxEscape);
					if (var$7 && isA(name, i + $nc(this->syntaxEscape)->length(), endQuote)) {
						i += $nc(this->syntaxEscape)->length();
					}
					answer->append(name->charAt(i));
				}
				if (i >= len) {
					$throwNew($InvalidNameException, $$str({name, ": typeval no close quote"_s}));
				}
				i += $nc(endQuote)->length();
				answer->append(endQuote);
				if (i == len || isSeparator(name, i)) {
					break;
				}
				$throw($$new($InvalidNameException, $$str({$($nc(name)->substring(i)), ": typeval close quote appears before end of component"_s})));
			}
		}
		answer->append($nc(name)->charAt(i++));
		start = false;
	}
	if (this->syntaxDirection == NameImpl::RIGHT_TO_LEFT) {
		$nc(comps)->insertElementAt($(answer->toString()), 0);
	} else {
		$nc(comps)->addElement($(answer->toString()));
	}
	return i;
}

bool NameImpl::getBoolean($Properties* p, $String* name) {
	return toBoolean($($nc(p)->getProperty(name)));
}

bool NameImpl::toBoolean($String* name) {
	$init($Locale);
	return ((name != nullptr) && $(name->toLowerCase($Locale::ENGLISH))->equals("true"_s));
}

void NameImpl::recordNamingConvention($Properties* p) {
	$var($String, syntaxDirectionStr, $nc(p)->getProperty("jndi.syntax.direction"_s, "flat"_s));
	if ($nc(syntaxDirectionStr)->equals("left_to_right"_s)) {
		this->syntaxDirection = NameImpl::LEFT_TO_RIGHT;
	} else if (syntaxDirectionStr->equals("right_to_left"_s)) {
		this->syntaxDirection = NameImpl::RIGHT_TO_LEFT;
	} else if (syntaxDirectionStr->equals("flat"_s)) {
		this->syntaxDirection = NameImpl::FLAT;
	} else {
		$throwNew($IllegalArgumentException, $$str({syntaxDirectionStr, " is not a valid value for the jndi.syntax.direction property"_s}));
	}
	if (this->syntaxDirection != NameImpl::FLAT) {
		$set(this, syntaxSeparator, p->getProperty("jndi.syntax.separator"_s));
		$set(this, syntaxSeparator2, p->getProperty("jndi.syntax.separator2"_s));
		if (this->syntaxSeparator == nullptr) {
			$throwNew($IllegalArgumentException, "jndi.syntax.separator property required for non-flat syntax"_s);
		}
	} else {
		$set(this, syntaxSeparator, nullptr);
	}
	$set(this, syntaxEscape, p->getProperty("jndi.syntax.escape"_s));
	this->syntaxCaseInsensitive = getBoolean(p, "jndi.syntax.ignorecase"_s);
	this->syntaxTrimBlanks = getBoolean(p, "jndi.syntax.trimblanks"_s);
	$set(this, syntaxBeginQuote1, p->getProperty("jndi.syntax.beginquote"_s));
	$set(this, syntaxEndQuote1, p->getProperty("jndi.syntax.endquote"_s));
	if (this->syntaxEndQuote1 == nullptr && this->syntaxBeginQuote1 != nullptr) {
		$set(this, syntaxEndQuote1, this->syntaxBeginQuote1);
	} else if (this->syntaxBeginQuote1 == nullptr && this->syntaxEndQuote1 != nullptr) {
		$set(this, syntaxBeginQuote1, this->syntaxEndQuote1);
	}
	$set(this, syntaxBeginQuote2, p->getProperty("jndi.syntax.beginquote2"_s));
	$set(this, syntaxEndQuote2, p->getProperty("jndi.syntax.endquote2"_s));
	if (this->syntaxEndQuote2 == nullptr && this->syntaxBeginQuote2 != nullptr) {
		$set(this, syntaxEndQuote2, this->syntaxBeginQuote2);
	} else if (this->syntaxBeginQuote2 == nullptr && this->syntaxEndQuote2 != nullptr) {
		$set(this, syntaxBeginQuote2, this->syntaxEndQuote2);
	}
	$set(this, syntaxAvaSeparator, p->getProperty("jndi.syntax.separator.ava"_s));
	$set(this, syntaxTypevalSeparator, p->getProperty("jndi.syntax.separator.typeval"_s));
}

void NameImpl::init$($Properties* syntax) {
	this->syntaxDirection = NameImpl::LEFT_TO_RIGHT;
	$set(this, syntaxSeparator, "/"_s);
	$set(this, syntaxSeparator2, nullptr);
	this->syntaxCaseInsensitive = false;
	this->syntaxTrimBlanks = false;
	$set(this, syntaxEscape, "\\"_s);
	$set(this, syntaxBeginQuote1, "\""_s);
	$set(this, syntaxEndQuote1, "\""_s);
	$set(this, syntaxBeginQuote2, "\'"_s);
	$set(this, syntaxEndQuote2, "\'"_s);
	$set(this, syntaxAvaSeparator, nullptr);
	$set(this, syntaxTypevalSeparator, nullptr);
	this->escapingStyle = NameImpl::STYLE_NONE;
	if (syntax != nullptr) {
		recordNamingConvention(syntax);
	}
	$set(this, components, $new($Vector));
}

void NameImpl::init$($Properties* syntax, $String* n) {
	NameImpl::init$(syntax);
	bool rToL = (this->syntaxDirection == NameImpl::RIGHT_TO_LEFT);
	bool compsAllEmpty = true;
	int32_t len = $nc(n)->length();
	for (int32_t i = 0; i < len;) {
		i = extractComp(n, i, len, this->components);
		$var($String, comp, rToL ? $cast($String, $nc(this->components)->firstElement()) : $cast($String, $nc(this->components)->lastElement()));
		if ($nc(comp)->length() >= 1) {
			compsAllEmpty = false;
		}
		if (i < len) {
			i = skipSeparator(n, i);
			if ((i == len) && !compsAllEmpty) {
				if (rToL) {
					$nc(this->components)->insertElementAt(""_s, 0);
				} else {
					$nc(this->components)->addElement(""_s);
				}
			}
		}
	}
}

void NameImpl::init$($Properties* syntax, $Enumeration* comps) {
	NameImpl::init$(syntax);
	while ($nc(comps)->hasMoreElements()) {
		$nc(this->components)->addElement($cast($String, $(comps->nextElement())));
	}
}

$String* NameImpl::stringifyComp($String* comp) {
	int32_t len = $nc(comp)->length();
	bool escapeSeparator = false;
	bool escapeSeparator2 = false;
	$var($String, beginQuote, nullptr);
	$var($String, endQuote, nullptr);
	$var($StringBuffer, strbuf, $new($StringBuffer, len));
	if (this->syntaxSeparator != nullptr && comp->indexOf(this->syntaxSeparator) >= 0) {
		if (this->syntaxBeginQuote1 != nullptr) {
			$assign(beginQuote, this->syntaxBeginQuote1);
			$assign(endQuote, this->syntaxEndQuote1);
		} else if (this->syntaxBeginQuote2 != nullptr) {
			$assign(beginQuote, this->syntaxBeginQuote2);
			$assign(endQuote, this->syntaxEndQuote2);
		} else if (this->syntaxEscape != nullptr) {
			escapeSeparator = true;
		}
	}
	if (this->syntaxSeparator2 != nullptr && comp->indexOf(this->syntaxSeparator2) >= 0) {
		if (this->syntaxBeginQuote1 != nullptr) {
			if (beginQuote == nullptr) {
				$assign(beginQuote, this->syntaxBeginQuote1);
				$assign(endQuote, this->syntaxEndQuote1);
			}
		} else if (this->syntaxBeginQuote2 != nullptr) {
			if (beginQuote == nullptr) {
				$assign(beginQuote, this->syntaxBeginQuote2);
				$assign(endQuote, this->syntaxEndQuote2);
			}
		} else if (this->syntaxEscape != nullptr) {
			escapeSeparator2 = true;
		}
	}
	if (beginQuote != nullptr) {
		$assign(strbuf, strbuf->append(beginQuote));
		for (int32_t i = 0; i < len;) {
			if (comp->startsWith(endQuote, i)) {
				strbuf->append(this->syntaxEscape)->append(endQuote);
				i += $nc(endQuote)->length();
			} else {
				strbuf->append(comp->charAt(i++));
			}
		}
		strbuf->append(endQuote);
	} else {
		bool start = true;
		for (int32_t i = 0; i < len;) {
			if (start && isA(comp, i, this->syntaxBeginQuote1)) {
				strbuf->append(this->syntaxEscape)->append(this->syntaxBeginQuote1);
				i += $nc(this->syntaxBeginQuote1)->length();
			} else if (start && isA(comp, i, this->syntaxBeginQuote2)) {
				strbuf->append(this->syntaxEscape)->append(this->syntaxBeginQuote2);
				i += $nc(this->syntaxBeginQuote2)->length();
			} else if (isA(comp, i, this->syntaxEscape)) {
				if (i + $nc(this->syntaxEscape)->length() >= len) {
					strbuf->append(this->syntaxEscape);
				} else if (isMeta(comp, i + $nc(this->syntaxEscape)->length())) {
					strbuf->append(this->syntaxEscape);
				}
				strbuf->append(this->syntaxEscape);
				i += $nc(this->syntaxEscape)->length();
			} else if (escapeSeparator && comp->startsWith(this->syntaxSeparator, i)) {
				strbuf->append(this->syntaxEscape)->append(this->syntaxSeparator);
				i += $nc(this->syntaxSeparator)->length();
			} else if (escapeSeparator2 && comp->startsWith(this->syntaxSeparator2, i)) {
				strbuf->append(this->syntaxEscape)->append(this->syntaxSeparator2);
				i += $nc(this->syntaxSeparator2)->length();
			} else {
				strbuf->append(comp->charAt(i++));
			}
			start = false;
		}
	}
	return (strbuf->toString());
}

$String* NameImpl::toString() {
	$var($StringBuffer, answer, $new($StringBuffer));
	$var($String, comp, nullptr);
	bool compsAllEmpty = true;
	int32_t size = $nc(this->components)->size();
	for (int32_t i = 0; i < size; ++i) {
		if (this->syntaxDirection == NameImpl::RIGHT_TO_LEFT) {
			$assign(comp, stringifyComp($cast($String, $($nc(this->components)->elementAt(size - 1 - i)))));
		} else {
			$assign(comp, stringifyComp($cast($String, $($nc(this->components)->elementAt(i)))));
		}
		if ((i != 0) && (this->syntaxSeparator != nullptr)) {
			answer->append(this->syntaxSeparator);
		}
		if ($nc(comp)->length() >= 1) {
			compsAllEmpty = false;
		}
		$assign(answer, answer->append(comp));
	}
	if (compsAllEmpty && (size >= 1) && (this->syntaxSeparator != nullptr)) {
		$assign(answer, answer->append(this->syntaxSeparator));
	}
	return (answer->toString());
}

bool NameImpl::equals(Object$* obj) {
	if ((obj != nullptr) && ($instanceOf(NameImpl, obj))) {
		$var(NameImpl, target, $cast(NameImpl, obj));
		int32_t var$0 = target->size();
		if (var$0 == this->size()) {
			$var($Enumeration, mycomps, getAll());
			$var($Enumeration, comps, target->getAll());
			while ($nc(mycomps)->hasMoreElements()) {
				$var($String, my, $cast($String, mycomps->nextElement()));
				$var($String, his, $cast($String, $nc(comps)->nextElement()));
				if (this->syntaxTrimBlanks) {
					$assign(my, $nc(my)->trim());
					$assign(his, $nc(his)->trim());
				}
				if (this->syntaxCaseInsensitive) {
					if (!($nc(my)->equalsIgnoreCase(his))) {
						return false;
					}
				} else if (!(my->equals(his))) {
					return false;
				}
			}
			return true;
		}
	}
	return false;
}

int32_t NameImpl::compareTo(NameImpl* obj) {
	if (this == obj) {
		return 0;
	}
	int32_t len1 = size();
	int32_t len2 = $nc(obj)->size();
	int32_t n = $Math::min(len1, len2);
	int32_t index1 = 0;
	int32_t index2 = 0;
	while (n-- != 0) {
		$var($String, comp1, get(index1++));
		$var($String, comp2, obj->get(index2++));
		if (this->syntaxTrimBlanks) {
			$assign(comp1, $nc(comp1)->trim());
			$assign(comp2, $nc(comp2)->trim());
		}
		int32_t local = 0;
		if (this->syntaxCaseInsensitive) {
			local = $nc(comp1)->compareToIgnoreCase(comp2);
		} else {
			local = $nc(comp1)->compareTo(comp2);
		}
		if (local != 0) {
			return local;
		}
	}
	return len1 - len2;
}

int32_t NameImpl::size() {
	return ($nc(this->components)->size());
}

$Enumeration* NameImpl::getAll() {
	return $nc(this->components)->elements();
}

$String* NameImpl::get(int32_t posn) {
	return $cast($String, $nc(this->components)->elementAt(posn));
}

$Enumeration* NameImpl::getPrefix(int32_t posn) {
	if (posn < 0 || posn > size()) {
		$throwNew($ArrayIndexOutOfBoundsException, posn);
	}
	return $new($NameImplEnumerator, this->components, 0, posn);
}

$Enumeration* NameImpl::getSuffix(int32_t posn) {
	int32_t cnt = size();
	if (posn < 0 || posn > cnt) {
		$throwNew($ArrayIndexOutOfBoundsException, posn);
	}
	return $new($NameImplEnumerator, this->components, posn, cnt);
}

bool NameImpl::isEmpty() {
	return ($nc(this->components)->isEmpty());
}

bool NameImpl::startsWith(int32_t posn, $Enumeration* prefix) {
	if (posn < 0 || posn > size()) {
		return false;
	}
	try {
		$var($Enumeration, mycomps, getPrefix(posn));
		while ($nc(mycomps)->hasMoreElements()) {
			$var($String, my, $cast($String, mycomps->nextElement()));
			$var($String, his, $cast($String, $nc(prefix)->nextElement()));
			if (this->syntaxTrimBlanks) {
				$assign(my, $nc(my)->trim());
				$assign(his, $nc(his)->trim());
			}
			if (this->syntaxCaseInsensitive) {
				if (!($nc(my)->equalsIgnoreCase(his))) {
					return false;
				}
			} else if (!(my->equals(his))) {
				return false;
			}
		}
	} catch ($NoSuchElementException&) {
		$var($NoSuchElementException, e, $catch());
		return false;
	}
	return true;
}

bool NameImpl::endsWith(int32_t posn, $Enumeration* suffix) {
	int32_t startIndex = size() - posn;
	if (startIndex < 0 || startIndex > size()) {
		return false;
	}
	try {
		$var($Enumeration, mycomps, getSuffix(startIndex));
		while ($nc(mycomps)->hasMoreElements()) {
			$var($String, my, $cast($String, mycomps->nextElement()));
			$var($String, his, $cast($String, $nc(suffix)->nextElement()));
			if (this->syntaxTrimBlanks) {
				$assign(my, $nc(my)->trim());
				$assign(his, $nc(his)->trim());
			}
			if (this->syntaxCaseInsensitive) {
				if (!($nc(my)->equalsIgnoreCase(his))) {
					return false;
				}
			} else if (!(my->equals(his))) {
				return false;
			}
		}
	} catch ($NoSuchElementException&) {
		$var($NoSuchElementException, e, $catch());
		return false;
	}
	return true;
}

bool NameImpl::addAll($Enumeration* comps) {
	bool added = false;
	while ($nc(comps)->hasMoreElements()) {
		try {
			$var($String, comp, $cast($String, comps->nextElement()));
			if (size() > 0 && this->syntaxDirection == NameImpl::FLAT) {
				$throwNew($InvalidNameException, "A flat name can only have a single component"_s);
			}
			$nc(this->components)->addElement(comp);
			added = true;
		} catch ($NoSuchElementException&) {
			$var($NoSuchElementException, e, $catch());
			break;
		}
	}
	return added;
}

bool NameImpl::addAll(int32_t posn, $Enumeration* comps) {
	bool added = false;
	for (int32_t i = posn; $nc(comps)->hasMoreElements(); ++i) {
		try {
			$var($String, comp, $cast($String, comps->nextElement()));
			if (size() > 0 && this->syntaxDirection == NameImpl::FLAT) {
				$throwNew($InvalidNameException, "A flat name can only have a single component"_s);
			}
			$nc(this->components)->insertElementAt(comp, i);
			added = true;
		} catch ($NoSuchElementException&) {
			$var($NoSuchElementException, e, $catch());
			break;
		}
	}
	return added;
}

void NameImpl::add($String* comp) {
	if (size() > 0 && this->syntaxDirection == NameImpl::FLAT) {
		$throwNew($InvalidNameException, "A flat name can only have a single component"_s);
	}
	$nc(this->components)->addElement(comp);
}

void NameImpl::add(int32_t posn, $String* comp) {
	if (size() > 0 && this->syntaxDirection == NameImpl::FLAT) {
		$throwNew($InvalidNameException, "A flat name can only zero or one component"_s);
	}
	$nc(this->components)->insertElementAt(comp, posn);
}

$Object* NameImpl::remove(int32_t posn) {
	$var($Object, r, $nc(this->components)->elementAt(posn));
	$nc(this->components)->removeElementAt(posn);
	return $of(r);
}

int32_t NameImpl::hashCode() {
	int32_t hash = 0;
	{
		$var($Enumeration, e, getAll());
		for (; $nc(e)->hasMoreElements();) {
			$var($String, comp, $cast($String, e->nextElement()));
			if (this->syntaxTrimBlanks) {
				$assign(comp, $nc(comp)->trim());
			}
			if (this->syntaxCaseInsensitive) {
				$init($Locale);
				$assign(comp, $nc(comp)->toLowerCase($Locale::ENGLISH));
			}
			hash += $nc(comp)->hashCode();
		}
	}
	return hash;
}

NameImpl::NameImpl() {
}

$Class* NameImpl::load$($String* name, bool initialize) {
	$loadClass(NameImpl, name, initialize, &_NameImpl_ClassInfo_, allocate$NameImpl);
	return class$;
}

$Class* NameImpl::class$ = nullptr;

	} // naming
} // javax