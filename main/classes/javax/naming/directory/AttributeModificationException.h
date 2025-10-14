#ifndef _javax_naming_directory_AttributeModificationException_h_
#define _javax_naming_directory_AttributeModificationException_h_
//$ class javax.naming.directory.AttributeModificationException
//$ extends javax.naming.NamingException

#include <java/lang/Array.h>
#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		namespace directory {
			class ModificationItem;
		}
	}
}

namespace javax {
	namespace naming {
		namespace directory {

class $export AttributeModificationException : public ::javax::naming::NamingException {
	$class(AttributeModificationException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	AttributeModificationException();
	void init$($String* explanation);
	void init$();
	virtual $Array<::javax::naming::directory::ModificationItem>* getUnexecutedModifications();
	virtual void setUnexecutedModifications($Array<::javax::naming::directory::ModificationItem>* e);
	using ::javax::naming::NamingException::toString;
	virtual $String* toString() override;
	$Array<::javax::naming::directory::ModificationItem>* unexecs = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x6FDD462D96B0FDAA;
	AttributeModificationException(const AttributeModificationException& e);
	AttributeModificationException wrapper$();
	virtual void throwWrapper$() override;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_AttributeModificationException_h_