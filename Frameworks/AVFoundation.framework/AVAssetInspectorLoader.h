/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSString, AVWeakReference, NSURL, NSArray;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVWeakReference *_weakReference;
}

@property(readonly) NSURL * URL;
@property(getter=_formatReader,readonly) struct OpaqueFigFormatReader { }* formatReader;
@property(getter=_figAsset,readonly) struct OpaqueFigAsset { }* figAsset;
@property(getter=_playbackItem,readonly) struct OpaqueFigPlaybackItem { }* playbackItem;
@property(getter=_classForTrackInspectors,readonly) Class classForTrackInspectors;
@property(readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(readonly) NSString * lyrics;
@property(getter=isPlayable,readonly) bool playable;
@property(getter=isExportable,readonly) bool exportable;
@property(getter=isReadable,readonly) bool readable;
@property(getter=isComposable,readonly) bool composable;
@property(getter=isCompatibleWithSavedPhotosAlbum,readonly) bool compatibleWithSavedPhotosAlbum;
@property(readonly) NSArray * figChapterGroupInfo;
@property(readonly) NSArray * figChapters;
@property(readonly) NSURL * resolvedURL;
@property(readonly) unsigned long long downloadToken;
@property(readonly) bool hasProtectedContent;
@property(getter=_isStreaming,readonly) bool streaming;
@property(getter=_weakReference,readonly) AVWeakReference * weakReference;

+ (void)initialize;

- (id)resolvedURL;
- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isReadable;
- (bool)hasProtectedContent;
- (id)lyrics;
- (unsigned long long)downloadToken;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)init;
- (void)dealloc;
- (bool)isPlayable;
- (bool)_isStreaming;
- (id)_mapFigErrorCodeToNSError:(int)arg1;
- (id)assetInspector;
- (id)figChapters;
- (id)figChapterGroupInfo;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)_weakReference;
- (bool)isComposable;
- (bool)isExportable;
- (void)_serverHasDied;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;
- (struct OpaqueFigAsset { }*)_figAsset;

@end
