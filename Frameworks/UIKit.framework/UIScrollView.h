/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, UISwipeGestureRecognizer, UIScrollView, _UIStaticScrollBar, NSArray, UIImageView, UIPinchGestureRecognizer, UIPanGestureRecognizer, <UIScrollViewDelegate>, NSISVariable;

@interface UIScrollView : UIView <_UIScrollToTopView, NSCoding> {
    id _delegate;
    struct CGSize { 
        double width; 
        double height; 
    } _contentSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _contentInset;
    UIImageView *_verticalScrollIndicator;
    UIImageView *_horizontalScrollIndicator;
    _UIStaticScrollBar *_staticScrollBar;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _scrollIndicatorInset;
    double _startOffsetX;
    double _startOffsetY;
    double _lastUpdateOffsetX;
    double _lastUpdateOffsetY;
    double _lastUpdateTime;
    double _minimumZoomScale;
    double _maximumZoomScale;
    UIView *_zoomView;
    double _horizontalVelocity;
    double _verticalVelocity;
    double _previousHorizontalVelocity;
    double _previousVerticalVelocity;
    id _scrollHeartbeat;
    struct CGPoint { 
        double x; 
        double y; 
    } _pageDecelerationTarget;
    struct CGSize { 
        double width; 
        double height; 
    } _decelerationFactor;
    struct CGPoint { 
        double x; 
        double y; 
    } _adjustedDecelerationTarget;
    struct CGSize { 
        double width; 
        double height; 
    } _adjustedDecelerationFactor;
    double _decelerationLnFactorH;
    double _decelerationLnFactorV;
    id *_shadows;
    id _scrollNotificationViews;
    double _contentOffsetAnimationDuration;
    id _animation;
    id _zoomAnimation;
    id _pinch;
    id _pan;
    id _swipe;
    id _touchDelayGestureRecognizer;
    UISwipeGestureRecognizer *_lowFidelitySwipeGestureRecognizers[4];
    UIScrollView *_draggingChildScrollView;
    struct CGPoint { 
        double x; 
        double y; 
    } _parentAdjustment;
    double _pagingSpringPull;
    double _pagingFriction;
    long long _fastScrollCount;
    double _fastScrollMultiplier;
    double _fastScrollStartMultiplier;
    double _fastScrollEndTime;
    struct CGPoint { 
        double x; 
        double y; 
    } _rotationCenterPoint;
    double _accuracy;
    unsigned long long _zoomAnimationCount;
    struct CGSize { 
        double width; 
        double height; 
    } _accumulatedOffset;
    long long _touchLevel;
    double _savedKeyboardAdjustmentDelta;
    struct { 
        unsigned int tracking : 1; 
        unsigned int dragging : 1; 
        unsigned int verticalBounceEnabled : 1; 
        unsigned int horizontalBounceEnabled : 1; 
        unsigned int verticalBouncing : 1; 
        unsigned int horizontalBouncing : 1; 
        unsigned int bouncesZoom : 1; 
        unsigned int zoomBouncing : 1; 
        unsigned int alwaysBounceHorizontal : 1; 
        unsigned int alwaysBounceVertical : 1; 
        unsigned int preventScrollingContainer : 1; 
        unsigned int canCancelContentTouches : 1; 
        unsigned int delaysContentTouches : 1; 
        unsigned int programmaticScrollDisabled : 1; 
        unsigned int scrollDisabled : 1; 
        unsigned int zoomDisabled : 1; 
        unsigned int scrollTriggered : 1; 
        unsigned int showsHorizontalScrollIndicator : 1; 
        unsigned int showsVerticalScrollIndicator : 1; 
        unsigned int indicatorStyle : 2; 
        unsigned int inZoom : 1; 
        unsigned int hideIndicatorsInZoom : 1; 
        unsigned int pushedTrackingMode : 1; 
        unsigned int displayingScrollIndicators : 1; 
        unsigned int verticalIndicatorShrunk : 1; 
        unsigned int horizontalIndicatorShrunk : 1; 
        unsigned int contentFitDisableScrolling : 1; 
        unsigned int pagingEnabled : 1; 
        unsigned int pagingLeft : 1; 
        unsigned int pagingRight : 1; 
        unsigned int pagingUp : 1; 
        unsigned int pagingDown : 1; 
        unsigned int lastHorizontalDirection : 1; 
        unsigned int lastVerticalDirection : 1; 
        unsigned int dontScrollToTop : 1; 
        unsigned int scrollingToTop : 1; 
        unsigned int singleFingerPan : 1; 
        unsigned int autoscrolling : 1; 
        unsigned int automaticContentOffsetAdjustmentDisabled : 1; 
        unsigned int skipStartOffsetAdjustment : 1; 
        unsigned int delegateScrollViewDidScroll : 1; 
        unsigned int delegateScrollViewDidZoom : 1; 
        unsigned int delegateContentSizeForZoomScale : 1; 
        unsigned int preserveCenterDuringRotation : 1; 
        unsigned int delaysTrackingWhileDecelerating : 1; 
        unsigned int pinnedZoomMin : 1; 
        unsigned int pinnedXMin : 1; 
        unsigned int pinnedYMin : 1; 
        unsigned int pinnedXMax : 1; 
        unsigned int pinnedYMax : 1; 
        unsigned int skipLinkChecks : 1; 
        unsigned int staysCenteredDuringPinch : 1; 
        unsigned int wasDelayingPinchForSystemGestures : 1; 
        unsigned int systemGesturesRecognitionPossible : 1; 
        unsigned int disableContentOffsetRounding : 1; 
        unsigned int alwaysDisableContentOffsetRounding : 1; 
        unsigned int adjustedDecelerationTargetX : 1; 
        unsigned int adjustedDecelerationTargetY : 1; 
        unsigned int hasScrolled : 1; 
        unsigned int wantsConstrainedContentSize : 1; 
        unsigned int constrainedContentSizeNeedsUpdate : 1; 
        unsigned int updateInsetBottom : 1; 
        unsigned int beingDraggedByChildScrollView : 1; 
        unsigned int adjustsTargetsOnContentOffsetChanges : 1; 
        unsigned int forwardsTouchesUpResponderChain : 1; 
        unsigned int firstResponderKeyboardAvoidanceDisabled : 1; 
    } _scrollViewFlags;
    bool_useContentDimensionVariablesForConstraintLowering;
    id _scrollTestParameters;
    long long _keyboardDismissMode;
    NSISVariable *_contentWidthVariable;
    NSISVariable *_contentHeightVariable;
    NSArray *_automaticContentConstraints;
    struct CGPoint { 
        double x; 
        double y; 
    } _zoomAnchorPoint;
}

