/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSString, NSMutableDictionary;

@interface IDSMessageContext : NSObject  {
    NSMutableDictionary *_dict;
    id _boostContext;
}

@property(copy) NSString * outgoingResponseIdentifier;
@property(copy) NSString * incomingResponseIdentifier;
@property bool expectsPeerResponse;
@property bool wantsAppAck;
@property(copy) NSString * storageGuid;
@property(retain) id boostContext;


- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (bool)expectsPeerResponse;
- (void)setStorageGuid:(id)arg1;
- (id)incomingResponseIdentifier;
- (void)setIncomingResponseIdentifier:(id)arg1;
- (void)setOutgoingResponseIdentifier:(id)arg1;
- (void)setBoostContext:(id)arg1;
- (id)boostContext;
- (id)storageGuid;
- (id)outgoingResponseIdentifier;
- (bool)wantsAppAck;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;
- (void)setExpectsPeerResponse:(bool)arg1;
- (void)setWantsAppAck:(bool)arg1;
- (void)dealloc;

@end