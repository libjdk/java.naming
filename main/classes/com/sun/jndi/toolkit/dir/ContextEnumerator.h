#ifndef _com_sun_jndi_toolkit_dir_ContextEnumerator_h_
#define _com_sun_jndi_toolkit_dir_ContextEnumerator_h_
//$ class com.sun.jndi.toolkit.dir.ContextEnumerator
//$ extends javax.naming.NamingEnumeration

#include <javax/naming/NamingEnumeration.h>

namespace javax {
	namespace naming {
		class Binding;
		class Context;
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

class ContextEnumerator : public ::javax::naming::NamingEnumeration {
	$class(ContextEnumerator, 0, ::javax::naming::NamingEnumeration)
public:
	ContextEnumerator();
	void init$(::javax::naming::Context* context);
	void init$(::javax::naming::Context* context, int32_t scope);
	void init$(::javax::naming::Context* context, int32_t scope, $String* contextName, bool returnSelf);
	virtual void close() override;
	virtual ::javax::naming::NamingEnumeration* getImmediateChildren(::javax::naming::Context* ctx);
	::javax::naming::Binding* getNextChild();
	::javax::naming::Binding* getNextDescendant();
	virtual bool hasMore() override;
	bool hasMoreChildren();
	bool hasMoreDescendants();
	virtual bool hasMoreElements() override;
	virtual ::com::sun::jndi::toolkit::dir::ContextEnumerator* newEnumerator(::javax::naming::Context* ctx, int32_t scope, $String* contextName, bool returnSelf);
	virtual $Object* next() override;
	virtual $Object* nextElement() override;
	void prepNextChild();
	static bool debug;
	::javax::naming::NamingEnumeration* children = nullptr;
	::javax::naming::Binding* currentChild = nullptr;
	bool currentReturned = false;
	::javax::naming::Context* root = nullptr;
	::com::sun::jndi::toolkit::dir::ContextEnumerator* currentChildEnum = nullptr;
	bool currentChildExpanded = false;
	bool rootProcessed = false;
	int32_t scope = 0;
	$String* contextName = nullptr;
};

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_toolkit_dir_ContextEnumerator_h_