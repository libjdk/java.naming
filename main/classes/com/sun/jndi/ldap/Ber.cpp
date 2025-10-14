#include <com/sun/jndi/ldap/Ber.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef ASN_APPLICATION
#undef ASN_BIT_STRING
#undef ASN_BOOLEAN
#undef ASN_CONSTRUCTOR
#undef ASN_CONTEXT
#undef ASN_ENUMERATED
#undef ASN_INTEGER
#undef ASN_NULL
#undef ASN_OBJECT_ID
#undef ASN_OCTET_STR
#undef ASN_PRIMITIVE
#undef ASN_PRIVATE
#undef ASN_SEQUENCE
#undef ASN_SET
#undef ASN_SIMPLE_STRING
#undef ASN_UNIVERSAL

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _Ber_FieldInfo_[] = {
	{"buf", "[B", nullptr, $PROTECTED, $field(Ber, buf)},
	{"offset", "I", nullptr, $PROTECTED, $field(Ber, offset)},
	{"bufsize", "I", nullptr, $PROTECTED, $field(Ber, bufsize)},
	{"ASN_BOOLEAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_BOOLEAN)},
	{"ASN_INTEGER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_INTEGER)},
	{"ASN_BIT_STRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_BIT_STRING)},
	{"ASN_SIMPLE_STRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_SIMPLE_STRING)},
	{"ASN_OCTET_STR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_OCTET_STR)},
	{"ASN_NULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_NULL)},
	{"ASN_OBJECT_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_OBJECT_ID)},
	{"ASN_SEQUENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_SEQUENCE)},
	{"ASN_SET", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_SET)},
	{"ASN_PRIMITIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_PRIMITIVE)},
	{"ASN_UNIVERSAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_UNIVERSAL)},
	{"ASN_CONSTRUCTOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_CONSTRUCTOR)},
	{"ASN_APPLICATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_APPLICATION)},
	{"ASN_CONTEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_CONTEXT)},
	{"ASN_PRIVATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_PRIVATE)},
	{"ASN_ENUMERATED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Ber, ASN_ENUMERATED)},
	{}
};

$MethodInfo _Ber_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Ber::*)()>(&Ber::init$))},
	{"dumpBER", "(Ljava/io/OutputStream;Ljava/lang/String;[BII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($OutputStream*,$String*,$bytes*,int32_t,int32_t)>(&Ber::dumpBER))},
	{}
};

$InnerClassInfo _Ber_InnerClassesInfo_[] = {
	{"com.sun.jndi.ldap.Ber$DecodeException", "com.sun.jndi.ldap.Ber", "DecodeException", $STATIC | $FINAL},
	{"com.sun.jndi.ldap.Ber$EncodeException", "com.sun.jndi.ldap.Ber", "EncodeException", $STATIC | $FINAL},
	{}
};

$ClassInfo _Ber_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.jndi.ldap.Ber",
	"java.lang.Object",
	nullptr,
	_Ber_FieldInfo_,
	_Ber_MethodInfo_,
	nullptr,
	nullptr,
	_Ber_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.ldap.Ber$DecodeException,com.sun.jndi.ldap.Ber$EncodeException"
};

$Object* allocate$Ber($Class* clazz) {
	return $of($alloc(Ber));
}

void Ber::init$() {
}

void Ber::dumpBER($OutputStream* outStream, $String* tag, $bytes* bytes, int32_t from, int32_t to) {
	try {
		$nc(outStream)->write((int32_t)u'\n');
		outStream->write($($nc(tag)->getBytes("UTF8"_s)));
		$$new($HexDumpEncoder)->encodeBuffer(static_cast<$InputStream*>($$new($ByteArrayInputStream, bytes, from, to)), outStream);
		outStream->write((int32_t)u'\n');
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		try {
			$nc(outStream)->write($("Ber.dumpBER(): error encountered\n"_s->getBytes("UTF8"_s)));
		} catch ($IOException&) {
			$catch();
		}
	}
}

Ber::Ber() {
}

$Class* Ber::load$($String* name, bool initialize) {
	$loadClass(Ber, name, initialize, &_Ber_ClassInfo_, allocate$Ber);
	return class$;
}

$Class* Ber::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com