#ifndef _javax_naming_directory_Attribute_h_
#define _javax_naming_directory_Attribute_h_
//$ interface javax.naming.directory.Attribute
//$ extends java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Cloneable.h>

namespace javax {
	namespace naming {
		class NamingEnumeration;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class DirContext;
		}
	}
}

namespace javax {
	namespace naming {
		namespace directory {

class $export Attribute : public ::java::lang::Cloneable, public ::java::io::Serializable {
	$interface(Attribute, $NO_CLASS_INIT, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool add(Object$* attrVal) {return false;}
	virtual void add(int32_t ix, Object$* attrVal) {}
	virtual void clear() {}
	virtual $Object* clone() override;
	virtual bool contains(Object$* attrVal) {return false;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $Object* get() {return nullptr;}
	virtual $Object* get(int32_t ix) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* getAll() {return nullptr;}
	virtual ::javax::naming::directory::DirContext* getAttributeDefinition() {return nullptr;}
	virtual ::javax::naming::directory::DirContext* getAttributeSyntaxDefinition() {return nullptr;}
	virtual $String* getID() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isOrdered() {return false;}
	virtual bool remove(Object$* attrval) {return false;}
	virtual $Object* remove(int32_t ix) {return nullptr;}
	virtual $Object* set(int32_t ix, Object$* attrVal) {return nullptr;}
	virtual int32_t size() {return 0;}
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x78D7EE3675A55244;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_Attribute_h_