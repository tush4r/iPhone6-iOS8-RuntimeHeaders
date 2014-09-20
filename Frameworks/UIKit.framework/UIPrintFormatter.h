/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying> {
    UIPrintPageRenderer *_printPageRenderer;
    double _maximumContentHeight;
    double _maximumContentWidth;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _perPageContentInsets;
    long long _startPage;
    long long _pageCount;
    bool_needsRecalc;
}

@property UIPrintPageRenderer * printPageRenderer;
@property double maximumContentHeight;
@property double maximumContentWidth;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } perPageContentInsets;
@property long long startPage;
@property(readonly) long long pageCount;


- (void)setStartPage:(long long)arg1;
- (long long)startPage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })perPageContentInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (double)maximumContentWidth;
- (double)maximumContentHeight;
- (id)printPageRenderer;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageAtIndex:(long long)arg1;
- (void)setPrintPageRenderer:(id)arg1;
- (void)setPerPageContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMaximumContentHeight:(double)arg1;
- (void)setMaximumContentWidth:(double)arg1;
- (void)removeFromPrintPageRenderer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pageContentRect:(bool)arg1;
- (void)_recalcIfNecessary;
- (long long)_recalcPageCount;
- (void)_setNeedsRecalc;
- (long long)pageCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;

@end