@property(getter=_adjustsTargetsOnContentOffsetChanges,setter=_setAdjustsTargetsOnContentOffsetChanges:) bool adjustsTargetsOnContentOffsetChanges;
@property(getter=_isFirstResponderKeyboardAvoidanceEnabled,setter=_setFirstResponderKeyboardAvoidanceEnabled:) bool firstResponderKeyboardAvoidanceEnabled;
@property(getter=isProgrammaticScrollEnabled) bool programmaticScrollEnabled;
@property(getter=_isScrollingToTop,readonly) bool scrollingToTop;
@property(getter=_isAnimatingScroll,readonly) bool isAnimatingScroll;
@property(readonly) _UIStaticScrollBar * _staticScrollBar;
@property struct CGPoint { double x1; double x2; } contentOffset;
@property struct CGSize { double x1; double x2; } contentSize;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property <UIScrollViewDelegate> * delegate;
@property(getter=isDirectionalLockEnabled) bool directionalLockEnabled;
@property bool bounces;
@property bool alwaysBounceVertical;
@property bool alwaysBounceHorizontal;
@property(getter=isPagingEnabled) bool pagingEnabled;
@property(getter=isScrollEnabled) bool scrollEnabled;
@property bool showsHorizontalScrollIndicator;
@property bool showsVerticalScrollIndicator;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } scrollIndicatorInsets;
@property long long indicatorStyle;
@property double decelerationRate;
@property(getter=isTracking,readonly) bool tracking;
@property(getter=isDragging,readonly) bool dragging;
@property(getter=isDecelerating,readonly) bool decelerating;
@property bool delaysContentTouches;
@property bool canCancelContentTouches;
@property double minimumZoomScale;
@property double maximumZoomScale;
@property double zoomScale;
@property bool bouncesZoom;
@property(getter=isZooming,readonly) bool zooming;
@property(getter=isZoomBouncing,readonly) bool zoomBouncing;
@property bool scrollsToTop;
@property(readonly) UIPanGestureRecognizer * panGestureRecognizer;
@property(readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;
@property long long keyboardDismissMode;
@property(getter=_forwardsTouchesUpResponderChain,setter=_setForwardsTouchesUpResponderChain:) bool forwardsTouchesUpResponderChain;
@property(setter=_setWantsConstrainedContentSize:) bool _wantsConstrainedContentSize;
@property(setter=_setAutomaticContentConstraints:,copy) NSArray * _automaticContentConstraints;
@property(retain) id scrollTestParameters;
@property(retain,readonly) NSISVariable * _contentWidthVariable;
@property(retain,readonly) NSISVariable * _contentHeightVariable;
@property(setter=_setUseContentDimensionVariablesForConstraintLowering:) bool _useContentDimensionVariablesForConstraintLowering;
@property(getter=_isVerticalBouncing,readonly) bool isVerticalBouncing;
@property(getter=_isHorizontalBouncing,readonly) bool isHorizontalBouncing;
@property(getter=_isAnimatingZoom,readonly) bool isAnimatingZoom;
@property(getter=_zoomAnchorPoint,setter=_setZoomAnchorPoint:) struct CGPoint { double x1; double x2; } zoomAnchorPoint;

+ (void)_scrollWithNSTimer:(bool)arg1;
+ (SEL)_panGestureAction;
+ (SEL)_pinchGestureAction;
+ (id)_implicitAnimationCulprits;

- (id)_automaticContentConstraints;
- (void)_setUseContentDimensionVariablesForConstraintLowering:(bool)arg1;
- (bool)_useContentDimensionVariablesForConstraintLowering;
- (void)setKeyboardDismissMode:(long long)arg1;
- (id)scrollTestParameters;
- (id)pinchGestureRecognizer;
- (id)panGestureRecognizer;
- (void)_staticScrollBarScrollAnimationEnded;
- (struct CGPoint { double x1; double x2; })_pageDecelerationTarget;
- (bool)_isAnimatingZoom;
- (bool)isZoomBouncing;
- (void)zoomToRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setZoomScale:(double)arg1;
- (bool)_ownsAnimationForKey:(id)arg1 ofView:(id)arg2;
- (void)_zoomToCenter:(struct CGPoint { double x1; double x2; })arg1 scale:(double)arg2 duration:(double)arg3;
- (double)maximumZoomScale;
- (void)setMaximumZoomScale:(double)arg1;
- (void)setMinimumZoomScale:(double)arg1;
- (struct UIOffset { double x1; double x2; })_offsetForCenterOfPossibleZoomView:(id)arg1 withIncomingBoundsSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_setAutomaticContentConstraints:(id)arg1;
- (bool)_wantsConstrainedContentSize;
- (double)_defaultPagingFriction;
- (void)_setPagingFriction:(double)arg1;
- (double)_pagingFriction;
- (bool)_ignoreLinkedOnChecks;
- (void)_setIgnoreLinkedOnChecks:(bool)arg1;
- (void)setScrollsToTop:(bool)arg1;
- (bool)scrollsToTop;
- (bool)touchesShouldCancelInContentView:(id)arg1;
- (bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (void)setDelaysContentTouches:(bool)arg1;
- (bool)delaysContentTouches;
- (void)setCanCancelContentTouches:(bool)arg1;
- (bool)canCancelContentTouches;
- (void)setBouncesZoom:(bool)arg1;
- (bool)bouncesZoom;
- (void)_setForwardsTouchesUpResponderChain:(bool)arg1;
- (bool)_forwardsTouchesUpResponderChain;
- (void)_gestureRecognizerFailed:(id)arg1;
- (bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (void)_setStaysCenteredDuringPinch:(bool)arg1;
- (void)_rubberBandToOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_touchPositionForTouches:(id)arg1;
- (void)setShowBackgroundShadow:(bool)arg1;
- (bool)_showsBackgroundShadow;
- (void)flashScrollIndicators;
- (void)setPreservesCenterDuringRotation:(bool)arg1;
- (bool)preservesCenterDuringRotation;
- (double)_scrollHysteresis;
- (void)_setContentOffsetRoundingEnabled:(bool)arg1;
- (bool)_contentOffsetRoundingEnabled;
- (bool)tracksImmediatelyWhileDecelerating;
- (void)setTracksImmediatelyWhileDecelerating:(bool)arg1;
- (bool)allowsMultipleFingers;
- (void)setAllowsMultipleFingers:(bool)arg1;
- (void)setVerticalScrollDecelerationFactor:(double)arg1;
- (double)verticalScrollDecelerationFactor;
- (void)setHorizontalScrollDecelerationFactor:(double)arg1;
- (double)horizontalScrollDecelerationFactor;
- (long long)indicatorStyle;
- (void)setDecelerationRate:(double)arg1;
- (double)decelerationRate;
- (void)setIndicatorStyle:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })scrollIndicatorInsets;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)showsVerticalScrollIndicator;
- (void)setShowsHorizontalScrollIndicator:(bool)arg1;
- (bool)showsHorizontalScrollIndicator;
- (bool)_isHorizontalBouncing;
- (bool)_isVerticalBouncing;
- (void)_setTransfersScrollToContainer:(bool)arg1;
- (void)setAlwaysBounceHorizontal:(bool)arg1;
- (void)setAlwaysBounceVertical:(bool)arg1;
- (double)keyboardBottomInsetAdjustmentDelta;
- (bool)updateInsetBottomDuringKeyboardDismiss;
- (void)setUpdateInsetBottomDuringKeyboardDismiss:(bool)arg1;
- (bool)bouncesVertically;
- (void)setBouncesVertically:(bool)arg1;
- (bool)bouncesHorizontally;
- (void)setBouncesHorizontally:(bool)arg1;
- (bool)bounces;
- (void)setBounces:(bool)arg1;
- (unsigned long long)_abuttedPagingEdges;
- (void)setPagingEnabled:(bool)arg1;
- (bool)_isScrollingToTop;
- (bool)_isFirstResponderKeyboardAvoidanceEnabled;
- (void)_setFirstResponderKeyboardAvoidanceEnabled:(bool)arg1;
- (bool)isZoomEnabled;
- (void)setZoomEnabled:(bool)arg1;
- (void)setScrollingEnabled:(bool)arg1;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_setAdjustsTargetsOnContentOffsetChanges:(bool)arg1;
- (bool)_adjustsTargetsOnContentOffsetChanges;
- (bool)_isRectFullyVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_panGestureRecognizer;
- (void)_smoothScrollIntoBounds;
- (void)_lowFidelityScrollInDirection:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_contentOffsetForLowFidelityScrollInDirection:(struct CGPoint { double x1; double x2; })arg1 duration:(double*)arg2;
- (bool)_isAnimatingScroll;
- (void)_runLoopModePopped:(id)arg1;
- (void)_smoothScrollDisplayLink:(id)arg1;
- (void)_smoothScrollTimer:(id)arg1;
- (void)_smoothScrollWithUpdateTime:(double)arg1;
- (void)_getStandardDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 min:(double)arg3 max:(double)arg4 decelerationFactor:(double)arg5 decelerationLnFactor:(double)arg6 velocity:(double*)arg7;
- (bool)_getBouncingDecelerationOffset:(double*)arg1 forTimeInterval:(double)arg2 lastUpdateOffset:(double)arg3 min:(double)arg4 max:(double)arg5 decelerationFactor:(double)arg6 decelerationLnFactor:(double)arg7 velocity:(double*)arg8;
- (bool)_getPagingDecelerationOffset:(struct CGPoint { double x1; double x2; }*)arg1 forTimeInterval:(double)arg2;
- (double)_zoomScaleForRubberBandScale:(double)arg1;
- (void)_markScrollViewAnimationForKey:(id)arg1 ofView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_zoomAnchorPoint;
- (void)_adjustContentSizeForView:(id)arg1 atScale:(double)arg2;
- (void)_zoomAnimationDidStop;
- (float)_zoomAnimationDurationForScale:(double)arg1;
- (double)_zoomRubberBandScaleForScale:(double)arg1;
- (void)setZoomScale:(double)arg1 animated:(bool)arg2;
- (void)_zoomToCenter:(struct CGPoint { double x1; double x2; })arg1 scale:(double)arg2 duration:(double)arg3 force:(bool)arg4;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)_evaluateWantsConstrainedContentSize;
- (void)_setWantsConstrainedContentSize:(bool)arg1;
- (id)_layoutVariablesWithAmbiguousValue;
- (void)_updatePanGesture;
- (void)_endPanNormal:(bool)arg1;
- (void)_prepareToPageWithHorizontalVelocity:(double)arg1 verticalVelocity:(double)arg2;
- (void)setZoomScale:(double)arg1 withAnchorPoint:(struct CGPoint { double x1; double x2; })arg2 validatingScrollOffset:(bool)arg3 allowRubberbanding:(bool)arg4 animated:(bool)arg5 duration:(double)arg6 notifyDelegate:(bool)arg7 force:(bool)arg8;
- (void)_updatePinchGestureForState:(long long)arg1;
- (void)setZoomScale:(double)arg1 withAnchorPoint:(struct CGPoint { double x1; double x2; })arg2 validatingScrollOffset:(bool)arg3 allowRubberbanding:(bool)arg4 animated:(bool)arg5 duration:(double)arg6 notifyDelegate:(bool)arg7;
- (void)_setZoomAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)_zoomScaleFromPresentationLayer:(bool)arg1;
- (bool)_staysCenteredDuringPinch;
- (void)_popTrackingRunLoopMode;
- (void)_startTimer:(bool)arg1;
- (bool)_scrollViewWillEndDraggingWithDeceleration:(bool)arg1;
- (long long)keyboardDismissMode;
- (struct CGPoint { double x1; double x2; })_rubberBandContentOffsetForOffset:(struct CGPoint { double x1; double x2; })arg1 outsideX:(bool*)arg2 outsideY:(bool*)arg3;
- (bool)alwaysBounceVertical;
- (bool)alwaysBounceHorizontal;
- (void)_setShowsBackgroundShadow:(bool)arg1;
- (void)_flashScrollIndicatorsPersistingPreviousFlashes:(bool)arg1;
- (void)_registerForRotation:(bool)arg1 ofWindow:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(id)arg1;
- (void)willRotateToInterfaceOrientation:(id)arg1;
- (double)minimumZoomScale;
- (void)_handleLowFidelitySwipe:(id)arg1;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)_updatePinchGesture;
- (void)delayed:(id)arg1;
- (unsigned long long)_currentlyAbuttedContentEdges;
- (unsigned long long)_abuttedEdgesForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updatePagingGesture;
- (void)_updateZoomGestureRecognizersEnabled;
- (void)setScrollEnabled:(bool)arg1;
- (id)_scrollViewTouchDelayGesture;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)_registerAsScrollToTopViewIfPossible;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (void)_attemptToDragParent:(id)arg1 forNewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 oldBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)zoomScale;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)_stopDraggingParent:(id)arg1;
- (void)_startDraggingParent:(id)arg1;
- (double)_adjustedVerticalOffsetPinnedToScrollableBounds:(double)arg1;
- (double)_adjustedHorizontalOffsetPinnedToScrollableBounds:(double)arg1;
- (bool)_transfersScrollToContainer;
- (bool)_stopBeingDraggedByChild:(id)arg1;
- (bool)_startBeingDraggedByChild:(id)arg1;
- (void)_updateScrollGestureRecognizersEnabled;
- (void)_handleSwipe:(id)arg1;
- (void)_updatePanGestureConfiguration;
- (void)handlePinch:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)_setUsesStaticScrollBar:(bool)arg1;
- (bool)_usesLowFidelityPanning;
- (bool)isPagingEnabled;
- (void)_enableOnlyGestureRecognizersForCurrentTouchLevel;
- (void)_updateUsesStaticScrollBar;
- (void)_hideScrollIndicators;
- (void)_staticScrollBar:(id)arg1 didScrollInDirection:(struct CGPoint { double x1; double x2; })arg2;
- (void)_layoutStaticScrollBar;
- (id)_staticScrollBar;
- (void)setScrollTestParameters:(id)arg1;
- (bool)isDirectionalLockEnabled;
- (void)_centerContentIfNecessary;
- (void)_applyConstrainedContentSizeIfNecessary;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })_nsis_contentSize;
- (bool)isZooming;
- (id)_getDelegateZoomView;
- (void)_updateContentFitDisableScrolling;
- (void)setDirectionalLockEnabled:(bool)arg1;
- (void)_adjustScrollerIndicators:(bool)arg1 alwaysShowingThem:(bool)arg2;
- (void)_createGestureRecognizersForCurrentTouchLevel;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_webCustomViewWillBeRemovedFromSuperview;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_switchToLayoutEngine:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_willMoveToWindow:(id)arg1;
- (bool)_supportsContentDimensionVariables;
- (id)nsli_contentHeightVariable;
- (id)nsli_contentWidthVariable;
- (id)_contentHeightVariable;
- (id)_contentWidthVariable;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (bool)cancelMouseTracking;
- (bool)cancelTouchTracking;
- (bool)isTracking;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { double x1; double x2; })arg1 resultHandler:(id)arg2;
- (bool)isScrollEnabled;
- (void)setProgrammaticScrollEnabled:(bool)arg1;
- (bool)isProgrammaticScrollEnabled;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)delegate;
- (id)description;
- (bool)isDecelerating;
- (bool)isDragging;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)setShowsVerticalScrollIndicator:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setUserInteractionEnabled:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_isScrollingEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForPageContainingView:(id)arg1;
- (void)_pinContentOffsetToClosestPageBoundary;
- (id)_backgroundShadowForSlideAnimation;
- (void)_adjustShadowsIfNecessaryForOffset:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrameForView:(id)arg1;
- (void)setAutoscrollContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })autoscrollContentOffset;
- (bool)_isAutoscrolling;
- (void)_setAutoscrolling:(bool)arg1;
- (bool)_pagingDown;
- (bool)_pagingUp;
- (bool)_pagingRight;
- (bool)_pagingLeft;
- (void)_adjustForAutomaticKeyboardInfo:(id)arg1 animated:(bool)arg2 lastAdjustment:(double*)arg3;
- (void)_setShowsHorizontalScrollIndicator:(bool)arg1;
- (void)_setShowsVerticalScrollIndicator:(bool)arg1;
- (void)_setAlwaysBounceVertical:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_animatedOriginalOffset;
- (id)_parentScrollView;
- (void)_setContentOffsetPinned:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)_setContentOffsetPinned:(struct CGPoint { double x1; double x2; })arg1;
- (double)_touchDelayForScrollDetection;
- (bool)_scrollsToMakeFirstResponderVisible;
- (void)animator:(id)arg1 stopAnimation:(id)arg2 fraction:(float)arg3;
- (void)_forceDelegateScrollViewDidZoom:(bool)arg1;
- (bool)_isAutomaticContentOffsetAdjustmentEnabled;
- (void)_setAutomaticContentOffsetAdjustmentEnabled:(bool)arg1;
- (void)_updateScrollAnimationForChangedTargetOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setAbsoluteContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)_setContentOffset:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2 animationCurve:(int)arg3;
- (void)_moveContentSubview:(id)arg1 toBack:(bool)arg2;
- (bool)_canCancelContentTouches:(id)arg1;
- (bool)_resetScrollingForGestureEvent:(id)arg1;
- (void)_stopScrollingAndZoomingAnimations;
- (void)_adjustStartOffsetForGrabbedBouncingScrollView;
- (void)_clearParentAdjustment;
- (bool)_shouldTrackImmediatelyWhileDecelerating;
- (void)_adjustShadowsIfNecessary;
- (void)_delegateScrollViewAnimationEnded;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(bool)arg2;
- (struct CGPoint { double x1; double x2; })_originalOffsetForAnimatedSetContentOffset;
- (void)_setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2 animationCurve:(int)arg3 animationAdjustsForContentOffsetDelta:(bool)arg4;
- (void)_addContentSubview:(id)arg1 atBack:(bool)arg2;
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(bool)arg1 tramplingDragFlags:(bool)arg2;
- (void)_clearContentOffsetAnimation;
- (void)_stopScrollingNotify:(bool)arg1 pin:(bool)arg2 tramplingDragFlags:(bool)arg3;
- (void)_stopScrollDecelerationNotify:(bool)arg1;
- (void)_scrollViewDidEndDecelerating;
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(bool)arg1 withOffset:(double)arg2;
- (double)_shadowHeightOffset;
- (double)_offsetForRubberBandOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4;
- (bool)_isBouncing;
- (double)_verticalVelocity;
- (double)_horizontalVelocity;
- (struct CGPoint { double x1; double x2; })_animatedTargetOffset;
- (void)_setContentOffsetAnimationDuration:(double)arg1;
- (double)_contentOffsetAnimationDuration;
- (void)_resetScrollingWithUIEvent:(id)arg1;
- (bool)_beginTrackingWithEvent:(id)arg1;
- (void)_scrollViewWillBeginZooming;
- (void)_scrollViewDidEndZooming;
- (void)_scrollViewDidEndDraggingWithDeceleration:(bool)arg1;
- (bool)_shouldScrollOnGestureRecognizerFailed;
- (void)_scrollViewWillBeginDragging;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(bool*)arg5;
- (void)_stopScrollingNotify:(bool)arg1 pin:(bool)arg2;
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(bool)arg1;
- (void)_notifyDidScroll;
- (void)_adjustContentOffsetIfNecessary;
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(bool)arg1;
- (void)_clearContentOffsetAnimation:(id)arg1;
- (void)_skipNextStartOffsetAdjustment;
- (void)_removeScrollNotificationView:(id)arg1;
- (void)_addScrollNotificationView:(id)arg1;
- (bool)_forwardsToParentScroller;
- (void)_ensureViewsAreLoadedInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2 animationCurve:(int)arg3;
- (struct CGPoint { double x1; double x2; })_adjustedContentOffsetPinnedToScrollableBounds:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_canScrollY;
- (bool)_canScrollX;
- (bool)_viewIsInsideNavigationController;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 scrollAxis:(int)arg4;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3;
- (void)_reenableImplicitAnimationsAfterScrollTest;
- (id)_scrollTestExtraResults;
- (void)_incrementForScrollTest;
- (void)_suppressImplicitAnimationsForScrollTest;
- (void)_performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 scrollAxis:(int)arg5;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (double)maxVelocityInDirection:(int)arg1;
- (int)scrollableDirections;
- (id)_constraintsFromContentSize;
- (bool)_constraintAffectsContentSize:(id)arg1;
- (void)_didRemoveDependentConstraint:(id)arg1;
- (void)_didAddDependentConstraint:(id)arg1;
- (void)_accumulateViewConstraintsIntoArray:(id)arg1;
- (void)_adjustCrossingConstraintsIfNecessaryForOldContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_old_updateAutomaticContentSizeConstraintsIfNecessaryWithContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setSubviewWantsAutolayoutTripWantsAutolayout:(bool)arg1;
- (void)_resizeWithOldSuperviewSize:(struct CGSize { double x1; double x2; })arg1;

@end