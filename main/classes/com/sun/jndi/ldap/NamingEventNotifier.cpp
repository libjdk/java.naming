#include <com/sun/jndi/ldap/NamingEventNotifier.h>

#include <com/sun/jndi/ldap/BasicControl.h>
#include <com/sun/jndi/ldap/EntryChangeResponseControl.h>
#include <com/sun/jndi/ldap/EventSupport.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapSearchEnumeration.h>
#include <com/sun/jndi/ldap/NotifierArgs.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <com/sun/jndi/ldap/PersistentSearchControl.h>
#include <com/sun/jndi/ldap/VersionHelper.h>
#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <java/util/Vector.h>
#include <javax/naming/Binding.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/InterruptedNamingException.h>
#include <javax/naming/Name.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/directory/SearchResult.h>
#include <javax/naming/event/EventContext.h>
#include <javax/naming/event/EventDirContext.h>
#include <javax/naming/event/NamingEvent.h>
#include <javax/naming/event/NamingExceptionEvent.h>
#include <javax/naming/event/NamingListener.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/HasControls.h>
#include <javax/naming/ldap/LdapContext.h>
#include <javax/naming/ldap/LdapName.h>
#include <jcpp.h>

#undef ADD
#undef CRITICAL
#undef DELETE
#undef MODIFY
#undef OBJECT_ADDED
#undef OBJECT_CHANGED
#undef OBJECT_REMOVED
#undef OBJECT_RENAMED
#undef RENAME

using $ControlArray = $Array<::javax::naming::ldap::Control>;
using $BasicControl = ::com::sun::jndi::ldap::BasicControl;
using $EntryChangeResponseControl = ::com::sun::jndi::ldap::EntryChangeResponseControl;
using $EventSupport = ::com::sun::jndi::ldap::EventSupport;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $LdapSearchEnumeration = ::com::sun::jndi::ldap::LdapSearchEnumeration;
using $NotifierArgs = ::com::sun::jndi::ldap::NotifierArgs;
using $Obj = ::com::sun::jndi::ldap::Obj;
using $PersistentSearchControl = ::com::sun::jndi::ldap::PersistentSearchControl;
using $VersionHelper = ::com::sun::jndi::ldap::VersionHelper;
using $Continuation = ::com::sun::jndi::toolkit::ctx::Continuation;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $EventObject = ::java::util::EventObject;
using $Vector = ::java::util::Vector;
using $Binding = ::javax::naming::Binding;
using $CompositeName = ::javax::naming::CompositeName;
using $InterruptedNamingException = ::javax::naming::InterruptedNamingException;
using $Name = ::javax::naming::Name;
using $NameClassPair = ::javax::naming::NameClassPair;
using $NamingEnumeration = ::javax::naming::NamingEnumeration;
using $NamingException = ::javax::naming::NamingException;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $SearchResult = ::javax::naming::directory::SearchResult;
using $EventContext = ::javax::naming::event::EventContext;
using $EventDirContext = ::javax::naming::event::EventDirContext;
using $NamingEvent = ::javax::naming::event::NamingEvent;
using $NamingExceptionEvent = ::javax::naming::event::NamingExceptionEvent;
using $NamingListener = ::javax::naming::event::NamingListener;
using $Control = ::javax::naming::ldap::Control;
using $HasControls = ::javax::naming::ldap::HasControls;
using $LdapContext = ::javax::naming::ldap::LdapContext;
using $LdapName = ::javax::naming::ldap::LdapName;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

