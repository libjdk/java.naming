#include <com/sun/jndi/ldap/BerEncoder.h>

#include <com/sun/jndi/ldap/Ber$EncodeException.h>
#include <com/sun/jndi/ldap/Ber.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ASN_BOOLEAN
#undef ASN_OCTET_STR
#undef BUF_GROWTH_FACTOR
#undef DEFAULT_BUFSIZE
#undef INITIAL_SEQUENCES

using $Ber = ::com::sun::jndi::ldap::Ber;
using $Ber$EncodeException = ::com::sun::jndi::ldap::Ber$EncodeException;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _BerEncoder_FieldInfo_[] = {
	{"curSeqIndex", "I", nullptr, $PRIVATE, $field(BerEncoder, curSeqIndex)},
	{"seqOffset", "[I", nullptr, $PRIVATE, $field(BerEncoder, seqOffset)},
	{"INITIAL_SEQUENCES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BerEncoder, INITIAL_SEQUENCES)},
	{"DEFAULT_BUFSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BerEncoder, DEFAULT_BUFSIZE)},
	{"BUF_GROWTH_FACTOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BerEncoder, BUF_GROWTH_FACTOR)},
	{}
};

$MethodInfo _BerEncoder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)()>(&BerEncoder::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)(int32_t)>(&BerEncoder::init$))},
	{"beginSeq", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)(int32_t)>(&BerEncoder::beginSeq))},
	{"encodeBoolean", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)(bool)>(&BerEncoder::encodeBoolean))},
	{"encodeBoolean", "(ZI)V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)(bool,int32_t)>(&BerEncoder::encodeBoolean))},
	{"encodeByte", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)(int32_t)>(&BerEncoder::encodeByte))},
	{"encodeInt", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)(int32_t)>(&BerEncoder::encodeInt))},
	{"encodeInt", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)(int32_t,int32_t)>(&BerEncoder::encodeInt))},
	{"encodeInt", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(BerEncoder::*)(int32_t,int32_t,int32_t)>(&BerEncoder::encodeInt))},
	{"encodeLength", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BerEncoder::*)(int32_t)>(&BerEncoder::encodeLength)), "com.sun.jndi.ldap.Ber$EncodeException"},
	{"encodeOctetString", "([BIII)V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)($bytes*,int32_t,int32_t,int32_t)>(&BerEncoder::encodeOctetString)), "com.sun.jndi.ldap.Ber$EncodeException"},
	{"encodeOctetString", "([BI)V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)($bytes*,int32_t)>(&BerEncoder::encodeOctetString)), "com.sun.jndi.ldap.Ber$EncodeException"},
	{"encodeString", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)($String*,bool)>(&BerEncoder::encodeString)), "com.sun.jndi.ldap.Ber$EncodeException"},
	{"encodeString", "(Ljava/lang/String;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)($String*,int32_t,bool)>(&BerEncoder::encodeString)), "com.sun.jndi.ldap.Ber$EncodeException"},
	{"encodeStringArray", "([Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)($StringArray*,bool)>(&BerEncoder::encodeStringArray)), "com.sun.jndi.ldap.Ber$EncodeException"},
	{"endSeq", "()V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)()>(&BerEncoder::endSeq)), "com.sun.jndi.ldap.Ber$EncodeException"},
	{"ensureFreeBytes", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BerEncoder::*)(int32_t)>(&BerEncoder::ensureFreeBytes))},
	{"getBuf", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(BerEncoder::*)()>(&BerEncoder::getBuf))},
	{"getDataLen", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(BerEncoder::*)()>(&BerEncoder::getDataLen))},
	{"getTrimmedBuf", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(BerEncoder::*)()>(&BerEncoder::getTrimmedBuf))},
	{"reset", "()V", nullptr, $PUBLIC, $method(static_cast<void(BerEncoder::*)()>(&BerEncoder::reset))},
	{"shiftSeqData", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(BerEncoder::*)(int32_t,int32_t,int32_t)>(&BerEncoder::shiftSeqData))},
	{}
};

$ClassInfo _BerEncoder_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.BerEncoder",
	"com.sun.jndi.ldap.Ber",
	nullptr,
	_BerEncoder_FieldInfo_,
	_BerEncoder_MethodInfo_
};

$Object* allocate$BerEncoder($Class* clazz) {
	return $of($alloc(BerEncoder));
}

void BerEncoder::init$() {
	BerEncoder::init$(BerEncoder::DEFAULT_BUFSIZE);
}

void BerEncoder::init$(int32_t bufsize) {
	$Ber::init$();
	$set(this, buf, $new($bytes, bufsize));
	this->bufsize = bufsize;
	this->offset = 0;
	$set(this, seqOffset, $new($ints, BerEncoder::INITIAL_SEQUENCES));
	this->curSeqIndex = 0;
}

