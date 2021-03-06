/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURL, NSFileAccessNode;

@interface NSFileWritingWritingClaim : NSFileAccessClaim  {
    NSURL *_url1;
    bool_url1DidChange;
    unsigned long long _options1;
    NSURL *_url2;
    bool_url2DidChange;
    unsigned long long _options2;
    NSFileAccessNode *_location1;
    NSFileAccessNode *_location2;
}


- (void)dealloc;
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 url:(id)arg4 options:(unsigned long long)arg5 claimer:(id)arg6;
- (void)resolveURLsThenContinueInvokingClaimer:(id)arg1;
- (bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (void)devalueSelf;
- (bool)blocksClaim:(id)arg1;
- (void)invokeClaimer;
- (void)granted;
- (id)initWithClient:(id)arg1 messageParameters:(id)arg2 replySender:(id)arg3;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)forwardUsingMessageSender:(id)arg1 crashHandler:(id)arg2;
- (bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(bool)arg2;

@end
