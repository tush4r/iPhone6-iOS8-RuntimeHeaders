/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString, NSNumber, NSDate;

@interface DAStatusReport : NSObject  {
    bool_syncingAllowed;
    int _numHBIDataPoints;
    NSString *_persistentUUID;
    NSString *_displayName;
    NSString *_accountType;
    NSNumber *_timeSpan;
    NSNumber *_timeInNetworking;
    NSNumber *_averageHBI;
    NSNumber *_successfulRequests;
    NSNumber *_failedNetworkRequests;
    NSNumber *_failedProtocolRequests;
    NSNumber *_downloadedElements;
    NSNumber *_uploadedElements;
    NSNumber *_falseMoreAvailableCount;
    NSString *_protocolVersion;
    NSDate *_creationDate;
}

@property(retain) NSString * persistentUUID;
@property(retain) NSString * displayName;
@property(retain) NSString * accountType;
@property(retain) NSNumber * timeSpan;
@property(retain) NSNumber * timeInNetworking;
@property(retain) NSNumber * averageHBI;
@property(retain) NSNumber * successfulRequests;
@property(retain) NSNumber * failedNetworkRequests;
@property(retain) NSNumber * failedProtocolRequests;
@property(retain) NSNumber * downloadedElements;
@property(retain) NSNumber * uploadedElements;
@property(retain) NSNumber * falseMoreAvailableCount;
@property(retain) NSString * protocolVersion;
@property bool syncingAllowed;
@property(retain) NSDate * creationDate;
@property int numHBIDataPoints;


- (void)setAccountType:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (id)persistentUUID;
- (void)setNumHBIDataPoints:(int)arg1;
- (int)numHBIDataPoints;
- (bool)syncingAllowed;
- (id)falseMoreAvailableCount;
- (id)uploadedElements;
- (id)downloadedElements;
- (id)failedProtocolRequests;
- (id)failedNetworkRequests;
- (id)successfulRequests;
- (id)averageHBI;
- (id)timeInNetworking;
- (id)timeSpan;
- (void)setFalseMoreAvailableCount:(id)arg1;
- (void)setUploadedElements:(id)arg1;
- (void)setDownloadedElements:(id)arg1;
- (void)setFailedProtocolRequests:(id)arg1;
- (void)setFailedNetworkRequests:(id)arg1;
- (void)setSuccessfulRequests:(id)arg1;
- (void)setAverageHBI:(id)arg1;
- (void)setTimeInNetworking:(id)arg1;
- (void)setTimeSpan:(id)arg1;
- (void)noteNewHBIDataPoint:(int)arg1;
- (void)noteFalseMoreAvailableResponse;
- (void)mergeStatusReport:(id)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1 numUploadedElements:(int)arg2;
- (void)setPersistentUUID:(id)arg1;
- (void)setSyncingAllowed:(bool)arg1;
- (id)protocolVersion;
- (void)setProtocolVersion:(id)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (id)accountType;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void).cxx_destruct;
- (id)displayName;
- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (void)setDisplayName:(id)arg1;

@end