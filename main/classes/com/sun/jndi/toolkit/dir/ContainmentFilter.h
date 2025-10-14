#ifndef _com_sun_jndi_toolkit_dir_ContainmentFilter_h_
#define _com_sun_jndi_toolkit_dir_ContainmentFilter_h_
//$ class com.sun.jndi.toolkit.dir.ContainmentFilter
//$ extends com.sun.jndi.toolkit.dir.AttrFilter

#include <com/sun/jndi/toolkit/dir/AttrFilter.h>

namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class ContainmentFilter : public ::com::sun::jndi::toolkit::dir::AttrFilter {
	$class(ContainmentFilter, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::dir::AttrFilter)
public:
	ContainmentFilter();
	void init$(::javax::naming::directory::Attributes* match);
	virtual bool check(::javax::naming::directory::Attributes* attrs) override;
	static bool contains(::javax::naming::directory::Attributes* superset, ::javax::naming::directory::Attributes* subset);
	::javax::naming::directory::Attributes* matchingAttrs = nullptr;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_ContainmentFilter_h_