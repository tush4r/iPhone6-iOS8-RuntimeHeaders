/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, <_UIBackdropViewObserver>, _UIBackdropEffectView, <_UIBackdropViewGraphicsQualityChangeDelegate>, CAFilter, UIView, UIColor, NSString, NSHashTable, NSMutableSet, _UIBackdropViewSettings, UIImage;

@interface _UIBackdropView : UIView  {
    bool_autosizesToFitSuperview;
    bool_computesColorSettings;
    bool_appliesOutputSettingsAutomatically;
    bool_appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
    bool_applyingBackdropChanges;
    bool_applyingTransition;
    bool_requiresTintViews;
    bool_wantsColorSettings;
    bool_blursBackground;
    bool_allowsColorSettingsSuppression;
    bool_contentViewAccessed;
    bool_contentViewAccessorGuard;
    bool_applySettingsAfterLayout;
    bool_updateMaskViewsForViewReentrancyGuard;
    bool_simulatesMasks;
    bool_backdropVisibilitySetOnce;
    bool_blurRadiusSetOnce;
    bool_disablesOccludedBackdropBlurs;
    bool__backdropVisible;
    bool__zoomsBack;
    long long _style;
    NSHashTable *_observers;
    <_UIBackdropViewObserver> *_observer;
    double _appliesOutputSettingsAnimationDuration;
    _UIBackdropViewSettings *_inputSettings;
    _UIBackdropViewSettings *_outputSettings;
    _UIBackdropViewSettings *_savedInputSettingsDuringRenderInContext;
    long long _configuration;
    _UIBackdropEffectView *_backdropEffectView;
    NSString *_groupName;
    UIImage *_filterMaskImage;
    UIView *_grayscaleTintView;
    UIImage *_grayscaleTintMaskImage;
    UIView *_colorTintView;
    UIImage *_colorTintMaskImage;
    UIView *_colorBurnTintView;
    UIImage *_colorBurnTintMaskImage;
    CAFilter *_gaussianBlurFilter;
    CAFilter *_colorSaturateFilter;
    CAFilter *_tintFilter;
    UIView *_contentView;
    UIView *_darkeningTintView;
    UIImage *_darkeningTintMaskImage;
    long long _maskMode;
    NSMutableSet *_partialMaskViews;
    UIView *_grayscaleTintMaskViewContainer;
    NSMutableDictionary *_grayscaleTintMaskViewMap;
    UIView *_colorTintMaskViewContainer;
    NSMutableDictionary *_colorTintMaskViewMap;
    UIView *_colorBurnTintMaskViewContainer;
    NSMutableDictionary *_colorBurnTintMaskViewMap;
    UIView *_darkeningTintMaskViewContainer;
    NSMutableDictionary *_darkeningTintMaskViewMap;
    UIView *_filterMaskViewContainer;
    NSMutableDictionary *_filterMaskViewMap;
    id _computeAndApplySettingsNotificationObserver;
    double _colorMatrixGrayscaleTintLevel;
    double _colorMatrixGrayscaleTintAlpha;
    UIColor *_colorMatrixColorTint;
    double _colorMatrixColorTintAlpha;
    long long _blurHardEdges;
    struct __CFRunLoopObserver { } *_updateInputBoundsRunLoopObserver;
    double _previousBackdropStatisticsRed;
    double _previousBackdropStatisticsGreen;
    double _previousBackdropStatisticsBlue;
    double _previousBackdropStatisticsContrast;
    <_UIBackdropViewGraphicsQualityChangeDelegate> *_graphicsQualityChangeDelegate;
    NSString *__blurQuality;
    double __blurRadius;
    double __saturationDeltaFactor;
}

