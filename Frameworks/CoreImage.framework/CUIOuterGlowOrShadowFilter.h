/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIVector, CIColor, CIImage, NSNumber;

@interface CUIOuterGlowOrShadowFilter : CIFilter  {
    CIImage *inputImage;
    CIVector *inputOffset;
    NSNumber *inputRange;
    NSNumber *inputRadius;
    NSNumber *inputSize;
    NSNumber *inputSpread;
    CIColor *inputColor;
}

@property(retain) CIImage * inputImage;
@property(retain) CIVector * inputOffset;
@property(retain) NSNumber * inputRange;
@property(retain) NSNumber * inputRadius;
@property(retain) NSNumber * inputSize;
@property(retain) NSNumber * inputSpread;
@property(retain) CIColor * inputColor;

+ (id)customAttributes;

- (id)outputImage;
- (void)setDefaults;
- (id)inputImage;
- (id)inputSpread;
- (void)setInputSpread:(id)arg1;
- (id)inputRange;
- (id)inputOffset;
- (void)setInputRange:(id)arg1;
- (void)setInputOffset:(id)arg1;
- (id)inputSize;
- (void)setInputSize:(id)arg1;
- (id)inputColor;
- (void)setInputColor:(id)arg1;
- (id)_kernel;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
