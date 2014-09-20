/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIClassicStatusBarView, UIWindow, UIView;

@interface UIStatusBarViewController : UIViewController  {
    bool_iPhoneWS;
    UIWindow *_window;
    UIView *_statusBar;
    UIClassicStatusBarView *_statusBarBackgroundView;
    bool_keyboardVisible;
}

@property(readonly) UIWindow * window;

+ (double)statusBarOrientationAnimationDurationFrom:(long long)arg1 to:(long long)arg2;

- (struct CGSize { double x1; double x2; })_statusBarSizeForOrientation:(long long)arg1;
- (void)_finishStatusBarOrientationChange;
- (void)_changeStatusBarOrientationFinished:(id)arg1 finished:(bool)arg2 context:(void*)arg3;
- (void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 hidden:(bool)arg3 slideUp:(bool)arg4;
- (void)_statusBarHideAnimationFinished:(id)arg1 finished:(bool)arg2 hidden:(id)arg3;
- (void)_statusBarViewControllerKeyboardDidHide:(id)arg1;
- (void)_statusBarViewControllerKeyboardWillShow:(id)arg1;
- (void)_zoom:(bool)arg1 animated:(bool)arg2;
- (void)_prepareForZoom:(bool)arg1;
- (void)_changeStatusBarOrientationFrom:(long long)arg1 toOrientation:(long long)arg2;
- (void)_updateStatusBarForRotationFromInterfaceOrientation:(long long)arg1 toInterfaceOrientation:(long long)arg2 style:(long long)arg3 hidden:(bool)arg4 slideUp:(bool)arg5;
- (bool)isClassicControlWindow:(id)arg1;
- (void)loadView;
- (void)setStatusBarOrientation:(long long)arg1 animationParameters:(id)arg2;
- (void)setStatusBarHidden:(bool)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(long long)arg1 animationParameters:(id)arg2;
- (id)init;
- (id)window;
- (void)dealloc;

@end