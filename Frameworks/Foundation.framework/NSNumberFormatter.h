/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSRecursiveLock, NSMutableDictionary, NSString, NSDictionary, NSLocale, NSNumber;

@interface NSNumberFormatter : NSFormatter  {
    NSMutableDictionary *_attributes;
    struct __CFNumberFormatter { } *_formatter;
    unsigned long long _counter;
    unsigned long long _behavior;
    NSRecursiveLock *_lock;
    unsigned long long _stateBitMask;
    void *_reserved[9];
}

@property long long formattingContext;
@property unsigned long long numberStyle;
@property(copy) NSLocale * locale;
@property bool generatesDecimalNumbers;
@property unsigned long long formatterBehavior;
@property(copy) NSString * negativeFormat;
@property(copy) NSDictionary * textAttributesForNegativeValues;
@property(copy) NSString * positiveFormat;
@property(copy) NSDictionary * textAttributesForPositiveValues;
@property bool allowsFloats;
@property(copy) NSString * decimalSeparator;
@property bool alwaysShowsDecimalSeparator;
@property(copy) NSString * currencyDecimalSeparator;
@property bool usesGroupingSeparator;
@property(copy) NSString * groupingSeparator;
@property(copy) NSString * zeroSymbol;
@property(copy) NSDictionary * textAttributesForZero;
@property(copy) NSString * nilSymbol;
@property(copy) NSDictionary * textAttributesForNil;
@property(copy) NSString * notANumberSymbol;
@property(copy) NSDictionary * textAttributesForNotANumber;
@property(copy) NSString * positiveInfinitySymbol;
@property(copy) NSDictionary * textAttributesForPositiveInfinity;
@property(copy) NSString * negativeInfinitySymbol;
@property(copy) NSDictionary * textAttributesForNegativeInfinity;
@property(copy) NSString * positivePrefix;
@property(copy) NSString * positiveSuffix;
@property(copy) NSString * negativePrefix;
@property(copy) NSString * negativeSuffix;
@property(copy) NSString * currencyCode;
@property(copy) NSString * currencySymbol;
@property(copy) NSString * internationalCurrencySymbol;
@property(copy) NSString * percentSymbol;
@property(copy) NSString * perMillSymbol;
@property(copy) NSString * minusSign;
@property(copy) NSString * plusSign;
@property(copy) NSString * exponentSymbol;
@property unsigned long long groupingSize;
@property unsigned long long secondaryGroupingSize;
@property(copy) NSNumber * multiplier;
@property unsigned long long formatWidth;
@property(copy) NSString * paddingCharacter;
@property unsigned long long paddingPosition;
@property unsigned long long roundingMode;
@property(copy) NSNumber * roundingIncrement;
@property unsigned long long minimumIntegerDigits;
@property unsigned long long maximumIntegerDigits;
@property unsigned long long minimumFractionDigits;
@property unsigned long long maximumFractionDigits;
@property(copy) NSNumber * minimum;
@property(copy) NSNumber * maximum;
@property(copy) NSString * currencyGroupingSeparator;
@property(getter=isLenient) bool lenient;
@property bool usesSignificantDigits;
@property unsigned long long minimumSignificantDigits;
@property unsigned long long maximumSignificantDigits;
@property(getter=isPartialStringValidationEnabled) bool partialStringValidationEnabled;

+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2;
+ (void)initialize;
+ (unsigned long long)defaultFormatterBehavior;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;

