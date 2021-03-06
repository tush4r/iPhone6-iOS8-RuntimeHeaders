/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebSecurityOriginPrivate, <WebQuotaManager>;

@interface WebSecurityOrigin : NSObject  {
    WebSecurityOriginPrivate *_private;
    <WebQuotaManager> *_applicationCacheQuotaManager;
    <WebQuotaManager> *_databaseQuotaManager;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)arg1;

- (id)databaseIdentifier;
- (id)toString;
- (void)finalize;
- (unsigned short)port;
- (id)protocol;
- (id)stringValue;
- (id)host;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (struct SecurityOrigin { struct atomic<int> { /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*x_1_1_1; int x_1_1_2; } x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; unsigned short x6; boolx7; boolx8; boolx9; boolx10; int x11; boolx12; boolx13; }*)_core;
     /* Encoded args for previous method: ^{SecurityOrigin={atomic<int>=Ai}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}SBBBBiBB}16@0:8 */

- (id)_initWithWebCoreSecurityOrigin:(struct SecurityOrigin { struct atomic<int> { /* Warning: Unrecognized filer type: 'A' using 'void*' */ void*x_1_1_1; int x_1_1_2; } x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; unsigned short x6; boolx7; boolx8; boolx9; boolx10; int x11; boolx12; boolx13; }*)arg1;
     /* Encoded args for previous method: @24@0:8^{SecurityOrigin={atomic<int>=Ai}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}SBBBBiBB}16 */

- (id)applicationCacheQuotaManager;
- (id)databaseQuotaManager;
- (unsigned long long)usage;
- (unsigned long long)quota;
- (void)setQuota:(unsigned long long)arg1;

@end
