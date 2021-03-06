/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class <BWImageQueueSinkNodePreviewTapDelegate>;

@interface BWImageQueueSinkNode : BWSinkNode  {
    unsigned int _imageQueueCapacity;
    unsigned int _imageQueueWidth;
    unsigned int _imageQueueHeight;
    unsigned int _imageQueueFreeSlots;
    struct _CAImageQueue { } *_imageQueue;
    unsigned int _imageQueueSlot;
    bool_syncedWithDisplay;
    struct OpaqueFigPreviewSynchronizer { } *_previewSynchronizer;
    <BWImageQueueSinkNodePreviewTapDelegate> *_previewTapDelegate;
}

@property(readonly) struct _CAImageQueue { }* imageQueue;
@property(readonly) unsigned int imageQueueSlot;
@property <BWImageQueueSinkNodePreviewTapDelegate> * previewTapDelegate;

+ (void)initialize;

- (id)previewTapDelegate;
- (bool)syncedWithDisplay;
- (void)_ensureImageQueue;
- (bool)hasNonLiveConfigurationChanges;
- (void)makeCurrentConfigurationLive;
- (void)setSyncedWithDisplay:(bool)arg1;
- (struct _CAImageQueue { }*)imageQueue;
- (unsigned int)imageQueueSlot;
- (void)setPreviewTapDelegate:(id)arg1;
- (id)initWithHFRSupport:(unsigned char)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;

@end
