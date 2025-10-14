#ifndef _javax_naming_LinkException_h_
#define _javax_naming_LinkException_h_
//$ class javax.naming.LinkException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {
		class Name;
	}
}

namespace javax {
	namespace naming {

class $import LinkException : public ::javax::naming::NamingException {
	$class(LinkException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	LinkException();
	void init$($String* explanation);
	void init$();
	virtual $String* getLinkExplanation();
	virtual ::javax::naming::Name* getLinkRemainingName();
	virtual ::javax::naming::Name* getLinkResolvedName();
	virtual $Object* getLinkResolvedObj();
	virtual void setLinkExplanation($String* msg);
	virtual void setLinkRemainingName(::javax::naming::Name* name);
	virtual void setLinkResolvedName(::javax::naming::Name* name);
	virtual void setLinkResolvedObj(Object$* obj);
	virtual $String* toString() override;
	virtual $String* toString(bool detail) override;
	::javax::naming::Name* linkResolvedName = nullptr;
	$Object* linkResolvedObj = nullptr;
	::javax::naming::Name* linkRemainingName = nullptr;
	$String* linkExplanation = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x916D2D1379D6FF10;
	LinkException(const LinkException& e);
	LinkException wrapper$();
	virtual void throwWrapper$() override;
};

	} // naming
} // javax

#endif // _javax_naming_LinkException_h_