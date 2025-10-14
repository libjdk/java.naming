#ifndef _com_sun_jndi_toolkit_dir_SearchFilter$CompoundFilter_h_
#define _com_sun_jndi_toolkit_dir_SearchFilter$CompoundFilter_h_
//$ class com.sun.jndi.toolkit.dir.SearchFilter$CompoundFilter
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
namespace java {
	namespace util {
		class Vector;
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

class SearchFilter$CompoundFilter : public ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter {
	$class(SearchFilter$CompoundFilter, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter)
public:
	SearchFilter$CompoundFilter();
	void init$(::com::sun::jndi::toolkit::dir::SearchFilter* this$0, bool polarity);
	virtual bool check(::javax::naming::directory::Attributes* targetAttrs) override;
	virtual void parse() override;
	::com::sun::jndi::toolkit::dir::SearchFilter* this$0 = nullptr;
	::java::util::Vector* subFilters = nullptr;
	bool polarity = false;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_SearchFilter$CompoundFilter_h_