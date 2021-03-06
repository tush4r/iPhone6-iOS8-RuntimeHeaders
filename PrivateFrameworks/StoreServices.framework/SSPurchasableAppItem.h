/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchasableAppItem : SSPurchasableItem  {
}

+ (id)sortByNameKey;
+ (id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(bool)arg4;
+ (id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(bool)arg5;
+ (id)allPropertyKeys;
+ (id)databaseTable;

- (long long)iTunesVersion;
- (id)humanReadableVersion;
- (id)redownloadParams;
- (bool)supportsIPhone;
- (bool)supportsIPad;
- (unsigned int)minimumOS;
- (id)longTitle;
- (bool)isFamilyShareable;
- (id)iconTitle;
- (long long)contentRatingFlags;
- (id)iconURL;
- (bool)isNewsstand;
- (id)companyName;
- (id)accountIdentifier;
- (id)bundleID;
- (id)category;
- (id)description;

@end
