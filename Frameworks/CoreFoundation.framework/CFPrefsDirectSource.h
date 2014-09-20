/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class CFPDSource;

@interface CFPrefsDirectSource : CFPrefsPlistSource  {
    CFPDSource *_underlyingSource;
    bool_managed;
}


- (bool)sendMessage:(id)arg1;
- (void)dealloc;
- (void*)copyReplyForDirectMessage:(id)arg1 error:(bool*)arg2;
- (void)setManaged:(bool)arg1;
- (unsigned char)alreadylocked_requestNewData;
- (id)createRequestNewContentMessageForDaemon:(bool)arg1;
- (void)sendFullyPreparedMessage:(id)arg1 settingValue:(void*)arg2 forKey:(struct __CFString { }*)arg3;
- (bool)managed;

@end