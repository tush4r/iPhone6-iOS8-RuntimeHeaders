/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSExtension;

@interface UIActivity : NSObject  {
    long long _defaultPriority;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _activityCompletionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _activityCompletionWithItemsHandler;

}

@property(readonly) NSExtension * applicationExtension;
@property(copy) id activityCompletionHandler;
@property(copy) id activityCompletionWithItemsHandler;

+ (long long)activityCategory;
+ (id)_activityGenericImage:(id)arg1;
+ (id)_activitySettingsImageForApplication:(id)arg1;
+ (id)_activityImageForApplication:(id)arg1;
+ (id)_activityFunctionImage:(id)arg1;

- (void)setActivityCompletionWithItemsHandler:(id)arg1;
- (id)activityCompletionWithItemsHandler;
- (void)setActivityCompletionHandler:(id)arg1;
- (id)activityCompletionHandler;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)activityImage;
- (void)performActivity;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)activityDidFinish:(bool)arg1;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;
- (void)_injectedJavaScriptResult:(id)arg1;
- (id)applicationExtension;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (id)_subjectForActivityItem:(id)arg1;
- (void)_setSubject:(id)arg1;
- (void)_willPresentAsFormSheet;
- (id)_embeddedActivityViewController;
- (void)_setActivityCompletionWithItemsHandler:(id)arg1;
- (void)_setActivityCompletionHandler:(id)arg1;
- (id)_beforeActivity;
- (bool)_canPerformWithSuppliedActivityItems:(id)arg1;
- (id)activitySettingsImage;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (bool)_canBeExcludedByActivityViewController:(id)arg1;
- (void)activityDidFinish:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)_activitySettingsImage;
- (id)_activityImage;
- (struct CGSize { double x1; double x2; })_thumbnailSize;
- (void)_cleanup;

@end
