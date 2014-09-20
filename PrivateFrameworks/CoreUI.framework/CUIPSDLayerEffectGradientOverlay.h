/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class CUIPSDGradient;

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent  {
    CUIPSDGradient *_gradient;
}

@property(retain) CUIPSDGradient * gradient;


- (unsigned int)effectType;
- (id)gradient;
- (void)setGradient:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (bool)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;

@end