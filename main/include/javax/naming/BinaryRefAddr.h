#ifndef _javax_naming_BinaryRefAddr_h_
#define _javax_naming_BinaryRefAddr_h_
//$ class javax.naming.BinaryRefAddr
//$ extends javax.naming.RefAddr

#include <java/lang/Array.h>
#include <javax/naming/RefAddr.h>

namespace javax {
	namespace naming {

class $import BinaryRefAddr : public ::javax::naming::RefAddr {
	$class(BinaryRefAddr, $NO_CLASS_INIT, ::javax::naming::RefAddr)
public:
	BinaryRefAddr();
	void init$($String* addrType, $bytes* src);
	void init$($String* addrType, $bytes* src, int32_t offset, int32_t count);
	virtual bool equals(Object$* obj) override;
	virtual $Object* getContent() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	$bytes* buf = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xD09A93B2DEB38847;
};

	} // naming
} // javax

#endif // _javax_naming_BinaryRefAddr_h_