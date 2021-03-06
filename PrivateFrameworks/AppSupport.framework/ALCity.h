/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString, NSDictionary;

@interface ALCity : NSObject  {
    int _identifier;
    NSString *_localeCode;
    NSString *_timeZone;
    float _longitude;
    float _latitude;
    NSString *_yahooCode;
    NSString *_name;
    NSString *_unlocalizedName;
    NSString *_countryName;
    NSString *_unlocalizedCountryName;
    NSString *_countryOverride;
    NSString *_unlocalizedCountryOverride;
    NSString *_identifierForCPCity;
    bool_localizationAttempted;
}

@property(readonly) NSString * classicIdentifier;
@property(readonly) NSDictionary * properties;
@property int identifier;
@property(retain) NSString * localeCode;
@property(retain) NSString * timeZone;
@property float longitude;
@property float latitude;
@property(retain) NSString * yahooCode;
@property(retain) NSString * name;
@property(retain) NSString * unlocalizedName;
@property(retain) NSString * countryName;
@property(retain) NSString * unlocalizedCountryName;
@property(retain) NSString * countryOverride;
@property(retain) NSString * unlocalizedCountryOverride;


- (void)setUnlocalizedCountryName:(id)arg1;
- (id)unlocalizedCountryName;
- (float)longitude;
- (float)latitude;
- (void)setLongitude:(float)arg1;
- (void)setLatitude:(float)arg1;
- (void)setUnlocalizedCountryOverride:(id)arg1;
- (void)setYahooCode:(id)arg1;
- (id)yahooCode;
- (void)setLocaleCode:(id)arg1;
- (void)setUnlocalizedName:(id)arg1;
- (id)classicIdentifier;
- (id)unlocalizedCountryOverride;
- (void)ensureLocalized;
- (id)displayNameIncludingCountry:(bool)arg1 withFormat:(id)arg2;
- (id)countryOverride;
- (id)initWithSQLRow:(char **)arg1;
- (id)unlocalizedName;
- (void)setCountryOverride:(id)arg1;
- (id)localeCode;
- (id)initWithProperties:(id)arg1;
- (id)properties;
- (id)timeZone;
- (void)setIdentifier:(int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (int)identifier;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)displayNameIncludingCountry:(bool)arg1;
- (void)setCountryName:(id)arg1;
- (id)countryName;

@end
