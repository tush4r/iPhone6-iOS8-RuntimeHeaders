/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSAttributedString;

@interface _UILabelScaledMetrics : NSObject  {
    double _actualScaleFactor;
    double _baselineOffset;
    double _scaledBaselineOffset;
    double _scaledLineHeight;
    NSAttributedString *_scaledAttributedText;
    struct CGSize { 
        double width; 
        double height; 
    } _targetSize;
    struct CGSize { 
        double width; 
        double height; 
    } _scaledSize;
}

@property struct CGSize { double x1; double x2; } targetSize;
@property struct CGSize { double x1; double x2; } scaledSize;
@property double actualScaleFactor;
@property double baselineOffset;
@property double scaledBaselineOffset;
@property double scaledLineHeight;
@property(retain) NSAttributedString * scaledAttributedText;


- (void)setScaledAttributedText:(id)arg1;
- (id)scaledAttributedText;
- (void)setScaledLineHeight:(double)arg1;
- (double)scaledLineHeight;
- (void)setScaledBaselineOffset:(double)arg1;
- (double)scaledBaselineOffset;
- (void)setBaselineOffset:(double)arg1;
- (double)baselineOffset;
- (void)setActualScaleFactor:(double)arg1;
- (double)actualScaleFactor;
- (void)setScaledSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })scaledSize;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })targetSize;
- (void)dealloc;

@end
