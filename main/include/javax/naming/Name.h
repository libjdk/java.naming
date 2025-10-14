#ifndef _javax_naming_Name_h_
#define _javax_naming_Name_h_
//$ interface javax.naming.Name
//$ extends java.lang.Cloneable,java.io.Serializable,java.lang.Comparable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>
#include <java/lang/Comparable.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace javax {
	namespace naming {

class $import Name : public ::java::lang::Cloneable, public ::java::io::Serializable, public ::java::lang::Comparable {
	$interface(Name, $NO_CLASS_INIT, ::java::lang::Cloneable, ::java::io::Serializable, ::java::lang::Comparable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual ::javax::naming::Name* add($String* comp) {return nullptr;}
	virtual ::javax::naming::Name* add(int32_t posn, $String* comp) {return nullptr;}
	virtual ::javax::naming::Name* addAll(::javax::naming::Name* suffix) {return nullptr;}
	virtual ::javax::naming::Name* addAll(int32_t posn, ::javax::naming::Name* n) {return nullptr;}
	virtual $Object* clone() override;
	virtual int32_t compareTo(Object$* obj) override {return 0;}
	virtual bool endsWith(::javax::naming::Name* n) {return false;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* get(int32_t posn) {return nullptr;}
	virtual ::java::util::Enumeration* getAll() {return nullptr;}
	virtual ::javax::naming::Name* getPrefix(int32_t posn) {return nullptr;}
	virtual ::javax::naming::Name* getSuffix(int32_t posn) {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isEmpty() {return false;}
	virtual $Object* remove(int32_t posn) {return nullptr;}
	virtual int32_t size() {return 0;}
	virtual bool startsWith(::javax::naming::Name* n) {return false;}
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xCDCC1E9F16A312CD;
};

	} // naming
} // javax

#endif // _javax_naming_Name_h_