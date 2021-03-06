/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBTextEditingTraits : NSObject  {
    bool_canToggleBoldface;
    bool_canToggleItalics;
    bool_canToggleUnderline;
    bool_supportStyling;
    bool_canCut;
    bool_canCopy;
    bool_canPaste;
    bool_canMoveCursorLeft;
    bool_canMoveCursorRight;
    bool_isBold;
    bool_isItalicized;
    bool_isUnderlined;
}

@property(readonly) bool isBold;
@property(readonly) bool isItalicized;
@property(readonly) bool isUnderlined;
@property(readonly) bool canToggleBoldface;
@property(readonly) bool canToggleItalics;
@property(readonly) bool canToggleUnderline;
@property(readonly) bool supportStyling;
@property bool canCut;
@property(readonly) bool canCopy;
@property(readonly) bool canPaste;
@property(readonly) bool canMoveCursorLeft;
@property(readonly) bool canMoveCursorRight;

+ (id)traitsWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2;

- (bool)isUnderlined;
- (bool)isItalicized;
- (bool)isBold;
- (bool)canMoveCursorRight;
- (bool)canMoveCursorLeft;
- (bool)canPaste;
- (bool)canCopy;
- (void)setCanCut:(bool)arg1;
- (bool)canCut;
- (bool)supportStyling;
- (bool)canToggleUnderline;
- (bool)canToggleItalics;
- (bool)canToggleBoldface;
- (id)initWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2;

@end
