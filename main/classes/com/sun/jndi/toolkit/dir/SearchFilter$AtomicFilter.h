#ifndef _com_sun_jndi_toolkit_dir_SearchFilter$AtomicFilter_h_
#define _com_sun_jndi_toolkit_dir_SearchFilter$AtomicFilter_h_
//$ class com.sun.jndi.toolkit.dir.SearchFilter$AtomicFilter
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

class SearchFilter$AtomicFilter : public ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter {
	$class(SearchFilter$AtomicFilter, $NO_CLASS_INIT, ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter)
public:
	SearchFilter$AtomicFilter();
	void init$(::com::sun::jndi::toolkit::dir::SearchFilter* this$0);
	virtual bool check(::javax::naming::directory::Attributes* targetAttrs) override;
	virtual void parse() override;
	bool substringMatch($String* proto, $String* value);
	::com::sun::jndi::toolkit::dir::SearchFilter* this$0 = nullptr;
	$String* attrID = nullptr;
	$String* value = nullptr;
	int32_t matchType = 0;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_SearchFilter$AtomicFilter_h_