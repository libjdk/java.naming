#ifndef _com_sun_jndi_toolkit_dir_HierarchicalName$1_h_
#define _com_sun_jndi_toolkit_dir_HierarchicalName$1_h_
//$ class com.sun.jndi.toolkit.dir.HierarchicalName$1
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class HierarchicalName$1 : public ::java::util::Enumeration {
	$class(HierarchicalName$1, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	HierarchicalName$1();
	void init$();
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_HierarchicalName$1_h_