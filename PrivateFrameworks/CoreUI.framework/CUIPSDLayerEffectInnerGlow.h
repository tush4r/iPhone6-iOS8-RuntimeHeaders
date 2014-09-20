/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIColor;

@interface CUIPSDLayerEffectInnerGlow : CUIPSDLayerEffectComponent  {
    int _blendMode;
    double _opacity;
    CUIColor *_color;
    unsigned long long _blurSize;
}

@property int blendMode;
@property double opacity;
@property(retain) CUIColor * color;
@property unsigned long long blurSize;


- (unsigned int)effectType;
- (unsigned long long)blurSize;
- (void)setBlurSize:(unsigned long long)arg1;
- (void)setColor:(id)arg1;
- (id)color;
- (void)setOpacity:(double)arg1;
- (double)opacity;
- (id)init;
- (void)dealloc;
- (void)setBlendMode:(int)arg1;
- (int)blendMode;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (bool)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;

@end