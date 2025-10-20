#include <java.naming.h>

#include <java.base.h>
#include <java.security.sasl.h>
#include <java.logging.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <com/sun/jndi/ldap/AbstractLdapNamingEnumeration.h>
#include <com/sun/jndi/ldap/BasicControl.h>
#include <com/sun/jndi/ldap/Ber.h>
#include <com/sun/jndi/ldap/Ber$DecodeException.h>
#include <com/sun/jndi/ldap/Ber$EncodeException.h>
#include <com/sun/jndi/ldap/BerDecoder.h>
#include <com/sun/jndi/ldap/BerEncoder.h>
#include <com/sun/jndi/ldap/BindingWithControls.h>
#include <com/sun/jndi/ldap/ClientId.h>
#include <com/sun/jndi/ldap/Connection.h>
#include <com/sun/jndi/ldap/Connection$HandshakeListener.h>
#include <com/sun/jndi/ldap/DefaultLdapDnsProvider.h>
#include <com/sun/jndi/ldap/DefaultResponseControlFactory.h>
#include <com/sun/jndi/ldap/DigestClientId.h>
#include <com/sun/jndi/ldap/EntryChangeResponseControl.h>
#include <com/sun/jndi/ldap/EventQueue.h>
#include <com/sun/jndi/ldap/EventQueue$QueueElement.h>
#include <com/sun/jndi/ldap/EventSupport.h>
#include <com/sun/jndi/ldap/Filter.h>
#include <com/sun/jndi/ldap/LdapAttribute.h>
#include <com/sun/jndi/ldap/LdapBindingEnumeration.h>
#include <com/sun/jndi/ldap/LdapClient.h>
#include <com/sun/jndi/ldap/LdapClientFactory.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/LdapCtx$SearchArgs.h>
#include <com/sun/jndi/ldap/LdapCtxFactory.h>
#include <com/sun/jndi/ldap/LdapDnsProviderService.h>
#include <com/sun/jndi/ldap/LdapEntry.h>
#include <com/sun/jndi/ldap/LdapName.h>
#include <com/sun/jndi/ldap/LdapName$1.h>
#include <com/sun/jndi/ldap/LdapName$DnParser.h>
#include <com/sun/jndi/ldap/LdapName$Rdn.h>
#include <com/sun/jndi/ldap/LdapName$TypeAndValue.h>
#include <com/sun/jndi/ldap/LdapNameParser.h>
#include <com/sun/jndi/ldap/LdapNamingEnumeration.h>
#include <com/sun/jndi/ldap/LdapPoolManager.h>
#include <com/sun/jndi/ldap/LdapPoolManager$1.h>
#include <com/sun/jndi/ldap/LdapReferralContext.h>
#include <com/sun/jndi/ldap/LdapReferralException.h>
#include <com/sun/jndi/ldap/LdapRequest.h>
#include <com/sun/jndi/ldap/LdapResult.h>
#include <com/sun/jndi/ldap/LdapSchemaCtx.h>
#include <com/sun/jndi/ldap/LdapSchemaCtx$SchemaInfo.h>
#include <com/sun/jndi/ldap/LdapSchemaParser.h>
#include <com/sun/jndi/ldap/LdapSearchEnumeration.h>
#include <com/sun/jndi/ldap/LdapURL.h>
#include <com/sun/jndi/ldap/ManageReferralControl.h>
#include <com/sun/jndi/ldap/NameClassPairWithControls.h>
#include <com/sun/jndi/ldap/NamingEventNotifier.h>
#include <com/sun/jndi/ldap/NotifierArgs.h>
#include <com/sun/jndi/ldap/Obj.h>
#include <com/sun/jndi/ldap/Obj$LoaderInputStream.h>
#include <com/sun/jndi/ldap/PersistentSearchControl.h>
#include <com/sun/jndi/ldap/ReferralEnumeration.h>
#include <com/sun/jndi/ldap/SearchResultWithControls.h>
#include <com/sun/jndi/ldap/ServiceLocator.h>
#include <com/sun/jndi/ldap/ServiceLocator$SrvRecord.h>
#include <com/sun/jndi/ldap/SimpleClientId.h>
#include <com/sun/jndi/ldap/UnsolicitedResponseImpl.h>
#include <com/sun/jndi/ldap/VersionHelper.h>
#include <com/sun/jndi/ldap/ext/StartTlsResponseImpl.h>
#include <com/sun/jndi/ldap/pool/ConnectionDesc.h>
#include <com/sun/jndi/ldap/pool/Connections.h>
#include <com/sun/jndi/ldap/pool/ConnectionsRef.h>
#include <com/sun/jndi/ldap/pool/ConnectionsWeakRef.h>
#include <com/sun/jndi/ldap/pool/Pool.h>
#include <com/sun/jndi/ldap/pool/PoolCallback.h>
#include <com/sun/jndi/ldap/pool/PoolCleaner.h>
#include <com/sun/jndi/ldap/pool/PooledConnection.h>
#include <com/sun/jndi/ldap/pool/PooledConnectionFactory.h>
#include <com/sun/jndi/ldap/sasl/DefaultCallbackHandler.h>
#include <com/sun/jndi/ldap/sasl/LdapSasl.h>
#include <com/sun/jndi/ldap/sasl/SaslInputStream.h>
#include <com/sun/jndi/ldap/sasl/SaslOutputStream.h>
#include <com/sun/jndi/ldap/sasl/TlsChannelBinding.h>
#include <com/sun/jndi/ldap/sasl/TlsChannelBinding$TlsChannelBindingType.h>
#include <com/sun/jndi/toolkit/ctx/AtomicContext.h>
#include <com/sun/jndi/toolkit/ctx/AtomicContext$1.h>
#include <com/sun/jndi/toolkit/ctx/AtomicContext$2.h>
#include <com/sun/jndi/toolkit/ctx/AtomicDirContext.h>
#include <com/sun/jndi/toolkit/ctx/ComponentContext.h>
#include <com/sun/jndi/toolkit/ctx/ComponentContext$1.h>
#include <com/sun/jndi/toolkit/ctx/ComponentContext$2.h>
#include <com/sun/jndi/toolkit/ctx/ComponentDirContext.h>
#include <com/sun/jndi/toolkit/ctx/Continuation.h>
#include <com/sun/jndi/toolkit/ctx/HeadTail.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeContext.h>
#include <com/sun/jndi/toolkit/ctx/PartialCompositeDirContext.h>
#include <com/sun/jndi/toolkit/ctx/StringHeadTail.h>
#include <com/sun/jndi/toolkit/dir/AttrFilter.h>
#include <com/sun/jndi/toolkit/dir/ContainmentFilter.h>
#include <com/sun/jndi/toolkit/dir/ContextEnumerator.h>
#include <com/sun/jndi/toolkit/dir/DirSearch.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$BaseFlatNames.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$FlatBindings.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$FlatNames.h>
#include <com/sun/jndi/toolkit/dir/HierMemDirCtx$HierContextEnumerator.h>
#include <com/sun/jndi/toolkit/dir/HierarchicalName.h>
#include <com/sun/jndi/toolkit/dir/HierarchicalName$1.h>
#include <com/sun/jndi/toolkit/dir/HierarchicalNameParser.h>
#include <com/sun/jndi/toolkit/dir/LazySearchEnumerationImpl.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter$AtomicFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter$CompoundFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter$NotFilter.h>
#include <com/sun/jndi/toolkit/dir/SearchFilter$StringFilter.h>
#include <com/sun/jndi/toolkit/url/GenericURLContext.h>
#include <com/sun/jndi/toolkit/url/GenericURLDirContext.h>
#include <com/sun/jndi/toolkit/url/Uri.h>
#include <com/sun/jndi/toolkit/url/UrlUtil.h>
#include <com/sun/jndi/url/ldap/ldapURLContext.h>
#include <com/sun/jndi/url/ldap/ldapURLContextFactory.h>
#include <com/sun/jndi/url/ldaps/ldapsURLContextFactory.h>
#include <com/sun/naming/internal/FactoryEnumeration.h>
#include <com/sun/naming/internal/NamedWeakReference.h>
#include <com/sun/naming/internal/ObjectFactoriesFilter.h>
#include <com/sun/naming/internal/ObjectFactoriesFilter$FactoryInfo.h>
#include <com/sun/naming/internal/ResourceManager.h>
#include <com/sun/naming/internal/VersionHelper.h>
#include <com/sun/naming/internal/VersionHelper$InputStreamEnumeration.h>
#include <javax/naming/AuthenticationException.h>
#include <javax/naming/AuthenticationNotSupportedException.h>
#include <javax/naming/BinaryRefAddr.h>
#include <javax/naming/Binding.h>
#include <javax/naming/CannotProceedException.h>
#include <javax/naming/CommunicationException.h>
#include <javax/naming/CompositeName.h>
#include <javax/naming/CompoundName.h>
#include <javax/naming/ConfigurationException.h>
#include <javax/naming/Context.h>
#include <javax/naming/ContextNotEmptyException.h>
#include <javax/naming/InitialContext.h>
#include <javax/naming/InsufficientResourcesException.h>
#include <javax/naming/InterruptedNamingException.h>
#include <javax/naming/InvalidNameException.h>
#include <javax/naming/LimitExceededException.h>
#include <javax/naming/LinkException.h>
#include <javax/naming/LinkLoopException.h>
#include <javax/naming/LinkRef.h>
#include <javax/naming/MalformedLinkException.h>
#include <javax/naming/Name.h>
#include <javax/naming/NameAlreadyBoundException.h>
#include <javax/naming/NameClassPair.h>
#include <javax/naming/NameImpl.h>
#include <javax/naming/NameImplEnumerator.h>
#include <javax/naming/NameNotFoundException.h>
#include <javax/naming/NameParser.h>
#include <javax/naming/NamingEnumeration.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/NamingSecurityException.h>
#include <javax/naming/NoInitialContextException.h>
#include <javax/naming/NoPermissionException.h>
#include <javax/naming/NotContextException.h>
#include <javax/naming/OperationNotSupportedException.h>
#include <javax/naming/PartialResultException.h>
#include <javax/naming/RefAddr.h>
#include <javax/naming/Reference.h>
#include <javax/naming/Referenceable.h>
#include <javax/naming/ReferralException.h>
#include <javax/naming/ServiceUnavailableException.h>
#include <javax/naming/SizeLimitExceededException.h>
#include <javax/naming/StringRefAddr.h>
#include <javax/naming/TimeLimitExceededException.h>
#include <javax/naming/directory/Attribute.h>
#include <javax/naming/directory/AttributeInUseException.h>
#include <javax/naming/directory/AttributeModificationException.h>
#include <javax/naming/directory/Attributes.h>
#include <javax/naming/directory/BasicAttribute.h>
#include <javax/naming/directory/BasicAttribute$ValuesEnumImpl.h>
#include <javax/naming/directory/BasicAttributes.h>
#include <javax/naming/directory/BasicAttributes$AttrEnumImpl.h>
#include <javax/naming/directory/BasicAttributes$IDEnumImpl.h>
#include <javax/naming/directory/DirContext.h>
#include <javax/naming/directory/InitialDirContext.h>
#include <javax/naming/directory/InvalidAttributeIdentifierException.h>
#include <javax/naming/directory/InvalidAttributeValueException.h>
#include <javax/naming/directory/InvalidAttributesException.h>
#include <javax/naming/directory/InvalidSearchControlsException.h>
#include <javax/naming/directory/InvalidSearchFilterException.h>
#include <javax/naming/directory/ModificationItem.h>
#include <javax/naming/directory/NoSuchAttributeException.h>
#include <javax/naming/directory/SchemaViolationException.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/directory/SearchResult.h>
#include <javax/naming/event/EventContext.h>
#include <javax/naming/event/EventDirContext.h>
#include <javax/naming/event/NamespaceChangeListener.h>
#include <javax/naming/event/NamingEvent.h>
#include <javax/naming/event/NamingExceptionEvent.h>
#include <javax/naming/event/NamingListener.h>
#include <javax/naming/event/ObjectChangeListener.h>
#include <javax/naming/ldap/BasicControl.h>
#include <javax/naming/ldap/Control.h>
#include <javax/naming/ldap/ControlFactory.h>
#include <javax/naming/ldap/ExtendedRequest.h>
#include <javax/naming/ldap/ExtendedResponse.h>
#include <javax/naming/ldap/HasControls.h>
#include <javax/naming/ldap/InitialLdapContext.h>
#include <javax/naming/ldap/LdapContext.h>
#include <javax/naming/ldap/LdapName.h>
#include <javax/naming/ldap/LdapName$1.h>
#include <javax/naming/ldap/LdapReferralException.h>
#include <javax/naming/ldap/ManageReferralControl.h>
#include <javax/naming/ldap/PagedResultsControl.h>
#include <javax/naming/ldap/PagedResultsResponseControl.h>
#include <javax/naming/ldap/Rdn.h>
#include <javax/naming/ldap/Rdn$RdnEntry.h>
#include <javax/naming/ldap/Rfc2253Parser.h>
#include <javax/naming/ldap/SortControl.h>
#include <javax/naming/ldap/SortKey.h>
#include <javax/naming/ldap/SortResponseControl.h>
#include <javax/naming/ldap/StartTlsRequest.h>
#include <javax/naming/ldap/StartTlsResponse.h>
#include <javax/naming/ldap/UnsolicitedNotification.h>
#include <javax/naming/ldap/UnsolicitedNotificationEvent.h>
#include <javax/naming/ldap/UnsolicitedNotificationListener.h>
#include <javax/naming/ldap/spi/LdapDnsProvider.h>
#include <javax/naming/ldap/spi/LdapDnsProviderResult.h>
#include <javax/naming/spi/ContinuationContext.h>
#include <javax/naming/spi/ContinuationDirContext.h>
#include <javax/naming/spi/DirContextNamePair.h>
#include <javax/naming/spi/DirContextStringPair.h>
#include <javax/naming/spi/DirObjectFactory.h>
#include <javax/naming/spi/DirStateFactory.h>
#include <javax/naming/spi/DirStateFactory$Result.h>
#include <javax/naming/spi/DirectoryManager.h>
#include <javax/naming/spi/InitialContextFactory.h>
#include <javax/naming/spi/InitialContextFactoryBuilder.h>
#include <javax/naming/spi/NamingManager.h>
#include <javax/naming/spi/NamingManager$FactoryInitializationError.h>
#include <javax/naming/spi/ObjectFactory.h>
#include <javax/naming/spi/ObjectFactoryBuilder.h>
#include <javax/naming/spi/ResolveResult.h>
#include <javax/naming/spi/Resolver.h>
#include <javax/naming/spi/StateFactory.h>
#include <sun/security/provider/certpath/ldap/JdkLDAP.h>
#include <sun/security/provider/certpath/ldap/JdkLDAP$ProviderService.h>
#include <sun/security/provider/certpath/ldap/LDAPCertStore.h>
#include <sun/security/provider/certpath/ldap/LDAPCertStore$Key.h>
#include <sun/security/provider/certpath/ldap/LDAPCertStoreImpl.h>
#include <sun/security/provider/certpath/ldap/LDAPCertStoreImpl$LDAPRequest.h>


