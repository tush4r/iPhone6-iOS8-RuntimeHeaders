/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSObject<OS_dispatch_queue>;

@interface FigDelegateStorage : NSObject  {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _delegate;
    int _lock;
}

@property(readonly) id delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;

+ (void)initialize;

- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)delegateQueue;
- (id)delegate;
- (id)init;
- (void)dealloc;
- (void)invokeDelegateCallbackWithBlock:(id)arg1;

@end