@property long long style;
@property bool autosizesToFitSuperview;
@property(retain) NSHashTable * observers;
@property <_UIBackdropViewObserver> * observer;
@property bool computesColorSettings;
@property bool appliesOutputSettingsAutomatically;
@property double appliesOutputSettingsAnimationDuration;
@property(retain) _UIBackdropViewSettings * inputSettings;
@property(retain) _UIBackdropViewSettings * outputSettings;
@property(retain) _UIBackdropViewSettings * savedInputSettingsDuringRenderInContext;
@property(readonly) UIView * effectView;
@property long long configuration;
@property bool appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
@property bool applyingBackdropChanges;
@property bool applyingTransition;
@property bool requiresTintViews;
@property bool wantsColorSettings;
@property bool blursBackground;
@property bool allowsColorSettingsSuppression;
@property(retain) _UIBackdropEffectView * backdropEffectView;
@property(copy) NSString * groupName;
@property(retain) UIImage * filterMaskImage;
@property(retain) UIView * grayscaleTintView;
@property(retain) UIImage * grayscaleTintMaskImage;
@property(retain) UIView * colorTintView;
@property(retain) UIImage * colorTintMaskImage;
@property(retain) UIView * colorBurnTintView;
@property(retain) UIImage * colorBurnTintMaskImage;
@property(retain) CAFilter * gaussianBlurFilter;
@property(retain) CAFilter * colorSaturateFilter;
@property(retain) CAFilter * tintFilter;
@property(retain) UIView * contentView;
@property(retain) UIView * darkeningTintView;
@property(retain) UIImage * darkeningTintMaskImage;
@property bool contentViewAccessed;
@property bool contentViewAccessorGuard;
@property long long maskMode;
@property(retain) NSMutableSet * partialMaskViews;
@property(retain) UIView * grayscaleTintMaskViewContainer;
@property(retain) NSMutableDictionary * grayscaleTintMaskViewMap;
@property(retain) UIView * colorTintMaskViewContainer;
@property(retain) NSMutableDictionary * colorTintMaskViewMap;
@property(retain) UIView * colorBurnTintMaskViewContainer;
@property(retain) NSMutableDictionary * colorBurnTintMaskViewMap;
@property(retain) UIView * darkeningTintMaskViewContainer;
@property(retain) NSMutableDictionary * darkeningTintMaskViewMap;
@property(retain) UIView * filterMaskViewContainer;
@property(retain) NSMutableDictionary * filterMaskViewMap;
@property bool applySettingsAfterLayout;
@property(retain) id computeAndApplySettingsNotificationObserver;
@property bool updateMaskViewsForViewReentrancyGuard;
@property double colorMatrixGrayscaleTintLevel;
@property double colorMatrixGrayscaleTintAlpha;
@property(retain) UIColor * colorMatrixColorTint;
@property double colorMatrixColorTintAlpha;
@property bool simulatesMasks;
@property long long blurHardEdges;
@property struct __CFRunLoopObserver { }* updateInputBoundsRunLoopObserver;
@property bool backdropVisibilitySetOnce;
@property bool blurRadiusSetOnce;
@property double previousBackdropStatisticsRed;
@property double previousBackdropStatisticsGreen;
@property double previousBackdropStatisticsBlue;
@property double previousBackdropStatisticsContrast;
@property <_UIBackdropViewGraphicsQualityChangeDelegate> * graphicsQualityChangeDelegate;
@property bool disablesOccludedBackdropBlurs;
@property(copy) NSString * _blurQuality;
@property double _blurRadius;
@property double _saturationDeltaFactor;
@property bool _backdropVisible;
@property(setter=setZoomsBack:) bool _zoomsBack;

+ (void)adjustGraphicsQualityForAccessibilityIfNeeded:(id)arg1;
+ (void)setAllBackdropViewsToGraphicsQuality:(long long)arg1;
+ (void)restoreColorSettingsForRequester:(id)arg1;
+ (void)suppressColorSettingsForRequester:(id)arg1;
+ (void)restoreColorSettingsForDidBecomeActive:(id)arg1;
+ (void)suppressColorSettingsForWillResignActive:(id)arg1;
+ (void)restoreColorSettingsForRunLoopModePop:(id)arg1;
+ (void)suppressColorSettingsForRunLoopModePush:(id)arg1;
+ (Class)defaultSettingsClass;
+ (id)allBackdropViews;
+ (Class)layerClass;

