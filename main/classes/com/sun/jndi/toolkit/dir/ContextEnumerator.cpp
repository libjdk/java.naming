#include <com/sun/jndi/toolkit/dir/ContextEnumerator.h>

#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <javax/naming/Binding.h>
#include <javax/naming/Context.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/SearchControls.h>
#include <jcpp.h>

#undef OBJECT_SCOPE
#undef ONELEVEL_SCOPE
#undef SUBTREE_SCOPE

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Binding = ::javax::naming::Binding;
using $Context = ::javax::naming::Context;
using $Name = ::javax::naming::Name;
using $NameClassPair = ::javax::naming::NameClassPair;
using $NameParser = ::javax::naming::NameParser;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $SearchControls = ::javax::naming::directory::SearchControls;

namespace com {
	namespace sun {
		namespace jndi {
			namespace toolkit {
				namespace dir {

$FieldInfo _ContextEnumerator_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ContextEnumerator, debug)},
	{"children", "Ljavax/naming/NamingEnumeration;", "Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PRIVATE, $field(ContextEnumerator, children)},
	{"currentChild", "Ljavax/naming/Binding;", nullptr, $PRIVATE, $field(ContextEnumerator, currentChild)},
	{"currentReturned", "Z", nullptr, $PRIVATE, $field(ContextEnumerator, currentReturned)},
	{"root", "Ljavax/naming/Context;", nullptr, $PRIVATE, $field(ContextEnumerator, root)},
	{"currentChildEnum", "Lcom/sun/jndi/toolkit/dir/ContextEnumerator;", nullptr, $PRIVATE, $field(ContextEnumerator, currentChildEnum)},
	{"currentChildExpanded", "Z", nullptr, $PRIVATE, $field(ContextEnumerator, currentChildExpanded)},
	{"rootProcessed", "Z", nullptr, $PRIVATE, $field(ContextEnumerator, rootProcessed)},
	{"scope", "I", nullptr, $PRIVATE, $field(ContextEnumerator, scope)},
	{"contextName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ContextEnumerator, contextName)},
	{}
};

$MethodInfo _ContextEnumerator_MethodInfo_[] = {
	{"<init>", "(Ljavax/naming/Context;)V", nullptr, $PUBLIC, $method(static_cast<void(ContextEnumerator::*)($Context*)>(&ContextEnumerator::init$)), "javax.naming.NamingException"},
	{"<init>", "(Ljavax/naming/Context;I)V", nullptr, $PUBLIC, $method(static_cast<void(ContextEnumerator::*)($Context*,int32_t)>(&ContextEnumerator::init$)), "javax.naming.NamingException"},
	{"<init>", "(Ljavax/naming/Context;ILjava/lang/String;Z)V", nullptr, $PROTECTED, $method(static_cast<void(ContextEnumerator::*)($Context*,int32_t,$String*,bool)>(&ContextEnumerator::init$)), "javax.naming.NamingException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"getImmediateChildren", "(Ljavax/naming/Context;)Ljavax/naming/NamingEnumeration;", "(Ljavax/naming/Context;)Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;", $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"getNextChild", "()Ljavax/naming/Binding;", nullptr, $PRIVATE, $method(static_cast<$Binding*(ContextEnumerator::*)()>(&ContextEnumerator::getNextChild)), "javax.naming.NamingException"},
	{"getNextDescendant", "()Ljavax/naming/Binding;", nullptr, $PRIVATE, $method(static_cast<$Binding*(ContextEnumerator::*)()>(&ContextEnumerator::getNextDescendant)), "javax.naming.NamingException"},
	{"hasMore", "()Z", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"hasMoreChildren", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ContextEnumerator::*)()>(&ContextEnumerator::hasMoreChildren)), "javax.naming.NamingException"},
	{"hasMoreDescendants", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ContextEnumerator::*)()>(&ContextEnumerator::hasMoreDescendants)), "javax.naming.NamingException"},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"newEnumerator", "(Ljavax/naming/Context;ILjava/lang/String;Z)Lcom/sun/jndi/toolkit/dir/ContextEnumerator;", nullptr, $PROTECTED, nullptr, "javax.naming.NamingException"},
	{"next", "()Ljavax/naming/Binding;", nullptr, $PUBLIC, nullptr, "javax.naming.NamingException"},
	{"nextElement", "()Ljavax/naming/Binding;", nullptr, $PUBLIC},
	{"prepNextChild", "()V", nullptr, $PRIVATE, $method(static_cast<void(ContextEnumerator::*)()>(&ContextEnumerator::prepNextChild)), "javax.naming.NamingException"},
	{}
};