void BerEncoder::reset() {
	while (this->offset > 0) {
		$nc(this->buf)->set(--this->offset, (int8_t)0);
	}
	while (this->curSeqIndex > 0) {
		$nc(this->seqOffset)->set(--this->curSeqIndex, 0);
	}
}

int32_t BerEncoder::getDataLen() {
	return this->offset;
}

$bytes* BerEncoder::getBuf() {
	if (this->curSeqIndex != 0) {
		$throwNew($IllegalStateException, "BER encode error: Unbalanced SEQUENCEs."_s);
	}
	return this->buf;
}

$bytes* BerEncoder::getTrimmedBuf() {
	$useLocalCurrentObjectStackCache();
	int32_t len = getDataLen();
	$var($bytes, trimBuf, $new($bytes, len));
	$System::arraycopy($(getBuf()), 0, trimBuf, 0, len);
	return trimBuf;
}

void BerEncoder::beginSeq(int32_t tag) {
	if (this->curSeqIndex >= $nc(this->seqOffset)->length) {
		$var($ints, seqOffsetTmp, $new($ints, $nc(this->seqOffset)->length * 2));
		for (int32_t i = 0; i < $nc(this->seqOffset)->length; ++i) {
			seqOffsetTmp->set(i, $nc(this->seqOffset)->get(i));
		}
		$set(this, seqOffset, seqOffsetTmp);
	}
	encodeByte(tag);
	$nc(this->seqOffset)->set(this->curSeqIndex, this->offset);
	ensureFreeBytes(3);
	this->offset += 3;
	++this->curSeqIndex;
}

void BerEncoder::endSeq() {
	--this->curSeqIndex;
	if (this->curSeqIndex < 0) {
		$throwNew($IllegalStateException, "BER encode error: Unbalanced SEQUENCEs."_s);
	}
	int32_t start = $nc(this->seqOffset)->get(this->curSeqIndex) + 3;
	int32_t len = this->offset - start;
	if (len <= 127) {
		shiftSeqData(start, len, -2);
		$nc(this->buf)->set($nc(this->seqOffset)->get(this->curSeqIndex), (int8_t)len);
	} else if (len <= 255) {
		shiftSeqData(start, len, -1);
		$nc(this->buf)->set($nc(this->seqOffset)->get(this->curSeqIndex), (int8_t)129);
		$nc(this->buf)->set($nc(this->seqOffset)->get(this->curSeqIndex) + 1, (int8_t)len);
	} else if (len <= 0x0000FFFF) {
		$nc(this->buf)->set($nc(this->seqOffset)->get(this->curSeqIndex), (int8_t)130);
		$nc(this->buf)->set($nc(this->seqOffset)->get(this->curSeqIndex) + 1, (int8_t)(len >> 8));
		$nc(this->buf)->set($nc(this->seqOffset)->get(this->curSeqIndex) + 2, (int8_t)len);
	} else if (len <= 0x00FFFFFF) {
		shiftSeqData(start, len, 1);
		$nc(this->buf)->set($nc(this->seqOffset)->get(this->curSeqIndex), (int8_t)131);
		$nc(this->buf)->set($nc(this->seqOffset)->get(this->curSeqIndex) + 1, (int8_t)(len >> 16));
		$nc(this->buf)->set($nc(this->seqOffset)->get(this->curSeqIndex) + 2, (int8_t)(len >> 8));
		$nc(this->buf)->set($nc(this->seqOffset)->get(this->curSeqIndex) + 3, (int8_t)len);
	} else {
		$throwNew($Ber$EncodeException, "SEQUENCE too long"_s);
	}
}

void BerEncoder::shiftSeqData(int32_t start, int32_t len, int32_t shift) {
	if (shift > 0) {
		ensureFreeBytes(shift);
	}
	$System::arraycopy(this->buf, start, this->buf, start + shift, len);
	this->offset += shift;
}

void BerEncoder::encodeByte(int32_t b) {
	ensureFreeBytes(1);
	$nc(this->buf)->set(this->offset++, (int8_t)b);
}

void BerEncoder::encodeInt(int32_t i) {
	encodeInt(i, 2);
}

void BerEncoder::encodeInt(int32_t i, int32_t tag) {
	int32_t mask = (int32_t)0xFF800000;
	int32_t intsize = 4;
	while (((((int32_t)(i & (uint32_t)mask)) == 0) || (((int32_t)(i & (uint32_t)mask)) == mask)) && (intsize > 1)) {
		--intsize;
		i <<= 8;
	}
	encodeInt(i, tag, intsize);
}

void BerEncoder::encodeInt(int32_t i, int32_t tag, int32_t intsize) {
	if (intsize > 4) {
		$throwNew($IllegalArgumentException, "BER encode error: INTEGER too long."_s);
	}
	ensureFreeBytes(2 + intsize);
	$nc(this->buf)->set(this->offset++, (int8_t)tag);
	$nc(this->buf)->set(this->offset++, (int8_t)intsize);
	int32_t mask = (int32_t)0xFF000000;
	while (intsize-- > 0) {
		$nc(this->buf)->set(this->offset++, (int8_t)(((int32_t)(i & (uint32_t)mask)) >> 24));
		i <<= 8;
	}
}

