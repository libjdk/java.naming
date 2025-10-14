#include <com/sun/jndi/ldap/BerDecoder.h>

#include <com/sun/jndi/ldap/Ber$DecodeException.h>
#include <com/sun/jndi/ldap/Ber.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ASN_BOOLEAN
#undef ASN_ENUMERATED
#undef ASN_INTEGER
#undef ASN_SIMPLE_STRING

using $Ber = ::com::sun::jndi::ldap::Ber;
using $Ber$DecodeException = ::com::sun::jndi::ldap::Ber$DecodeException;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _BerDecoder_FieldInfo_[] = {
	{"origOffset", "I", nullptr, $PRIVATE, $field(BerDecoder, origOffset)},
	{}
};

$MethodInfo _BerDecoder_MethodInfo_[] = {
	{"<init>", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(BerDecoder::*)($bytes*,int32_t,int32_t)>(&BerDecoder::init$))},
	{"bytesLeft", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(BerDecoder::*)()>(&BerDecoder::bytesLeft))},
	{"getParsePosition", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(BerDecoder::*)()>(&BerDecoder::getParsePosition))},
	{"parseBoolean", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(BerDecoder::*)()>(&BerDecoder::parseBoolean)), "com.sun.jndi.ldap.Ber$DecodeException"},
	{"parseByte", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(BerDecoder::*)()>(&BerDecoder::parseByte)), "com.sun.jndi.ldap.Ber$DecodeException"},
	{"parseEnumeration", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(BerDecoder::*)()>(&BerDecoder::parseEnumeration)), "com.sun.jndi.ldap.Ber$DecodeException"},
	{"parseInt", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(BerDecoder::*)()>(&BerDecoder::parseInt)), "com.sun.jndi.ldap.Ber$DecodeException"},
	{"parseIntWithTag", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BerDecoder::*)(int32_t)>(&BerDecoder::parseIntWithTag)), "com.sun.jndi.ldap.Ber$DecodeException"},
	{"parseLength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(BerDecoder::*)()>(&BerDecoder::parseLength)), "com.sun.jndi.ldap.Ber$DecodeException"},
	{"parseOctetString", "(I[I)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(BerDecoder::*)(int32_t,$ints*)>(&BerDecoder::parseOctetString)), "com.sun.jndi.ldap.Ber$DecodeException"},
	{"parseSeq", "([I)I", nullptr, $PUBLIC, $method(static_cast<int32_t(BerDecoder::*)($ints*)>(&BerDecoder::parseSeq)), "com.sun.jndi.ldap.Ber$DecodeException"},
	{"parseString", "(Z)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(BerDecoder::*)(bool)>(&BerDecoder::parseString)), "com.sun.jndi.ldap.Ber$DecodeException"},
	{"parseStringWithTag", "(IZ[I)Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(BerDecoder::*)(int32_t,bool,$ints*)>(&BerDecoder::parseStringWithTag)), "com.sun.jndi.ldap.Ber$DecodeException"},
	{"peekByte", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(BerDecoder::*)()>(&BerDecoder::peekByte)), "com.sun.jndi.ldap.Ber$DecodeException"},
	{"reset", "()V", nullptr, $PUBLIC, $method(static_cast<void(BerDecoder::*)()>(&BerDecoder::reset))},
	{"seek", "(I)V", nullptr, 0, $method(static_cast<void(BerDecoder::*)(int32_t)>(&BerDecoder::seek)), "com.sun.jndi.ldap.Ber$DecodeException"},
	{}
};

$ClassInfo _BerDecoder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.BerDecoder",
	"com.sun.jndi.ldap.Ber",
	nullptr,
	_BerDecoder_FieldInfo_,
	_BerDecoder_MethodInfo_
};

$Object* allocate$BerDecoder($Class* clazz) {
	return $of($alloc(BerDecoder));
}

void BerDecoder::init$($bytes* buf, int32_t offset, int32_t bufsize) {
	$Ber::init$();
	$set(this, buf, buf);
	this->bufsize = bufsize;
	this->origOffset = offset;
	reset();
}

void BerDecoder::reset() {
	this->offset = this->origOffset;
}

int32_t BerDecoder::getParsePosition() {
	return this->offset;
}

int32_t BerDecoder::parseLength() {
	int32_t lengthbyte = parseByte();
	if (((int32_t)(lengthbyte & (uint32_t)128)) == 128) {
		lengthbyte &= (uint32_t)127;
		if (lengthbyte == 0) {
			$throwNew($Ber$DecodeException, "Indefinite length not supported"_s);
		}
		if (lengthbyte > 4) {
			$throwNew($Ber$DecodeException, "encoding too long"_s);
		}
		if (this->bufsize - this->offset < lengthbyte) {
			$throwNew($Ber$DecodeException, "Insufficient data"_s);
		}
		int32_t retval = 0;
		for (int32_t i = 0; i < lengthbyte; ++i) {
			retval = (retval << 8) + ((int32_t)($nc(this->buf)->get(this->offset++) & (uint32_t)255));
		}
		if (retval < 0) {
			$throwNew($Ber$DecodeException, "Invalid length bytes"_s);
		}
		return retval;
	} else {
		return lengthbyte;
	}
}

int32_t BerDecoder::parseSeq($ints* rlen) {
	int32_t seq = parseByte();
	int32_t len = parseLength();
	if (rlen != nullptr) {
		rlen->set(0, len);
	}
	return seq;
}

void BerDecoder::seek(int32_t i) {
	if (this->offset + i > this->bufsize || this->offset + i < 0) {
		$throwNew($Ber$DecodeException, "array index out of bounds"_s);
	}
	this->offset += i;
}

int32_t BerDecoder::parseByte() {
	if (this->bufsize - this->offset < 1) {
		$throwNew($Ber$DecodeException, "Insufficient data"_s);
	}
	return (int32_t)($nc(this->buf)->get(this->offset++) & (uint32_t)255);
}

int32_t BerDecoder::peekByte() {
	if (this->bufsize - this->offset < 1) {
		$throwNew($Ber$DecodeException, "Insufficient data"_s);
	}
	return (int32_t)($nc(this->buf)->get(this->offset) & (uint32_t)255);
}

bool BerDecoder::parseBoolean() {
	return ((parseIntWithTag($Ber::ASN_BOOLEAN) == 0) ? false : true);
}

int32_t BerDecoder::parseEnumeration() {
	return parseIntWithTag($Ber::ASN_ENUMERATED);
}

int32_t BerDecoder::parseInt() {
	return parseIntWithTag($Ber::ASN_INTEGER);
}

int32_t BerDecoder::parseIntWithTag(int32_t tag) {
	if (parseByte() != tag) {
		$var($String, s, nullptr);
		if (this->offset > 0) {
			$assign(s, $Integer::toString((int32_t)($nc(this->buf)->get(this->offset - 1) & (uint32_t)255)));
		} else {
			$assign(s, "Empty tag"_s);
		}
		$throwNew($Ber$DecodeException, $$str({"Encountered ASN.1 tag "_s, s, " (expected tag "_s, $($Integer::toString(tag)), ")"_s}));
	}
	int32_t len = parseLength();
	if (len > 4) {
		$throwNew($Ber$DecodeException, "INTEGER too long"_s);
	} else if (len > this->bufsize - this->offset) {
		$throwNew($Ber$DecodeException, "Insufficient data"_s);
	}
	int8_t fb = $nc(this->buf)->get(this->offset++);
	int32_t value = 0;
	value = (int32_t)(fb & (uint32_t)127);
	for (int32_t i = 1; i < len; ++i) {
		value <<= 8;
		value |= ((int32_t)($nc(this->buf)->get(this->offset++) & (uint32_t)255));
	}
	if (((int32_t)(fb & (uint32_t)128)) == 128) {
		value = -value;
	}
	return value;
}

$String* BerDecoder::parseString(bool decodeUTF8) {
	return parseStringWithTag($Ber::ASN_SIMPLE_STRING, decodeUTF8, nullptr);
}

$String* BerDecoder::parseStringWithTag(int32_t tag, bool decodeUTF8, $ints* rlen) {
	int32_t st = 0;
	int32_t origOffset = this->offset;
	if ((st = parseByte()) != tag) {
		$throwNew($Ber$DecodeException, $$str({"Encountered ASN.1 tag "_s, $($Integer::toString((int8_t)st)), " (expected tag "_s, $$str(tag), ")"_s}));
	}
	int32_t len = parseLength();
	if (len > this->bufsize - this->offset) {
		$throwNew($Ber$DecodeException, "Insufficient data"_s);
	}
	$var($String, retstr, nullptr);
	if (len == 0) {
		$assign(retstr, ""_s);
	} else {
		$var($bytes, buf2, $new($bytes, len));
		$System::arraycopy(this->buf, this->offset, buf2, 0, len);
		if (decodeUTF8) {
			try {
				$assign(retstr, $new($String, buf2, "UTF8"_s));
			} catch ($UnsupportedEncodingException&) {
				$var($UnsupportedEncodingException, e, $catch());
				$throwNew($Ber$DecodeException, "UTF8 not available on platform"_s);
			}
		} else {
			try {
				$assign(retstr, $new($String, buf2, "8859_1"_s));
			} catch ($UnsupportedEncodingException&) {
				$var($UnsupportedEncodingException, e, $catch());
				$throwNew($Ber$DecodeException, "8859_1 not available on platform"_s);
			}
		}
		this->offset += len;
	}
	if (rlen != nullptr) {
		rlen->set(0, this->offset - origOffset);
	}
	return retstr;
}

$bytes* BerDecoder::parseOctetString(int32_t tag, $ints* rlen) {
	int32_t origOffset = this->offset;
	int32_t st = 0;
	if ((st = parseByte()) != tag) {
		$var($String, var$1, $$str({"Encountered ASN.1 tag "_s, $($Integer::toString(st)), " (expected tag "_s}));
		$var($String, var$0, $$concat(var$1, $($Integer::toString(tag))));
		$throwNew($Ber$DecodeException, $$concat(var$0, ")"));
	}
	int32_t len = parseLength();
	if (len > this->bufsize - this->offset) {
		$throwNew($Ber$DecodeException, "Insufficient data"_s);
	}
	$var($bytes, retarr, $new($bytes, len));
	if (len > 0) {
		$System::arraycopy(this->buf, this->offset, retarr, 0, len);
		this->offset += len;
	}
	if (rlen != nullptr) {
		rlen->set(0, this->offset - origOffset);
	}
	return retarr;
}

int32_t BerDecoder::bytesLeft() {
	return this->bufsize - this->offset;
}

BerDecoder::BerDecoder() {
}

$Class* BerDecoder::load$($String* name, bool initialize) {
	$loadClass(BerDecoder, name, initialize, &_BerDecoder_ClassInfo_, allocate$BerDecoder);
	return class$;
}

$Class* BerDecoder::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com