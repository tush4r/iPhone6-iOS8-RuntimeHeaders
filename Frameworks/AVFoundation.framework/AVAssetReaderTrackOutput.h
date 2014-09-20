/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, AVAssetTrack, NSDictionary, AVAssetReaderTrackOutputInternal;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput  {
    AVAssetReaderTrackOutputInternal *_trackOutputInternal;
}

@property(readonly) AVAssetTrack * track;
@property(readonly) NSDictionary * outputSettings;
@property(copy) NSString * audioTimePitchAlgorithm;
@property bool appliesPreferredTrackTransform;
@property(getter=_isAttachedToMetadataAdaptor,readonly) bool attachedToMetadataAdaptor;

+ (id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2;

- (void)finalize;
- (id)mediaType;
- (void)setAppliesPreferredTrackTransform:(bool)arg1;
- (struct opaqueCMSampleBuffer { }*)copyNextSampleBuffer;
- (id)outputSettings;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)initWithTrack:(id)arg1 outputSettings:(id)arg2;
- (id)track;
- (id)_figAssetReaderExtractionOptions;
- (bool)_enableTrackExtractionReturningError:(id*)arg1;
- (bool)_trimsSampleDurations;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (id)audioTimePitchAlgorithm;
- (struct opaqueCMSampleBuffer { }*)_copyNextSampleBufferForMetadataAdaptor;
- (void)_attachToMetadataAdaptor:(id)arg1;
- (bool)_isAttachedToMetadataAdaptor;
- (bool)appliesPreferredTrackTransform;
- (id)_asset;

@end