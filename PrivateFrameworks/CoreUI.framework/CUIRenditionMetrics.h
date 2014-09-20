/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIRenditionMetrics : NSObject  {
    struct CGSize { 
        double width; 
        double height; 
    } _imageSize;
    struct CGSize { 
        double width; 
        double height; 
    } _edgeBottomLeftMargin;
    struct CGSize { 
        double width; 
        double height; 
    } _edgeTopRightMargin;
    struct CGSize { 
        double width; 
        double height; 
    } _contentBottomLeftMargin;
    struct CGSize { 
        double width; 
        double height; 
    } _contentTopRightMargin;
    double _baseline;
    double _scale;
    struct crmFlags { 
        unsigned int scalesVertically : 1; 
        unsigned int scalesHorizontally : 1; 
        unsigned int reserved : 14; 
    } _crmFlags;
}


- (double)baseline;
- (bool)hasOpaqueContentBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetContentRectWithMetrics:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insetRectWithMetrics:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })edgeRect;
- (bool)scalesHorizontally;
- (bool)scalesVertically;
- (struct CGSize { double x1; double x2; })contentTopRightMargin;
- (struct CGSize { double x1; double x2; })contentBottomLeftMargin;
- (struct CGSize { double x1; double x2; })edgeTopRightMargin;
- (struct CGSize { double x1; double x2; })edgeBottomLeftMargin;
- (id)initWithImageSize:(struct CGSize { double x1; double x2; })arg1 edgeBottomLeft:(struct CGSize { double x1; double x2; })arg2 edgeTopRight:(struct CGSize { double x1; double x2; })arg3 contentBottomLeft:(struct CGSize { double x1; double x2; })arg4 contentTopRight:(struct CGSize { double x1; double x2; })arg5 baseline:(double)arg6 scalesVertically:(bool)arg7 scalesHorizontally:(bool)arg8 scale:(double)arg9;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (struct CGSize { double x1; double x2; })imageSize;
- (double)scale;

@end