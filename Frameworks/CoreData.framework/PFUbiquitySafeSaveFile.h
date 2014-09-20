/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, PFUbiquityLocation, NSError, NSObject<OS_dispatch_semaphore>;

@interface PFUbiquitySafeSaveFile : NSObject  {
    PFUbiquityLocation *_permanentLocation;
    PFUbiquityLocation *_safeSaveLocation;
    PFUbiquityLocation *_currentLocation;
    NSString *_localPeerID;
    bool_continueCheckingDownload;
    bool_downloadSuccess;
    NSError *_downloadError;
    bool_continueCheckingUpload;
    bool_safeSaveSuccess;
    bool_moveAfterSave;
    NSError *_safeSaveError;
    NSObject<OS_dispatch_semaphore> *_safeSaveSemaphore;
    bool_isRegistered;
}

@property(readonly) PFUbiquityLocation * permanentLocation;
@property(readonly) PFUbiquityLocation * safeSaveLocation;
@property(retain) PFUbiquityLocation * currentLocation;
@property(readonly) NSString * localPeerID;
@property(readonly) NSError * safeSaveError;
@property(readonly) bool isRegistered;
@property(readonly) bool continueCheckingUpload;
@property(readonly) bool safeSaveSuccess;
@property(readonly) bool moveAfterSave;
@property(readonly) bool existsAtSafeSaveLocation;
@property(readonly) bool existsAtPermanentLocation;
@property(readonly) bool existsInCloud;
@property(readonly) bool downloadSuccess;
@property(readonly) bool continueCheckingDownload;
@property(readonly) NSError * downloadError;


- (void)setDownloadError:(id)arg1;
- (id)downloadError;
- (id)description;
- (id)init;
- (void)dealloc;
- (bool)isRegistered;
- (bool)downloadSuccess;
- (bool)moveAfterSave;
- (bool)safeSaveSuccess;
- (id)safeSaveError;
- (void)downloadFinished;
- (void)setDownloadSuccess:(bool)arg1;
- (void)setSafeSaveError:(id)arg1;
- (void)safeSaveFinishedUpload;
- (void)setSafeSaveSuccess:(bool)arg1;
- (void)checkSafeSaveFileUploadAsync;
- (bool)waitForFileToDownload:(id*)arg1;
- (bool)isFileDownloaded:(id*)arg1;
- (bool)writeFile:(id*)arg1;
- (bool)removeFile:(id*)arg1;
- (bool)removeFileFromLocation:(id)arg1 error:(id*)arg2;
- (bool)existsAtPermanentLocation;
- (bool)isFileUploaded:(id*)arg1;
- (bool)waitForFileToUpload:(id*)arg1;
- (bool)existsAtSafeSaveLocation;
- (bool)safeSaveFile:(bool)arg1 moveToPermanentLocation:(bool)arg2 error:(id*)arg3;
- (bool)writeFileToLocation:(id)arg1 error:(id*)arg2;
- (bool)loadFileFromLocation:(id)arg1 error:(id*)arg2;
- (bool)moveToPermanentLocation:(id*)arg1;
- (bool)downloadLatestVersion:(bool)arg1 error:(id*)arg2;
- (bool)loadFile:(id*)arg1;
- (bool)existsInCloud;
- (void)setCurrentLocation:(id)arg1;
- (id)currentLocation;
- (id)initWithPermanentLocation:(id)arg1 safeSaveLocation:(id)arg2 andLocalPeerID:(id)arg3;
- (id)safeSaveLocation;
- (id)permanentLocation;
- (void)checkSafeSaveFileUpload;
- (bool)continueCheckingUpload;
- (void)checkFileDownload;
- (bool)continueCheckingDownload;
- (id)localPeerID;

@end