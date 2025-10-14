#ifndef _javax_naming_spi_ResolveResult_h_
#define _javax_naming_spi_ResolveResult_h_
//$ class javax.naming.spi.ResolveResult
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace javax {
	namespace naming {
		class Name;
	}
}

namespace javax {
	namespace naming {
		namespace spi {

class $export ResolveResult : public ::java::io::Serializable {
	$class(ResolveResult, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	ResolveResult();
	void init$();
	void init$(Object$* robj, $String* rcomp);
	void init$(Object$* robj, ::javax::naming::Name* rname);
	virtual void appendRemainingComponent($String* name);
	virtual void appendRemainingName(::javax::naming::Name* name);
	virtual ::javax::naming::Name* getRemainingName();
	virtual $Object* getResolvedObj();
	virtual void setRemainingName(::javax::naming::Name* name);
	virtual void setResolvedObj(Object$* obj);
	$Object* resolvedObj = nullptr;
	::javax::naming::Name* remainingName = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xC0D3A9D39D1BB379;
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_ResolveResult_h_