$FieldInfo _NamingEventNotifier_FieldInfo_[] = {
	{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NamingEventNotifier, debug)},
	{"namingListeners", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/naming/event/NamingListener;>;", $PRIVATE, $field(NamingEventNotifier, namingListeners)},
	{"worker", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(NamingEventNotifier, worker)},
	{"context", "Lcom/sun/jndi/ldap/LdapCtx;", nullptr, $PRIVATE, $field(NamingEventNotifier, context)},
	{"eventSrc", "Ljavax/naming/event/EventContext;", nullptr, $PRIVATE, $field(NamingEventNotifier, eventSrc)},
	{"support", "Lcom/sun/jndi/ldap/EventSupport;", nullptr, $PRIVATE, $field(NamingEventNotifier, support)},
	{"results", "Ljavax/naming/NamingEnumeration;", "Ljavax/naming/NamingEnumeration<Ljavax/naming/directory/SearchResult;>;", $PRIVATE, $field(NamingEventNotifier, results)},
	{"info", "Lcom/sun/jndi/ldap/NotifierArgs;", nullptr, 0, $field(NamingEventNotifier, info)},
	{}
};

$MethodInfo _NamingEventNotifier_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/jndi/ldap/EventSupport;Lcom/sun/jndi/ldap/LdapCtx;Lcom/sun/jndi/ldap/NotifierArgs;Ljavax/naming/event/NamingListener;)V", nullptr, 0, $method(static_cast<void(NamingEventNotifier::*)($EventSupport*,$LdapCtx*,$NotifierArgs*,$NamingListener*)>(&NamingEventNotifier::init$)), "javax.naming.NamingException"},
	{"addNamingListener", "(Ljavax/naming/event/NamingListener;)V", nullptr, 0, $method(static_cast<void(NamingEventNotifier::*)($NamingListener*)>(&NamingEventNotifier::addNamingListener))},
	{"cleanup", "()V", nullptr, $PRIVATE, $method(static_cast<void(NamingEventNotifier::*)()>(&NamingEventNotifier::cleanup))},
	{"fireNamingException", "(Ljavax/naming/NamingException;)V", nullptr, $PRIVATE, $method(static_cast<void(NamingEventNotifier::*)($NamingException*)>(&NamingEventNotifier::fireNamingException))},
	{"fireObjectAdded", "(Ljavax/naming/Binding;J)V", nullptr, $PRIVATE, $method(static_cast<void(NamingEventNotifier::*)($Binding*,int64_t)>(&NamingEventNotifier::fireObjectAdded))},
	{"fireObjectChanged", "(Ljavax/naming/Binding;J)V", nullptr, $PRIVATE, $method(static_cast<void(NamingEventNotifier::*)($Binding*,int64_t)>(&NamingEventNotifier::fireObjectChanged))},
	{"fireObjectRemoved", "(Ljavax/naming/Binding;J)V", nullptr, $PRIVATE, $method(static_cast<void(NamingEventNotifier::*)($Binding*,int64_t)>(&NamingEventNotifier::fireObjectRemoved))},
	{"fireObjectRenamed", "(Ljavax/naming/Binding;Ljava/lang/String;J)V", nullptr, $PRIVATE, $method(static_cast<void(NamingEventNotifier::*)($Binding*,$String*,int64_t)>(&NamingEventNotifier::fireObjectRenamed))},
	{"hasNamingListeners", "()Z", nullptr, 0, $method(static_cast<bool(NamingEventNotifier::*)()>(&NamingEventNotifier::hasNamingListeners))},
	{"removeNamingListener", "(Ljavax/naming/event/NamingListener;)V", nullptr, 0, $method(static_cast<void(NamingEventNotifier::*)($NamingListener*)>(&NamingEventNotifier::removeNamingListener))},
	{"run", "()V", nullptr, $PUBLIC},
	{"stop", "()V", nullptr, 0, $method(static_cast<void(NamingEventNotifier::*)()>(&NamingEventNotifier::stop))},
	{}
};

$ClassInfo _NamingEventNotifier_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.jndi.ldap.NamingEventNotifier",
	"java.lang.Object",
	"java.lang.Runnable",
	_NamingEventNotifier_FieldInfo_,
	_NamingEventNotifier_MethodInfo_
};

$Object* allocate$NamingEventNotifier($Class* clazz) {
	return $of($alloc(NamingEventNotifier));
}

