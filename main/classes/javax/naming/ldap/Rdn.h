#ifndef _javax_naming_ldap_Rdn_h_
#define _javax_naming_ldap_Rdn_h_
//$ class javax.naming.ldap.Rdn
//$ extends java.io.Serializable
//$ implements java.lang.Comparable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Comparable.h>

#pragma push_macro("DEFAULT_SIZE")
#undef DEFAULT_SIZE

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
		}
	}
}

namespace javax {
	namespace naming {
		namespace ldap {

class $export Rdn : public ::java::io::Serializable, public ::java::lang::Comparable {
	$class(Rdn, 0, ::java::io::Serializable, ::java::lang::Comparable)
public:
	Rdn();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::javax::naming::directory::Attributes* attrSet);
	void init$($String* rdnString);
	void init$(::javax::naming::ldap::Rdn* rdn);
	void init$($String* type, Object$* value);
	void init$();
	virtual int32_t compareTo(Object$* obj) override;
	static $bytes* decodeHexPairs($chars* chars, int32_t beg, int32_t end);
	virtual bool equals(Object$* obj) override;
	static $String* escapeBinaryValue($bytes* val);
	static $String* escapeStringValue($String* val);
	static $String* escapeValue(Object$* val);
	virtual $String* getType();
	static $bytes* getUtf8Octets($chars* chars, int32_t beg, int32_t end);
	virtual $Object* getValue();
	virtual int32_t hashCode() override;
	bool isEmptyValue(Object$* val);
	static bool isWhitespace(char16_t c);
	virtual ::javax::naming::ldap::Rdn* put($String* type, Object$* value);
	void readObject(::java::io::ObjectInputStream* s);
	virtual int32_t size();
	virtual void sort();
	virtual ::javax::naming::directory::Attributes* toAttributes();
	virtual $String* toString() override;
	static $Object* unescapeValue($String* val);
	void writeObject(::java::io::ObjectOutputStream* s);
	::java::util::ArrayList* entries = nullptr;
	static const int32_t DEFAULT_SIZE = 1;
	static const int64_t serialVersionUID = (int64_t)0xACCF61C80A7593C8;
	static $String* escapees;
};

		} // ldap
	} // naming
} // javax

#pragma pop_macro("DEFAULT_SIZE")

#endif // _javax_naming_ldap_Rdn_h_