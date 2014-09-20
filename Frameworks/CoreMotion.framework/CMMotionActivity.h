/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@class NSDate;

@interface CMMotionActivity : CMLogItem  {
    struct CLMotionActivity { 
        int type; 
        int confidence; 
        int mountedState; 
        int mountedConfidence; 
        float tilt; 
        double timestamp; 
        int exitState; 
        double estExitTime; 
        double startTime; 
    } fState;
}

@property(readonly) long long confidence;
@property(readonly) NSDate * startDate;
@property(readonly) bool unknown;
@property(readonly) bool stationary;
@property(readonly) bool walking;
@property(readonly) bool running;
@property(readonly) bool automotive;
@property(readonly) bool cycling;


- (id)startDate;
- (bool)running;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)confidence;
- (bool)cycling;
- (bool)automotive;
- (bool)walking;
- (bool)stationary;
- (bool)unknown;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; double x6; int x7; double x8; double x9; })arg1;

@end