#ifndef _javax_naming_directory_Attributes_h_
#define _javax_naming_directory_Attributes_h_
//$ interface javax.naming.directory.Attributes
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
			class Attribute;
		}
	}
}

namespace javax {
	namespace naming {
		namespace directory {

class $export Attributes : public ::java::lang::Cloneable, public ::java::io::Serializable {
	$interface(Attributes, $NO_CLASS_INIT, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::javax::naming::directory::Attribute* get($String* attrID) {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* getAll() {return nullptr;}
	virtual ::javax::naming::NamingEnumeration* getIDs() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isCaseIgnored() {return false;}
	virtual ::javax::naming::directory::Attribute* put($String* attrID, Object$* val) {return nullptr;}
	virtual ::javax::naming::directory::Attribute* put(::javax::naming::directory::Attribute* attr) {return nullptr;}
	virtual ::javax::naming::directory::Attribute* remove($String* attrID) {return nullptr;}
	virtual int32_t size() {return 0;}
	virtual $String* toString() override;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_Attributes_h_