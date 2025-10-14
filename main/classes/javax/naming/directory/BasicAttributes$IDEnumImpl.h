#ifndef _javax_naming_directory_BasicAttributes$IDEnumImpl_h_
#define _javax_naming_directory_BasicAttributes$IDEnumImpl_h_
//$ class javax.naming.directory.BasicAttributes$IDEnumImpl
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
			class BasicAttributes;
		}
	}
}

namespace javax {
	namespace naming {
		namespace directory {

class $export BasicAttributes$IDEnumImpl : public ::javax::naming::NamingEnumeration {
	$class(BasicAttributes$IDEnumImpl, $NO_CLASS_INIT, ::javax::naming::NamingEnumeration)
public:
	BasicAttributes$IDEnumImpl();
	void init$(::javax::naming::directory::BasicAttributes* this$0);
	virtual void close() override;
	virtual bool hasMore() override;
	virtual bool hasMoreElements() override;
	virtual $Object* next() override;
	virtual $Object* nextElement() override;
	::javax::naming::directory::BasicAttributes* this$0 = nullptr;
	::java::util::Enumeration* elements = nullptr;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_BasicAttributes$IDEnumImpl_h_