void NamingEventNotifier::init$($EventSupport* support, $LdapCtx* ctx, $NotifierArgs* info, $NamingListener* firstListener) {
	$useLocalCurrentObjectStackCache();
	$set(this, info, info);
	$set(this, support, support);
	$var($Control, psearch, nullptr);
	try {
		$assign(psearch, $new($PersistentSearchControl, $nc(info)->mask, true, true, $Control::CRITICAL));
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$var($NamingException, ne, $new($NamingException, "Problem creating persistent search control"_s));
		ne->setRootCause(e);
		$throw(ne);
	}
	$set(this, context, $cast($LdapCtx, $nc(ctx)->newInstance($$new($ControlArray, {psearch}))));
	$set(this, eventSrc, ctx);
	$set(this, namingListeners, $new($Vector));
	$nc(this->namingListeners)->addElement(firstListener);
	$init($Obj);
	$set(this, worker, $nc($Obj::helper)->createThread(this));
	$nc(this->worker)->setDaemon(true);
	$nc(this->worker)->start();
}

void NamingEventNotifier::addNamingListener($NamingListener* l) {
	$nc(this->namingListeners)->addElement(l);
}

void NamingEventNotifier::removeNamingListener($NamingListener* l) {
	$nc(this->namingListeners)->removeElement(l);
}

bool NamingEventNotifier::hasNamingListeners() {
	return $nc(this->namingListeners)->size() > 0;
}

