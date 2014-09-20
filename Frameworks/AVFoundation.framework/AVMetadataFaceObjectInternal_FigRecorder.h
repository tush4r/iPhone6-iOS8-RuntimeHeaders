/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataFaceObjectInternal_FigRecorder : NSObject  {
    boolhasRollAngle;
    boolhasYawAngle;
    long long faceID;
    double rollAngle;
    double yawAngle;
}

@property long long faceID;
@property bool hasRollAngle;
@property double rollAngle;
@property bool hasYawAngle;
@property double yawAngle;


- (void)setYawAngle:(double)arg1;
- (void)setHasYawAngle:(bool)arg1;
- (void)setRollAngle:(double)arg1;
- (void)setHasRollAngle:(bool)arg1;
- (double)yawAngle;
- (bool)hasYawAngle;
- (double)rollAngle;
- (bool)hasRollAngle;
- (void)setFaceID:(long long)arg1;
- (long long)faceID;

@end