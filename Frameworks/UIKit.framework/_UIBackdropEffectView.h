/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class CABackdropLayer;

@interface _UIBackdropEffectView : UIView  {
    CABackdropLayer *_backdropLayer;
    double _zoom;
}

@property(retain) CABackdropLayer * backdropLayer;
@property double zoom;

+ (Class)layerClass;

- (double)zoom;
- (void)setBackdropLayer:(id)arg1;
- (void)setZoom:(double)arg1;
- (void)backdropLayerStatisticsDidChange:(id)arg1;
- (id)backdropLayer;
- (id)valueForUndefinedKey:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)init;
- (void)dealloc;

@end