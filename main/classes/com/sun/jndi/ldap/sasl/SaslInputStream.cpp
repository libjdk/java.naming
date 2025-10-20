#include <com/sun/jndi/ldap/sasl/SaslInputStream.h>

#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslClient.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef MAX_BUFFER

using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Sasl = ::javax::security::sasl::Sasl;
using $SaslClient = ::javax::security::sasl::SaslClient;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {
				namespace sasl {

$FieldInfo _SaslInputStream_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SaslInputStream, debug)},
	{"saslBuffer", "[B", nullptr, $PRIVATE, $field(SaslInputStream, saslBuffer)},
	{"lenBuf", "[B", nullptr, $PRIVATE, $field(SaslInputStream, lenBuf)},
	{"buf", "[B", nullptr, $PRIVATE, $field(SaslInputStream, buf)},
	{"bufPos", "I", nullptr, $PRIVATE, $field(SaslInputStream, bufPos)},
	{"in", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(SaslInputStream, in)},
	{"sc", "Ljavax/security/sasl/SaslClient;", nullptr, $PRIVATE, $field(SaslInputStream, sc)},
	{"recvMaxBufSize", "I", nullptr, $PRIVATE, $field(SaslInputStream, recvMaxBufSize)},
	{}
};

$MethodInfo _SaslInputStream_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/sasl/SaslClient;Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(SaslInputStream::*)($SaslClient*,$InputStream*)>(&SaslInputStream::init$)), "javax.security.sasl.SaslException"},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"fill", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(SaslInputStream::*)()>(&SaslInputStream::fill)), "java.io.IOException"},
	{"networkByteOrderToInt", "([BII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&SaslInputStream::networkByteOrderToInt))},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"readFully", "([BI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SaslInputStream::*)($bytes*,int32_t)>(&SaslInputStream::readFully)), "java.io.IOException"},
	{}
};

$ClassInfo _SaslInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.ldap.sasl.SaslInputStream",
	"java.io.InputStream",
	nullptr,
	_SaslInputStream_FieldInfo_,
	_SaslInputStream_MethodInfo_
};

$Object* allocate$SaslInputStream($Class* clazz) {
	return $of($alloc(SaslInputStream));
}

void SaslInputStream::init$($SaslClient* sc, $InputStream* in) {
	$useLocalCurrentObjectStackCache();
	$InputStream::init$();
	$set(this, lenBuf, $new($bytes, 4));
	$set(this, buf, $new($bytes, 0));
	this->bufPos = 0;
	this->recvMaxBufSize = 0x00010000;
	$set(this, in, in);
	$set(this, sc, sc);
	$init($Sasl);
	$var($String, str, $cast($String, $nc(sc)->getNegotiatedProperty($Sasl::MAX_BUFFER)));
	if (str != nullptr) {
		try {
			this->recvMaxBufSize = $Integer::parseInt(str);
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, e, $catch());
			$throwNew($SaslException, $$str({$Sasl::MAX_BUFFER, " property must be numeric string: "_s, str}));
		}
	}
	$set(this, saslBuffer, $new($bytes, this->recvMaxBufSize));
}

int32_t SaslInputStream::read() {
	$var($bytes, inBuf, $new($bytes, 1));
	int32_t count = read(inBuf, 0, 1);
	if (count > 0) {
		return inBuf->get(0);
	} else {
		return -1;
	}
}

int32_t SaslInputStream::read($bytes* inBuf, int32_t start, int32_t count) {
	if (this->bufPos >= $nc(this->buf)->length) {
		int32_t actual = fill();
		while (actual == 0) {
			actual = fill();
		}
		if (actual == -1) {
			return -1;
		}
	}
	int32_t avail = $nc(this->buf)->length - this->bufPos;
	if (count > avail) {
		$System::arraycopy(this->buf, this->bufPos, inBuf, start, avail);
		this->bufPos = $nc(this->buf)->length;
		return avail;
	} else {
		$System::arraycopy(this->buf, this->bufPos, inBuf, start, count);
		this->bufPos += count;
		return count;
	}
}

int32_t SaslInputStream::fill() {
	$useLocalCurrentObjectStackCache();
	int32_t actual = readFully(this->lenBuf, 4);
	if (actual != 4) {
		return -1;
	}
	int32_t len = networkByteOrderToInt(this->lenBuf, 0, 4);
	if (len > this->recvMaxBufSize) {
		$throwNew($IOException, $$str({$$str(len), "exceeds the negotiated receive buffer size limit:"_s, $$str(this->recvMaxBufSize)}));
	}
	actual = readFully(this->saslBuffer, len);
	if (actual != len) {
		$throwNew($EOFException, $$str({"Expecting to read "_s, $$str(len), " bytes but got "_s, $$str(actual), " bytes before EOF"_s}));
	}
	$set(this, buf, $nc(this->sc)->unwrap(this->saslBuffer, 0, len));
	this->bufPos = 0;
	return $nc(this->buf)->length;
}

int32_t SaslInputStream::readFully($bytes* inBuf, int32_t total) {
	int32_t count = 0;
	int32_t pos = 0;
	while (total > 0) {
		count = $nc(this->in)->read(inBuf, pos, total);
		if (count == -1) {
			return (pos == 0 ? -1 : pos);
		}
		pos += count;
		total -= count;
	}
	return pos;
}

int32_t SaslInputStream::available() {
	return $nc(this->buf)->length - this->bufPos;
}

void SaslInputStream::close() {
	$useLocalCurrentObjectStackCache();
	$var($SaslException, save, nullptr);
	try {
		$nc(this->sc)->dispose();
	} catch ($SaslException&) {
		$var($SaslException, e, $catch());
		$assign(save, e);
	}
	$nc(this->in)->close();
	if (save != nullptr) {
		$throw(save);
	}
}

int32_t SaslInputStream::networkByteOrderToInt($bytes* buf, int32_t start, int32_t count) {
	$init(SaslInputStream);
	if (count > 4) {
		$throwNew($IllegalArgumentException, "Cannot handle more than 4 bytes"_s);
	}
	int32_t answer = 0;
	for (int32_t i = 0; i < count; ++i) {
		answer <<= 8;
		answer |= ((int32_t)((int32_t)$nc(buf)->get(start + i) & (uint32_t)255));
	}
	return answer;
}

SaslInputStream::SaslInputStream() {
}

$Class* SaslInputStream::load$($String* name, bool initialize) {
	$loadClass(SaslInputStream, name, initialize, &_SaslInputStream_ClassInfo_, allocate$SaslInputStream);
	return class$;
}

$Class* SaslInputStream::class$ = nullptr;

				} // sasl
			} // ldap
		} // jndi
	} // sun
} // com