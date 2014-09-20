/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSArray, NSURL, NSNumber;

@interface NSURLComponents : NSObject <NSCopying> {
}

@property(copy,readonly) NSURL * URL;
@property(copy,readonly) NSString * string;
@property(copy) NSString * scheme;
@property(copy) NSString * user;
@property(copy) NSString * password;
@property(copy) NSString * host;
@property(copy) NSNumber * port;
@property(copy) NSString * path;
@property(copy) NSString * query;
@property(copy) NSString * fragment;
@property(copy) NSString * percentEncodedUser;
@property(copy) NSString * percentEncodedPassword;
@property(copy) NSString * percentEncodedHost;
@property(copy) NSString * percentEncodedPath;
@property(copy) NSString * percentEncodedQuery;
@property(copy) NSString * percentEncodedFragment;
@property(copy) NSArray * queryItems;

+ (id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(bool)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)componentsWithString:(id)arg1;

- (void)setScheme:(id)arg1;
- (void)setFragment:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)user;
- (void)setPort:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setUser:(id)arg1;
- (void)setPercentEncodedQuery:(id)arg1;
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(bool)arg2;
- (id)password;
- (id)port;
- (id)fragment;
- (void)setPath:(id)arg1;
- (id)host;
- (id)URL;
- (id)initWithString:(id)arg1;
- (void)setQuery:(id)arg1;
- (id)string;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)path;
- (id)query;
- (id)scheme;
- (id)init;
- (void)setQueryItems:(id)arg1;
- (id)queryItems;
- (void)setPercentEncodedFragment:(id)arg1;
- (void)setPercentEncodedPath:(id)arg1;
- (void)setPercentEncodedHost:(id)arg1;
- (void)setPercentEncodedPassword:(id)arg1;
- (void)setPercentEncodedUser:(id)arg1;
- (id)URLRelativeToURL:(id)arg1;
- (id)percentEncodedPassword;
- (id)percentEncodedUser;
- (id)percentEncodedFragment;
- (id)percentEncodedQuery;
- (id)percentEncodedHost;
- (id)percentEncodedPath;

@end