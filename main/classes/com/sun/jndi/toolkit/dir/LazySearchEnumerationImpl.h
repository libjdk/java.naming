#ifndef _com_sun_jndi_toolkit_dir_LazySearchEnumerationImpl_h_
#define _com_sun_jndi_toolkit_dir_LazySearchEnumerationImpl_h_
//$ class com.sun.jndi.toolkit.dir.LazySearchEnumerationImpl
//$ extends javax.naming.NamingEnumeration

#include <javax/naming/NamingEnumeration.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {
					class AttrFilter;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace naming {
		class Context;
	}
}
namespace javax {
	namespace naming {
		namespace directory {
			class SearchControls;
			class SearchResult;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class LazySearchEnumerationImpl : public ::javax::naming::NamingEnumeration {
	$class(LazySearchEnumerationImpl, $NO_CLASS_INIT, ::javax::naming::NamingEnumeration)
public:
	LazySearchEnumerationImpl();
	void init$(::javax::naming::NamingEnumeration* candidates, ::com::sun::jndi::toolkit::dir::AttrFilter* filter, ::javax::naming::directory::SearchControls* cons);
	void init$(::javax::naming::NamingEnumeration* candidates, ::com::sun::jndi::toolkit::dir::AttrFilter* filter, ::javax::naming::directory::SearchControls* cons, ::javax::naming::Context* ctx, ::java::util::Hashtable* env, bool useFactory);
	void init$(::javax::naming::NamingEnumeration* candidates, ::com::sun::jndi::toolkit::dir::AttrFilter* filter, ::javax::naming::directory::SearchControls* cons, ::javax::naming::Context* ctx, ::java::util::Hashtable* env);
	virtual void close() override;
	::javax::naming::directory::SearchResult* findNextMatch(bool remove);
	virtual bool hasMore() override;
	virtual bool hasMoreElements() override;
	virtual $Object* next() override;
	virtual $Object* nextElement() override;
	::javax::naming::NamingEnumeration* candidates = nullptr;
	::javax::naming::directory::SearchResult* nextMatch = nullptr;
	::javax::naming::directory::SearchControls* cons = nullptr;
	::com::sun::jndi::toolkit::dir::AttrFilter* filter = nullptr;
	::javax::naming::Context* context = nullptr;
	::java::util::Hashtable* env = nullptr;
	bool useFactory = false;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_LazySearchEnumerationImpl_h_