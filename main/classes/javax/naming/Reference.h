#ifndef _javax_naming_Reference_h_
#define _javax_naming_Reference_h_
//$ class javax.naming.Reference
//$ extends java.lang.Cloneable
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>

namespace java {
	namespace util {
		class Enumeration;
		class Vector;
	}
}
namespace javax {
	namespace naming {
		class RefAddr;
	}
}

namespace javax {
	namespace naming {

class $export Reference : public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(Reference, $NO_CLASS_INIT, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	Reference();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual void finalize() override;
	void init$($String* className);
	void init$($String* className, ::javax::naming::RefAddr* addr);
	void init$($String* className, $String* factory, $String* factoryLocation);
	void init$($String* className, ::javax::naming::RefAddr* addr, $String* factory, $String* factoryLocation);
	virtual void add(::javax::naming::RefAddr* addr);
	virtual void add(int32_t posn, ::javax::naming::RefAddr* addr);
	virtual void clear();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual ::javax::naming::RefAddr* get($String* addrType);
	virtual ::javax::naming::RefAddr* get(int32_t posn);
	virtual ::java::util::Enumeration* getAll();
	virtual $String* getClassName();
	virtual $String* getFactoryClassLocation();
	virtual $String* getFactoryClassName();
	virtual int32_t hashCode() override;
	virtual $Object* remove(int32_t posn);
	virtual int32_t size();
	virtual $String* toString() override;
	$String* className = nullptr;
	::java::util::Vector* addrs = nullptr;
	$String* classFactory = nullptr;
	$String* classFactoryLocation = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xE8C69EA2A8E98D09;
};

	} // naming
} // javax

#endif // _javax_naming_Reference_h_