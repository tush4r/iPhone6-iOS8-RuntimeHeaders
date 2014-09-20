/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputPassDescription, AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper  {
    AVAssetWriterInputWritingHelper *_writingHelper;
    AVAssetWriterInputPassDescription *_initialPassDescription;
}


- (void)markAsFinished;
- (long long)status;
- (void)dealloc;
- (void)startPassAnalysis;
- (id)initWithWritingHelper:(id)arg1;
- (void)markCurrentPassAsFinished;
- (bool)appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (bool)shouldRespondToInitialPassDescription;
- (id)currentPassDescription;
- (bool)canPerformMultiplePasses;
- (bool)isReadyForMoreMediaData;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (id)initWithConfigurationState:(id)arg1;

@end