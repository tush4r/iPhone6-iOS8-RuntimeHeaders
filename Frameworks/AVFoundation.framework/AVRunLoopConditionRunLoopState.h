/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRunLoopConditionRunLoopState : NSObject  {
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_signalSource;
    bool_signaled;
}

@property(readonly) struct __CFRunLoop { }* runLoop;
@property struct __CFRunLoopSource { }* signalSource;
@property bool signaled;

+ (id)runLoopStateWithRunLoop:(struct __CFRunLoop { }*)arg1;

- (struct __CFRunLoop { }*)runLoop;
- (void)dealloc;
- (void)setSignaled:(bool)arg1;
- (bool)signaled;
- (void)setSignalSource:(struct __CFRunLoopSource { }*)arg1;
- (struct __CFRunLoopSource { }*)signalSource;
- (id)initWithRunLoop:(struct __CFRunLoop { }*)arg1;

@end