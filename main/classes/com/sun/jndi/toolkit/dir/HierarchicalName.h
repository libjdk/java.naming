#ifndef _com_sun_jndi_toolkit_dir_HierarchicalName_h_
#define _com_sun_jndi_toolkit_dir_HierarchicalName_h_
//$ class com.sun.jndi.toolkit.dir.HierarchicalName
//$ extends javax.naming.CompoundName

#include <javax/naming/CompoundName.h>

namespace java {
	namespace util {
		class Enumeration;
		class Properties;
	}
}
namespace javax {
	namespace naming {
		class Name;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class HierarchicalName : public ::javax::naming::CompoundName {
	$class(HierarchicalName, $NO_CLASS_INIT, ::javax::naming::CompoundName)
public:
	HierarchicalName();
	void init$();
	void init$(::java::util::Enumeration* comps, ::java::util::Properties* syntax);
	void init$($String* n, ::java::util::Properties* syntax);
	virtual $Object* clone() override;
	virtual ::javax::naming::Name* getPrefix(int32_t posn) override;
	virtual ::javax::naming::Name* getSuffix(int32_t posn) override;
	virtual int32_t hashCode() override;
	int32_t hashValue = 0;
	static const int64_t serialVersionUID = (int64_t)0xA2C739BD29F08B10;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_HierarchicalName_h_