$ClassInfo _ContextEnumerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jndi.toolkit.dir.ContextEnumerator",
	"java.lang.Object",
	"javax.naming.NamingEnumeration",
	_ContextEnumerator_FieldInfo_,
	_ContextEnumerator_MethodInfo_,
	"Ljava/lang/Object;Ljavax/naming/NamingEnumeration<Ljavax/naming/Binding;>;"
};

$Object* allocate$ContextEnumerator($Class* clazz) {
	return $of($alloc(ContextEnumerator));
}

bool ContextEnumerator::debug = false;

void ContextEnumerator::init$($Context* context) {
	ContextEnumerator::init$(context, $SearchControls::SUBTREE_SCOPE);
}

void ContextEnumerator::init$($Context* context, int32_t scope) {
	ContextEnumerator::init$(context, scope, ""_s, scope != $SearchControls::ONELEVEL_SCOPE);
}

void ContextEnumerator::init$($Context* context, int32_t scope, $String* contextName, bool returnSelf) {
	$set(this, children, nullptr);
	$set(this, currentChild, nullptr);
	this->currentReturned = false;
	$set(this, currentChildEnum, nullptr);
	this->currentChildExpanded = false;
	this->rootProcessed = false;
	this->scope = $SearchControls::SUBTREE_SCOPE;
	$set(this, contextName, ""_s);
	if (context == nullptr) {
		$throwNew($IllegalArgumentException, "null context passed"_s);
	}
	$set(this, root, context);
	if (scope != $SearchControls::OBJECT_SCOPE) {
		$set(this, children, getImmediateChildren(context));
	}
	this->scope = scope;
	$set(this, contextName, contextName);
	this->rootProcessed = !returnSelf;
	prepNextChild();
}

$NamingEnumeration* ContextEnumerator::getImmediateChildren($Context* ctx) {
	return $nc(ctx)->listBindings(""_s);
}

ContextEnumerator* ContextEnumerator::newEnumerator($Context* ctx, int32_t scope, $String* contextName, bool returnSelf) {
	return $new(ContextEnumerator, ctx, scope, contextName, returnSelf);
}

bool ContextEnumerator::hasMore() {
	return !this->rootProcessed || (this->scope != $SearchControls::OBJECT_SCOPE && hasMoreDescendants());
}

bool ContextEnumerator::hasMoreElements() {
	try {
		return hasMore();
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		return false;
	}
	$shouldNotReachHere();
}

$Object* ContextEnumerator::nextElement() {
	$useLocalCurrentObjectStackCache();
	try {
		return $of(next());
	} catch ($NamingException&) {
		$var($NamingException, e, $catch());
		$throwNew($NoSuchElementException, $(e->toString()));
	}
	$shouldNotReachHere();
}

$Object* ContextEnumerator::next() {
	if (!this->rootProcessed) {
		this->rootProcessed = true;
		return $of($new($Binding, ""_s, $($nc($of(this->root))->getClass()->getName()), this->root, true));
	}
	if (this->scope != $SearchControls::OBJECT_SCOPE && hasMoreDescendants()) {
		return $of(getNextDescendant());
	}
	$throwNew($NoSuchElementException);
}

void ContextEnumerator::close() {
	$set(this, root, nullptr);
}

bool ContextEnumerator::hasMoreChildren() {
	return this->children != nullptr && $nc(this->children)->hasMore();
}

