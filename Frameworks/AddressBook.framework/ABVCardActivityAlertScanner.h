/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSString;

@interface ABVCardActivityAlertScanner : NSObject  {
    NSString *_string;
    unsigned long long _position;
}

+ (id)scannerWithString:(id)arg1;
+ (id)scanAlertValueFromString:(id)arg1;
+ (bool)characterIsStringValueCharacter:(unsigned short)arg1;

- (unsigned short)nextCharacter;
- (id)initWithString:(id)arg1;
- (unsigned long long)position;
- (void)dealloc;
- (void)scanPastWhitespace;
- (unsigned short)scanCharacterWithEscaping:(bool)arg1;
- (bool)scanPastCharacter:(unsigned short)arg1;
- (unsigned short)scanCharacter;
- (id)scanUnquotedStringValue;
- (id)scanQuotedStringValue;
- (unsigned short)nextUnescapedCharacter;
- (bool)atEnd;
- (bool)scanPastKeyValueSeparator;
- (id)scanStringValue;
- (bool)scanPastItemDelimiter;
- (id)scanKeyValuePair;
- (id)scanAlertValue;

@end
