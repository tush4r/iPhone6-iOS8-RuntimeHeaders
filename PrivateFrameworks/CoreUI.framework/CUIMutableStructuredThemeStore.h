/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSString, NSMutableDictionary;

@interface CUIMutableStructuredThemeStore : CUIStructuredThemeStore  {
    NSString *_identifier;
    NSMutableDictionary *_memoryStore;
    NSMutableDictionary *_nameIdentifierStore;
    int _maxNameIdentifier;
}


- (bool)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 isFPO:(bool*)arg2;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint { double x1; double x2; }*)arg2;
- (id)allImageNames;
- (bool)usesCUISystemThemeRenditionKey;
- (long long)maximumRenditionKeyTokenCount;
- (void)clearRenditionCache;
- (bool)canGetRenditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)renditionKeyForName:(id)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (void)insertCGImage:(struct CGImage { }*)arg1 withName:(id)arg2 andDescription:(id)arg3;
- (void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
- (id)imagesWithName:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)dealloc;

@end