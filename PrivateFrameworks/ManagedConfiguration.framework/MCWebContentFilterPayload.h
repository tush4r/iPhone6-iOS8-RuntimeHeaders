/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSArray, NSDictionary;

@interface MCWebContentFilterPayload : MCPayload  {
    bool_autoFilterEnabled;
    bool_filterBrowsers;
    bool_filterSockets;
    NSString *_filterType;
    NSArray *_permittedURLStrings;
    NSArray *_whitelistedBookmarks;
    NSArray *_blacklistedURLStrings;
    NSDictionary *_pluginConfiguration;
    NSString *_name;
    NSString *_pluginBundleID;
}

@property(copy) NSString * filterType;
@property bool autoFilterEnabled;
@property(retain) NSArray * permittedURLStrings;
@property(retain) NSArray * whitelistedBookmarks;
@property(retain) NSArray * blacklistedURLStrings;
@property(retain) NSDictionary * pluginConfiguration;
@property(copy) NSString * name;
@property(copy) NSString * pluginBundleID;
@property bool filterBrowsers;
@property bool filterSockets;

+ (id)pluginFilterKeysAndClasses;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setFilterSockets:(bool)arg1;
- (bool)filterSockets;
- (void)setFilterBrowsers:(bool)arg1;
- (bool)filterBrowsers;
- (void)setPluginBundleID:(id)arg1;
- (void)setPluginConfiguration:(id)arg1;
- (id)pluginConfiguration;
- (void)setBlacklistedURLStrings:(id)arg1;
- (void)setWhitelistedBookmarks:(id)arg1;
- (void)setPermittedURLStrings:(id)arg1;
- (void)setAutoFilterEnabled:(bool)arg1;
- (id)blacklistedURLStrings;
- (id)whitelistedBookmarks;
- (id)permittedURLStrings;
- (bool)autoFilterEnabled;
- (id)pluginBundleID;
- (id)installationWarnings;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)restrictions;
- (void).cxx_destruct;
- (void)setFilterType:(id)arg1;
- (id)filterType;
- (id)name;
- (void)setName:(id)arg1;
- (id)title;
- (id)description;

@end