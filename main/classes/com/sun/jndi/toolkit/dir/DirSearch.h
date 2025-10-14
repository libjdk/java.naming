#ifndef _com_sun_jndi_toolkit_dir_DirSearch_h_
#define _com_sun_jndi_toolkit_dir_DirSearch_h_
//$ class com.sun.jndi.toolkit.dir.DirSearch
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace naming {
		class NamingEnumeration;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
			class DirContext;
			class SearchControls;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class DirSearch : public ::java::lang::Object {
	$class(DirSearch, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DirSearch();
	void init$();
	static ::javax::naming::NamingEnumeration* search(::javax::naming::directory::DirContext* ctx, ::javax::naming::directory::Attributes* matchingAttributes, $StringArray* attributesToReturn);
	static ::javax::naming::NamingEnumeration* search(::javax::naming::directory::DirContext* ctx, $String* filter, ::javax::naming::directory::SearchControls* cons);
	static ::javax::naming::NamingEnumeration* search(::javax::naming::directory::DirContext* ctx, $String* filterExpr, $ObjectArray* filterArgs, ::javax::naming::directory::SearchControls* cons);
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_DirSearch_h_