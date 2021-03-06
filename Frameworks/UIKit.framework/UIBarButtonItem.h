/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINavigationItem, NSString, UIImage, UIView, NSSet, NSDictionary, UIToolbarButton, UIBarButtonItem, UIColor;

@interface UIBarButtonItem : UIBarItem <NSCoding> {
    NSString *_title;
    NSSet *_possibleTitles;
    SEL _action;
    id _target;
    UIImage *_image;
    UIImage *_landscapeImagePhone;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _imageInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _landscapeImagePhoneInsets;
    double _width;
    UIView *_view;
    long long _tag;
    id _appearanceStorage;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int isMinibarView : 1; 
        unsigned int disableAutosizing : 1; 
        unsigned int selected : 1; 
        unsigned int imageHasEffects : 1; 
    } _barButtonItemFlags;
    bool_flexible;
    bool__showsBackButtonIndicator;
    bool__hidden;
    bool__viewWantsLetterpressImage;
    bool__needsViewUpdateForLetterpressImage;
    double _toolbarCharge;
    double _minimumWidth;
    double _maximumWidth;
    NSSet *_possibleSystemItems;
    NSDictionary *_stylesForSizingTitles;
    UIBarButtonItem *__itemVariation;
    UINavigationItem *__owningNavigationItem;
}

@property(readonly) bool _needsViewUpdateForLetterpressImage;
@property(getter=isEnabled) bool enabled;
@property(readonly) UIToolbarButton * _toolbarButton;
@property(getter=_miniImage,setter=_setMiniImage:,retain) UIImage * miniImage;
@property(getter=_miniImageInsets,setter=_setMiniImageInsets:) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } miniImageInsets;
@property(readonly) bool isSystemItem;
@property(readonly) long long systemItem;
@property(getter=_possibleSystemItems,setter=_setPossibleSystemItems:,copy) NSSet * possibleSystemItems;
@property(setter=_setPossibleItemVariations:,copy) NSSet * _possibleItemVariations;
@property(setter=_setItemVariation:,retain) UIBarButtonItem * _itemVariation;
@property bool selected;
@property(setter=_setImageHasEffects:) bool _imageHasEffects;
@property long long style;
@property double width;
@property(copy) NSSet * possibleTitles;
@property(retain) UIView * customView;
@property SEL action;
@property id target;
@property(retain) UIColor * tintColor;
@property(readonly) bool isSystemItem;
@property(readonly) long long systemItem;
@property(getter=_possibleSystemItems,setter=_setPossibleSystemItems:,copy) NSSet * possibleSystemItems;
@property(setter=_setPossibleItemVariations:,copy) NSSet * _possibleItemVariations;
@property(setter=_setItemVariation:,retain) UIBarButtonItem * _itemVariation;
@property(setter=_setStylesForSizingTitles:,copy) NSDictionary * _stylesForSizingTitles;
@property(setter=_setShowsBackButtonIndicator:) bool _showsBackButtonIndicator;
@property(setter=_setHidden:) bool _hidden;
@property(setter=_setOwningNavigationItem:) UINavigationItem * _owningNavigationItem;
@property bool selected;
@property(setter=_setToolbarCharge:) double _toolbarCharge;
@property(setter=_setMinimumWidth:) double _minimumWidth;
@property(setter=_setMaximumWidth:) double _maximumWidth;
@property(setter=_setFlexible:) bool _flexible;
@property(readonly) bool _viewWantsLetterpressImage;
@property(readonly) bool _needsViewUpdateForLetterpressImage;

+ (id)_appearanceBlindViewClasses;
+ (Class)classForToolbarButton;
+ (Class)classForNavigationButton;
+ (void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(bool)arg7 alwaysBordered:(bool)arg8 usingSystemItem:(long long)arg9 usingItemStyle:(long long)arg10;

- (bool)_viewWantsLetterpressImage;
- (void)_setShowsBackButtonIndicator:(bool)arg1;
- (id)_itemVariation;
- (void)_setFlexible:(bool)arg1;
- (void)_setMaximumWidth:(double)arg1;
- (void)_setMinimumWidth:(double)arg1;
- (double)_toolbarCharge;
- (struct UIOffset { double x1; double x2; })backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1 forBarMetrics:(long long)arg2;
- (double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (bool)selected;
- (void)_setPossibleSystemItems:(id)arg1;
- (void)_setHidden:(bool)arg1;
- (void)_setSystemItem:(long long)arg1;
- (id)possibleTitles;
- (id)itemVariation;
- (id)_possibleItemVariations;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })landscapeImagePhoneInsets;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (id)_owningNavigationItem;
- (void)setPossibleTitles:(id)arg1;
- (void)setCustomView:(id)arg1;
- (void)setLandscapeImagePhone:(id)arg1;
- (void)_setToolbarCharge:(double)arg1;
- (void)setWidth:(double)arg1;
- (id)initWithCustomView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_flexible;
- (id)customView;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)_setItemVariation:(id)arg1;
- (void)_setPossibleItemVariations:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setSelected:(bool)arg1;
- (void)setAction:(SEL)arg1;
- (double)width;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (double)_maximumWidth;
- (double)_minimumWidth;
- (id)_possibleSystemItems;
- (void)_setStylesForSizingTitles:(id)arg1;
- (id)_stylesForSizingTitles;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3;
- (void)setStyle:(long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)landscapeImagePhone;
- (long long)systemItem;
- (bool)isSystemItem;
- (void)_setOwningNavigationItem:(id)arg1;
- (bool)_showsBackButtonIndicator;
- (bool)_hidden;
- (bool)_needsViewUpdateForLetterpressImage;
- (id)_appearanceStorage;
- (void)setTag:(long long)arg1;
- (long long)tag;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (id)target;
- (long long)style;
- (id)image;
- (id)title;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setImage:(id)arg1;
- (void)dealloc;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (void)_setWidth:(double)arg1;
- (id)_foregroundColorForLetterpressWithView:(id)arg1;
- (void)_setImageHasEffects:(bool)arg1;
- (id)_toolbarButton;
- (void)_setMiniImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_miniImageInsets;
- (void)_setMiniImage:(id)arg1;
- (id)_miniImage;
- (void)_applyPositionAdjustmentToSegmentedControl:(id)arg1;
- (bool)_imageHasEffects;
- (id)createViewForToolbar:(id)arg1;
- (double)_width;
- (bool)_shouldBezelSystemButtonImage;
- (id)createViewForNavigationItem:(id)arg1;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)setIsMinibarView:(bool)arg1;
- (bool)isMinibarView;
- (bool)isCustomViewItem;
- (void)setView:(id)arg1;
- (id)nextResponder;
- (id)view;
- (id)window;
- (void)_getToolbarEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg1 imageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 glowInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg3 forBarStyle:(long long)arg4 landscape:(bool)arg5 alwaysBordered:(bool)arg6;
- (void)_getNavBarEdgeSizeAdjust:(struct CGSize { double x1; double x2; }*)arg1 imageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 landscape:(bool)arg3;
- (void)_getSystemItemStyle:(long long*)arg1 title:(id*)arg2 image:(id*)arg3 selectedImage:(id*)arg4 action:(SEL*)arg5 forBarStyle:(long long)arg6 landscape:(bool)arg7 alwaysBordered:(bool)arg8;
- (double)_rightImagePaddingForEdgeMarginInNavBar;
- (double)_leftImagePaddingForEdgeMarginInNavBar;
- (bool)_isImageBarButtonItem;
- (void)_updateView;
- (id)scriptingID;

@end
