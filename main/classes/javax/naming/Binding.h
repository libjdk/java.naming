#ifndef _javax_naming_Binding_h_
#define _javax_naming_Binding_h_
//$ class javax.naming.Binding
//$ extends javax.naming.NameClassPair

#include <javax/naming/NameClassPair.h>

namespace javax {
	namespace naming {

class $export Binding : public ::javax::naming::NameClassPair {
	$class(Binding, $NO_CLASS_INIT, ::javax::naming::NameClassPair)
public:
	Binding();
	void init$($String* name, Object$* obj);
	void init$($String* name, Object$* obj, bool isRelative);
	void init$($String* name, $String* className, Object$* obj);
	void init$($String* name, $String* className, Object$* obj, bool isRelative);
	virtual $String* getClassName() override;
	virtual $Object* getObject();
	virtual void setObject(Object$* obj);
	virtual $String* toString() override;
	$Object* boundObj = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x7AAB35CBB5F12F02;
};

	} // naming
} // javax

#endif // _javax_naming_Binding_h_