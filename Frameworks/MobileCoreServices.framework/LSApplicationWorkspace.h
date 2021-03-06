/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSApplicationWorkspace : NSObject  {
}

+ (id)defaultWorkspace;

- (void)_LSClearSchemaCaches;
- (id)installedPlugins;
- (bool)applicationIsInstalled:(id)arg1;
- (bool)unregisterApplication:(id)arg1;
- (bool)registerApplicationDictionary:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allInstalledApplications;
- (bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2;
- (bool)openURL:(id)arg1 withOptions:(id)arg2;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(bool)arg4 userInfo:(id)arg5 delegate:(id)arg6;
- (id)applicationsAvailableForOpeningDocument:(id)arg1;
- (id)deviceIdentifierForVendor;
- (void)removeObserver:(id)arg1;
- (bool)openURL:(id)arg1;
- (id)URLOverrideForURL:(id)arg1;
- (id)privateURLSchemes;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (bool)_LSPrivateRebuildApplicationDatabasesForSystemApps:(bool)arg1 internal:(bool)arg2 user:(bool)arg3;
- (id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2;
- (id)deviceIdentifierForAdvertising;
- (void)_clearCachedAdvertisingIdentifier;
- (void)clearAdvertisingIdentifier;
- (bool)invalidateIconCache:(id)arg1;
- (bool)updateSINFWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)unregisterPlugin:(id)arg1;
- (bool)registerPlugin:(id)arg1;
- (bool)registerApplication:(id)arg1;
- (bool)uninstallApplication:(id)arg1 withOptions:(id)arg2;
- (bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)installApplication:(id)arg1 withOptions:(id)arg2;
- (bool)getClaimedActivityTypes:(id*)arg1 domains:(id*)arg2;
- (id)publicURLSchemes;
- (id)allApplications;
- (id)unrestrictedApplications;
- (id)placeholderApplications;
- (id)installedVPNPlugins;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3;
- (bool)openApplicationWithBundleID:(id)arg1;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3;
- (id)applicationsOfType:(unsigned long long)arg1;
- (id)applicationForUserActivityDomainName:(id)arg1;
- (id)applicationForUserActivityType:(id)arg1;
- (id)applicationsWithExternalAccessoryProtocols;
- (id)applicationsWithVPNPlugins;
- (id)applicationsWithSettingsBundle;
- (id)applicationsWithAudioComponents;
- (id)applicationsWithUIBackgroundModes;
- (id)directionsApplications;
- (id)applicationForOpeningResource:(id)arg1;
- (id)delegateProxy;
- (void)getKnowledgeUUID:(id*)arg1 andSequenceNumber:(id*)arg2;
- (void)removeInstallProgressForBundleID:(id)arg1;
- (void)clearCreatedProgressForBundleID:(id)arg1;
- (bool)installPhaseFinishedForProgress:(id)arg1;
- (bool)registerApplicationDictionary:(id)arg1 withObserverNotification:(unsigned long long)arg2;
- (bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(id)arg3;
- (id)installProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2;
- (bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5;
- (id)remoteObserver;
- (bool)establishConnection;

@end
