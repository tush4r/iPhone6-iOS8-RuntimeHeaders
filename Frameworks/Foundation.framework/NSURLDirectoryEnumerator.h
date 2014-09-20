/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator  {
    struct __CFURLEnumerator { } *_enumerator;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _errorHandler;

    boolshouldContinue;
}

@property(copy) id errorHandler;


- (void)finalize;
- (void)skipDescendants;
- (id)directoryAttributes;
- (id)fileAttributes;
- (id)errorHandler;
- (void)setErrorHandler:(id)arg1;
- (unsigned long long)level;
- (id)nextObject;
- (void)dealloc;
- (id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(id)arg4;
- (void)skipDescendents;

@end