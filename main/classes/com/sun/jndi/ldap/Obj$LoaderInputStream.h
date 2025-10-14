#ifndef _com_sun_jndi_ldap_Obj$LoaderInputStream_h_
#define _com_sun_jndi_ldap_Obj$LoaderInputStream_h_
//$ class com.sun.jndi.ldap.Obj$LoaderInputStream
//$ extends java.io.ObjectInputStream

#include <java/io/ObjectInputStream.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
		class ObjectStreamClass;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class Obj$LoaderInputStream : public ::java::io::ObjectInputStream {
	$class(Obj$LoaderInputStream, $NO_CLASS_INIT, ::java::io::ObjectInputStream)
public:
	Obj$LoaderInputStream();
	void init$(::java::io::InputStream* in, ::java::lang::ClassLoader* cl);
	using ::java::io::ObjectInputStream::read;
	virtual $Class* resolveClass(::java::io::ObjectStreamClass* desc) override;
	virtual $Class* resolveProxyClass($StringArray* interfaces) override;
	::java::lang::ClassLoader* classLoader = nullptr;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_Obj$LoaderInputStream_h_