- (id)negativeSuffix;
- (id)negativePrefix;
- (id)positiveSuffix;
- (id)positivePrefix;
- (id)groupingSeparator;
- (id)decimalSeparator;
- (void)setUsesGroupingSeparator:(bool)arg1;
- (void)finalize;
- (void)setCurrencyCode:(id)arg1;
- (id)currencyCode;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)multiplier;
- (void)setGeneratesDecimalNumbers:(bool)arg1;
- (id)stringFromNumber:(id)arg1;
- (void)setFormatterBehavior:(unsigned long long)arg1;
- (id)stringForObjectValue:(id)arg1;
- (void)_reset;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)numberFromString:(id)arg1;
- (void)setNumberStyle:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setRoundingMode:(unsigned long long)arg1;
- (void)setMinimumFractionDigits:(unsigned long long)arg1;
- (void)setMaximumFractionDigits:(unsigned long long)arg1;
- (void)setLenient:(bool)arg1;
- (void)_setUsesCharacterDirection:(bool)arg1;
- (bool)_usesCharacterDirection;
- (void)setPartialStringValidationEnabled:(bool)arg1;
- (bool)isPartialStringValidationEnabled;
- (void)setMaximumSignificantDigits:(unsigned long long)arg1;
- (unsigned long long)maximumSignificantDigits;
- (void)setMinimumSignificantDigits:(unsigned long long)arg1;
- (unsigned long long)minimumSignificantDigits;
- (void)setUsesSignificantDigits:(bool)arg1;
- (bool)usesSignificantDigits;
- (bool)isLenient;
- (void)setCurrencyGroupingSeparator:(id)arg1;
- (id)currencyGroupingSeparator;
- (void)setMaximum:(id)arg1;
- (id)maximum;
- (void)setMinimum:(id)arg1;
- (id)minimum;
- (unsigned long long)maximumFractionDigits;
- (unsigned long long)minimumFractionDigits;
- (void)setMaximumIntegerDigits:(unsigned long long)arg1;
- (unsigned long long)maximumIntegerDigits;
- (void)setMinimumIntegerDigits:(unsigned long long)arg1;
- (unsigned long long)minimumIntegerDigits;
- (void)setRoundingIncrement:(id)arg1;
- (id)roundingIncrement;
- (void)setPaddingPosition:(unsigned long long)arg1;
- (unsigned long long)paddingPosition;
- (void)setPaddingCharacter:(id)arg1;
- (id)paddingCharacter;
- (void)setMultiplier:(id)arg1;
- (void)setFormatWidth:(unsigned long long)arg1;
- (unsigned long long)formatWidth;
- (void)setSecondaryGroupingSize:(unsigned long long)arg1;
- (unsigned long long)secondaryGroupingSize;
- (void)setGroupingSize:(unsigned long long)arg1;
- (unsigned long long)groupingSize;
- (void)setExponentSymbol:(id)arg1;
- (id)exponentSymbol;
- (void)setPlusSign:(id)arg1;
- (id)plusSign;
- (void)setMinusSign:(id)arg1;
- (id)minusSign;
- (void)setPerMillSymbol:(id)arg1;
- (id)perMillSymbol;
- (void)setPercentSymbol:(id)arg1;
- (id)percentSymbol;
- (bool)_hasSetInternationalCurrencySymbol;
- (void)setInternationalCurrencySymbol:(id)arg1;
- (id)internationalCurrencySymbol;
- (void)setCurrencySymbol:(id)arg1;
- (bool)_hasSetCurrencySymbol;
- (id)currencySymbol;
- (bool)_hasSetCurrencyCode;
- (void)setNegativeSuffix:(id)arg1;
- (void)setNegativePrefix:(id)arg1;
- (void)setPositiveSuffix:(id)arg1;
- (void)setPositivePrefix:(id)arg1;
- (void)setTextAttributesForNegativeInfinity:(id)arg1;
- (id)textAttributesForNegativeInfinity;
- (void)setTextAttributesForPositiveInfinity:(id)arg1;
- (id)textAttributesForPositiveInfinity;
- (void)setTextAttributesForNotANumber:(id)arg1;
- (id)textAttributesForNotANumber;
- (void)setNotANumberSymbol:(id)arg1;
- (void)setTextAttributesForNil:(id)arg1;
- (id)textAttributesForNil;
- (void)setTextAttributesForZero:(id)arg1;
- (id)textAttributesForZero;
- (void)setZeroSymbol:(id)arg1;
- (void)setGroupingSeparator:(id)arg1;
- (bool)usesGroupingSeparator;
- (void)setCurrencyDecimalSeparator:(id)arg1;
- (id)currencyDecimalSeparator;
- (void)setAlwaysShowsDecimalSeparator:(bool)arg1;
- (bool)alwaysShowsDecimalSeparator;
- (void)setDecimalSeparator:(id)arg1;
- (bool)allowsFloats;
- (void)setTextAttributesForPositiveValues:(id)arg1;
- (id)textAttributesForPositiveValues;
- (void)setPositiveFormat:(id)arg1;
- (void)setTextAttributesForNegativeValues:(id)arg1;
- (id)textAttributesForNegativeValues;
- (void)setNegativeFormat:(id)arg1;
- (id)negativeFormat;
- (unsigned long long)formatterBehavior;
- (bool)generatesDecimalNumbers;
- (unsigned long long)numberStyle;
- (void*)__Keynote_NOOP;
- (id)positiveFormat;
- (void)_regenerateFormatter;
- (id)positiveInfinitySymbol;
- (id)negativeInfinitySymbol;
- (id)zeroSymbol;
- (id)notANumberSymbol;
- (id)nilSymbol;
- (void)setAllowsFloats:(bool)arg1;
- (void)setNegativeInfinitySymbol:(id)arg1;
- (void)setPositiveInfinitySymbol:(id)arg1;
- (void)setNilSymbol:(id)arg1;
- (void)_clearFormatter;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (unsigned long long)roundingMode;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (long long)formattingContext;
- (void)setFormattingContext:(long long)arg1;
- (void*)getFormatter;
- (void)resetCheckLocaleChange;
- (bool)checkLocaleChange;
- (void)resetCheckModify;
- (bool)checkModify;
- (void)setPropertyBit;
- (void)clearPropertyBit;

@end