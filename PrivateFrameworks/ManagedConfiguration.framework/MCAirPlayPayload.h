/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray;

@interface MCAirPlayPayload : MCPayload  {
    NSArray *_whitelistDestinations;
    NSArray *_destinationsWithPasswords;
    NSArray *_titlesAndDescriptions;
}

@property(retain) NSArray * whitelistDestinations;
@property(retain) NSArray * destinationsWithPasswords;
@property(retain) NSArray * titlesAndDescriptions;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setTitlesAndDescriptions:(id)arg1;
- (id)titlesAndDescriptions;
- (id)destinationsWithPasswords;
- (id)whitelistDestinations;
- (void)setDestinationsWithPasswords:(id)arg1;
- (void)setWhitelistDestinations:(id)arg1;
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
