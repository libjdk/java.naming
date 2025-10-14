#include <com/sun/jndi/toolkit/dir/HierMemDirCtx.h>

#include <com/sun/jndi/toolkit/dir/AttrFilter.h>
#include <com/sun/jndi/toolkit/dir/ContainmentFilter.h>
#include <com/sun/jndi/toolkit/dir/ContextEnumerator.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$BaseFlatNames.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$FlatBindings.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$FlatNames.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$HierContextEnumerator.h>
#include <com/sun/jndi/toolkit/dir/HierarchicalName.h>
#include <com/sun/jndi/toolkit/dir/HierarchicalNameParser.h>
#include <com/sun/jndi/toolkit/dir/LazySearchEnumerationImpl.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/CompoundName.h>
#include <javax/naming/Context.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameAlreadyBoundException.h>
#include <javax/naming/NameNotFoundException.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/OperationNotSupportedException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/AttributeModificationException.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/SchemaViolationException.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/spi/DirStateFactory$Result.h>
#include <javax/naming/spi/DirectoryManager.h>
#include <jcpp.h>

#undef ADD_ATTRIBUTE
#undef ONELEVEL_SCOPE
#undef REMOVE_ATTRIBUTE
#undef REPLACE_ATTRIBUTE

using $ModificationItemArray = $Array<::javax::naming::directory::ModificationItem>;
using $AttrFilter = ::com::sun::jndi::toolkit::dir::AttrFilter;
using $ContainmentFilter = ::com::sun::jndi::toolkit::dir::ContainmentFilter;
using $ContextEnumerator = ::com::sun::jndi::toolkit::dir::ContextEnumerator;
using $HierMemDirCtx$BaseFlatNames = ::com::sun::jndi::toolkit::dir::HierMemDirCtx$BaseFlatNames;
using $HierMemDirCtx$FlatBindings = ::com::sun::jndi::toolkit::dir::HierMemDirCtx$FlatBindings;
using $HierMemDirCtx$FlatNames = ::com::sun::jndi::toolkit::dir::HierMemDirCtx$FlatNames;
using $HierMemDirCtx$HierContextEnumerator = ::com::sun::jndi::toolkit::dir::HierMemDirCtx$HierContextEnumerator;
using $HierarchicalName = ::com::sun::jndi::toolkit::dir::HierarchicalName;
using $HierarchicalNameParser = ::com::sun::jndi::toolkit::dir::HierarchicalNameParser;
using $LazySearchEnumerationImpl = ::com::sun::jndi::toolkit::dir::LazySearchEnumerationImpl;
using $SearchFilter = ::com::sun::jndi::toolkit::dir::SearchFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $CompositeName = ::javax::naming::CompositeName;
using $CompoundName = ::javax::naming::CompoundName;
using $Context = ::javax::naming::Context;
using $InvalidNameException = ::javax::naming::InvalidNameException;
using $Name = ::javax::naming::Name;
using $NameAlreadyBoundException = ::javax::naming::NameAlreadyBoundException;
using $NameNotFoundException = ::javax::naming::NameNotFoundException;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $OperationNotSupportedException = ::javax::naming::OperationNotSupportedException;
using $Attribute = ::javax::naming::directory::Attribute;
using $AttributeModificationException = ::javax::naming::directory::AttributeModificationException;
using $Attributes = ::javax::naming::directory::Attributes;
using $BasicAttributes = ::javax::naming::directory::BasicAttributes;
using $DirContext = ::javax::naming::directory::DirContext;
using $ModificationItem = ::javax::naming::directory::ModificationItem;
using $SchemaViolationException = ::javax::naming::directory::SchemaViolationException;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $DirStateFactory$Result = ::javax::naming::spi::DirStateFactory$Result;
using $DirectoryManager = ::javax::naming::spi::DirectoryManager;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _HierMemDirCtx_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HierMemDirCtx, debug)},
	{"defaultParser", "Ljavax/naming/NameParser;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(HierMemDirCtx, defaultParser)},
	{"myEnv", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PROTECTED, $field(HierMemDirCtx, myEnv)},
	{"bindings", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/naming/Name;Ljava/lang/Object;>;", $PROTECTED, $field(HierMemDirCtx, bindings)},
	{"attrs", "Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED, $field(HierMemDirCtx, attrs)},
	{"ignoreCase", "Z", nullptr, $PROTECTED, $field(HierMemDirCtx, ignoreCase)},
	{"readOnlyEx", "Ljavax/naming/NamingException;", nullptr, $PROTECTED, $field(HierMemDirCtx, readOnlyEx)},
	{"myParser", "Ljavax/naming/NameParser;", nullptr, $PROTECTED, $field(HierMemDirCtx, myParser)},
	{"alwaysUseFactory", "Z", nullptr, $PRIVATE, $field(HierMemDirCtx, alwaysUseFactory)},
	{}
};

$MethodInfo _HierMemDirCtx_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HierMemDirCtx::*)()>(&HierMemDirCtx::init$))},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(HierMemDirCtx::*)(bool)>(&HierMemDirCtx::init$))},
	{"<init>", "(Ljava/util/Hashtable;Z)V", "(Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;Z)V", $PUBLIC, $method(static_cast<void(HierMemDirCtx::*)($Hashtable*,bool)>(&HierMemDirCtx::init$))},
	{"<init>", "(Ljava/util/Hashtable;ZZ)V", "(Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;ZZ)V", $PROTECTED, $method(static_cast<void(HierMemDirCtx::*)($Hashtable*,bool,bool)>(&HierMemDirCtx::init$))},
	{"addToEnvironment", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"applyMods", "([Ljavax/naming/directory/ModificationItem;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Attributes*(*)($ModificationItemArray*,$Attributes*)>(&HierMemDirCtx::applyMods)), "javax.naming.NamingException"},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"bind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"canonizeName", "(Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"composeName", "(Ljavax/naming/Name;Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createNewCtx", "()Lcom/sun/jndi/toolkit/dir/HierMemDirCtx;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;)Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;)Ljavax/naming/Context;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"createSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"destroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"doBind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Z)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"doBindAux", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"doCreateSubcontext", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/directory/DirContext;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"doDestroySubcontext", "(Ljavax/naming/Name;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"doGetAttributes", "()Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"doGetAttributes", "([Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"doList", "()Ljavax/naming/NamingEnumeration;", "()Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"doListBindings", "(Z)Ljavax/naming/NamingEnumeration;", "(Z)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"doLookup", "(Ljavax/naming/Name;Z)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"doModifyAttributes", "([Ljavax/naming/directory/ModificationItem;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"doRebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;Z)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"doRebindAux", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"doRename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"doUnbind", "(Ljavax/naming/Name;)V", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljava/lang/String;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getAttributes", "(Ljavax/naming/Name;[Ljava/lang/String;)Ljavax/naming/directory/Attributes;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getEnvironment", "()Ljava/util/Hashtable;", "()Ljava/util/Hashtable<Ljava/lang/String;Ljava/lang/Object;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getInternalName", "(Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getLeafName", "(Ljavax/naming/Name;)Ljavax/naming/Name;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getNameInNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljava/lang/String;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getNameParser", "(Ljavax/naming/Name;)Ljavax/naming/NameParser;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchema", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchema", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljava/lang/String;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getSchemaClassDefinition", "(Ljavax/naming/Name;)Ljavax/naming/directory/DirContext;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"init", "()V", nullptr, $PRIVATE, $method(static_cast<void(HierMemDirCtx::*)()>(&HierMemDirCtx::init))},
	{"list", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"list", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration<Ljavax/naming/NameClassPair;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"listBindings", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"listBindings", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookup", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookup", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookupLink", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"lookupLink", "(Ljavax/naming/Name;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljava/lang/String;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljavax/naming/Name;ILjavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljava/lang/String;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"modifyAttributes", "(Ljavax/naming/Name;[Ljavax/naming/directory/ModificationItem;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljava/lang/String;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rebind", "(Ljavax/naming/Name;Ljava/lang/Object;Ljavax/naming/directory/Attributes;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"removeFromEnvironment", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rename", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"rename", "(Ljavax/naming/Name;Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljavax/naming/directory/Attributes;[Ljava/lang/String;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Name;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"search", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration;", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;Ljavax/naming/directory/SearchControls;)Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"setIgnoreCase", "(Z)V", nullptr, $PUBLIC},
	{"setNameParser", "(Ljavax/naming/NameParser;)V", nullptr, $PUBLIC},
	{"setReadOnly", "(Ljavax/naming/NamingException;)V", nullptr, $PUBLIC},
	{"unbind", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"unbind", "(Ljavax/naming/Name;)V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{}
};

$InnerClassInfo _HierMemDirCtx_InnerClassesInfo_[] = {
	{"com.sun.jndi.toolkit.dir.HierMemDirCtx$HierContextEnumerator", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "HierContextEnumerator", $PUBLIC},
	{"com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatBindings", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "FlatBindings", $PRIVATE | $FINAL},
	{"com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatNames", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "FlatNames", $PRIVATE | $FINAL},
	{"com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames", "com.sun.jndi.toolkit.dir.HierMemDirCtx", "BaseFlatNames", $PRIVATE | $ABSTRACT},
	{}
};

$ClassInfo _HierMemDirCtx_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.HierMemDirCtx",
	"java.lang.Object",
	"javax.naming.directory.DirContext",
	_HierMemDirCtx_FieldInfo_,
	_HierMemDirCtx_MethodInfo_,
	nullptr,
	nullptr,
	_HierMemDirCtx_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.jndi.toolkit.dir.HierMemDirCtx$HierContextEnumerator,com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatBindings,com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatNames,com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames"
};

$Object* allocate$HierMemDirCtx($Class* clazz) {
	return $of($alloc(HierMemDirCtx));
}

$NameParser* HierMemDirCtx::defaultParser = nullptr;

void HierMemDirCtx::close() {
	$set(this, myEnv, nullptr);
	$set(this, bindings, nullptr);
	$set(this, attrs, nullptr);
}

$String* HierMemDirCtx::getNameInNamespace() {
	$throwNew($OperationNotSupportedException, "Cannot determine full name"_s);
	$shouldNotReachHere();
}

void HierMemDirCtx::init$() {
	HierMemDirCtx::init$(nullptr, false, false);
}

void HierMemDirCtx::init$(bool ignoreCase) {
	HierMemDirCtx::init$(nullptr, ignoreCase, false);
}

void HierMemDirCtx::init$($Hashtable* environment, bool ignoreCase) {
	HierMemDirCtx::init$(environment, ignoreCase, false);
}

void HierMemDirCtx::init$($Hashtable* environment, bool ignoreCase, bool useFac) {
	this->ignoreCase = false;
	$set(this, readOnlyEx, nullptr);
	$set(this, myParser, HierMemDirCtx::defaultParser);
	$set(this, myEnv, environment);
	this->ignoreCase = ignoreCase;
	init();
	this->alwaysUseFactory = useFac;
}

void HierMemDirCtx::init() {
	$set(this, attrs, $new($BasicAttributes, this->ignoreCase));
	$set(this, bindings, $new($Hashtable, 11, 0.75f));
}

$Object* HierMemDirCtx::lookup($String* name) {
	return $of(lookup($($nc(this->myParser)->parse(name))));
}

$Object* HierMemDirCtx::lookup($Name* name) {
	return $of(doLookup(name, this->alwaysUseFactory));
}

$Object* HierMemDirCtx::doLookup($Name* name$renamed, bool useFactory) {
	$var($Name, name, name$renamed);
	$var($Object, target, nullptr);
	$assign(name, canonizeName(name));
	{
		$var(HierMemDirCtx, ctx, nullptr)
		switch ($nc(name)->size()) {
		case 0:
			{
				$assign(target, this);
				break;
			}
		case 1:
			{
				$assign(target, $nc(this->bindings)->get(name));
				break;
			}
		default:
			{
				$assign(ctx, $cast(HierMemDirCtx, $nc(this->bindings)->get($(name->getPrefix(1)))));
				if (ctx == nullptr) {
					$assign(target, nullptr);
				} else {
					$assign(target, $nc(ctx)->doLookup($(name->getSuffix(1)), false));
				}
				break;
			}
		}
	}
	if (target == nullptr) {
		$throwNew($NameNotFoundException, $($of(name)->toString()));
	}
	if (useFactory) {
		try {
			return $of($DirectoryManager::getObjectInstance(target, name, this, this->myEnv, ($instanceOf(HierMemDirCtx, target)) ? $nc(($cast(HierMemDirCtx, target)))->attrs : ($Attributes*)nullptr));
		} catch ($NamingException&) {
			$var($NamingException, e, $catch());
			$throw(e);
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$var($NamingException, e2, $new($NamingException, "Problem calling getObjectInstance"_s));
			e2->setRootCause(e);
			$throw(e2);
		}
	} else {
		return $of(target);
	}
}

void HierMemDirCtx::bind($String* name, Object$* obj) {
	bind($($nc(this->myParser)->parse(name)), obj);
}

void HierMemDirCtx::bind($Name* name, Object$* obj) {
	doBind(name, obj, nullptr, this->alwaysUseFactory);
}

void HierMemDirCtx::bind($String* name, Object$* obj, $Attributes* attrs) {
	bind($($nc(this->myParser)->parse(name)), obj, attrs);
}

void HierMemDirCtx::bind($Name* name, Object$* obj, $Attributes* attrs) {
	doBind(name, obj, attrs, this->alwaysUseFactory);
}

void HierMemDirCtx::doBind($Name* name, Object$* obj$renamed, $Attributes* attrs$renamed, bool useFactory) {
	$var($Object, obj, obj$renamed);
	$var($Attributes, attrs, attrs$renamed);
	if ($nc(name)->isEmpty()) {
		$throwNew($InvalidNameException, "Cannot bind empty name"_s);
	}
	if (useFactory) {
		$var($DirStateFactory$Result, res, $DirectoryManager::getStateToBind(obj, name, this, this->myEnv, attrs));
		$assign(obj, $nc(res)->getObject());
		$assign(attrs, res->getAttributes());
	}
	$var(HierMemDirCtx, ctx, $cast(HierMemDirCtx, doLookup($(getInternalName(name)), false)));
	$nc(ctx)->doBindAux($(getLeafName(name)), obj);
	if (attrs != nullptr && attrs->size() > 0) {
		modifyAttributes(name, $DirContext::ADD_ATTRIBUTE, attrs);
	}
}

void HierMemDirCtx::doBindAux($Name* name, Object$* obj) {
	if (this->readOnlyEx != nullptr) {
		$throw($cast($NamingException, $($nc(this->readOnlyEx)->fillInStackTrace())));
	}
	if ($nc(this->bindings)->get(name) != nullptr) {
		$throwNew($NameAlreadyBoundException, $($nc($of(name))->toString()));
	}
	if ($instanceOf(HierMemDirCtx, obj)) {
		$nc(this->bindings)->put(name, obj);
	} else {
		$throwNew($SchemaViolationException, "This context only supports binding objects of it\'s own kind"_s);
	}
}

void HierMemDirCtx::rebind($String* name, Object$* obj) {
	rebind($($nc(this->myParser)->parse(name)), obj);
}

void HierMemDirCtx::rebind($Name* name, Object$* obj) {
	doRebind(name, obj, nullptr, this->alwaysUseFactory);
}

void HierMemDirCtx::rebind($String* name, Object$* obj, $Attributes* attrs) {
	rebind($($nc(this->myParser)->parse(name)), obj, attrs);
}

void HierMemDirCtx::rebind($Name* name, Object$* obj, $Attributes* attrs) {
	doRebind(name, obj, attrs, this->alwaysUseFactory);
}

void HierMemDirCtx::doRebind($Name* name, Object$* obj$renamed, $Attributes* attrs$renamed, bool useFactory) {
	$var($Object, obj, obj$renamed);
	$var($Attributes, attrs, attrs$renamed);
	if ($nc(name)->isEmpty()) {
		$throwNew($InvalidNameException, "Cannot rebind empty name"_s);
	}
	if (useFactory) {
		$var($DirStateFactory$Result, res, $DirectoryManager::getStateToBind(obj, name, this, this->myEnv, attrs));
		$assign(obj, $nc(res)->getObject());
		$assign(attrs, res->getAttributes());
	}
	$var(HierMemDirCtx, ctx, $cast(HierMemDirCtx, doLookup($(getInternalName(name)), false)));
	$nc(ctx)->doRebindAux($(getLeafName(name)), obj);
	if (attrs != nullptr && attrs->size() > 0) {
		modifyAttributes(name, $DirContext::ADD_ATTRIBUTE, attrs);
	}
}

void HierMemDirCtx::doRebindAux($Name* name, Object$* obj) {
	if (this->readOnlyEx != nullptr) {
		$throw($cast($NamingException, $($nc(this->readOnlyEx)->fillInStackTrace())));
	}
	if ($instanceOf(HierMemDirCtx, obj)) {
		$nc(this->bindings)->put(name, obj);
	} else {
		$throwNew($SchemaViolationException, "This context only supports binding objects of it\'s own kind"_s);
	}
}

void HierMemDirCtx::unbind($String* name) {
	unbind($($nc(this->myParser)->parse(name)));
}

void HierMemDirCtx::unbind($Name* name) {
	if ($nc(name)->isEmpty()) {
		$throwNew($InvalidNameException, "Cannot unbind empty name"_s);
	} else {
		$var(HierMemDirCtx, ctx, $cast(HierMemDirCtx, doLookup($(getInternalName(name)), false)));
		$nc(ctx)->doUnbind($(getLeafName(name)));
	}
}

void HierMemDirCtx::doUnbind($Name* name) {
	if (this->readOnlyEx != nullptr) {
		$throw($cast($NamingException, $($nc(this->readOnlyEx)->fillInStackTrace())));
	}
	$nc(this->bindings)->remove(name);
}

void HierMemDirCtx::rename($String* oldname, $String* newname) {
	$var($Name, var$0, $nc(this->myParser)->parse(oldname));
	rename(var$0, $($nc(this->myParser)->parse(newname)));
}

void HierMemDirCtx::rename($Name* oldname, $Name* newname) {
	bool var$0 = $nc(newname)->isEmpty();
	if (var$0 || $nc(oldname)->isEmpty()) {
		$throwNew($InvalidNameException, "Cannot rename empty name"_s);
	}
	if (!$nc($of($(getInternalName(newname))))->equals($(getInternalName(oldname)))) {
		$throwNew($InvalidNameException, "Cannot rename across contexts"_s);
	}
	$var(HierMemDirCtx, ctx, $cast(HierMemDirCtx, doLookup($(getInternalName(newname)), false)));
	$var($Name, var$1, getLeafName(oldname));
	$nc(ctx)->doRename(var$1, $(getLeafName(newname)));
}

void HierMemDirCtx::doRename($Name* oldname$renamed, $Name* newname$renamed) {
	$var($Name, oldname, oldname$renamed);
	$var($Name, newname, newname$renamed);
	if (this->readOnlyEx != nullptr) {
		$throw($cast($NamingException, $($nc(this->readOnlyEx)->fillInStackTrace())));
	}
	$assign(oldname, canonizeName(oldname));
	$assign(newname, canonizeName(newname));
	if ($nc(this->bindings)->get(newname) != nullptr) {
		$throwNew($NameAlreadyBoundException, $($nc($of(newname))->toString()));
	}
	$var($Object, oldBinding, $nc(this->bindings)->remove(oldname));
	if (oldBinding == nullptr) {
		$throwNew($NameNotFoundException, $($nc($of(oldname))->toString()));
	}
	$nc(this->bindings)->put(newname, oldBinding);
}

$NamingEnumeration* HierMemDirCtx::list($String* name) {
	return list($($nc(this->myParser)->parse(name)));
}

$NamingEnumeration* HierMemDirCtx::list($Name* name) {
	$var(HierMemDirCtx, ctx, $cast(HierMemDirCtx, doLookup(name, false)));
	return $nc(ctx)->doList();
}

$NamingEnumeration* HierMemDirCtx::doList() {
	return $new($HierMemDirCtx$FlatNames, this, $($nc(this->bindings)->keys()));
}

$NamingEnumeration* HierMemDirCtx::listBindings($String* name) {
	return listBindings($($nc(this->myParser)->parse(name)));
}

$NamingEnumeration* HierMemDirCtx::listBindings($Name* name) {
	$var(HierMemDirCtx, ctx, $cast(HierMemDirCtx, doLookup(name, false)));
	return $nc(ctx)->doListBindings(this->alwaysUseFactory);
}

$NamingEnumeration* HierMemDirCtx::doListBindings(bool useFactory) {
	return $new($HierMemDirCtx$FlatBindings, this, this->bindings, this->myEnv, useFactory);
}

void HierMemDirCtx::destroySubcontext($String* name) {
	destroySubcontext($($nc(this->myParser)->parse(name)));
}

void HierMemDirCtx::destroySubcontext($Name* name) {
	$var(HierMemDirCtx, ctx, $cast(HierMemDirCtx, doLookup($(getInternalName(name)), false)));
	$nc(ctx)->doDestroySubcontext($(getLeafName(name)));
}

void HierMemDirCtx::doDestroySubcontext($Name* name$renamed) {
	$var($Name, name, name$renamed);
	if (this->readOnlyEx != nullptr) {
		$throw($cast($NamingException, $($nc(this->readOnlyEx)->fillInStackTrace())));
	}
	$assign(name, canonizeName(name));
	$nc(this->bindings)->remove(name);
}

$Context* HierMemDirCtx::createSubcontext($String* name) {
	return createSubcontext($($nc(this->myParser)->parse(name)));
}

$Context* HierMemDirCtx::createSubcontext($Name* name) {
	return createSubcontext(name, ($Attributes*)nullptr);
}

$DirContext* HierMemDirCtx::createSubcontext($String* name, $Attributes* attrs) {
	return createSubcontext($($nc(this->myParser)->parse(name)), attrs);
}

$DirContext* HierMemDirCtx::createSubcontext($Name* name, $Attributes* attrs) {
	$var(HierMemDirCtx, ctx, $cast(HierMemDirCtx, doLookup($(getInternalName(name)), false)));
	return $nc(ctx)->doCreateSubcontext($(getLeafName(name)), attrs);
}

$DirContext* HierMemDirCtx::doCreateSubcontext($Name* name$renamed, $Attributes* attrs) {
	$var($Name, name, name$renamed);
	if (this->readOnlyEx != nullptr) {
		$throw($cast($NamingException, $($nc(this->readOnlyEx)->fillInStackTrace())));
	}
	$assign(name, canonizeName(name));
	if ($nc(this->bindings)->get(name) != nullptr) {
		$throwNew($NameAlreadyBoundException, $($nc($of(name))->toString()));
	}
	$var(HierMemDirCtx, newCtx, createNewCtx());
	$nc(this->bindings)->put(name, newCtx);
	if (attrs != nullptr) {
		$nc(newCtx)->modifyAttributes(""_s, $DirContext::ADD_ATTRIBUTE, attrs);
	}
	return newCtx;
}

$Object* HierMemDirCtx::lookupLink($String* name) {
	return $of(lookupLink($($nc(this->myParser)->parse(name))));
}

$Object* HierMemDirCtx::lookupLink($Name* name) {
	return $of(lookup(name));
}

$NameParser* HierMemDirCtx::getNameParser($String* name) {
	return this->myParser;
}

$NameParser* HierMemDirCtx::getNameParser($Name* name) {
	return this->myParser;
}

$String* HierMemDirCtx::composeName($String* name, $String* prefix) {
	$var($Name, var$0, static_cast<$Name*>($new($CompositeName, name)));
	$var($Name, result, composeName(var$0, static_cast<$Name*>($$new($CompositeName, prefix))));
	return $nc($of(result))->toString();
}

$Name* HierMemDirCtx::composeName($Name* name$renamed, $Name* prefix$renamed) {
	$var($Name, prefix, prefix$renamed);
	$var($Name, name, name$renamed);
	$assign(name, canonizeName(name));
	$assign(prefix, canonizeName(prefix));
	$var($Name, result, ($cast($Name, $nc(prefix)->clone())));
	$nc(result)->addAll(name);
	return result;
}

$Object* HierMemDirCtx::addToEnvironment($String* propName, Object$* propVal) {
	$set(this, myEnv, (this->myEnv == nullptr) ? $new($Hashtable, 11, 0.75f) : $cast($Hashtable, $nc(this->myEnv)->clone()));
	return $of($nc(this->myEnv)->put(propName, propVal));
}

$Object* HierMemDirCtx::removeFromEnvironment($String* propName) {
	if (this->myEnv == nullptr) {
		return $of(nullptr);
	}
	$set(this, myEnv, $cast($Hashtable, $nc(this->myEnv)->clone()));
	return $of($nc(this->myEnv)->remove(propName));
}

$Hashtable* HierMemDirCtx::getEnvironment() {
	if (this->myEnv == nullptr) {
		return $new($Hashtable, 5, 0.75f);
	} else {
		return $cast($Hashtable, $nc(this->myEnv)->clone());
	}
}

$Attributes* HierMemDirCtx::getAttributes($String* name) {
	return getAttributes($($nc(this->myParser)->parse(name)));
}

$Attributes* HierMemDirCtx::getAttributes($Name* name) {
	$var(HierMemDirCtx, ctx, $cast(HierMemDirCtx, doLookup(name, false)));
	return $nc(ctx)->doGetAttributes();
}

$Attributes* HierMemDirCtx::doGetAttributes() {
	return $cast($Attributes, $nc(this->attrs)->clone());
}

$Attributes* HierMemDirCtx::getAttributes($String* name, $StringArray* attrIds) {
	return getAttributes($($nc(this->myParser)->parse(name)), attrIds);
}

$Attributes* HierMemDirCtx::getAttributes($Name* name, $StringArray* attrIds) {
	$var(HierMemDirCtx, ctx, $cast(HierMemDirCtx, doLookup(name, false)));
	return $nc(ctx)->doGetAttributes(attrIds);
}

$Attributes* HierMemDirCtx::doGetAttributes($StringArray* attrIds) {
	if (attrIds == nullptr) {
		return doGetAttributes();
	}
	$var($Attributes, attrs, $new($BasicAttributes, this->ignoreCase));
	$var($Attribute, attr, nullptr);
	for (int32_t i = 0; i < $nc(attrIds)->length; ++i) {
		$assign(attr, $nc(this->attrs)->get(attrIds->get(i)));
		if (attr != nullptr) {
			attrs->put(attr);
		}
	}
	return attrs;
}

void HierMemDirCtx::modifyAttributes($String* name, int32_t mod_op, $Attributes* attrs) {
	modifyAttributes($($nc(this->myParser)->parse(name)), mod_op, attrs);
}

void HierMemDirCtx::modifyAttributes($Name* name, int32_t mod_op, $Attributes* attrs) {
	if (attrs == nullptr || $nc(attrs)->size() == 0) {
		$throwNew($IllegalArgumentException, "Cannot modify without an attribute"_s);
	}
	$var($NamingEnumeration, attrEnum, $nc(attrs)->getAll());
	$var($ModificationItemArray, mods, $new($ModificationItemArray, attrs->size()));
	for (int32_t i = 0; i < mods->length && $nc(attrEnum)->hasMoreElements(); ++i) {
		mods->set(i, $$new($ModificationItem, mod_op, $cast($Attribute, $(attrEnum->next()))));
	}
	modifyAttributes(name, mods);
}

void HierMemDirCtx::modifyAttributes($String* name, $ModificationItemArray* mods) {
	modifyAttributes($($nc(this->myParser)->parse(name)), mods);
}

void HierMemDirCtx::modifyAttributes($Name* name, $ModificationItemArray* mods) {
	$var(HierMemDirCtx, ctx, $cast(HierMemDirCtx, doLookup(name, false)));
	$nc(ctx)->doModifyAttributes(mods);
}

void HierMemDirCtx::doModifyAttributes($ModificationItemArray* mods) {
	if (this->readOnlyEx != nullptr) {
		$throw($cast($NamingException, $($nc(this->readOnlyEx)->fillInStackTrace())));
	}
	applyMods(mods, this->attrs);
}

$Attributes* HierMemDirCtx::applyMods($ModificationItemArray* mods, $Attributes* orig) {
	$init(HierMemDirCtx);
	$var($ModificationItem, mod, nullptr);
	$var($Attribute, existingAttr, nullptr);
	$var($Attribute, modAttr, nullptr);
	$var($NamingEnumeration, modVals, nullptr);
	for (int32_t i = 0; i < $nc(mods)->length; ++i) {
		$assign(mod, mods->get(i));
		$assign(modAttr, $nc(mod)->getAttribute());
		switch (mod->getModificationOp()) {
		case $DirContext::ADD_ATTRIBUTE:
			{
				$assign(existingAttr, $nc(orig)->get($($nc(modAttr)->getID())));
				if (existingAttr == nullptr) {
					$nc(orig)->put($cast($Attribute, $($nc(modAttr)->clone())));
				} else {
					$assign(modVals, $nc(modAttr)->getAll());
					while ($nc(modVals)->hasMore()) {
						$nc(existingAttr)->add($(modVals->next()));
					}
				}
				break;
			}
		case $DirContext::REPLACE_ATTRIBUTE:
			{
				if ($nc(modAttr)->size() == 0) {
					$nc(orig)->remove($(modAttr->getID()));
				} else {
					$nc(orig)->put($cast($Attribute, $(modAttr->clone())));
				}
				break;
			}
		case $DirContext::REMOVE_ATTRIBUTE:
			{
				$assign(existingAttr, $nc(orig)->get($($nc(modAttr)->getID())));
				if (existingAttr != nullptr) {
					if ($nc(modAttr)->size() == 0) {
						$nc(orig)->remove($(modAttr->getID()));
					} else {
						$assign(modVals, modAttr->getAll());
						while ($nc(modVals)->hasMore()) {
							existingAttr->remove($(modVals->next()));
						}
						if (existingAttr->size() == 0) {
							$nc(orig)->remove($(modAttr->getID()));
						}
					}
				}
				break;
			}
		default:
			{
				$throwNew($AttributeModificationException, "Unknown mod_op"_s);
			}
		}
	}
	return orig;
}

$NamingEnumeration* HierMemDirCtx::search($String* name, $Attributes* matchingAttributes) {
	return search(name, matchingAttributes, ($StringArray*)nullptr);
}

$NamingEnumeration* HierMemDirCtx::search($Name* name, $Attributes* matchingAttributes) {
	return search(name, matchingAttributes, ($StringArray*)nullptr);
}

$NamingEnumeration* HierMemDirCtx::search($String* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	return search($($nc(this->myParser)->parse(name)), matchingAttributes, attributesToReturn);
}

$NamingEnumeration* HierMemDirCtx::search($Name* name, $Attributes* matchingAttributes, $StringArray* attributesToReturn) {
	$var(HierMemDirCtx, target, $cast(HierMemDirCtx, doLookup(name, false)));
	$var($SearchControls, cons, $new($SearchControls));
	cons->setReturningAttributes(attributesToReturn);
	$var($NamingEnumeration, var$0, $nc(target)->doListBindings(false));
	return $new($LazySearchEnumerationImpl, var$0, $$new($ContainmentFilter, matchingAttributes), cons, this, this->myEnv, false);
}

$NamingEnumeration* HierMemDirCtx::search($Name* name, $String* filter, $SearchControls* cons) {
	$var($DirContext, target, $cast($DirContext, doLookup(name, false)));
	$var($SearchFilter, stringfilter, $new($SearchFilter, filter));
	return $new($LazySearchEnumerationImpl, $$new($HierMemDirCtx$HierContextEnumerator, this, target, (cons != nullptr) ? $nc(cons)->getSearchScope() : $SearchControls::ONELEVEL_SCOPE), stringfilter, cons, this, this->myEnv, this->alwaysUseFactory);
}

$NamingEnumeration* HierMemDirCtx::search($Name* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	$var($String, strfilter, $SearchFilter::format(filterExpr, filterArgs));
	return search(name, strfilter, cons);
}

$NamingEnumeration* HierMemDirCtx::search($String* name, $String* filter, $SearchControls* cons) {
	return search($($nc(this->myParser)->parse(name)), filter, cons);
}

$NamingEnumeration* HierMemDirCtx::search($String* name, $String* filterExpr, $ObjectArray* filterArgs, $SearchControls* cons) {
	return search($($nc(this->myParser)->parse(name)), filterExpr, filterArgs, cons);
}

HierMemDirCtx* HierMemDirCtx::createNewCtx() {
	return $new(HierMemDirCtx, this->myEnv, this->ignoreCase);
}

$Name* HierMemDirCtx::canonizeName($Name* name) {
	$var($Name, canonicalName, name);
	if (!($instanceOf($HierarchicalName, name))) {
		$assign(canonicalName, $new($HierarchicalName));
		int32_t n = $nc(name)->size();
		for (int32_t i = 0; i < n; ++i) {
			canonicalName->add(i, $(name->get(i)));
		}
	}
	return canonicalName;
}

$Name* HierMemDirCtx::getInternalName($Name* name) {
	return ($nc(name)->getPrefix(name->size() - 1));
}

$Name* HierMemDirCtx::getLeafName($Name* name) {
	return ($nc(name)->getSuffix(name->size() - 1));
}

$DirContext* HierMemDirCtx::getSchema($String* name) {
	$throwNew($OperationNotSupportedException);
	$shouldNotReachHere();
}

$DirContext* HierMemDirCtx::getSchema($Name* name) {
	$throwNew($OperationNotSupportedException);
	$shouldNotReachHere();
}

$DirContext* HierMemDirCtx::getSchemaClassDefinition($String* name) {
	$throwNew($OperationNotSupportedException);
	$shouldNotReachHere();
}

$DirContext* HierMemDirCtx::getSchemaClassDefinition($Name* name) {
	$throwNew($OperationNotSupportedException);
	$shouldNotReachHere();
}

void HierMemDirCtx::setReadOnly($NamingException* e) {
	$set(this, readOnlyEx, e);
}

void HierMemDirCtx::setIgnoreCase(bool ignoreCase) {
	this->ignoreCase = ignoreCase;
}

void HierMemDirCtx::setNameParser($NameParser* parser) {
	$set(this, myParser, parser);
}

void clinit$HierMemDirCtx($Class* class$) {
	$assignStatic(HierMemDirCtx::defaultParser, $new($HierarchicalNameParser));
}

HierMemDirCtx::HierMemDirCtx() {
}

$Class* HierMemDirCtx::load$($String* name, bool initialize) {
	$loadClass(HierMemDirCtx, name, initialize, &_HierMemDirCtx_ClassInfo_, clinit$HierMemDirCtx, allocate$HierMemDirCtx);
	return class$;
}

$Class* HierMemDirCtx::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com