/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIFont;

@interface UIAutocorrectTextView : UIView  {
    NSString *m_string;
    int m_type;
    int m_edgeType;
    UIFont *m_textFont;
    boolm_animating;
    boolm_isLongString;
}

@property bool animating;
@property bool isLongString;


- (void)setIsLongString:(bool)arg1;
- (bool)isLongString;
- (bool)animating;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_calculateRectForExpandedHitRegion;
- (void)setEdgeType:(int)arg1;
- (void)setAnimating:(bool)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end