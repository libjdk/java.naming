#ifndef _javax_naming_CompositeName_h_
#define _javax_naming_CompositeName_h_
//$ class javax.naming.CompositeName
//$ extends javax.naming.Name

#include <javax/naming/Name.h>

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace javax {
	namespace naming {
		class NameImpl;
	}
}

namespace javax {
	namespace naming {

class $import CompositeName : public ::javax::naming::Name {
	$class(CompositeName, $NO_CLASS_INIT, ::javax::naming::Name)
public:
	CompositeName();
	void init$(::java::util::Enumeration* comps);
	void init$($String* n);
	void init$();
	virtual ::javax::naming::Name* add($String* comp) override;
	virtual ::javax::naming::Name* add(int32_t posn, $String* comp) override;
	virtual ::javax::naming::Name* addAll(::javax::naming::Name* suffix) override;
	virtual ::javax::naming::Name* addAll(int32_t posn, ::javax::naming::Name* n) override;
	virtual $Object* clone() override;
	virtual int32_t compareTo(Object$* obj) override;
	virtual bool endsWith(::javax::naming::Name* n) override;
	virtual bool equals(Object$* obj) override;
	virtual $String* get(int32_t posn) override;
	virtual ::java::util::Enumeration* getAll() override;
	virtual ::javax::naming::Name* getPrefix(int32_t posn) override;
	virtual ::javax::naming::Name* getSuffix(int32_t posn) override;
	virtual int32_t hashCode() override;
	virtual bool isEmpty() override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual $Object* remove(int32_t posn) override;
	virtual int32_t size() override;
	virtual bool startsWith(::javax::naming::Name* n) override;
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::javax::naming::NameImpl* impl = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x17251A4B93D67AFE;
};

	} // naming
} // javax

#endif // _javax_naming_CompositeName_h_