/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPListItem;

@interface CPList : NSObject <CPDisposable> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } spacer;
    int type;
    unsigned int ordinalPrefixLength;
    unsigned int ordinalSuffixLength;
    CPListItem *parentItem;
    struct __CFArray { } *items;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } spacer;
@property int type;
@property unsigned int ordinalPrefixLength;
@property unsigned int ordinalSuffixLength;
@property(retain) CPListItem * parentItem;


- (void)finalize;
- (void)setParentItem:(id)arg1;
- (void)setOrdinalSuffixLength:(unsigned int)arg1;
- (unsigned int)ordinalSuffixLength;
- (void)setOrdinalPrefixLength:(unsigned int)arg1;
- (unsigned int)ordinalPrefixLength;
- (void)setSpacer:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })spacer;
- (bool)isMultilevel;
- (bool)containsParagraph:(id)arg1;
- (void)dispose;
- (id)itemAtIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (id)parentItem;
- (void)addItem:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;

@end
