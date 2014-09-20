/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSSubstitutionCheckingResult : NSTextCheckingResult  {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    } _range;
    NSString *_replacementString;
}


- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacementString:(id)arg2;
- (id)replacementString;
- (bool)_adjustRangesWithOffset:(long long)arg1;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;

@end