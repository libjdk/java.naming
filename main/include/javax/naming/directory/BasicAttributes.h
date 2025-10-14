#ifndef _javax_naming_directory_BasicAttributes_h_
#define _javax_naming_directory_BasicAttributes_h_
//$ class javax.naming.directory.BasicAttributes
//$ extends javax.naming.directory.Attributes

#include <javax/naming/directory/Attributes.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
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

class $import BasicAttributes : public ::javax::naming::directory::Attributes {
	$class(BasicAttributes, $NO_CLASS_INIT, ::javax::naming::directory::Attributes)
public:
	BasicAttributes();
	void init$();
	void init$(bool ignoreCase);
	void init$($String* attrID, Object$* val);
	void init$($String* attrID, Object$* val, bool ignoreCase);
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual ::javax::naming::directory::Attribute* get($String* attrID) override;
	virtual ::javax::naming::NamingEnumeration* getAll() override;
	virtual ::javax::naming::NamingEnumeration* getIDs() override;
	virtual int32_t hashCode() override;
	virtual bool isCaseIgnored() override;
	virtual ::javax::naming::directory::Attribute* put($String* attrID, Object$* val) override;
	virtual ::javax::naming::directory::Attribute* put(::javax::naming::directory::Attribute* attr) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual ::javax::naming::directory::Attribute* remove($String* attrID) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	bool ignoreCase = false;
	::java::util::Hashtable* attrs = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x451D18D6A95539D8;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_BasicAttributes_h_