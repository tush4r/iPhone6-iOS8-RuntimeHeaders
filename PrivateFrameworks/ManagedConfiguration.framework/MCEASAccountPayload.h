/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSNumber, NSData;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_emailAddress;
    NSNumber *_mailNumberOfPastDaysToSync;
    NSData *_embeddedCertificate;
    NSString *_embeddedCertificateName;
    NSString *_embeddedCertificatePassword;
    NSString *_certificateUUID;
    NSString *_accountPersistentUUID;
    NSData *_certificatePersistentID;
    bool_syncDefaultFoldersOnly;
    NSNumber *_useSSL;
}

@property(retain,readonly) NSString * accountDescription;
@property(retain,readonly) NSString * hostname;
@property(copy) NSString * username;
@property(copy) NSString * password;
@property(copy) NSString * emailAddress;
@property(retain) NSNumber * useSSL;
@property(retain,readonly) NSNumber * mailNumberOfPastDaysToSync;
@property(retain,readonly) NSData * embeddedCertificate;
@property(retain,readonly) NSString * embeddedCertificateName;
@property(copy) NSString * embeddedCertificatePassword;
@property(retain,readonly) NSString * certificateUUID;
@property(readonly) bool hasCertificate;
@property(copy) NSString * accountPersistentUUID;
@property(retain) NSData * certificatePersistentID;
@property bool syncDefaultFoldersOnly;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (id)hostname;
- (id)username;
- (id)mailNumberOfPastDaysToSync;
- (id)accountDescription;
- (void)setSyncDefaultFoldersOnly:(bool)arg1;
- (void)setEmbeddedCertificatePassword:(id)arg1;
- (id)embeddedCertificatePassword;
- (id)embeddedCertificateName;
- (id)embeddedCertificate;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)certificateUUID;
- (void)setCertificatePersistentID:(id)arg1;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)certificatePersistentID;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)accountPersistentUUID;
- (void)setUseSSL:(id)arg1;
- (bool)syncDefaultFoldersOnly;
- (id)useSSL;
- (void)setUsername:(id)arg1;
- (void)setPassword:(id)arg1;
- (bool)hasCertificate;
- (id)password;
- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;
- (void).cxx_destruct;
- (id)title;
- (id)description;

@end
