/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding> {
    union { 
        long long integerValue; 
        struct { 
            unsigned int autocapitalizationType : 2; 
            unsigned int autocorrectionType : 2; 
            unsigned int spellCheckingType : 2; 
            unsigned int keyboardType : 4; 
            unsigned int keyboardAppearance : 2; 
            unsigned int returnKeyType : 4; 
            unsigned int enablesReturnKeyAutomatically : 1; 
            unsigned int secureTextEntry : 1; 
        } fields; 
    } _mask;
}

@property unsigned long long autocapitalizationType;
@property unsigned long long autocorrectionType;
@property unsigned long long spellCheckingType;
@property unsigned long long keyboardType;
@property unsigned long long keyboardAppearance;
@property unsigned long long returnKeyType;
@property bool enablesReturnKeyAutomatically;
@property bool secureTextEntry;

+ (bool)supportsSecureCoding;
+ (unsigned long long)translateToTextInputReturnKeyType:(long long)arg1;
+ (unsigned long long)translateToTextInputKeyboardAppearance:(long long)arg1;
+ (unsigned long long)translateToTextInputKeyboardType:(long long)arg1;
+ (unsigned long long)translateToTextInputSpellCheckingType:(long long)arg1;
+ (unsigned long long)translateToTextInputAutocorrectionType:(long long)arg1;
+ (unsigned long long)translateToTextInputAutocapitalizationType:(long long)arg1;
+ (id)traitsForUITextInputTraits:(id)arg1;

- (bool)secureTextEntry;
- (void)setEnablesReturnKeyAutomatically:(bool)arg1;
- (bool)enablesReturnKeyAutomatically;
- (void)setReturnKeyType:(unsigned long long)arg1;
- (unsigned long long)returnKeyType;
- (void)setKeyboardAppearance:(unsigned long long)arg1;
- (void)setKeyboardType:(unsigned long long)arg1;
- (unsigned long long)keyboardType;
- (void)setSpellCheckingType:(unsigned long long)arg1;
- (unsigned long long)spellCheckingType;
- (void)setAutocorrectionType:(unsigned long long)arg1;
- (unsigned long long)autocorrectionType;
- (void)setAutocapitalizationType:(unsigned long long)arg1;
- (unsigned long long)autocapitalizationType;
- (void)setSecureTextEntry:(bool)arg1;
- (unsigned long long)keyboardAppearance;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
