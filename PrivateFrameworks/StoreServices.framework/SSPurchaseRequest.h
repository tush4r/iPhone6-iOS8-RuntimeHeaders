/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <SSPurchaseRequestDelegate>, NSArray, SSPurchaseManager, NSMutableSet, NSString;

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding> {
    bool_isBackgroundRequest;
    NSArray *_purchases;
    bool_shouldValidatePurchases;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    bool_createsDownloads;
    NSMutableSet *_openPurchaseIdentifiers;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _purchaseBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _purchaseResponseBlock;

    SSPurchaseManager *_purchaseManager;
    bool_needsAuthentication;
}

@property(readonly) NSArray * purchases;
@property(getter=isBackgroundRequest) bool backgroundRequest;
@property bool needsAuthentication;
@property <SSPurchaseRequestDelegate> * delegate;
@property bool createsDownloads;
@property bool shouldValidatePurchases;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setShouldValidatePurchases:(bool)arg1;
- (id)purchases;
- (bool)needsAuthentication;
- (bool)shouldValidatePurchases;
- (bool)createsDownloads;
- (void)setBackgroundRequest:(bool)arg1;
- (bool)isBackgroundRequest;
- (void)startWithPurchaseBlock:(id)arg1 completionBlock:(id)arg2;
- (id)_purchaseForUniqueIdentifier:(long long)arg1;
- (void)setCreatesDownloads:(bool)arg1;
- (void)_finishPurchasesWithResponses:(id)arg1;
- (void)_addPurchasesToManager;
- (void)startWithPurchaseResponseBlock:(id)arg1 completionBlock:(id)arg2;
- (void)setNeedsAuthentication:(bool)arg1;
- (id)initWithPurchases:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)start;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (void)startWithCompletionBlock:(id)arg1;

@end