void NamingEventNotifier::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$var($Continuation, cont, $new($Continuation));
				cont->setError($of(this), $nc(this->info)->name);
				$var($Name, nm, ($nc(this->info)->name == nullptr || $nc($nc(this->info)->name)->isEmpty()) ? static_cast<$Name*>($new($CompositeName)) : $$new($CompositeName)->add($nc(this->info)->name));
				$set(this, results, $nc(this->context)->searchAux(nm, $nc(this->info)->filter, $nc(this->info)->controls, true, false, cont));
				$nc(($cast($LdapSearchEnumeration, this->results)))->setStartName($nc(this->context)->currentParsedDN);
				$var($SearchResult, si, nullptr);
				$var($ControlArray, respctls, nullptr);
				$var($EntryChangeResponseControl, ec, nullptr);
				int64_t changeNum = 0;
				while ($nc(this->results)->hasMore()) {
					$assign(si, $cast($SearchResult, $nc(this->results)->next()));
					$assign(respctls, ($instanceOf($HasControls, si)) ? $nc(($cast($HasControls, si)))->getControls() : ($ControlArray*)nullptr);
					if (respctls != nullptr) {
						for (int32_t i = 0; i < respctls->length; i++) {
							if ($instanceOf($EntryChangeResponseControl, respctls->get(i))) {
								$assign(ec, $cast($EntryChangeResponseControl, respctls->get(i)));
								changeNum = $nc(ec)->getChangeNumber();
								switch (ec->getChangeType()) {
								case $EntryChangeResponseControl::ADD:
									{
										fireObjectAdded(si, changeNum);
										break;
									}
								case $EntryChangeResponseControl::DELETE:
									{
										fireObjectRemoved(si, changeNum);
										break;
									}
								case $EntryChangeResponseControl::MODIFY:
									{
										fireObjectChanged(si, changeNum);
										break;
									}
								case $EntryChangeResponseControl::RENAME:
									{
										fireObjectRenamed(si, $(ec->getPreviousDN()), changeNum);
										break;
									}
								}
							}
							break;
						}
					}
				}
			} catch ($InterruptedNamingException&) {
				$var($InterruptedNamingException, e, $catch());
			} catch ($NamingException&) {
				$var($NamingException, e, $catch());
				fireNamingException(e);
				$nc(this->support)->removeDeadNotifier(this->info);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			cleanup();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void NamingEventNotifier::cleanup() {
	try {
		if (this->results != nullptr) {
			$nc(this->results)->close();
			$set(this, results, nullptr);
		}
		if (this->context != nullptr) {
			$nc(this->context)->close();
			$set(this, context, nullptr);
		}
	} catch ($NamingException&) {
		$catch();
	}
}

void NamingEventNotifier::stop() {
	if (this->worker != nullptr) {
		$nc(this->worker)->interrupt();
		$set(this, worker, nullptr);
	}
}

void NamingEventNotifier::fireObjectAdded($Binding* newBd, int64_t changeID) {
	$useLocalCurrentObjectStackCache();
	if (this->namingListeners == nullptr || $nc(this->namingListeners)->size() == 0) {
		return;
	}
	$var($NamingEvent, e, $new($NamingEvent, this->eventSrc, $NamingEvent::OBJECT_ADDED, newBd, nullptr, $($Long::valueOf(changeID))));
	$nc(this->support)->queueEvent(e, this->namingListeners);
}

void NamingEventNotifier::fireObjectRemoved($Binding* oldBd, int64_t changeID) {
	$useLocalCurrentObjectStackCache();
	if (this->namingListeners == nullptr || $nc(this->namingListeners)->size() == 0) {
		return;
	}
	$var($NamingEvent, e, $new($NamingEvent, this->eventSrc, $NamingEvent::OBJECT_REMOVED, nullptr, oldBd, $($Long::valueOf(changeID))));
	$nc(this->support)->queueEvent(e, this->namingListeners);
}

void NamingEventNotifier::fireObjectChanged($Binding* newBd, int64_t changeID) {
	$useLocalCurrentObjectStackCache();
	if (this->namingListeners == nullptr || $nc(this->namingListeners)->size() == 0) {
		return;
	}
	$var($String, var$0, $nc(newBd)->getName());
	$var($Binding, oldBd, $new($Binding, var$0, ($Object*)nullptr, newBd->isRelative()));
	$var($NamingEvent, e, $new($NamingEvent, this->eventSrc, $NamingEvent::OBJECT_CHANGED, newBd, oldBd, $($Long::valueOf(changeID))));
	$nc(this->support)->queueEvent(e, this->namingListeners);
}

void NamingEventNotifier::fireObjectRenamed($Binding* newBd, $String* oldDN, int64_t changeID) {
	$useLocalCurrentObjectStackCache();
	if (this->namingListeners == nullptr || $nc(this->namingListeners)->size() == 0) {
		return;
	}
	$var($Binding, oldBd, nullptr);
	try {
		$var($LdapName, dn, $new($LdapName, oldDN));
		if (dn->startsWith($nc(this->context)->currentParsedDN)) {
			$var($String, relDN, $nc($of($(dn->getSuffix($nc($nc(this->context)->currentParsedDN)->size()))))->toString());
			$assign(oldBd, $new($Binding, relDN, nullptr));
		}
	} catch ($NamingException&) {
		$catch();
	}
	if (oldBd == nullptr) {
		$assign(oldBd, $new($Binding, oldDN, ($Object*)nullptr, false));
	}
	$var($NamingEvent, e, $new($NamingEvent, this->eventSrc, $NamingEvent::OBJECT_RENAMED, newBd, oldBd, $($Long::valueOf(changeID))));
	$nc(this->support)->queueEvent(e, this->namingListeners);
}

void NamingEventNotifier::fireNamingException($NamingException* e) {
	if (this->namingListeners == nullptr || $nc(this->namingListeners)->size() == 0) {
		return;
	}
	$var($NamingExceptionEvent, evt, $new($NamingExceptionEvent, this->eventSrc, e));
	$nc(this->support)->queueEvent(evt, this->namingListeners);
}

NamingEventNotifier::NamingEventNotifier() {
}

$Class* NamingEventNotifier::load$($String* name, bool initialize) {
	$loadClass(NamingEventNotifier, name, initialize, &_NamingEventNotifier_ClassInfo_, allocate$NamingEventNotifier);
	return class$;
}

$Class* NamingEventNotifier::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com