/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
    NSString *_phoneNumber;
    id _underlyingResult;
}

@property(readonly) void* underlyingResult;


- (unsigned long long)resultType;
- (id)phoneNumber;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 phoneNumber:(id)arg2 underlyingResult:(void*)arg3;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 phoneNumber:(id)arg2;
- (void*)underlyingResult;
- (bool)_adjustRangesWithOffset:(long long)arg1;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;

@end
