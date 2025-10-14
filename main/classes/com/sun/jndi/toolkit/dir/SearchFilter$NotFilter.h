#ifndef _com_sun_jndi_toolkit_dir_SearchFilter$NotFilter_h_
#define _com_sun_jndi_toolkit_dir_SearchFilter$NotFilter_h_
//$ class com.sun.jndi.toolkit.dir.SearchFilter$NotFilter
//$ extends com.sun.jndi.toolkit.dir.SearchFilter$StringFilter

#include <com/sun/jndi/toolkit/dir/SearchFilter$StringFilter.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {
					class SearchFilter;
				}
			}
		}
	}
}
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

class SearchFilter$NotFilter : public ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter {
	$class(SearchFilter$NotFilter, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter)
public:
	SearchFilter$NotFilter();
	void init$(::com::sun::jndi::toolkit::dir::SearchFilter* this$0);
	virtual bool check(::javax::naming::directory::Attributes* targetAttrs) override;
	virtual void parse() override;
	::com::sun::jndi::toolkit::dir::SearchFilter* this$0 = nullptr;
	::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter* filter = nullptr;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_SearchFilter$NotFilter_h_