#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _java$naming_classes_[] = {
	$classEntry("com.sun.jndi.ldap.AbstractLdapNamingEnumeration", ::com::sun::jndi::ldap::AbstractLdapNamingEnumeration),
	$classEntry("com.sun.jndi.ldap.BasicControl", ::com::sun::jndi::ldap::BasicControl),
	$classEntry("com.sun.jndi.ldap.Ber", ::com::sun::jndi::ldap::Ber),
	$classEntry("com.sun.jndi.ldap.Ber$DecodeException", ::com::sun::jndi::ldap::Ber$DecodeException),
	$classEntry("com.sun.jndi.ldap.Ber$EncodeException", ::com::sun::jndi::ldap::Ber$EncodeException),
	$classEntry("com.sun.jndi.ldap.BerDecoder", ::com::sun::jndi::ldap::BerDecoder),
	$classEntry("com.sun.jndi.ldap.BerEncoder", ::com::sun::jndi::ldap::BerEncoder),
	$classEntry("com.sun.jndi.ldap.BindingWithControls", ::com::sun::jndi::ldap::BindingWithControls),
	$classEntry("com.sun.jndi.ldap.ClientId", ::com::sun::jndi::ldap::ClientId),
	$classEntry("com.sun.jndi.ldap.Connection", ::com::sun::jndi::ldap::Connection),
	$classEntry("com.sun.jndi.ldap.Connection$HandshakeListener", ::com::sun::jndi::ldap::Connection$HandshakeListener),
	$classEntry("com.sun.jndi.ldap.DefaultLdapDnsProvider", ::com::sun::jndi::ldap::DefaultLdapDnsProvider),
	$classEntry("com.sun.jndi.ldap.DefaultResponseControlFactory", ::com::sun::jndi::ldap::DefaultResponseControlFactory),
	$classEntry("com.sun.jndi.ldap.DigestClientId", ::com::sun::jndi::ldap::DigestClientId),
	$classEntry("com.sun.jndi.ldap.EntryChangeResponseControl", ::com::sun::jndi::ldap::EntryChangeResponseControl),
	$classEntry("com.sun.jndi.ldap.EventQueue", ::com::sun::jndi::ldap::EventQueue),
	$classEntry("com.sun.jndi.ldap.EventQueue$QueueElement", ::com::sun::jndi::ldap::EventQueue$QueueElement),
	$classEntry("com.sun.jndi.ldap.EventSupport", ::com::sun::jndi::ldap::EventSupport),
	$classEntry("com.sun.jndi.ldap.Filter", ::com::sun::jndi::ldap::Filter),
	$classEntry("com.sun.jndi.ldap.LdapAttribute", ::com::sun::jndi::ldap::LdapAttribute),
	$classEntry("com.sun.jndi.ldap.LdapBindingEnumeration", ::com::sun::jndi::ldap::LdapBindingEnumeration),
	$classEntry("com.sun.jndi.ldap.LdapClient", ::com::sun::jndi::ldap::LdapClient),
	$classEntry("com.sun.jndi.ldap.LdapClientFactory", ::com::sun::jndi::ldap::LdapClientFactory),
	$classEntry("com.sun.jndi.ldap.LdapCtx", ::com::sun::jndi::ldap::LdapCtx),
	$classEntry("com.sun.jndi.ldap.LdapCtx$SearchArgs", ::com::sun::jndi::ldap::LdapCtx$SearchArgs),
	$classEntry("com.sun.jndi.ldap.LdapCtxFactory", ::com::sun::jndi::ldap::LdapCtxFactory),
	$classEntry("com.sun.jndi.ldap.LdapDnsProviderService", ::com::sun::jndi::ldap::LdapDnsProviderService),
	$classEntry("com.sun.jndi.ldap.LdapEntry", ::com::sun::jndi::ldap::LdapEntry),
	$classEntry("com.sun.jndi.ldap.LdapName", ::com::sun::jndi::ldap::LdapName),
	$classEntry("com.sun.jndi.ldap.LdapName$1", ::com::sun::jndi::ldap::LdapName$1),
	$classEntry("com.sun.jndi.ldap.LdapName$DnParser", ::com::sun::jndi::ldap::LdapName$DnParser),
	$classEntry("com.sun.jndi.ldap.LdapName$Rdn", ::com::sun::jndi::ldap::LdapName$Rdn),
	$classEntry("com.sun.jndi.ldap.LdapName$TypeAndValue", ::com::sun::jndi::ldap::LdapName$TypeAndValue),
	$classEntry("com.sun.jndi.ldap.LdapNameParser", ::com::sun::jndi::ldap::LdapNameParser),
	$classEntry("com.sun.jndi.ldap.LdapNamingEnumeration", ::com::sun::jndi::ldap::LdapNamingEnumeration),
	$classEntry("com.sun.jndi.ldap.LdapPoolManager", ::com::sun::jndi::ldap::LdapPoolManager),
	$classEntry("com.sun.jndi.ldap.LdapPoolManager$1", ::com::sun::jndi::ldap::LdapPoolManager$1),
	$classEntry("com.sun.jndi.ldap.LdapReferralContext", ::com::sun::jndi::ldap::LdapReferralContext),
	$classEntry("com.sun.jndi.ldap.LdapReferralException", ::com::sun::jndi::ldap::LdapReferralException),
	$classEntry("com.sun.jndi.ldap.LdapRequest", ::com::sun::jndi::ldap::LdapRequest),
	$classEntry("com.sun.jndi.ldap.LdapResult", ::com::sun::jndi::ldap::LdapResult),
	$classEntry("com.sun.jndi.ldap.LdapSchemaCtx", ::com::sun::jndi::ldap::LdapSchemaCtx),
	$classEntry("com.sun.jndi.ldap.LdapSchemaCtx$SchemaInfo", ::com::sun::jndi::ldap::LdapSchemaCtx$SchemaInfo),
	$classEntry("com.sun.jndi.ldap.LdapSchemaParser", ::com::sun::jndi::ldap::LdapSchemaParser),
	$classEntry("com.sun.jndi.ldap.LdapSearchEnumeration", ::com::sun::jndi::ldap::LdapSearchEnumeration),
	$classEntry("com.sun.jndi.ldap.LdapURL", ::com::sun::jndi::ldap::LdapURL),
	$classEntry("com.sun.jndi.ldap.ManageReferralControl", ::com::sun::jndi::ldap::ManageReferralControl),
	$classEntry("com.sun.jndi.ldap.NameClassPairWithControls", ::com::sun::jndi::ldap::NameClassPairWithControls),
	$classEntry("com.sun.jndi.ldap.NamingEventNotifier", ::com::sun::jndi::ldap::NamingEventNotifier),
	$classEntry("com.sun.jndi.ldap.NotifierArgs", ::com::sun::jndi::ldap::NotifierArgs),
	$classEntry("com.sun.jndi.ldap.Obj", ::com::sun::jndi::ldap::Obj),
	$classEntry("com.sun.jndi.ldap.Obj$LoaderInputStream", ::com::sun::jndi::ldap::Obj$LoaderInputStream),
	$classEntry("com.sun.jndi.ldap.PersistentSearchControl", ::com::sun::jndi::ldap::PersistentSearchControl),
	$classEntry("com.sun.jndi.ldap.ReferralEnumeration", ::com::sun::jndi::ldap::ReferralEnumeration),
	$classEntry("com.sun.jndi.ldap.SearchResultWithControls", ::com::sun::jndi::ldap::SearchResultWithControls),
	$classEntry("com.sun.jndi.ldap.ServiceLocator", ::com::sun::jndi::ldap::ServiceLocator),
	$classEntry("com.sun.jndi.ldap.ServiceLocator$SrvRecord", ::com::sun::jndi::ldap::ServiceLocator$SrvRecord),
	$classEntry("com.sun.jndi.ldap.SimpleClientId", ::com::sun::jndi::ldap::SimpleClientId),
	$classEntry("com.sun.jndi.ldap.UnsolicitedResponseImpl", ::com::sun::jndi::ldap::UnsolicitedResponseImpl),
	$classEntry("com.sun.jndi.ldap.VersionHelper", ::com::sun::jndi::ldap::VersionHelper),
	$classEntry("com.sun.jndi.ldap.ext.StartTlsResponseImpl", ::com::sun::jndi::ldap::ext::StartTlsResponseImpl),
	$classEntry("com.sun.jndi.ldap.pool.ConnectionDesc", ::com::sun::jndi::ldap::pool::ConnectionDesc),
	$classEntry("com.sun.jndi.ldap.pool.Connections", ::com::sun::jndi::ldap::pool::Connections),
	$classEntry("com.sun.jndi.ldap.pool.ConnectionsRef", ::com::sun::jndi::ldap::pool::ConnectionsRef),
	$classEntry("com.sun.jndi.ldap.pool.ConnectionsWeakRef", ::com::sun::jndi::ldap::pool::ConnectionsWeakRef),
	$classEntry("com.sun.jndi.ldap.pool.Pool", ::com::sun::jndi::ldap::pool::Pool),
	$classEntry("com.sun.jndi.ldap.pool.PoolCallback", ::com::sun::jndi::ldap::pool::PoolCallback),
	$classEntry("com.sun.jndi.ldap.pool.PoolCleaner", ::com::sun::jndi::ldap::pool::PoolCleaner),
	$classEntry("com.sun.jndi.ldap.pool.PooledConnection", ::com::sun::jndi::ldap::pool::PooledConnection),
	$classEntry("com.sun.jndi.ldap.pool.PooledConnectionFactory", ::com::sun::jndi::ldap::pool::PooledConnectionFactory),
	$classEntry("com.sun.jndi.ldap.sasl.DefaultCallbackHandler", ::com::sun::jndi::ldap::sasl::DefaultCallbackHandler),
	$classEntry("com.sun.jndi.ldap.sasl.LdapSasl", ::com::sun::jndi::ldap::sasl::LdapSasl),
	$classEntry("com.sun.jndi.ldap.sasl.SaslInputStream", ::com::sun::jndi::ldap::sasl::SaslInputStream),
	$classEntry("com.sun.jndi.ldap.sasl.SaslOutputStream", ::com::sun::jndi::ldap::sasl::SaslOutputStream),
	$classEntry("com.sun.jndi.ldap.sasl.TlsChannelBinding", ::com::sun::jndi::ldap::sasl::TlsChannelBinding),
	$classEntry("com.sun.jndi.ldap.sasl.TlsChannelBinding$TlsChannelBindingType", ::com::sun::jndi::ldap::sasl::TlsChannelBinding$TlsChannelBindingType),
	$classEntry("com.sun.jndi.toolkit.ctx.AtomicContext", ::com::sun::jndi::toolkit::ctx::AtomicContext),
	$classEntry("com.sun.jndi.toolkit.ctx.AtomicContext$1", ::com::sun::jndi::toolkit::ctx::AtomicContext$1),
	$classEntry("com.sun.jndi.toolkit.ctx.AtomicContext$2", ::com::sun::jndi::toolkit::ctx::AtomicContext$2),
	$classEntry("com.sun.jndi.toolkit.ctx.AtomicDirContext", ::com::sun::jndi::toolkit::ctx::AtomicDirContext),
	$classEntry("com.sun.jndi.toolkit.ctx.ComponentContext", ::com::sun::jndi::toolkit::ctx::ComponentContext),
	$classEntry("com.sun.jndi.toolkit.ctx.ComponentContext$1", ::com::sun::jndi::toolkit::ctx::ComponentContext$1),
	$classEntry("com.sun.jndi.toolkit.ctx.ComponentContext$2", ::com::sun::jndi::toolkit::ctx::ComponentContext$2),
	$classEntry("com.sun.jndi.toolkit.ctx.ComponentDirContext", ::com::sun::jndi::toolkit::ctx::ComponentDirContext),
	$classEntry("com.sun.jndi.toolkit.ctx.Continuation", ::com::sun::jndi::toolkit::ctx::Continuation),
	$classEntry("com.sun.jndi.toolkit.ctx.HeadTail", ::com::sun::jndi::toolkit::ctx::HeadTail),
	$classEntry("com.sun.jndi.toolkit.ctx.PartialCompositeContext", ::com::sun::jndi::toolkit::ctx::PartialCompositeContext),
	$classEntry("com.sun.jndi.toolkit.ctx.PartialCompositeDirContext", ::com::sun::jndi::toolkit::ctx::PartialCompositeDirContext),
	$classEntry("com.sun.jndi.toolkit.ctx.StringHeadTail", ::com::sun::jndi::toolkit::ctx::StringHeadTail),
	$classEntry("com.sun.jndi.toolkit.dir.AttrFilter", ::com::sun::jndi::toolkit::dir::AttrFilter),
	$classEntry("com.sun.jndi.toolkit.dir.ContainmentFilter", ::com::sun::jndi::toolkit::dir::ContainmentFilter),
	$classEntry("com.sun.jndi.toolkit.dir.ContextEnumerator", ::com::sun::jndi::toolkit::dir::ContextEnumerator),
	$classEntry("com.sun.jndi.toolkit.dir.DirSearch", ::com::sun::jndi::toolkit::dir::DirSearch),
	$classEntry("com.sun.jndi.toolkit.dir.HierMemDirCtx", ::com::sun::jndi::toolkit::dir::HierMemDirCtx),
	$classEntry("com.sun.jndi.toolkit.dir.HierMemDirCtx$BaseFlatNames", ::com::sun::jndi::toolkit::dir::HierMemDirCtx$BaseFlatNames),
	$classEntry("com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatBindings", ::com::sun::jndi::toolkit::dir::HierMemDirCtx$FlatBindings),
	$classEntry("com.sun.jndi.toolkit.dir.HierMemDirCtx$FlatNames", ::com::sun::jndi::toolkit::dir::HierMemDirCtx$FlatNames),
	$classEntry("com.sun.jndi.toolkit.dir.HierMemDirCtx$HierContextEnumerator", ::com::sun::jndi::toolkit::dir::HierMemDirCtx$HierContextEnumerator),
	$classEntry("com.sun.jndi.toolkit.dir.HierarchicalName", ::com::sun::jndi::toolkit::dir::HierarchicalName),
	$classEntry("com.sun.jndi.toolkit.dir.HierarchicalName$1", ::com::sun::jndi::toolkit::dir::HierarchicalName$1),
	$classEntry("com.sun.jndi.toolkit.dir.HierarchicalNameParser", ::com::sun::jndi::toolkit::dir::HierarchicalNameParser),
	$classEntry("com.sun.jndi.toolkit.dir.LazySearchEnumerationImpl", ::com::sun::jndi::toolkit::dir::LazySearchEnumerationImpl),
	$classEntry("com.sun.jndi.toolkit.dir.SearchFilter", ::com::sun::jndi::toolkit::dir::SearchFilter),
	$classEntry("com.sun.jndi.toolkit.dir.SearchFilter$AtomicFilter", ::com::sun::jndi::toolkit::dir::SearchFilter$AtomicFilter),
	$classEntry("com.sun.jndi.toolkit.dir.SearchFilter$CompoundFilter", ::com::sun::jndi::toolkit::dir::SearchFilter$CompoundFilter),
	$classEntry("com.sun.jndi.toolkit.dir.SearchFilter$NotFilter", ::com::sun::jndi::toolkit::dir::SearchFilter$NotFilter),
	$classEntry("com.sun.jndi.toolkit.dir.SearchFilter$StringFilter", ::com::sun::jndi::toolkit::dir::SearchFilter$StringFilter),
	$classEntry("com.sun.jndi.toolkit.url.GenericURLContext", ::com::sun::jndi::toolkit::url::GenericURLContext),
	$classEntry("com.sun.jndi.toolkit.url.GenericURLDirContext", ::com::sun::jndi::toolkit::url::GenericURLDirContext),
	$classEntry("com.sun.jndi.toolkit.url.Uri", ::com::sun::jndi::toolkit::url::Uri),
	$classEntry("com.sun.jndi.toolkit.url.UrlUtil", ::com::sun::jndi::toolkit::url::UrlUtil),
	$classEntry("com.sun.jndi.url.ldap.ldapURLContext", ::com::sun::jndi::url::ldap::ldapURLContext),
	$classEntry("com.sun.jndi.url.ldap.ldapURLContextFactory", ::com::sun::jndi::url::ldap::ldapURLContextFactory),
	$classEntry("com.sun.jndi.url.ldaps.ldapsURLContextFactory", ::com::sun::jndi::url::ldaps::ldapsURLContextFactory),
	$classEntry("com.sun.naming.internal.FactoryEnumeration", ::com::sun::naming::internal::FactoryEnumeration),
	$classEntry("com.sun.naming.internal.NamedWeakReference", ::com::sun::naming::internal::NamedWeakReference),
	$classEntry("com.sun.naming.internal.ObjectFactoriesFilter", ::com::sun::naming::internal::ObjectFactoriesFilter),
	$classEntry("com.sun.naming.internal.ObjectFactoriesFilter$FactoryInfo", ::com::sun::naming::internal::ObjectFactoriesFilter$FactoryInfo),
	$classEntry("com.sun.naming.internal.ResourceManager", ::com::sun::naming::internal::ResourceManager),
	$classEntry("com.sun.naming.internal.VersionHelper", ::com::sun::naming::internal::VersionHelper),
	$classEntry("com.sun.naming.internal.VersionHelper$InputStreamEnumeration", ::com::sun::naming::internal::VersionHelper$InputStreamEnumeration),
	$classEntry("javax.naming.AuthenticationException", ::javax::naming::AuthenticationException),
	$classEntry("javax.naming.AuthenticationNotSupportedException", ::javax::naming::AuthenticationNotSupportedException),
	$classEntry("javax.naming.BinaryRefAddr", ::javax::naming::BinaryRefAddr),
	$classEntry("javax.naming.Binding", ::javax::naming::Binding),
	$classEntry("javax.naming.CannotProceedException", ::javax::naming::CannotProceedException),
	$classEntry("javax.naming.CommunicationException", ::javax::naming::CommunicationException),
	$classEntry("javax.naming.CompositeName", ::javax::naming::CompositeName),
	$classEntry("javax.naming.CompoundName", ::javax::naming::CompoundName),
	$classEntry("javax.naming.ConfigurationException", ::javax::naming::ConfigurationException),
	$classEntry("javax.naming.Context", ::javax::naming::Context),
	$classEntry("javax.naming.ContextNotEmptyException", ::javax::naming::ContextNotEmptyException),
	$classEntry("javax.naming.InitialContext", ::javax::naming::InitialContext),
	$classEntry("javax.naming.InsufficientResourcesException", ::javax::naming::InsufficientResourcesException),
	$classEntry("javax.naming.InterruptedNamingException", ::javax::naming::InterruptedNamingException),
	$classEntry("javax.naming.InvalidNameException", ::javax::naming::InvalidNameException),
	$classEntry("javax.naming.LimitExceededException", ::javax::naming::LimitExceededException),
	$classEntry("javax.naming.LinkException", ::javax::naming::LinkException),
	$classEntry("javax.naming.LinkLoopException", ::javax::naming::LinkLoopException),
	$classEntry("javax.naming.LinkRef", ::javax::naming::LinkRef),
	$classEntry("javax.naming.MalformedLinkException", ::javax::naming::MalformedLinkException),
	$classEntry("javax.naming.Name", ::javax::naming::Name),
	$classEntry("javax.naming.NameAlreadyBoundException", ::javax::naming::NameAlreadyBoundException),
	$classEntry("javax.naming.NameClassPair", ::javax::naming::NameClassPair),
	$classEntry("javax.naming.NameImpl", ::javax::naming::NameImpl),
	$classEntry("javax.naming.NameImplEnumerator", ::javax::naming::NameImplEnumerator),
	$classEntry("javax.naming.NameNotFoundException", ::javax::naming::NameNotFoundException),
	$classEntry("javax.naming.NameParser", ::javax::naming::NameParser),
	$classEntry("javax.naming.NamingEnumeration", ::javax::naming::NamingEnumeration),
	$classEntry("javax.naming.NamingException", ::javax::naming::NamingException),
	$classEntry("javax.naming.NamingSecurityException", ::javax::naming::NamingSecurityException),
	$classEntry("javax.naming.NoInitialContextException", ::javax::naming::NoInitialContextException),
	$classEntry("javax.naming.NoPermissionException", ::javax::naming::NoPermissionException),
	$classEntry("javax.naming.NotContextException", ::javax::naming::NotContextException),
	$classEntry("javax.naming.OperationNotSupportedException", ::javax::naming::OperationNotSupportedException),
	$classEntry("javax.naming.PartialResultException", ::javax::naming::PartialResultException),
	$classEntry("javax.naming.RefAddr", ::javax::naming::RefAddr),
	$classEntry("javax.naming.Reference", ::javax::naming::Reference),
	$classEntry("javax.naming.Referenceable", ::javax::naming::Referenceable),
	$classEntry("javax.naming.ReferralException", ::javax::naming::ReferralException),
	$classEntry("javax.naming.ServiceUnavailableException", ::javax::naming::ServiceUnavailableException),
	$classEntry("javax.naming.SizeLimitExceededException", ::javax::naming::SizeLimitExceededException),
	$classEntry("javax.naming.StringRefAddr", ::javax::naming::StringRefAddr),
	$classEntry("javax.naming.TimeLimitExceededException", ::javax::naming::TimeLimitExceededException),
	$classEntry("javax.naming.directory.Attribute", ::javax::naming::directory::Attribute),
	$classEntry("javax.naming.directory.AttributeInUseException", ::javax::naming::directory::AttributeInUseException),
	$classEntry("javax.naming.directory.AttributeModificationException", ::javax::naming::directory::AttributeModificationException),
	$classEntry("javax.naming.directory.Attributes", ::javax::naming::directory::Attributes),
	$classEntry("javax.naming.directory.BasicAttribute", ::javax::naming::directory::BasicAttribute),
	$classEntry("javax.naming.directory.BasicAttribute$ValuesEnumImpl", ::javax::naming::directory::BasicAttribute$ValuesEnumImpl),
	$classEntry("javax.naming.directory.BasicAttributes", ::javax::naming::directory::BasicAttributes),
	$classEntry("javax.naming.directory.BasicAttributes$AttrEnumImpl", ::javax::naming::directory::BasicAttributes$AttrEnumImpl),
	$classEntry("javax.naming.directory.BasicAttributes$IDEnumImpl", ::javax::naming::directory::BasicAttributes$IDEnumImpl),
	$classEntry("javax.naming.directory.DirContext", ::javax::naming::directory::DirContext),
	$classEntry("javax.naming.directory.InitialDirContext", ::javax::naming::directory::InitialDirContext),
	$classEntry("javax.naming.directory.InvalidAttributeIdentifierException", ::javax::naming::directory::InvalidAttributeIdentifierException),
	$classEntry("javax.naming.directory.InvalidAttributeValueException", ::javax::naming::directory::InvalidAttributeValueException),
	$classEntry("javax.naming.directory.InvalidAttributesException", ::javax::naming::directory::InvalidAttributesException),
	$classEntry("javax.naming.directory.InvalidSearchControlsException", ::javax::naming::directory::InvalidSearchControlsException),
	$classEntry("javax.naming.directory.InvalidSearchFilterException", ::javax::naming::directory::InvalidSearchFilterException),
	$classEntry("javax.naming.directory.ModificationItem", ::javax::naming::directory::ModificationItem),
	$classEntry("javax.naming.directory.NoSuchAttributeException", ::javax::naming::directory::NoSuchAttributeException),
	$classEntry("javax.naming.directory.SchemaViolationException", ::javax::naming::directory::SchemaViolationException),
	$classEntry("javax.naming.directory.SearchControls", ::javax::naming::directory::SearchControls),
	$classEntry("javax.naming.directory.SearchResult", ::javax::naming::directory::SearchResult),
	$classEntry("javax.naming.event.EventContext", ::javax::naming::event::EventContext),
	$classEntry("javax.naming.event.EventDirContext", ::javax::naming::event::EventDirContext),
	$classEntry("javax.naming.event.NamespaceChangeListener", ::javax::naming::event::NamespaceChangeListener),
	$classEntry("javax.naming.event.NamingEvent", ::javax::naming::event::NamingEvent),
	$classEntry("javax.naming.event.NamingExceptionEvent", ::javax::naming::event::NamingExceptionEvent),
	$classEntry("javax.naming.event.NamingListener", ::javax::naming::event::NamingListener),
	$classEntry("javax.naming.event.ObjectChangeListener", ::javax::naming::event::ObjectChangeListener),
	$classEntry("javax.naming.ldap.BasicControl", ::javax::naming::ldap::BasicControl),
	$classEntry("javax.naming.ldap.Control", ::javax::naming::ldap::Control),
	$classEntry("javax.naming.ldap.ControlFactory", ::javax::naming::ldap::ControlFactory),
	$classEntry("javax.naming.ldap.ExtendedRequest", ::javax::naming::ldap::ExtendedRequest),
	$classEntry("javax.naming.ldap.ExtendedResponse", ::javax::naming::ldap::ExtendedResponse),
	$classEntry("javax.naming.ldap.HasControls", ::javax::naming::ldap::HasControls),
	$classEntry("javax.naming.ldap.InitialLdapContext", ::javax::naming::ldap::InitialLdapContext),
	$classEntry("javax.naming.ldap.LdapContext", ::javax::naming::ldap::LdapContext),
	$classEntry("javax.naming.ldap.LdapName", ::javax::naming::ldap::LdapName),
	$classEntry("javax.naming.ldap.LdapName$1", ::javax::naming::ldap::LdapName$1),
	$classEntry("javax.naming.ldap.LdapReferralException", ::javax::naming::ldap::LdapReferralException),
	$classEntry("javax.naming.ldap.ManageReferralControl", ::javax::naming::ldap::ManageReferralControl),
	$classEntry("javax.naming.ldap.PagedResultsControl", ::javax::naming::ldap::PagedResultsControl),
	$classEntry("javax.naming.ldap.PagedResultsResponseControl", ::javax::naming::ldap::PagedResultsResponseControl),
	$classEntry("javax.naming.ldap.Rdn", ::javax::naming::ldap::Rdn),
	$classEntry("javax.naming.ldap.Rdn$RdnEntry", ::javax::naming::ldap::Rdn$RdnEntry),
	$classEntry("javax.naming.ldap.Rfc2253Parser", ::javax::naming::ldap::Rfc2253Parser),
	$classEntry("javax.naming.ldap.SortControl", ::javax::naming::ldap::SortControl),
	$classEntry("javax.naming.ldap.SortKey", ::javax::naming::ldap::SortKey),
	$classEntry("javax.naming.ldap.SortResponseControl", ::javax::naming::ldap::SortResponseControl),
	$classEntry("javax.naming.ldap.StartTlsRequest", ::javax::naming::ldap::StartTlsRequest),
	$classEntry("javax.naming.ldap.StartTlsResponse", ::javax::naming::ldap::StartTlsResponse),
	$classEntry("javax.naming.ldap.UnsolicitedNotification", ::javax::naming::ldap::UnsolicitedNotification),
	$classEntry("javax.naming.ldap.UnsolicitedNotificationEvent", ::javax::naming::ldap::UnsolicitedNotificationEvent),
	$classEntry("javax.naming.ldap.UnsolicitedNotificationListener", ::javax::naming::ldap::UnsolicitedNotificationListener),
	$classEntry("javax.naming.ldap.spi.LdapDnsProvider", ::javax::naming::ldap::spi::LdapDnsProvider),
	$classEntry("javax.naming.ldap.spi.LdapDnsProviderResult", ::javax::naming::ldap::spi::LdapDnsProviderResult),
	$classEntry("javax.naming.spi.ContinuationContext", ::javax::naming::spi::ContinuationContext),
	$classEntry("javax.naming.spi.ContinuationDirContext", ::javax::naming::spi::ContinuationDirContext),
	$classEntry("javax.naming.spi.DirContextNamePair", ::javax::naming::spi::DirContextNamePair),
	$classEntry("javax.naming.spi.DirContextStringPair", ::javax::naming::spi::DirContextStringPair),
	$classEntry("javax.naming.spi.DirObjectFactory", ::javax::naming::spi::DirObjectFactory),
	$classEntry("javax.naming.spi.DirStateFactory", ::javax::naming::spi::DirStateFactory),
	$classEntry("javax.naming.spi.DirStateFactory$Result", ::javax::naming::spi::DirStateFactory$Result),
	$classEntry("javax.naming.spi.DirectoryManager", ::javax::naming::spi::DirectoryManager),
	$classEntry("javax.naming.spi.InitialContextFactory", ::javax::naming::spi::InitialContextFactory),
	$classEntry("javax.naming.spi.InitialContextFactoryBuilder", ::javax::naming::spi::InitialContextFactoryBuilder),
	$classEntry("javax.naming.spi.NamingManager", ::javax::naming::spi::NamingManager),
	$classEntry("javax.naming.spi.NamingManager$FactoryInitializationError", ::javax::naming::spi::NamingManager$FactoryInitializationError),
	$classEntry("javax.naming.spi.ObjectFactory", ::javax::naming::spi::ObjectFactory),
	$classEntry("javax.naming.spi.ObjectFactoryBuilder", ::javax::naming::spi::ObjectFactoryBuilder),
	$classEntry("javax.naming.spi.ResolveResult", ::javax::naming::spi::ResolveResult),
	$classEntry("javax.naming.spi.Resolver", ::javax::naming::spi::Resolver),
	$classEntry("javax.naming.spi.StateFactory", ::javax::naming::spi::StateFactory),
	$classEntry("sun.security.provider.certpath.ldap.JdkLDAP", ::sun::security::provider::certpath::ldap::JdkLDAP),
	$classEntry("sun.security.provider.certpath.ldap.JdkLDAP$ProviderService", ::sun::security::provider::certpath::ldap::JdkLDAP$ProviderService),
	$classEntry("sun.security.provider.certpath.ldap.LDAPCertStore", ::sun::security::provider::certpath::ldap::LDAPCertStore),
	$classEntry("sun.security.provider.certpath.ldap.LDAPCertStore$Key", ::sun::security::provider::certpath::ldap::LDAPCertStore$Key),
	$classEntry("sun.security.provider.certpath.ldap.LDAPCertStoreImpl", ::sun::security::provider::certpath::ldap::LDAPCertStoreImpl),
	$classEntry("sun.security.provider.certpath.ldap.LDAPCertStoreImpl$LDAPRequest", ::sun::security::provider::certpath::ldap::LDAPCertStoreImpl$LDAPRequest)
};

