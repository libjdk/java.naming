#ifndef _com_sun_naming_internal_ObjectFactoriesFilter$FactoryInfo_h_
#define _com_sun_naming_internal_ObjectFactoriesFilter$FactoryInfo_h_
//$ interface com.sun.naming.internal.ObjectFactoriesFilter$FactoryInfo
//$ extends java.io.ObjectInputFilter$FilterInfo

#include <java/io/ObjectInputFilter$FilterInfo.h>

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class ObjectFactoriesFilter$FactoryInfo : public ::java::io::ObjectInputFilter$FilterInfo {
	$interface(ObjectFactoriesFilter$FactoryInfo, $NO_CLASS_INIT, ::java::io::ObjectInputFilter$FilterInfo)
public:
	virtual int64_t arrayLength() override;
	virtual int64_t depth() override;
	virtual int64_t references() override;
	virtual int64_t streamBytes() override;
};

			} // internal
		} // naming
	} // sun
} // com

#endif // _com_sun_naming_internal_ObjectFactoriesFilter$FactoryInfo_h_