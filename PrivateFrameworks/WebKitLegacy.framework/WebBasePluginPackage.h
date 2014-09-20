/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableSet;

@interface WebBasePluginPackage : NSObject  {
    NSMutableSet *pluginDatabases;
    struct String { 
        struct RefPtr<WTF::StringImpl> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    } path;
    struct PluginInfo { 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } name; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } file; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } desc; 
        struct Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow> { 
            struct MimeClassInfo {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } mimes; 
        boolisApplicationPlugin; 
    } pluginInfo;
    struct RetainPtr<__CFBundle *> { 
        void *m_ptr; 
    } cfBundle;
    int (*BP_CreatePluginMIMETypesPreferences)();
}

+ (id)pluginWithPath:(id)arg1;
+ (id)preferredLocalizationName;
+ (void)initialize;

- (void)wasRemovedFromPluginDatabase:(id)arg1;
- (void)wasAddedToPluginDatabase:(id)arg1;
- (bool)isNativeLibraryData:(id)arg1;
- (bool)isJavaPlugIn;
- (bool)supportsMIMEType:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (bool)supportsExtension:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (const struct PluginInfo { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_1_1_1; } x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct Vector<WebCore::MimeClassInfo, 0, WTF::CrashOnOverflow> { struct MimeClassInfo {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; boolx5; }*)pluginInfo;
- (bool)getPluginInfoFromPLists;
- (id)pListForPath:(id)arg1 createFile:(bool)arg2;
- (id)_objectForInfoDictionaryKey:(id)arg1;
- (void)createPropertyListFile;
- (void)finalize;
- (id)MIMETypeForExtension:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (void)unload;
- (struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })bundleVersion;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;
- (bool)load;
- (id).cxx_construct;
- (bool)isQuickTimePlugIn;
- (const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)path;
- (struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; })bundleIdentifier;
- (void)dealloc;
- (unsigned int)versionNumber;

@end