const char* _java$naming_packages_[] = {
	"com.sun.jndi.ldap",
	"com.sun.jndi.ldap.ext",
	"com.sun.jndi.ldap.pool",
	"com.sun.jndi.ldap.sasl",
	"com.sun.jndi.toolkit.ctx",
	"com.sun.jndi.toolkit.dir",
	"com.sun.jndi.toolkit.url",
	"com.sun.jndi.url.ldap",
	"com.sun.jndi.url.ldaps",
	"com.sun.naming.internal",
	"javax.naming",
	"javax.naming.directory",
	"javax.naming.event",
	"javax.naming.ldap",
	"javax.naming.ldap.spi",
	"javax.naming.spi",
	"sun.security.provider.certpath.ldap"
};

void java$naming$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_java$naming_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_java$naming_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void java$naming$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$naming$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$naming$GetPackages() {
	int32_t length = $lengthOf(_java$naming_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_java$naming_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* java$naming$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_java$naming_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_java$naming_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* java$naming$GetResource($String* name) {
	return nullptr;
}

void java$naming::init() {
	::java$base::init();
	::java$security$sasl::init();
	::java$logging::init();
	::java::lang::Library lib = {
		"java.naming", "17.35", "",
		&_java$naming_ModuleInfo_,
		java$naming$LibEventAction,
		java$naming$GetPackages,
		java$naming$GetClassEntry,
		java$naming$GetResource
	};
	$System::addLibrary(&lib);
}