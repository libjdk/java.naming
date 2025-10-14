#ifndef _com_sun_jndi_ldap_SimpleClientId_h_
#define _com_sun_jndi_ldap_SimpleClientId_h_
//$ class com.sun.jndi.ldap.SimpleClientId
//$ extends com.sun.jndi.ldap.ClientId

#include <com/sun/jndi/ldap/ClientId.h>
#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
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

class SimpleClientId : public ::com::sun::jndi::ldap::ClientId {
	$class(SimpleClientId, $NO_CLASS_INIT, ::com::sun::jndi::ldap::ClientId)
public:
	SimpleClientId();
	void init$(int32_t version, $String* hostname, int32_t port, $String* protocol, $Array<::javax::naming::ldap::Control>* bindCtls, ::java::io::OutputStream* trace, $String* socketFactory, $String* username, Object$* passwd);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* username = nullptr;
	$Object* passwd = nullptr;
	int32_t myHash = 0;
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_SimpleClientId_h_