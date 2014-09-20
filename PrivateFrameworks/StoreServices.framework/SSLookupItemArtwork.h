/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSURL;

@interface SSLookupItemArtwork : NSObject  {
    NSDictionary *_dictionary;
}

@property(readonly) NSDictionary * lookupDictionary;
@property(readonly) long long height;
@property(readonly) long long width;
@property(readonly) NSURL * URL;


- (id)lookupDictionary;
- (id)initWithLookupDictionary:(id)arg1;
- (id)URL;
- (long long)height;
- (long long)width;
- (void)dealloc;

@end