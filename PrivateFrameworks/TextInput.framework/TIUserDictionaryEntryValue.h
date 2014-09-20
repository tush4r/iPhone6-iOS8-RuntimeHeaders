/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString, NSNumber;

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry> {
    NSString *_phrase;
    NSString *_shortcut;
    NSNumber *_timestamp;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * phrase;
@property(copy) NSString * shortcut;
@property(retain) NSNumber * timestamp;

+ (id)valueWithEntry:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)setShortcut:(id)arg1;
- (id)shortcut;
- (void)setPhrase:(id)arg1;
- (id)phrase;
- (bool)matchesEntry:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end