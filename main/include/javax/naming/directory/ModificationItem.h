#ifndef _javax_naming_directory_ModificationItem_h_
#define _javax_naming_directory_ModificationItem_h_
//$ class javax.naming.directory.ModificationItem
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

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

class $import ModificationItem : public ::java::io::Serializable {
	$class(ModificationItem, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	ModificationItem();
	void init$(int32_t mod_op, ::javax::naming::directory::Attribute* attr);
	virtual ::javax::naming::directory::Attribute* getAttribute();
	virtual int32_t getModificationOp();
	virtual $String* toString() override;
	int32_t mod_op = 0;
	::javax::naming::directory::Attribute* attr = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x69199E89AC11AAE2;
};

		} // directory
	} // naming
} // javax

#endif // _javax_naming_directory_ModificationItem_h_