- (void)set_backdropVisible:(bool)arg1;
- (void)set_saturationDeltaFactor:(double)arg1;
- (void)set_blurRadius:(double)arg1;
- (void)set_blurQuality:(id)arg1;
- (bool)disablesOccludedBackdropBlurs;
- (void)setPreviousBackdropStatisticsContrast:(double)arg1;
- (double)previousBackdropStatisticsContrast;
- (void)setPreviousBackdropStatisticsBlue:(double)arg1;
- (double)previousBackdropStatisticsBlue;
- (void)setPreviousBackdropStatisticsGreen:(double)arg1;
- (double)previousBackdropStatisticsGreen;
- (void)setPreviousBackdropStatisticsRed:(double)arg1;
- (double)previousBackdropStatisticsRed;
- (void)setSimulatesMasks:(bool)arg1;
- (void)setBlursBackground:(bool)arg1;
- (bool)blursBackground;
- (void)setRequiresTintViews:(bool)arg1;
- (void)setSavedInputSettingsDuringRenderInContext:(id)arg1;
- (id)savedInputSettingsDuringRenderInContext;
- (void)transitionIncrementallyToPrivateStyle:(long long)arg1 weighting:(double)arg2;
- (void)transitionToColor:(id)arg1;
- (void)_setBlursBackground:(bool)arg1;
- (void)setUsesZoom;
- (void)applyOverlayBlendMode:(long long)arg1 toView:(id)arg2;
- (void)removeMaskViews;
- (void)setMaskMode:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 settings:(id)arg2;
- (double)appliesOutputSettingsAnimationDuration;
- (void)transitionComplete;
- (void)setTintFilterForSettings:(id)arg1;
- (bool)requiresTintViews;
- (bool)contentViewAccessed;
- (void)setDarkeningTintView:(id)arg1;
- (void)setColorBurnTintView:(id)arg1;
- (void)setColorTintView:(id)arg1;
- (void)setGrayscaleTintView:(id)arg1;
- (void)setAppliesOutputSettingsAutomatically:(bool)arg1;
- (void)setBackdropEffectView:(id)arg1;
- (void)addDarkeningTintViewIfNeededForSettings:(id)arg1;
- (void)addContentViewIfNeededForSettings:(id)arg1;
- (void)addColorBurnTintViewIfNeededForSettings:(id)arg1;
- (void)addColorTintViewIfNeededForSettings:(id)arg1;
- (void)addGrayscaleTintViewIfNeededForSettings:(id)arg1;
- (void)addBackdropEffectViewIfNeededForSettings:(id)arg1;
- (void)setContentViewAccessed:(bool)arg1;
- (void)setContentViewAccessorGuard:(bool)arg1;
- (bool)contentViewAccessorGuard;
- (bool)applyingTransition;
- (void)transitionIncrementallyToStyle:(long long)arg1 weighting:(double)arg2;
- (void)transitionIncrementallyToSettings:(id)arg1 weighting:(double)arg2;
- (void)computeAndApplySettingsForTransition;
- (void)prepareForTransitionToSettings:(id)arg1;
- (void)setApplyingTransition:(bool)arg1;
- (long long)configuration;
- (void)ensureProperSubviewOrdering;
- (void)setBackdropVisibilitySetOnce:(bool)arg1;
- (bool)backdropVisibilitySetOnce;
- (void)setColorMatrixColorTintAlpha:(double)arg1;
- (void)setColorMatrixColorTint:(id)arg1;
- (void)setColorMatrixGrayscaleTintAlpha:(double)arg1;
- (void)setColorMatrixGrayscaleTintLevel:(double)arg1;
- (id)colorMatrixColorTint;
- (double)colorMatrixColorTintAlpha;
- (double)colorMatrixGrayscaleTintAlpha;
- (double)colorMatrixGrayscaleTintLevel;
- (void)setTintFilter:(id)arg1;
- (void)setColorSaturateFilter:(id)arg1;
- (void)setUpdateInputBoundsRunLoopObserver:(struct __CFRunLoopObserver { }*)arg1;
- (struct __CFRunLoopObserver { }*)updateInputBoundsRunLoopObserver;
- (void)scheduleUpdateInputBoundsIfNeeded;
- (void)_updateFilters;
- (void)setGaussianBlurFilter:(id)arg1;
- (void)setBlurFilterWithRadius:(double)arg1 blurQuality:(id)arg2 blurHardEdges:(long long)arg3;
- (void)setBlurFilterWithRadius:(double)arg1 blurQuality:(id)arg2;
- (void)setBlurRadiusSetOnce:(bool)arg1;
- (bool)blurRadiusSetOnce;
- (id)tintFilter;
- (id)colorSaturateFilter;
- (id)gaussianBlurFilter;
- (void)updateMaskViewForView:(id)arg1 flag:(long long)arg2;
- (void)setPartialMaskViews:(id)arg1;
- (id)partialMaskViews;
- (void)setUpdateMaskViewsForViewReentrancyGuard:(bool)arg1;
- (bool)updateMaskViewsForViewReentrancyGuard;
- (void)applyOverlayBlendModeToView:(id)arg1;
- (void)removeOverlayBlendModeFromView:(id)arg1;
- (bool)simulatesMasks;
- (void)setFilterMaskViewContainer:(id)arg1;
- (void)setFilterMaskViewMap:(id)arg1;
- (void)setDarkeningTintMaskViewContainer:(id)arg1;
- (void)setDarkeningTintMaskViewMap:(id)arg1;
- (void)setColorBurnTintMaskViewContainer:(id)arg1;
- (void)setColorBurnTintMaskViewMap:(id)arg1;
- (void)setColorTintMaskViewContainer:(id)arg1;
- (void)setColorTintMaskViewMap:(id)arg1;
- (void)setGrayscaleTintMaskViewContainer:(id)arg1;
- (void)setGrayscaleTintMaskViewMap:(id)arg1;
- (long long)maskMode;
- (id)filterMaskViewMap;
- (id)darkeningTintMaskViewMap;
- (id)colorBurnTintMaskViewMap;
- (id)colorTintMaskViewMap;
- (id)grayscaleTintMaskViewMap;
- (id)darkeningTintView;
- (id)colorBurnTintView;
- (id)colorTintView;
- (id)grayscaleTintView;
- (void)setMaskImage:(id)arg1 onLayer:(id)arg2;
- (void)adjustTintImplementationIfNeeded:(id)arg1;
- (bool)applySettingsAfterLayout;
- (void)setApplySettingsAfterLayout:(bool)arg1;
- (bool)appliesOutputSettingsAutomaticallyEnabledComputesColorSettings;
- (void)setAppliesOutputSettingsAutomaticallyEnabledComputesColorSettings:(bool)arg1;
- (void)addObserver:(id)arg1;
- (void)delayedComputeAndApplySettings;
- (void)setApplyingBackdropChanges:(bool)arg1;
- (id)observers;
- (void)applySettingsWithBuiltInAnimation:(id)arg1;
- (bool)appliesOutputSettingsAutomatically;
- (bool)applyingBackdropChanges;
- (id)backdropEffectView;
- (void)clearUpdateInputBoundsRunLoopObserver;
- (id)computeAndApplySettingsNotificationObserver;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 autosizesToFitSuperview:(bool)arg2 settings:(id)arg3;
- (void)setComputeAndApplySettingsNotificationObserver:(id)arg1;
- (void)computeAndApplySettings:(id)arg1;
- (void)updateSubviewHierarchyIfNeededForSettings:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setInputSettings:(id)arg1;
- (bool)autosizesToFitSuperview;
- (void)setAutosizesToFitSuperview:(bool)arg1;
- (id)backdropViewLayer;
- (id)graphicsQualityChangeDelegate;
- (bool)wantsColorSettings;
- (void)setWantsColorSettings:(bool)arg1;
- (bool)allowsColorSettingsSuppression;
- (id)outputSettings;
- (void)setAppliesOutputSettingsAnimationDuration:(double)arg1;
- (double)_saturationDeltaFactor;
- (id)_blurQuality;
- (bool)_zoomsBack;
- (bool)_backdropVisible;
- (bool)blursWithHardEdges;
- (void)setBlursWithHardEdges:(bool)arg1;
- (void)settingsDidChange:(id)arg1;
- (id)darkeningTintMaskImage;
- (void)setColorBurnTintMaskImage:(id)arg1;
- (id)colorBurnTintMaskImage;
- (bool)isBackdropVisible;
- (void)setZoomsBack:(bool)arg1;
- (void)setBlurQuality:(id)arg1;
- (void)setDarkeningTintMaskImage:(id)arg1;
- (void)transitionToSettings:(id)arg1;
- (double)_blurRadius;
- (void)backdropLayerStatisticsDidChange:(id)arg1;
- (void)_updateInputBounds;
- (long long)blurHardEdges;
- (id)blurQuality;
- (void)setDisablesOccludedBackdropBlurs:(bool)arg1;
- (id)effectView;
- (void)setShouldRasterizeEffectsView:(bool)arg1;
- (id)initWithSettings:(id)arg1;
- (void)transitionToPrivateStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 privateStyle:(long long)arg2;
- (void)setFilterMaskImage:(id)arg1;
- (void)setColorTintMaskImage:(id)arg1;
- (void)setGrayscaleTintMaskImage:(id)arg1;
- (void)setBackdropVisible:(bool)arg1;
- (id)groupName;
- (void)didCallRenderInContextOnBackdropViewLayer;
- (void)willCallRenderInContextOnBackdropViewLayer;
- (bool)computesColorSettings;
- (void)transitionToStyle:(long long)arg1;
- (id)filterMaskViewContainer;
- (id)darkeningTintMaskViewContainer;
- (id)colorBurnTintMaskViewContainer;
- (id)colorTintMaskViewContainer;
- (id)grayscaleTintMaskViewContainer;
- (void)setConfiguration:(long long)arg1;
- (void)setAllowsColorSettingsSuppression:(bool)arg1;
- (void)setComputesColorSettings:(bool)arg1;
- (void)applySettings:(id)arg1;
- (void)setObserver:(id)arg1;
- (id)observer;
- (void)updateMaskViewsForView:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)setBlurHardEdges:(long long)arg1;
- (id)inputSettings;
- (id)initWithPrivateStyle:(long long)arg1;
- (void)setGraphicsQualityChangeDelegate:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setGroupName:(id)arg1;
- (id)filters;
- (void)didMoveToSuperview;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (void)removeObserver:(id)arg1;
- (void)setSaturationDeltaFactor:(double)arg1;
- (void)setBlurRadius:(double)arg1;
- (long long)style;
- (double)saturationDeltaFactor;
- (double)blurRadius;
- (id)filterMaskImage;
- (id)colorTintMaskImage;
- (id)grayscaleTintMaskImage;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end