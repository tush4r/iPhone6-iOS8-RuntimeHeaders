/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSArray, UIImageView, UITapGestureRecognizer, NSString, UIBarButtonItem;

@interface UIDimmingView : UIView <UIGestureRecognizerDelegate> {
    id _delegate;
    UIBarButtonItem *_highlightedBarButtonItem;
    UIImageView *_highlightedImageView;
    UIImageView *_backgroundGlow;
    NSArray *_passthroughViews;
    bool_ignoresTouches;
    bool_displayed;
    bool_inPassthroughHitTest;
    UIColor *_dimmingColor;
    UITapGestureRecognizer *_singleFingerTapRecognizer;
    bool_suppressesBackdrops;
}

@property id delegate;
@property(retain) UIBarButtonItem * highlightedBarButtonItem;
@property(retain) NSArray * passthroughViews;
@property bool ignoresTouches;
@property bool displayed;
@property(retain) UIColor * dimmingColor;
@property bool suppressesBackdrops;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)defaultDimmingColor;

- (void)setDisplayed:(bool)arg1;
- (bool)ignoresTouches;
- (void)_simulateTap;
- (id)highlightedBarButtonItem;
- (void)setHighlightedBarButtonItem:(id)arg1;
- (void)dimmingRemovalAnimationDidStop;
- (id)_backdropViewsToAnimate;
- (bool)suppressesBackdrops;
- (void)handleSingleTap:(id)arg1;
- (void)display:(bool)arg1;
- (void)setPassthroughViews:(id)arg1;
- (id)passthroughViews;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)display:(bool)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3;
- (void)setSuppressesBackdrops:(bool)arg1;
- (void)setIgnoresTouches:(bool)arg1;
- (bool)displayed;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)dimmingColor;
- (void)setDimmingColor:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
