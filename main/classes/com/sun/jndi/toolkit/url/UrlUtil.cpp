#include <com/sun/jndi/toolkit/url/UrlUtil.h>

#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URLDecoder.h>
#include <jcpp.h>

using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URLDecoder = ::java::net::URLDecoder;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace url {

$MethodInfo _UrlUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UrlUtil::*)()>(&UrlUtil::init$))},
	{"decode", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$String*(*)($String*)>(&UrlUtil::decode)), "java.net.MalformedURLException"},
	{"decode", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$String*(*)($String*,$String*)>(&UrlUtil::decode)), "java.net.MalformedURLException,java.io.UnsupportedEncodingException"},
	{"encode", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$String*(*)($String*,$String*)>(&UrlUtil::encode)), "java.io.UnsupportedEncodingException"},
	{}
};

$ClassInfo _UrlUtil_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.toolkit.url.UrlUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_UrlUtil_MethodInfo_
};

$Object* allocate$UrlUtil($Class* clazz) {
	return $of($alloc(UrlUtil));
}

void UrlUtil::init$() {
}

$String* UrlUtil::decode($String* s) {
	try {
		return decode(s, "8859_1"_s);
	} catch ($UnsupportedEncodingException&) {
		$var($UnsupportedEncodingException, e, $catch());
		$throwNew($MalformedURLException, "ISO-Latin-1 decoder unavailable"_s);
	}
	$shouldNotReachHere();
}

$String* UrlUtil::decode($String* s, $String* enc) {
	try {
		return $URLDecoder::decode(s, enc);
	} catch ($IllegalArgumentException&) {
		$var($IllegalArgumentException, iae, $catch());
		$var($MalformedURLException, mue, $new($MalformedURLException, $$str({"Invalid URI encoding: "_s, s})));
		mue->initCause(iae);
		$throw(mue);
	}
	$shouldNotReachHere();
}

$String* UrlUtil::encode($String* s, $String* enc) {
	$var($bytes, bytes, $nc(s)->getBytes(enc));
	int32_t count = bytes->length;
	$var($String, allowed, "=,+;.\'-@&/$_()!~*:"_s);
	$var($chars, buf, $new($chars, 3 * count));
	int32_t j = 0;
	for (int32_t i = 0; i < count; ++i) {
		if ((bytes->get(i) >= 97 && bytes->get(i) <= 122) || (bytes->get(i) >= 65 && bytes->get(i) <= 90) || (bytes->get(i) >= 48 && bytes->get(i) <= 57) || (allowed->indexOf((int32_t)bytes->get(i)) >= 0)) {
			buf->set(j++, (char16_t)bytes->get(i));
		} else {
			buf->set(j++, u'%');
			buf->set(j++, $Character::forDigit((int32_t)(15 & (uint32_t)((int32_t)((uint32_t)bytes->get(i) >> 4))), 16));
			buf->set(j++, $Character::forDigit((int32_t)(15 & (uint32_t)(int32_t)bytes->get(i)), 16));
		}
	}
	return $new($String, buf, 0, j);
}

UrlUtil::UrlUtil() {
}

$Class* UrlUtil::load$($String* name, bool initialize) {
	$loadClass(UrlUtil, name, initialize, &_UrlUtil_ClassInfo_, allocate$UrlUtil);
	return class$;
}

$Class* UrlUtil::class$ = nullptr;

				} // url
			} // toolkit
		} // jndi
	} // sun
} // com