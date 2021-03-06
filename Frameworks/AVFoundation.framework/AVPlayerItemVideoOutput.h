/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSObject<OS_dispatch_queue>, <AVPlayerItemOutputPullDelegate>, AVPlayerItemVideoOutputInternal;

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput  {
    AVPlayerItemVideoOutputInternal *_videoOutputInternal;
}

@property(readonly) <AVPlayerItemOutputPullDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;


- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg1;
- (struct __CVBuffer { }*)copyPixelBufferForItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 itemTimeForDisplay:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (bool)hasNewPixelBufferForItemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithPixelBufferAttributes:(id)arg1;
- (void)setSuppressesPlayerRendering:(bool)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)finalize;
- (id)delegateQueue;
- (id)delegate;
- (id)init;
- (void)dealloc;
- (void)_dispatchOutputSequenceWasFlushed;
- (void)_setTagBuffersWithConversionInformation;
- (void)_startObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)_stopObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)_dispatchOutputMediaDataWillChange;
- (void)_detachFromPlayerItem;
- (void)_setTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (bool)_attachToPlayerItem:(id)arg1;
- (id)_pixelBufferAttributes;
- (struct OpaqueFigVisualContext { }*)_visualContext;
- (bool)suppressesPlayerRendering;

@end
