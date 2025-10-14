#ifndef _javax_naming_spi_NamingManager$FactoryInitializationError_h_
#define _javax_naming_spi_NamingManager$FactoryInitializationError_h_
//$ class javax.naming.spi.NamingManager$FactoryInitializationError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace javax {
	namespace naming {
		class NoInitialContextException;
	}
}

namespace javax {
	namespace naming {
		namespace spi {

class NamingManager$FactoryInitializationError : public ::java::lang::Error {
	$class(NamingManager$FactoryInitializationError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	NamingManager$FactoryInitializationError();
	void init$(::javax::naming::NoInitialContextException* cause);
	virtual $Throwable* getCause() override;
	static const int64_t serialVersionUID = (int64_t)0xAF6E88FB458EB4A8;
	NamingManager$FactoryInitializationError(const NamingManager$FactoryInitializationError& e);
	NamingManager$FactoryInitializationError wrapper$();
	virtual void throwWrapper$() override;
};

		} // spi
	} // naming
} // javax

#endif // _javax_naming_spi_NamingManager$FactoryInitializationError_h_