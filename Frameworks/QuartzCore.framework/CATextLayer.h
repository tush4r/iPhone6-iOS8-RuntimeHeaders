/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface CATextLayer : CALayer  {
    struct CATextLayerPrivate { } *_state;
}

@property(copy) id truncationString;
@property bool allowsFontSubpixelQuantization;
@property(copy) id string;
@property void* font;
@property double fontSize;
@property struct CGColor { }* foregroundColor;
@property(getter=isWrapped) bool wrapped;
@property(copy) NSString * truncationMode;
@property(copy) NSString * alignmentMode;

+ (bool)needsDisplayForKey:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (double)fontSize;
- (void)setAlignmentMode:(id)arg1;
- (void)setForegroundColor:(struct CGColor { }*)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (struct CGColor { }*)foregroundColor;
- (id)initWithLayer:(id)arg1;
- (void)setString:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void*)font;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (void)setFont:(void*)arg1;
- (id)string;
- (void)didChangeValueForKey:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)alignmentMode;
- (void)setTruncationMode:(id)arg1;
- (id)truncationMode;
- (void)setWrapped:(bool)arg1;
- (bool)isWrapped;
- (void)_applyLinesToFunction:(int (*)())arg1 info:(void*)arg2;
- (struct __CTLine { }*)_createTruncationToken;
- (struct __CTTypesetter { }*)_retainTypesetter;
- (id)_createStringDict;
- (void)_drawLine:(struct __CTLine { }*)arg1 inContext:(struct CGContext { }*)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })_preferredSize;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (void)setAllowsFontSubpixelQuantization:(bool)arg1;
- (void)setTruncationString:(id)arg1;
- (bool)wrapped;
- (id)truncationString;
- (bool)allowsFontSubpixelQuantization;

@end
