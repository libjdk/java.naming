#ifndef _com_sun_jndi_ldap_SearchResultWithControls_h_
#define _com_sun_jndi_ldap_SearchResultWithControls_h_
//$ class com.sun.jndi.ldap.SearchResultWithControls
//$ extends javax.naming.directory.SearchResult
//$ implements javax.naming.ldap.HasControls

#include <java/lang/Array.h>
#include <javax/naming/directory/SearchResult.h>
#include <javax/naming/ldap/HasControls.h>

namespace javax {
	namespace naming {
		namespace directory {
			class Attributes;
		}
	}
}
namespace javax {
	namespace naming {
		namespace ldap {
			class Control;
		}
	}
}

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class SearchResultWithControls : public ::javax::naming::directory::SearchResult, public ::javax::naming::ldap::HasControls {
	$class(SearchResultWithControls, $NO_CLASS_INIT, ::javax::naming::directory::SearchResult, ::javax::naming::ldap::HasControls)
public:
	SearchResultWithControls();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* name, Object$* obj, ::javax::naming::directory::Attributes* attrs, bool isRelative, $Array<::javax::naming::ldap::Control>* controls);
	virtual $Array<::javax::naming::ldap::Control>* getControls() override;
	virtual $String* toString() override;
	$Array<::javax::naming::ldap::Control>* controls = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x75A44BFAB3C2C06A;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_SearchResultWithControls_h_