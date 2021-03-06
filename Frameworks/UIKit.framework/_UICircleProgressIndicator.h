/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImageView, UIImage, CADisplayLink;

@interface _UICircleProgressIndicator : UIView  {
    double _animatedValue;
    double _animationEndTime;
    double _animationStartTime;
    double _animationStartValue;
    UIImage *_borderImage;
    UIImage *_centerImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _centerImageInsets;
    CADisplayLink *_displayLink;
    UIImage *_fillImage;
    bool_highlighted;
    UIImageView *_indeterminateView;
    bool_isAnimating;
    double _progress;
    UIColor *_unhighlightedBackgroundColor;
}

@property(retain) UIImage * image;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageInsets;
@property(getter=isIndeterminate) bool indeterminate;
@property double progress;
@property(getter=isHighlighted) bool highlighted;
@property(retain) UIImage * borderImage;
@property(retain) UIImage * fillImage;

+ (id)_indeterminateImage;
+ (id)_borderImage;
+ (id)_fillImage;

- (id)fillImage;
- (id)borderImage;
- (void)_setHidesBorderView:(bool)arg1;
- (void)setIndeterminate:(bool)arg1;
- (bool)isIndeterminate;
- (void)setFillImage:(id)arg1;
- (void)setBorderImage:(id)arg1;
- (void)_animateValueOnDisplayLink:(id)arg1;
- (void)_startIndeterminateAnimation;
- (double)progress;
- (void)setProgress:(double)arg1 animated:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)tintColorDidChange;
- (id)image;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setImage:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
