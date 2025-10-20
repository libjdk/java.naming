#include <com/sun/jndi/ldap/sasl/SaslOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
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
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslClient.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef RAW_SEND_SIZE

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
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

$FieldInfo _SaslOutputStream_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SaslOutputStream, debug)},
	{"lenBuf", "[B", nullptr, $PRIVATE, $field(SaslOutputStream, lenBuf)},
	{"rawSendSize", "I", nullptr, $PRIVATE, $field(SaslOutputStream, rawSendSize)},
	{"sc", "Ljavax/security/sasl/SaslClient;", nullptr, $PRIVATE, $field(SaslOutputStream, sc)},
	{}
};

$MethodInfo _SaslOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/sasl/SaslClient;Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(SaslOutputStream::*)($SaslClient*,$OutputStream*)>(&SaslOutputStream::init$)), "javax.security.sasl.SaslException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"intToNetworkByteOrder", "(I[BII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,$bytes*,int32_t,int32_t)>(&SaslOutputStream::intToNetworkByteOrder))},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SaslOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.jndi.ldap.sasl.SaslOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_SaslOutputStream_FieldInfo_,
	_SaslOutputStream_MethodInfo_
};

$Object* allocate$SaslOutputStream($Class* clazz) {
	return $of($alloc(SaslOutputStream));
}

void SaslOutputStream::init$($SaslClient* sc, $OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$FilterOutputStream::init$(out);
	$set(this, lenBuf, $new($bytes, 4));
	this->rawSendSize = 0x00010000;
	$set(this, sc, sc);
	$init($Sasl);
	$var($String, str, $cast($String, $nc(sc)->getNegotiatedProperty($Sasl::RAW_SEND_SIZE)));
	if (str != nullptr) {
		try {
			this->rawSendSize = $Integer::parseInt(str);
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, e, $catch());
			$throwNew($SaslException, $$str({$Sasl::RAW_SEND_SIZE, " property must be numeric string: "_s, str}));
		}
	}
}

void SaslOutputStream::write(int32_t b) {
	$var($bytes, buffer, $new($bytes, 1));
	buffer->set(0, (int8_t)b);
	write(buffer, 0, 1);
}

void SaslOutputStream::write($bytes* buffer, int32_t offset, int32_t total) {
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	$var($bytes, wrappedToken, nullptr);
	$var($bytes, saslBuffer, nullptr);
	for (int32_t i = 0; i < total; i += this->rawSendSize) {
		count = (total - i) < this->rawSendSize ? (total - i) : this->rawSendSize;
		$assign(wrappedToken, $nc(this->sc)->wrap(buffer, offset + i, count));
		intToNetworkByteOrder($nc(wrappedToken)->length, this->lenBuf, 0, 4);
		$nc(this->out)->write(this->lenBuf, 0, 4);
		$nc(this->out)->write(wrappedToken, 0, $nc(wrappedToken)->length);
	}
}

void SaslOutputStream::close() {
	$useLocalCurrentObjectStackCache();
	$var($SaslException, save, nullptr);
	try {
		$nc(this->sc)->dispose();
	} catch ($SaslException&) {
		$var($SaslException, e, $catch());
		$assign(save, e);
	}
	$FilterOutputStream::close();
	if (save != nullptr) {
		$throw(save);
	}
}

void SaslOutputStream::intToNetworkByteOrder(int32_t num, $bytes* buf, int32_t start, int32_t count) {
	$init(SaslOutputStream);
	if (count > 4) {
		$throwNew($IllegalArgumentException, "Cannot handle more than 4 bytes"_s);
	}
	for (int32_t i = count - 1; i >= 0; --i) {
		$nc(buf)->set(start + i, (int8_t)((int32_t)(num & (uint32_t)255)));
		$usrAssign(num, 8);
	}
}

SaslOutputStream::SaslOutputStream() {
}

$Class* SaslOutputStream::load$($String* name, bool initialize) {
	$loadClass(SaslOutputStream, name, initialize, &_SaslOutputStream_ClassInfo_, allocate$SaslOutputStream);
	return class$;
}

$Class* SaslOutputStream::class$ = nullptr;

				} // sasl
			} // ldap
		} // jndi
	} // sun
} // com