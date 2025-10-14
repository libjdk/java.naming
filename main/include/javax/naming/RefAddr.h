#ifndef _javax_naming_RefAddr_h_
#define _javax_naming_RefAddr_h_
//$ class javax.naming.RefAddr
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace naming {

class $import RefAddr : public ::java::io::Serializable {
	$class(RefAddr, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	RefAddr();
	void init$($String* addrType);
	virtual bool equals(Object$* obj) override;
	virtual $Object* getContent() {return nullptr;}
	virtual $String* getType();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$String* addrType = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xEBA0079A0238AF4A;
};

	} // naming
} // javax

#endif // _javax_naming_RefAddr_h_