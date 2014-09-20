/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebView, NSString, <UIScrollViewDelegate>;

@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {
    <UIScrollViewDelegate> *_delegate;
    UIWebView *_webView;
}

@property <UIScrollViewDelegate> * delegate;
@property UIWebView * webView;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)setWebView:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)webView;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)delegate;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;

@end