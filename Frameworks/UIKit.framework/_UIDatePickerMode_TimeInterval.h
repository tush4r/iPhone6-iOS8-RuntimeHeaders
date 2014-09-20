/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode  {
    double _componentWidth;
}

+ (unsigned long long)extractableCalendarUnits;
+ (long long)datePickerMode;

- (bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;
- (long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForCalendarUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (id)localizedFormatString;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (void)resetComponentWidths;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;
- (bool)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2;
- (long long)hourForRow:(long long)arg1;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (bool)isTimeIntervalMode;
- (id)font;
- (double)rowHeight;

@end