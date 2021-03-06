/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, PFUbiquityGlobalObjectID, PFUbiquityLocation, PFUbiquityKnowledgeVector, NSNumber, NSDate;

@interface PFUbiquityTransactionEntryLight : NSObject  {
    PFUbiquityGlobalObjectID *_globalID;
    int _transactionType;
    NSString *_actingPeerID;
    NSString *_storeName;
    NSNumber *_transactionNumber;
    PFUbiquityLocation *_transactionLogLocation;
    PFUbiquityKnowledgeVector *_kv;
    NSDate *_transactionDate;
}

@property(retain) PFUbiquityGlobalObjectID * globalID;
@property int transactionType;
@property(retain) NSString * actingPeerID;
@property(retain) NSString * storeName;
@property(retain) NSNumber * transactionNumber;
@property(retain) PFUbiquityLocation * transactionLogLocation;
@property(retain) PFUbiquityKnowledgeVector * knowledgeVector;
@property(retain) NSDate * transactionDate;


- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithTransactionEntry:(id)arg1 ubiquityRootLocation:(id)arg2 andGlobalIDCache:(id)arg3;
- (id)actingPeerID;
- (int)transactionType;
- (void)setTransactionType:(int)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionLogLocation:(id)arg1;
- (id)globalID;
- (void)setGlobalID:(id)arg1;
- (void)setActingPeerID:(id)arg1;
- (id)transactionDate;
- (void)setStoreName:(id)arg1;
- (void)setTransactionNumber:(id)arg1;
- (id)transactionNumber;
- (void)setKnowledgeVector:(id)arg1;
- (id)knowledgeVector;
- (id)transactionLogLocation;
- (id)storeName;

@end
