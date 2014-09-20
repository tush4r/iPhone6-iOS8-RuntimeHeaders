/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, PFUbiquityLocation, NSArray;

@interface PFUbiquityLocation : NSObject <NSCopying> {
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_ubiquityRootLocationPath;
    int _ubiquityLocationType;
    NSString *_exportingPeerID;
    NSString *_storeName;
    NSString *_modelVersionHash;
    NSString *_filename;
    NSArray *_otherPathComponents;
    bool_isDirectory;
    unsigned long long _hash;
    bool_isRootUbiquitous;
}

@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) NSString * ubiquityRootLocationPath;
@property(readonly) bool isRootUbiquitous;
@property(readonly) int ubiquityLocationType;
@property(readonly) NSString * exportingPeerID;
@property(readonly) NSString * storeName;
@property(readonly) NSString * modelVersionHash;
@property(readonly) NSString * filename;
@property(readonly) bool usesStagingLogDirectory;
@property(readonly) bool usesTemporaryLogDirectory;
@property(readonly) bool usesCurrentBaselineDirectory;
@property(readonly) bool usesBaselineStagingDirectory;
@property(readonly) bool usesBaselineDirectory;
@property(readonly) bool usesNosyncDirectory;
@property(readonly) unsigned long long hash;
@property(readonly) NSArray * otherPathComponents;
@property(getter=isTransactionLogLocation,readonly) bool isTransactionLogLocation;
@property(readonly) bool isDirectory;

+ (void)initialize;
+ (id)createLocalContainerRootLocationWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)createLocalStoresPathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)createMapOfLocationsForOldManagedObjectModel:(id)arg1 andNewManagedObjectModel:(id)arg2 inUbiquityPeerStoreLocation:(id)arg3;
+ (id)createUbiquityPeerReceiptSafeSaveLocationFromReceiptFileLocation:(id)arg1;
+ (id)createUbiquityPeerReceiptFileLocationForPeerWithID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createStagingPeerStoreVersionLocationForExportingPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createPeerBaselineFileLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2;
+ (id)createMetadataUUIDLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 UUID:(id)arg3 andUbiquityRootLocation:(id)arg4;
+ (id)createMetadataPeerStoreLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createMetadataPeerLocationForLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2;
+ (id)createMetadataStoreFileLocationForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (id)createMetadataRootLocationForUbiquityRootLocation:(id)arg1;
+ (id)createUbiquityLocationForSubpath:(id)arg1 ofUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootURL:(id)arg2;
+ (id)createLocalBasePathWithLocalPeerID:(id)arg1 containerID:(id)arg2 storeName:(id)arg3 andStoreURL:(id)arg4;
+ (id)localLocationSentinel;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3;
+ (bool)isUbiquityLocationPath:(id)arg1 equalToPath:(id)arg2;
+ (id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootPath:(id)arg2;
+ (id)createUbiquityLocationForRootPath:(id)arg1 checkIsUbiquitous:(bool)arg2;
+ (id)createStringByAppendingSubpath:(id)arg1 toPath:(id)arg2;
+ (id)createPeerStoreLocationForPeerID:(id)arg1 andStoreName:(id)arg2 withUbiquityRootLocation:(id)arg3;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andLog:(id)arg2;
+ (id)createTransactionLogLocationFromTemporaryOrStagingLogLocation:(id)arg1;
+ (id)createUbiquityLocationForPath:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createUbiquityLocationForRootPath:(id)arg1;
+ (void)setLocationSentinel:(id)arg1;
+ (id)locationSentinel;
+ (id)createUbiquityExternalDataReferenceStoreLocationForStoreName:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createCurrentBaselineLocation:(int)arg1 forStoreName:(id)arg2 peerID:(id)arg3 andModelVersionHash:(id)arg4 forFileNamed:(id)arg5 withUbiquityRootLocation:(id)arg6;
+ (id)createPeerStoreVersionLocationForPeerID:(id)arg1 storeName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createBaselineStagingLocation:(int)arg1 forStoreName:(id)arg2 modelVersionHash:(id)arg3 andFilename:(id)arg4 withUbiquityRootLocation:(id)arg5;
+ (id)createPeerBaselineFileSafeSaveLocationForLocalPeerID:(id)arg1 andBaselineFileLocation:(id)arg2;
+ (id)createUbiquityExternalDataReferenceFileLocationForUUID:(id)arg1 andStore:(id)arg2 withUbiquityRootLocation:(id)arg3;
+ (id)createStagingTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createTemporaryTransactionLogLocationFromTransactionLogLocation:(id)arg1;
+ (id)createBaselineLocation:(int)arg1 forStoreName:(id)arg2 andModelVersionHash:(id)arg3 withUbiquityRootLocation:(id)arg4;
+ (id)createUbiquityLocationForURL:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)createTransactionLogLocationForPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 logFilename:(id)arg4 andUbiquityRootLocation:(id)arg5;
+ (id)createUbiquityLocationForRootURL:(id)arg1;
+ (id)createArrayOfSubLocationsAtLocation:(id)arg1 error:(id*)arg2;
+ (id)createVersionHashStringForModel:(id)arg1;
+ (id)createPeerRootLocationForPeerID:(id)arg1 withUbiquityRootLocation:(id)arg2;
+ (id)pathByTruncatingBeforeLibraryMobileDocuments:(id)arg1;

- (void)setFilename:(id)arg1;
- (id)filename;
- (bool)isDirectory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (bool)isEqualToURL:(id)arg1;
- (bool)fileAtLocationIsDownloaded:(id*)arg1;
- (bool)fileAtLocationIsUploaded:(id*)arg1;
- (bool)isTransactionLogLocation;
- (bool)usesBaselineDirectory;
- (bool)usesTemporaryLogDirectory;
- (bool)usesStagingLogDirectory;
- (id)initWithUbiquityRootURL:(id)arg1;
- (bool)__isDirectory;
- (bool)fileExistsAtLocationWithLocalPeerID:(id)arg1 error:(id*)arg2;
- (bool)usesBaselineStagingDirectory;
- (void)setIsRootUbiquitous:(bool)arg1;
- (void)setHash:(unsigned long long)arg1;
- (void)setUbiquityLocationType:(int)arg1;
- (void)setOtherPathComponents:(id)arg1;
- (id)otherPathComponents;
- (void)setModelVersionHash:(id)arg1;
- (void)setUbiquityRootLocationPath:(id)arg1;
- (id)initWithUbiquityRootPath:(id)arg1;
- (void)updateHash;
- (bool)usesCurrentBaselineDirectory;
- (bool)removeFileAtLocation:(id)arg1 error:(id*)arg2;
- (bool)usesNosyncDirectory;
- (id)createFullPath;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setStoreName:(id)arg1;
- (void)setExportingPeerID:(id)arg1;
- (id)exportingPeerID;
- (id)createFullURL;
- (bool)isRootUbiquitous;
- (id)createRelativePath;
- (id)ubiquityRootLocationPath;
- (id)ubiquityRootLocation;
- (id)storeName;
- (bool)fileExistsAtLocation;
- (id)modelVersionHash;
- (int)ubiquityLocationType;

@end