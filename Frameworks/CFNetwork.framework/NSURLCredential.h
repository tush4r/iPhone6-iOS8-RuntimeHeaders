/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {
    NSURLCredentialInternal *_internal;
}

@property(readonly) unsigned long long persistence;

+ (bool)supportsSecureCoding;
+ (id)credentialForTrust:(struct __SecTrust { }*)arg1;
+ (id)credentialWithIdentity:(struct __SecIdentity { }*)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3;
+ (id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;

- (id)_initWithCFURLCredential:(struct _CFURLCredential { }*)arg1;
- (struct _CFURLCredential { }*)_cfurlcredential;
- (struct __SecIdentity { }*)identity;
- (id)certificates;
- (id)user;
- (id)password;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_removeSWCACreatorAttribute;
- (bool)_hasSWCACreatorAttribute;
- (unsigned long long)persistence;
- (bool)hasPassword;
- (struct _CFURLCredential { }*)_CFURLCredential;
- (id)initWithTrust:(struct __SecTrust { }*)arg1;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3;
- (id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;

@end