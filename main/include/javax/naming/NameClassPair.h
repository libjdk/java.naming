#ifndef _javax_naming_NameClassPair_h_
#define _javax_naming_NameClassPair_h_
//$ class javax.naming.NameClassPair
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace naming {

class $import NameClassPair : public ::java::io::Serializable {
	$class(NameClassPair, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	NameClassPair();
	void init$($String* name, $String* className);
	void init$($String* name, $String* className, bool isRelative);
	virtual $String* getClassName();
	virtual $String* getName();
	virtual $String* getNameInNamespace();
	virtual bool isRelative();
	virtual void setClassName($String* name);
	virtual void setName($String* name);
	virtual void setNameInNamespace($String* fullName);
	virtual void setRelative(bool r);
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* className = nullptr;
	$String* fullName = nullptr;
	bool isRel = false;
	static const int64_t serialVersionUID = (int64_t)0x4E01028BFA76686B;
};

	} // naming
} // javax

#endif // _javax_naming_NameClassPair_h_