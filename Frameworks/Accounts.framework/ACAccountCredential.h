/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@class NSString, NSMutableDictionary, NSMutableSet, ACAccount, NSSet, NSDate;

@interface ACAccountCredential : NSObject <NSSecureCoding> {
    NSMutableDictionary *_credentialItems;
    NSString *_credentialType;
    NSMutableSet *_dirtyProperties;
    ACAccount *_owningAccount;
    bool_dirty;
    bool_empty;
}

@property(copy) NSString * oauthToken;
@property(copy) NSString * token;
@property(copy) NSString * oauthTokenSecret;
@property(copy) NSString * password;
@property(copy) NSString * credentialType;
@property(readonly) NSSet * dirtyProperties;
@property(getter=isDirty) bool dirty;
@property(getter=isEmpty) bool empty;
@property(copy) NSString * oauthRefreshToken;
@property(retain) NSDate * expiryDate;
@property(copy) NSString * findMyiPhoneToken;
@property(copy) NSString * mapsToken;
@property(copy) NSString * hsaToken;
@property(copy) NSDate * tokenExpiryDate;

+ (id)credentialWithPassword:(id)arg1;
+ (id)credentialPolicyForAccountType:(id)arg1 key:(id)arg2 clientID:(id)arg3;
+ (id)nonPersistentKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (id)supportedKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;

- (id)oauthToken;
- (bool)isDirty;
- (void)setCredentialType:(id)arg1;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (id)credentialItemForKey:(id)arg1;
- (id)expiryDate;
- (id)mapsToken;
- (id)initWithPassword:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setFindMyiPhoneToken:(id)arg1;
- (void)setHsaToken:(id)arg1;
- (void)setMapsToken:(id)arg1;
- (id)findMyiPhoneToken;
- (id)hsaToken;
- (id)keysForCredentialItems;
- (void)setToken:(id)arg1;
- (id)token;
- (void).cxx_destruct;
- (bool)isEmpty;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)oauthRefreshToken;
- (id)credentialType;
- (void)setOauthTokenSecret:(id)arg1;
- (id)oauthTokenSecret;
- (void)setOauthToken:(id)arg1;
- (id)dirtyProperties;
- (void)setDirty:(bool)arg1;
- (void)setEmpty:(bool)arg1;
- (void)setTokenExpiryDate:(id)arg1;
- (id)tokenExpiryDate;
- (id)oauthTokenNoSync;
- (void)setOauthTokenNoSync:(id)arg1;
- (id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3;
- (id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
- (void)setExpiryDate:(id)arg1;
- (void)setOauthRefreshToken:(id)arg1;
- (id)credentialItems;
- (void)_markPropertyDirty:(id)arg1;
- (void)_setOwningAccount:(id)arg1;
- (void)_clearDirtyProperties;

@end
