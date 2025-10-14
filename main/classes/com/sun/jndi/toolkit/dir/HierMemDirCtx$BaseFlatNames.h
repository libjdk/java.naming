#ifndef _com_sun_jndi_toolkit_dir_HierMemDirCtx$BaseFlatNames_h_
#define _com_sun_jndi_toolkit_dir_HierMemDirCtx$BaseFlatNames_h_
//$ class com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames
//$ extends javax.naming.NamingEnumeration

#include <javax/naming/NamingEnumeration.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {
					class HierMemDirCtx;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Enumeration;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class HierMemDirCtx$BaseFlatNames : public ::javax::naming::NamingEnumeration {
	$class(HierMemDirCtx$BaseFlatNames, $NO_CLASS_INIT, ::javax::naming::NamingEnumeration)
public:
	HierMemDirCtx$BaseFlatNames();
	void init$(::com::sun::jndi::toolkit::dir::HierMemDirCtx* this$0, ::java::util::Enumeration* names);
	virtual void close() override;
	virtual bool hasMore() override;
	virtual bool hasMoreElements() override;
	virtual $Object* next() override {return nullptr;}
	virtual $Object* nextElement() override;
	::com::sun::jndi::toolkit::dir::HierMemDirCtx* this$0 = nullptr;
	::java::util::Enumeration* names = nullptr;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_HierMemDirCtx$BaseFlatNames_h_