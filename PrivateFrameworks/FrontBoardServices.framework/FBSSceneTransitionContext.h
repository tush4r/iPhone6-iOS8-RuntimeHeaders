/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@class NSSet, BSMutableSettings, BSMachSendRight, BSAnimationSettings;

@interface FBSSceneTransitionContext : NSObject <NSCopying, NSMutableCopying> {
    BSAnimationSettings *_animationSettings;
    BSMachSendRight *_animationFencePort;
    NSSet *_actions;
    BSMutableSettings *_otherSettings;
    BSMutableSettings *_transientLocalClientSettings;
}

@property(copy) BSAnimationSettings * animationSettings;
@property(copy) BSMachSendRight * animationFencePort;
@property(copy) NSSet * actions;

+ (id)transitionContext;

- (void)setActions:(id)arg1;
- (void)setAnimationFencePort:(id)arg1;
- (void)setAnimationSettings:(id)arg1;
- (id)transientLocalClientSettings;
- (id)_descriptionOfSettingsWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)otherSettings;
- (id)initWithXPCDictionary:(id)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)animationSettings;
- (id)animationFencePort;
- (id)actions;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (bool)isUISubclass;

@end
