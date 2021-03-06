/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSString;

@interface _UILegibilitySettings : NSObject  {
    long long _style;
    UIColor *_contentColor;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_shadowColor;
    double _shadowRadius;
    double _shadowAlpha;
    double _imageOutset;
    double _minFillHeight;
    NSString *_shadowCompositingFilterName;
}

@property long long style;
@property(retain) UIColor * contentColor;
@property(retain) UIColor * primaryColor;
@property(retain) UIColor * secondaryColor;
@property(retain) UIColor * shadowColor;
@property double shadowRadius;
@property double shadowAlpha;
@property double imageOutset;
@property double minFillHeight;
@property(copy) NSString * shadowCompositingFilterName;

+ (id)sharedInstanceForStyle:(long long)arg1;

- (id)shadowCompositingFilterName;
- (double)minFillHeight;
- (double)imageOutset;
- (double)shadowAlpha;
- (id)secondaryColor;
- (id)initWithStyle:(long long)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4;
- (id)initWithContentColor:(id)arg1 contrast:(double)arg2;
- (id)initWithContentColor:(id)arg1;
- (double)shadowRadius;
- (void)setShadowCompositingFilterName:(id)arg1;
- (void)setImageOutset:(double)arg1;
- (void)setShadowAlpha:(double)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setPropertiesForStyle:(long long)arg1;
- (void)setMinFillHeight:(double)arg1;
- (id)initWithStyle:(long long)arg1 contentColor:(id)arg2;
- (id)contentColor;
- (void)setContentColor:(id)arg1;
- (void)setShadowRadius:(double)arg1;
- (id)primaryColor;
- (id)initWithStyle:(long long)arg1;
- (id)shadowColor;
- (void)setStyle:(long long)arg1;
- (void)setShadowColor:(id)arg1;
- (long long)style;
- (bool)isEqual:(id)arg1;
- (void)dealloc;

@end
