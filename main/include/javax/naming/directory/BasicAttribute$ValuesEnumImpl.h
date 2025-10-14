#ifndef _javax_naming_directory_BasicAttribute$ValuesEnumImpl_h_
#define _javax_naming_directory_BasicAttribute$ValuesEnumImpl_h_
//$ class javax.naming.directory.BasicAttribute$ValuesEnumImpl
//$ extends javax.naming.NamingEnumeration

#include <javax/naming/NamingEnumeration.h>

namespace java {
	namespace util {
		class Enumeration;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class BasicAttribute;
		}
	}
}

namespace javax {
	namespace naming {
		namespace directory {

class $import BasicAttribute$ValuesEnumImpl : public ::javax::naming::NamingEnumeration {
	$class(BasicAttribute$ValuesEnumImpl, $NO_CLASS_INIT, ::javax::naming::NamingEnumeration)
public:
	BasicAttribute$ValuesEnumImpl();
	void init$(::javax::naming::directory::BasicAttribute* this$0);
	virtual void close() override;
	virtual bool hasMore() override;
	virtual bool hasMoreElements() override;
	virtual $Object* next() override;
	virtual $Object* nextElement() override;
	::javax::naming::directory::BasicAttribute* this$0 = nullptr;
	::java::util::Enumeration* list = nullptr;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_BasicAttribute$ValuesEnumImpl_h_