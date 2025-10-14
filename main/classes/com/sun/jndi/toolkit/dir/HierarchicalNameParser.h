#ifndef _com_sun_jndi_toolkit_dir_HierarchicalNameParser_h_
#define _com_sun_jndi_toolkit_dir_HierarchicalNameParser_h_
//$ class com.sun.jndi.toolkit.dir.HierarchicalNameParser
//$ extends javax.naming.NameParser

#include <javax/naming/NameParser.h>

namespace java {
	namespace util {
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

class HierarchicalNameParser : public ::javax::naming::NameParser {
	$class(HierarchicalNameParser, 0, ::javax::naming::NameParser)
public:
	HierarchicalNameParser();
	void init$();
	virtual ::javax::naming::Name* parse($String* name) override;
	static ::java::util::Properties* mySyntax;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_HierarchicalNameParser_h_