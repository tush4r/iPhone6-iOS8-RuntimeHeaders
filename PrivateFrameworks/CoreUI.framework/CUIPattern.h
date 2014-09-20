/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPattern : NSObject  {
    struct CGImage { } *_patternImage;
    struct CGPattern { } *_pattern;
    double _alpha;
}

@property double alpha;


- (struct CGPattern { }*)pattern;
- (struct CGImage { }*)patternImageRef;
- (void)setPatternInContext:(struct CGContext { }*)arg1;
- (id)initWithImageRef:(struct CGImage { }*)arg1;
- (struct CGPattern { }*)_newPattern;
- (id)description;
- (void)setAlpha:(double)arg1;
- (double)alpha;
- (void)dealloc;

@end