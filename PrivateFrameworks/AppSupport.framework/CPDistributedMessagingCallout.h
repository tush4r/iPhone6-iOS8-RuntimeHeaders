/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedMessagingCallout : NSObject  {
    id _target;
    SEL _selector;
    bool_returnsVoid;
    bool_returnsVoidIsValid;
}

@property(retain,readonly) id target;
@property(readonly) SEL selector;
@property(readonly) bool returnsVoid;


- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (bool)returnsVoid;
- (SEL)selector;
- (id)target;
- (void)dealloc;

@end