/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIMotionEffectGroup, UIInterpolatingMotionEffect, _UITiltMotionEffect;

@interface _UIParallaxMotionEffect : UIMotionEffect  {
    UIMotionEffectGroup *_group;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    } _slideMagnitude;
    UIInterpolatingMotionEffect *_horizontalSlideEffect;
    UIInterpolatingMotionEffect *_verticalSlideEffect;
    _UITiltMotionEffect *_tiltEffect;
}

@property struct UIOffset { double x1; double x2; } slideMagnitude;
@property double horizontalSlideAccelerationBoostFactor;
@property double verticalSlideAccelerationBoostFactor;
@property double maximumHorizontalTiltAngle;
@property double maximumVerticalTiltAngle;
@property double rotatingSphereRadius;


- (void)setVerticalSlideAccelerationBoostFactor:(double)arg1;
- (void)setHorizontalSlideAccelerationBoostFactor:(double)arg1;
- (void)_activateTiltEffectIfNecessary;
- (void)_updateGroupMotionEffect;
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;
- (void)_updateSlideEffectsWithCurrentSlideMagnitude;
- (double)verticalSlideAccelerationBoostFactor;
- (double)horizontalSlideAccelerationBoostFactor;
- (double)rotatingSphereRadius;
- (void)setMaximumVerticalTiltAngle:(double)arg1;
- (double)maximumVerticalTiltAngle;
- (void)setMaximumHorizontalTiltAngle:(double)arg1;
- (double)maximumHorizontalTiltAngle;
- (void)setRotatingSphereRadius:(double)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setSlideMagnitude:(struct UIOffset { double x1; double x2; })arg1;
- (struct UIOffset { double x1; double x2; })slideMagnitude;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end