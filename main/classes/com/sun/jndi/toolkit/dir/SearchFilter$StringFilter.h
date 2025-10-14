#ifndef _com_sun_jndi_toolkit_dir_SearchFilter$StringFilter_h_
#define _com_sun_jndi_toolkit_dir_SearchFilter$StringFilter_h_
//$ interface com.sun.jndi.toolkit.dir.SearchFilter$StringFilter
//$ extends com.sun.jndi.toolkit.dir.AttrFilter

#include <com/sun/jndi/toolkit/dir/AttrFilter.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class SearchFilter$StringFilter : public ::com::sun::jndi::toolkit::dir::AttrFilter {
	$interface(SearchFilter$StringFilter, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::dir::AttrFilter)
public:
	virtual void parse() {}
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_SearchFilter$StringFilter_h_