/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMRange;

@interface UITextRangeImpl : UITextRange  {
    DOMRange *_domRange;
    long long _affinityIfCollapsed;
}

@property(retain) DOMRange * domRange;
@property long long affinity;

+ (id)wrapDOMRange:(id)arg1;
+ (id)wrapDOMRange:(id)arg1 withAffinity:(long long)arg2;

- (void)adjustAffinityOfPosition:(id)arg1 isStart:(bool)arg2;
- (void)setAffinity:(long long)arg1;
- (void)setDomRange:(id)arg1;
- (id)domRange;
- (long long)affinity;
- (id)end;
- (id)start;
- (bool)isEmpty;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