$Binding* ContextEnumerator::getNextChild() {
	$useLocalCurrentObjectStackCache();
	$var($Binding, oldBinding, $cast($Binding, $nc(this->children)->next()));
	$var($Binding, newBinding, nullptr);
	bool var$0 = $nc(oldBinding)->isRelative();
	if (var$0 && !$nc(this->contextName)->isEmpty()) {
		$var($NameParser, parser, $nc(this->root)->getNameParser(""_s));
		$var($Name, newName, $nc(parser)->parse(this->contextName));
		$nc(newName)->add($(oldBinding->getName()));
		if (ContextEnumerator::debug) {
			$init($System);
			$nc($System::out)->println($$str({"ContextEnumerator: adding "_s, newName}));
		}
		$var($String, var$1, $of(newName)->toString());
		$var($String, var$2, oldBinding->getClassName());
		$var($Object, var$3, oldBinding->getObject());
		$assign(newBinding, $new($Binding, var$1, var$2, var$3, oldBinding->isRelative()));
	} else {
		if (ContextEnumerator::debug) {
			$init($System);
			$nc($System::out)->println("ContextEnumerator: using old binding"_s);
		}
		$assign(newBinding, oldBinding);
	}
	return newBinding;
}

bool ContextEnumerator::hasMoreDescendants() {
	$useLocalCurrentObjectStackCache();
	if (!this->currentReturned) {
		if (ContextEnumerator::debug) {
			$init($System);
			$nc($System::out)->println($$str({"hasMoreDescendants returning "_s, $$str((this->currentChild != nullptr))}));
		}
		return this->currentChild != nullptr;
	} else if (this->currentChildExpanded && $nc(this->currentChildEnum)->hasMore()) {
		if (ContextEnumerator::debug) {
			$init($System);
			$nc($System::out)->println("hasMoreDescendants returning true"_s);
		}
		return true;
	} else {
		if (ContextEnumerator::debug) {
			$init($System);
			$nc($System::out)->println("hasMoreDescendants returning hasMoreChildren"_s);
		}
		return hasMoreChildren();
	}
}

$Binding* ContextEnumerator::getNextDescendant() {
	if (!this->currentReturned) {
		if (ContextEnumerator::debug) {
			$init($System);
			$nc($System::out)->println("getNextDescendant: simple case"_s);
		}
		this->currentReturned = true;
		return this->currentChild;
	} else if (this->currentChildExpanded && $nc(this->currentChildEnum)->hasMore()) {
		if (ContextEnumerator::debug) {
			$init($System);
			$nc($System::out)->println("getNextDescendant: expanded case"_s);
		}
		return $cast($Binding, $nc(this->currentChildEnum)->next());
	} else {
		if (ContextEnumerator::debug) {
			$init($System);
			$nc($System::out)->println("getNextDescendant: next case"_s);
		}
		prepNextChild();
		return getNextDescendant();
	}
}

void ContextEnumerator::prepNextChild() {
	$useLocalCurrentObjectStackCache();
	if (hasMoreChildren()) {
		try {
			$set(this, currentChild, getNextChild());
			this->currentReturned = false;
		} catch ($NamingException&) {
			$var($NamingException, e, $catch());
			if (ContextEnumerator::debug) {
				$init($System);
				$nc($System::out)->println($of(e));
			}
			if (ContextEnumerator::debug) {
				e->printStackTrace();
			}
		}
	} else {
		$set(this, currentChild, nullptr);
		return;
	}
	if (this->scope == $SearchControls::SUBTREE_SCOPE && $instanceOf($Context, $($nc(this->currentChild)->getObject()))) {
		$var($Context, var$0, ($cast($Context, $nc(this->currentChild)->getObject())));
		int32_t var$1 = this->scope;
		$set(this, currentChildEnum, newEnumerator(var$0, var$1, $($nc(this->currentChild)->getName()), false));
		this->currentChildExpanded = true;
		if (ContextEnumerator::debug) {
			$init($System);
			$nc($System::out)->println("prepNextChild: expanded"_s);
		}
	} else {
		this->currentChildExpanded = false;
		$set(this, currentChildEnum, nullptr);
		if (ContextEnumerator::debug) {
			$init($System);
			$nc($System::out)->println("prepNextChild: normal"_s);
		}
	}
}

void clinit$ContextEnumerator($Class* class$) {
	ContextEnumerator::debug = false;
}

ContextEnumerator::ContextEnumerator() {
}

$Class* ContextEnumerator::load$($String* name, bool initialize) {
	$loadClass(ContextEnumerator, name, initialize, &_ContextEnumerator_ClassInfo_, clinit$ContextEnumerator, allocate$ContextEnumerator);
	return class$;
}

$Class* ContextEnumerator::class$ = nullptr;

				} // dir
			} // toolkit
		} // jndi
	} // sun
} // com