void BerEncoder::encodeBoolean(bool b) {
	encodeBoolean(b, $Ber::ASN_BOOLEAN);
}

void BerEncoder::encodeBoolean(bool b, int32_t tag) {
	ensureFreeBytes(3);
	$nc(this->buf)->set(this->offset++, (int8_t)tag);
	$nc(this->buf)->set(this->offset++, (int8_t)1);
	$nc(this->buf)->set(this->offset++, b ? (int8_t)255 : (int8_t)0);
}

void BerEncoder::encodeString($String* str, bool encodeUTF8) {
	encodeString(str, $Ber::ASN_OCTET_STR, encodeUTF8);
}

void BerEncoder::encodeString($String* str, int32_t tag, bool encodeUTF8) {
	$useLocalCurrentObjectStackCache();
	encodeByte(tag);
	int32_t i = 0;
	int32_t count = 0;
	$var($bytes, bytes, nullptr);
	if (str == nullptr) {
		count = 0;
	} else if (encodeUTF8) {
		try {
			$assign(bytes, $nc(str)->getBytes("UTF8"_s));
			count = bytes->length;
		} catch ($UnsupportedEncodingException&) {
			$var($UnsupportedEncodingException, e, $catch());
			$throwNew($Ber$EncodeException, "UTF8 not available on platform"_s);
		}
	} else {
		try {
			$assign(bytes, $nc(str)->getBytes("8859_1"_s));
			count = bytes->length;
		} catch ($UnsupportedEncodingException&) {
			$var($UnsupportedEncodingException, e, $catch());
			$throwNew($Ber$EncodeException, "8859_1 not available on platform"_s);
		}
	}
	encodeLength(count);
	ensureFreeBytes(count);
	while (i < count) {
		$nc(this->buf)->set(this->offset++, $nc(bytes)->get(i++));
	}
}

void BerEncoder::encodeOctetString($bytes* tb, int32_t tag, int32_t tboffset, int32_t length) {
	encodeByte(tag);
	encodeLength(length);
	if (length > 0) {
		ensureFreeBytes(length);
		$System::arraycopy(tb, tboffset, this->buf, this->offset, length);
		this->offset += length;
	}
}

void BerEncoder::encodeOctetString($bytes* tb, int32_t tag) {
	encodeOctetString(tb, tag, 0, $nc(tb)->length);
}

void BerEncoder::encodeLength(int32_t len) {
	ensureFreeBytes(4);
	if (len < 128) {
		$nc(this->buf)->set(this->offset++, (int8_t)len);
	} else if (len <= 255) {
		$nc(this->buf)->set(this->offset++, (int8_t)129);
		$nc(this->buf)->set(this->offset++, (int8_t)len);
	} else if (len <= 0x0000FFFF) {
		$nc(this->buf)->set(this->offset++, (int8_t)130);
		$nc(this->buf)->set(this->offset++, (int8_t)(len >> 8));
		$nc(this->buf)->set(this->offset++, (int8_t)((int32_t)(len & (uint32_t)255)));
	} else if (len <= 0x00FFFFFF) {
		$nc(this->buf)->set(this->offset++, (int8_t)131);
		$nc(this->buf)->set(this->offset++, (int8_t)(len >> 16));
		$nc(this->buf)->set(this->offset++, (int8_t)(len >> 8));
		$nc(this->buf)->set(this->offset++, (int8_t)((int32_t)(len & (uint32_t)255)));
	} else {
		$throwNew($Ber$EncodeException, "string too long"_s);
	}
}

void BerEncoder::encodeStringArray($StringArray* strs, bool encodeUTF8) {
	if (strs == nullptr) {
		return;
	}
	for (int32_t i = 0; i < $nc(strs)->length; ++i) {
		encodeString(strs->get(i), encodeUTF8);
	}
}

void BerEncoder::ensureFreeBytes(int32_t len) {
	if (this->bufsize - this->offset < len) {
		int32_t newsize = this->bufsize * BerEncoder::BUF_GROWTH_FACTOR;
		if (newsize - this->offset < len) {
			newsize += len;
		}
		$var($bytes, newbuf, $new($bytes, newsize));
		$System::arraycopy(this->buf, 0, newbuf, 0, this->offset);
		$set(this, buf, newbuf);
		this->bufsize = newsize;
	}
}

BerEncoder::BerEncoder() {
}

$Class* BerEncoder::load$($String* name, bool initialize) {
	$loadClass(BerEncoder, name, initialize, &_BerEncoder_ClassInfo_, allocate$BerEncoder);
	return class$;
}

$Class* BerEncoder::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com