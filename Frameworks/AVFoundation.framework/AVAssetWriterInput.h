/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSString, NSArray, AVAssetWriterInputInternal, AVOutputSettings, NSDictionary, AVAssetWriterInputHelper;

@interface AVAssetWriterInput : NSObject  {
    AVAssetWriterInputInternal *_internal;
}

@property(readonly) NSString * mediaType;
@property(readonly) NSDictionary * outputSettings;
@property(readonly) struct opaqueCMFormatDescription { }* sourceFormatHint;
@property(copy) NSArray * metadata;
@property(getter=isReadyForMoreMediaData,readonly) bool readyForMoreMediaData;
@property bool expectsMediaDataInRealTime;
@property(getter=_outputSettingsObject,readonly) AVOutputSettings * outputSettingsObject;
@property(getter=_status,readonly) long long status;
@property(getter=_isAttachedToMetadataAdaptor,readonly) bool attachedToMetadataAdaptor;
@property(getter=_weakReferenceToAssetWriter,setter=_setWeakReferenceToAssetWriter:,retain) AVWeakReference * weakReferenceToAssetWriter;
@property(getter=_trackID,readonly) int trackID;
@property(getter=_alternateGroupID,setter=_setAlternateGroupID:) short alternateGroupID;
@property(getter=_trackReferences,readonly) NSDictionary * trackReferences;
@property(getter=_helper,setter=_setHelper:,retain) AVAssetWriterInputHelper * helper;
@property(getter=_sourcePixelBufferAttributes,setter=_setSourcePixelBufferAttributes:,copy) NSDictionary * sourcePixelBufferAttributes;
@property(getter=_pixelBufferPool,readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property(getter=_isAttachedToPixelBufferAdaptor,setter=_setAttachedToPixelBufferAdaptor:) bool attachedToPixelBufferAdaptor;
@property(readonly) long long numberOfAppendFailures;

+ (void)initialize;
+ (id)keyPathsForValuesAffectingCurrentPassDescription;
+ (id)keyPathsForValuesAffectingCanPerformMultiplePasses;
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription { }*)arg3;
+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
+ (id)keyPathsForValuesAffectingStatus;

- (void)finalize;
- (id)extendedLanguageTag;
- (id)mediaType;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)markAsFinished;
- (void)setLanguageCode:(id)arg1;
- (id)outputSettings;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)languageCode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (void)setLayer:(long long)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)description;
- (id)init;
- (long long)layer;
- (void)dealloc;
- (id)_helper;
- (bool)_appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)respondToEachPassDescriptionOnQueue:(id)arg1 usingBlock:(id)arg2;
- (void)_setAttachedToPixelBufferAdaptor:(bool)arg1;
- (bool)_isAttachedToPixelBufferAdaptor;
- (void)_setSourcePixelBufferAttributes:(id)arg1;
- (struct __CVPixelBufferPool { }*)_pixelBufferPool;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;
- (id)associatedInputsWithTrackAssociationType:(id)arg1;
- (void)addTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (bool)canAddTrackAssociationWithTrackOfInput:(id)arg1 type:(id)arg2;
- (void)markCurrentPassAsFinished;
- (bool)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (id)currentPassDescription;
- (bool)canPerformMultiplePasses;
- (bool)isReadyForMoreMediaData;
- (void)_setHelper:(id)arg1;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2 sourceFormatHint:(struct opaqueCMFormatDescription { }*)arg3;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (long long)numberOfAppendFailures;
- (id)_sourcePixelBufferAttributes;
- (void)setSampleReferenceBaseURL:(id)arg1;
- (id)sampleReferenceBaseURL;
- (void)setPreferredMediaChunkSize:(long long)arg1;
- (long long)preferredMediaChunkSize;
- (void)setPreferredMediaChunkAlignment:(long long)arg1;
- (long long)preferredMediaChunkAlignment;
- (void)setPreferredMediaChunkDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })preferredMediaChunkDuration;
- (void)setPerformsMultiPassEncodingIfSupported:(bool)arg1;
- (bool)performsMultiPassEncodingIfSupported;
- (void)setExpectsMediaDataInRealTime:(bool)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (int)mediaTimeScale;
- (bool)marksOutputTrackAsEnabled;
- (id)_weakReferenceToAssetWriter;
- (void)_transitionToTerminalStatus:(long long)arg1;
- (bool)_prepareToFinishWritingReturningError:(id*)arg1;
- (void)_prepareToEndSession;
- (void)_didStartInitialSession;
- (int)_trackID;
- (bool)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaFileType:(id)arg2 error:(id*)arg3;
- (bool)expectsMediaDataInRealTime;
- (short)_alternateGroupID;
- (void)_setAlternateGroupID:(short)arg1;
- (void)setMarksOutputTrackAsEnabled:(bool)arg1;
- (void)_setWeakReferenceToAssetWriter:(id)arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)_outputSettingsObject;
- (void)setPreferredVolume:(float)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (id)availableTrackAssociationTypes;
- (id)_trackReferences;
- (void)_attachToMetadataAdaptor:(id)arg1;
- (long long)_status;
- (bool)_isAttachedToMetadataAdaptor;
- (float)preferredVolume;
- (void)setExtendedLanguageTag:(id)arg1;

@end
