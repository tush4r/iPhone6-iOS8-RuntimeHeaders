/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer  {
    long long _barAction;
    double _bias;
}

@property(readonly) long long barAction;
@property(readonly) double bias;


- (double)bias;
- (long long)barAction;
- (void)_setDelegate:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)description;
- (void)setDelegate:(id)arg1;

@end