/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface UITextFieldBackgroundView : UIView  {
    bool_active;
    bool_enabled;
    float _progress;
    UIColor *_fillColor;
}

@property(retain) UIColor * fillColor;


- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(bool)arg2;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_updateImages;
- (void)setActive:(bool)arg1;
- (void)setFillColor:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
