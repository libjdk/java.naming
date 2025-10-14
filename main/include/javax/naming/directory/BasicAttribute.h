#ifndef _javax_naming_directory_BasicAttribute_h_
#define _javax_naming_directory_BasicAttribute_h_
//$ class javax.naming.directory.BasicAttribute
//$ extends javax.naming.directory.Attribute

#include <javax/naming/directory/Attribute.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Vector;
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
			class DirContext;
		}
	}
}

namespace javax {
	namespace naming {
		namespace directory {

class $import BasicAttribute : public ::javax::naming::directory::Attribute {
	$class(BasicAttribute, $NO_CLASS_INIT, ::javax::naming::directory::Attribute)
public:
	BasicAttribute();
	void init$($String* id);
	void init$($String* id, Object$* value);
	void init$($String* id, bool ordered);
	void init$($String* id, Object$* value, bool ordered);
	virtual bool add(Object$* attrVal) override;
	virtual void add(int32_t ix, Object$* attrVal) override;
	static bool arrayEquals(Object$* a1, Object$* a2);
	virtual void clear() override;
	virtual $Object* clone() override;
	virtual bool contains(Object$* attrVal) override;
	virtual bool equals(Object$* obj) override;
	int32_t find(Object$* target);
	virtual $Object* get() override;
	virtual $Object* get(int32_t ix) override;
	virtual ::javax::naming::NamingEnumeration* getAll() override;
	virtual ::javax::naming::directory::DirContext* getAttributeDefinition() override;
	virtual ::javax::naming::directory::DirContext* getAttributeSyntaxDefinition() override;
	virtual $String* getID() override;
	virtual int32_t hashCode() override;
	virtual bool isOrdered() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual bool remove(Object$* attrval) override;
	virtual $Object* remove(int32_t ix) override;
	virtual $Object* set(int32_t ix, Object$* attrVal) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	static bool valueEquals(Object$* obj1, Object$* obj2);
	void writeObject(::java::io::ObjectOutputStream* s);
	$String* attrID = nullptr;
	::java::util::Vector* values = nullptr;
	bool ordered = false;
	static const int64_t serialVersionUID = (int64_t)0x5D95D32A668565BE;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_BasicAttribute_h_