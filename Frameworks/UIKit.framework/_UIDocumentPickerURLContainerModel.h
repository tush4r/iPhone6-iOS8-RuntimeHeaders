/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, NSURL, _UIDocumentPickerDirectoryObserver;

@interface _UIDocumentPickerURLContainerModel : _UIDocumentPickerContainerModel  {
    NSArray *_modelObjects;
    NSURL *_url;
    NSString *_displayTitle;
    _UIDocumentPickerDirectoryObserver *_observer;
}

@property(retain) NSURL * url;
@property(retain) NSString * displayTitle;
@property(retain) _UIDocumentPickerDirectoryObserver * observer;
@property(retain) NSArray * modelObjects;

+ (id)allTags;
+ (id)_tagBlipColors;
+ (id)tagColorsByTag;
+ (void)_tagColorsDidChange;

- (id)initWithURL:(id)arg1;
- (void)setModelObjects:(id)arg1;
- (bool)shouldAllowPickingType:(id)arg1;
- (bool)shouldShowContainerForType:(id)arg1;
- (void)callUpdateHandlerWithNewItems:(id)arg1 diff:(id)arg2;
- (void)setObserver:(id)arg1;
- (void)modelChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (id)_containerListDidChange;
- (id)observer;
- (void)setDisplayTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)refreshItem:(id)arg1 thumbnailOnly:(bool)arg2;
- (id)displayTitle;
- (void)stopMonitoringChanges;
- (void)startMonitoringChanges;
- (id)modelObjects;
- (void)updateSortDescriptors;
- (id)scopes;
- (id)url;
- (id)description;
- (void)dealloc;

@end
