/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData;

@interface MCChaperonePayload : MCPayload  {
    NSData *_pairingCertificateData;
    bool_nonChaperonePairingAllowed;
}

@property(retain,readonly) NSData * pairingCertificateData;
@property(readonly) bool nonChaperonePairingAllowed;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (bool)nonChaperonePairingAllowed;
- (id)pairingCertificateData;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void).cxx_destruct;
- (id)description;

@end