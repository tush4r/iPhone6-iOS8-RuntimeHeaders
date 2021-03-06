/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSMutableString;

@interface IMSuperToPlainParserContext : IMFromSuperParserContext  {
    NSMutableString *_plainString;
    bool_extractLinks;
}

@property(readonly) NSString * plainString;


- (id)plainString;
- (id)initWithAttributedString:(id)arg1 extractLinks:(bool)arg2;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 characters:(id)arg4;
- (id)resultsForLogging;
- (id)initWithAttributedString:(id)arg1;
- (id)name;
- (void)dealloc;

@end
