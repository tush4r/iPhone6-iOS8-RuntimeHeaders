/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload  {
    unsigned long long _airPrintCount;
    NSMutableArray *_ippAddresses;
}

@property unsigned long long airPrintCount;
@property(retain) NSMutableArray * ippAddresses;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setIppAddresses:(id)arg1;
- (void)setAirPrintCount:(unsigned long long)arg1;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)ippAddresses;
- (unsigned long long)airPrintCount;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)restrictions;
- (void).cxx_destruct;
- (id)description;

@end