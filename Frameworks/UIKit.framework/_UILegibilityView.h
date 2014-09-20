/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIImage, CAFilter, _UILegibilitySettings;

@interface _UILegibilityView : UIView  {
    bool_hidesImage;
    _UILegibilitySettings *_settings;
    UIImage *_image;
    UIImage *_shadowImage;
    double _strength;
    UIImageView *_imageView;
    UIImageView *_shadowImageView;
    CAFilter *_imageColorFilter;
    CAFilter *_shadowImageColorFilter;
    long long _options;
}

@property(readonly) long long style;
@property(retain) _UILegibilitySettings * settings;
@property(retain) UIImage * image;
@property(retain) UIImage * shadowImage;
@property double strength;
@property bool hidesImage;
@property(readonly) bool usesColorFilters;
@property(retain) UIImageView * imageView;
@property(retain) UIImageView * shadowImageView;
@property(retain) CAFilter * imageColorFilter;
@property(retain) CAFilter * shadowImageColorFilter;
@property long long options;


- (bool)hidesImage;
- (void)updateForChangedSettings:(id)arg1;
- (void)setStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)setHidesImage:(bool)arg1;
- (bool)usesSecondaryColor;
- (void)updateImage;
- (void)setShadowImageColorFilter:(id)arg1;
- (id)shadowImageColorFilter;
- (id)drawingColor;
- (void)setImageColorFilter:(id)arg1;
- (id)imageColorFilter;
- (bool)usesColorFilters;
- (void)setShadowImageView:(id)arg1;
- (id)shadowImageView;
- (void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(long long)arg5;
- (id)initWithStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)setStrength:(double)arg1;
- (double)strength;
- (id)initWithStyle:(long long)arg1 image:(id)arg2;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3;
- (long long)options;
- (void)setOptions:(long long)arg1;
- (void)setSettings:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setImage:(id)arg1 shadowImage:(id)arg2;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4;
- (id)imageView;
- (void)setShadowImage:(id)arg1;
- (id)shadowImage;
- (long long)style;
- (id)image;
- (id)settings;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)dealloc;

@end