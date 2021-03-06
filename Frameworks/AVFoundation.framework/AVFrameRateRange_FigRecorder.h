/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVFrameRateRangeInternal_FigRecorder;

@interface AVFrameRateRange_FigRecorder : NSObject  {
    AVFrameRateRangeInternal_FigRecorder *_internal;
}

@property(readonly) double minFrameRate;
@property(readonly) double maxFrameRate;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxFrameDuration;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;

+ (id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2;

- (id)description;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (bool)includesFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)includesFrameRate:(double)arg1;
- (id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxFrameDuration;
- (double)maxFrameRate;
- (double)minFrameRate;

@end
