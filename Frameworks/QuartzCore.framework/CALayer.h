/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSString, NSDictionary, CALayer, CAMeshTransform;

@interface CALayer : NSObject <NSCoding, CAMediaTiming, CAPropertyInfo> {
    struct _CALayerIvars { 
        int refcount; 
        unsigned int magic; 
        void *layer; 
    } _attr;
}

@property double mass;
@property double momentOfInertia;
@property double coefficientOfRestitution;
@property(copy) NSArray * behaviors;
@property double velocityStretch;
@property(copy) NSArray * lights;
@property bool acceptsLights;
@property double ambientReflectance;
@property double diffuseReflectance;
@property double specularReflectance;
@property double shininess;
@property double metallicity;
@property(copy) CAMeshTransform * meshTransform;
@property bool needsLayoutOnGeometryChange;
@property bool canDrawConcurrently;
@property bool acceleratesDrawing;
@property(getter=isFrozen) bool frozen;
@property bool allowsHitTesting;
@property bool hitTestsAsOpaque;
@property bool clearsContext;
@property bool contentsOpaque;
@property bool literalContentsCenter;
@property(copy) NSString * contentsScaling;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } contentsTransform;
@property bool invertsShadow;
@property bool shadowPathIsBounds;
@property bool swapsMaskAndLayer;
@property bool sortsSublayers;
@property bool preloadsCache;
@property bool allowsGroupBlending;
@property bool allowsDisplayCompositing;
@property struct CGSize { double x1; double x2; } sizeRequisition;
@property struct CGSize { double x1; double x2; } backgroundColorPhase;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property(copy) NSArray * states;
@property(copy) NSArray * stateTransitions;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property struct CGPoint { double x1; double x2; } position;
@property double zPosition;
@property struct CGPoint { double x1; double x2; } anchorPoint;
@property double anchorPointZ;
@property struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transform;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property(getter=isHidden) bool hidden;
@property(getter=isDoubleSided) bool doubleSided;
@property(getter=isGeometryFlipped) bool geometryFlipped;
@property(readonly) CALayer * superlayer;
@property(copy) NSArray * sublayers;
@property struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } sublayerTransform;
@property(retain) CALayer * mask;
@property bool masksToBounds;
@property(retain) id contents;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsRect;
@property(copy) NSString * contentsGravity;
@property double contentsScale;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentsCenter;
@property(copy) NSString * minificationFilter;
@property(copy) NSString * magnificationFilter;
@property float minificationFilterBias;
@property(getter=isOpaque) bool opaque;
@property bool needsDisplayOnBoundsChange;
@property bool drawsAsynchronously;
@property unsigned int edgeAntialiasingMask;
@property bool allowsEdgeAntialiasing;
@property struct CGColor { }* backgroundColor;
@property double cornerRadius;
@property double borderWidth;
@property struct CGColor { }* borderColor;
@property float opacity;
@property bool allowsGroupOpacity;
@property(retain) id compositingFilter;
@property(copy) NSArray * filters;
@property(copy) NSArray * backgroundFilters;
@property bool shouldRasterize;
@property double rasterizationScale;
@property struct CGColor { }* shadowColor;
@property float shadowOpacity;
@property struct CGSize { double x1; double x2; } shadowOffset;
@property double shadowRadius;
@property struct CGPath { }* shadowPath;
@property(copy) NSDictionary * actions;
@property(copy) NSString * name;
@property id delegate;
@property(copy) NSDictionary * style;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property bool autoreverses;
@property(copy) NSString * fillMode;

+ (bool)needsDisplayForKey:(id)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)layer;
+ (bool)_hasRenderLayerSubclass;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)defaultActionForKey:(id)arg1;
+ (id)properties;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (void)CAMLParserEndElement:(id)arg1;
+ (bool)needsLayoutForKey:(id)arg1;
+ (int (*)())CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)())CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (void)CAMLParserStartElement:(id)arg1;

- (void)setAnchorPointZ:(double)arg1;
- (double)anchorPointZ;
- (double)zPosition;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (id)fillMode;
- (bool)autoreverses;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setActions:(id)arg1;
- (oneway void)release;
- (id)modelLayer;
- (void)setBackgroundFilters:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredFrameSize;
- (void)setGeometryFlipped:(bool)arg1;
- (bool)isGeometryFlipped;
- (void)setMinificationFilter:(id)arg1;
- (unsigned int)edgeAntialiasingMask;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })sublayerTransform;
- (double)shadowRadius;
- (void)setDoubleSided:(bool)arg1;
- (bool)isDoubleSided;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsRect;
- (void)setShadowRadius:(double)arg1;
- (void)setShadowOpacity:(float)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)layoutSublayers;
- (id)initWithLayer:(id)arg1;
- (void)setAllowsEdgeAntialiasing:(bool)arg1;
- (struct CGColor { }*)borderColor;
- (double)borderWidth;
- (void)setZPosition:(double)arg1;
- (void)_display;
- (id).cxx_construct;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (bool)retainWeakReference;
- (bool)allowsWeakReference;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_dealloc;
- (void)setEdgeAntialiasingMask:(unsigned int)arg1;
- (id)compositingFilter;
- (id)contentsScaling;
- (void)setShadowPath:(struct CGPath { }*)arg1;
- (void)setBorderColor:(struct CGColor { }*)arg1;
- (void)setBorderWidth:(double)arg1;
- (bool)allowsGroupOpacity;
- (struct CGColor { }*)shadowColor;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAllowsGroupOpacity:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (void)setSublayerTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)setContents:(id)arg1;
- (double)rasterizationScale;
- (bool)shouldRasterize;
- (void)removeAllAnimations;
- (id)filters;
- (double)timeOffset;
- (float)speed;
- (double)beginTime;
- (double)convertTime:(double)arg1 fromLayer:(id)arg2;
- (void)displayIfNeeded;
- (void)setOpacity:(float)arg1;
- (float)opacity;
- (bool)masksToBounds;
- (bool)needsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldRasterize:(bool)arg1;
- (void)setContentsScale:(double)arg1;
- (double)contentsScale;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsScaling:(id)arg1;
- (id)contentsGravity;
- (bool)needsDisplayOnBoundsChange;
- (void)setContentsGravity:(id)arg1;
- (void)setSublayers:(id)arg1;
- (void)removeFromSuperlayer;
- (bool)needsLayout;
- (struct CGPoint { double x1; double x2; })position;
- (void)setCornerRadius:(double)arg1;
- (double)cornerRadius;
- (void)renderInContext:(struct CGContext { }*)arg1;
- (void)setMask:(id)arg1;
- (id)mask;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentsCenter;
- (void)setContentsCenter:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMagnificationFilter:(id)arg1;
- (id)presentationLayer;
- (void)setAutoreverses:(bool)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setBeginTime:(double)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setFillMode:(id)arg1;
- (void)setFilters:(id)arg1;
- (float)repeatCount;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)sublayers;
- (void)layoutIfNeeded;
- (bool)isOpaque;
- (id)contents;
- (void)removeAnimationForKey:(id)arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (id)superlayer;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRasterizationScale:(double)arg1;
- (void)setMasksToBounds:(bool)arg1;
- (void)setAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })affineTransform;
- (id)actionForKey:(id)arg1;
- (void)setTransform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowColor:(struct CGColor { }*)arg1;
- (id)style;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)display;
- (void)setDuration:(double)arg1;
- (id)actions;
- (double)duration;
- (void)setSpeed:(float)arg1;
- (id)delegate;
- (id)debugDescription;
- (unsigned long long)retainCount;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)addSublayer:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (void)setHidden:(bool)arg1;
- (void)setNeedsLayout;
- (bool)isHidden;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGColor { }*)backgroundColor;
- (void)setCompositingFilter:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)setNeedsDisplayOnBoundsChange:(bool)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)retain;
- (id)magnificationFilter;
- (id)minificationFilter;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)arg1;
- (void)setDrawsAsynchronously:(bool)arg1;
- (struct CGPath { }*)shadowPath;
- (id)backgroundFilters;
- (struct CGSize { double x1; double x2; })_preferredSize;
- (bool)drawsAsynchronously;
- (void)_renderBorderInContext:(struct CGContext { }*)arg1;
- (void)_renderSublayersInContext:(struct CGContext { }*)arg1;
- (void)_renderForegroundInContext:(struct CGContext { }*)arg1;
- (void)_cancelAnimationTimer;
- (bool)_scheduleAnimationTimer;
- (void)_renderBackgroundInContext:(struct CGContext { }*)arg1;
- (void)setMinificationFilterBias:(float)arg1;
- (float)minificationFilterBias;
- (id)_initWithReference:(id)arg1;
- (bool)shouldArchiveValueForKey:(id)arg1;
- (float)shadowOpacity;
- (bool)allowsEdgeAntialiasing;
- (bool)contentsAreFlipped;
- (double)convertTime:(double)arg1 toLayer:(id)arg2;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)stateTransitionFrom:(id)arg1 to:(id)arg2;
- (id)dependentStatesOfState:(id)arg1;
- (id)stateWithName:(id)arg1;
- (void)removeState:(id)arg1;
- (void)addState:(id)arg1;
- (void)insertState:(id)arg1 atIndex:(unsigned int)arg2;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)scrollPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleRectOfLayer:(id)arg1;
- (void)_scrollRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLayer:(id)arg2;
- (void)_scrollPoint:(struct CGPoint { double x1; double x2; })arg1 fromLayer:(id)arg2;
- (void)reloadValueForKeyPath:(id)arg1;
- (bool)isDescendantOf:(id)arg1;
- (void*)regionBeingDrawn;
- (void)setAcceleratesDrawing:(bool)arg1;
- (bool)acceleratesDrawing;
- (void)setContentsChanged;
- (void)setAllowsHitTesting:(bool)arg1;
- (bool)hidden;
- (void)setAllowsDisplayCompositing:(bool)arg1;
- (id)meshTransform;
- (bool)isFlipped;
- (void)setSortsSublayers:(bool)arg1;
- (void)setContentsOpaque:(bool)arg1;
- (void)setMeshTransform:(id)arg1;
- (bool)opaque;
- (void)setFlipped:(bool)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setPreloadsCache:(bool)arg1;
- (void)setNeedsLayoutOnGeometryChange:(bool)arg1;
- (bool)needsLayoutOnGeometryChange;
- (id)ancestorSharedWithLayer:(id)arg1;
- (bool)isFrozen;
- (void)setContentsTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)invalidateContents;
- (void)clearHasBeenCommitted;
- (bool)clearsContext;
- (void)setClearsContext:(bool)arg1;
- (void)layoutBelowIfNeeded;
- (void)setAllowsGroupBlending:(bool)arg1;
- (bool)hasBeenCommitted;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (id)context;
- (void)setHitTestsAsOpaque:(bool)arg1;
- (struct CGSize { double x1; double x2; })size;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })contentsTransform;
- (void)setBackgroundColorPhase:(struct CGSize { double x1; double x2; })arg1;
- (void)setSwapsMaskAndLayer:(bool)arg1;
- (bool)contentsOpaque;
- (void)setInvertsShadow:(bool)arg1;
- (void)setCanDrawConcurrently:(bool)arg1;
- (void)setLiteralContentsCenter:(bool)arg1;
- (bool)doubleSided;
- (id)layerAtTime:(double)arg1;
- (id)layerBeingDrawn;
- (bool)layoutIsActive;
- (bool)_canDisplayConcurrently;
- (void)_didCommitLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)arg1;
- (bool)shadowPathIsBounds;
- (bool)invertsShadow;
- (bool)swapsMaskAndLayer;
- (bool)literalContentsCenter;
- (bool)hitTestsAsOpaque;
- (bool)allowsGroupBlending;
- (bool)allowsDisplayCompositing;
- (bool)preloadsCache;
- (struct CGSize { double x1; double x2; })backgroundColorPhase;
- (bool)canDrawConcurrently;
- (struct CGSize { double x1; double x2; })sizeRequisition;
- (void)setSizeRequisition:(struct CGSize { double x1; double x2; })arg1;
- (bool)drawsMipmapLevels;
- (void)_prepareContext:(struct CGContext { }*)arg1;
- (bool)sortsSublayers;
- (bool)allowsHitTesting;
- (bool)ignoresHitTesting;
- (unsigned int)_renderImageCopyFlags;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { unsigned int x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 3; unsigned int x_3_1_7 : 3; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 30; struct Vec2<double> { double x_31_2_1; double x_31_2_2; } x_3_1_31; struct Rect { double x_32_2_1; double x_32_2_2; double x_32_2_3; double x_32_2_4; } x_3_1_32; } x3; struct Ref<CA::Render::Object> { struct Object {} *x_4_1_1; } x4; struct Ref<CA::Render::TypedArray<CA::Render::Layer> > { struct TypedArray<CA::Render::Layer> {} *x_5_1_1; } x5; struct Layer {} *x6; struct Ref<CA::Render::Layer::Ext> { struct Ext {} *x_7_1_1; } x7; struct Ref<CA::Render::TypedArray<CA::Render::Animation> > { struct TypedArray<CA::Render::Animation> {} *x_8_1_1; } x8; struct Ref<CA::Render::Handle> { struct Handle {} *x_9_1_1; } x9; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)setShadowPathIsBounds:(bool)arg1;
- (void)setShininess:(double)arg1;
- (double)shininess;
- (void)setMetallicity:(double)arg1;
- (void)setSpecularReflectance:(double)arg1;
- (void)setDiffuseReflectance:(double)arg1;
- (void)setAmbientReflectance:(double)arg1;
- (void)setAcceptsLights:(bool)arg1;
- (void)setLights:(id)arg1;
- (double)metallicity;
- (double)specularReflectance;
- (double)diffuseReflectance;
- (double)ambientReflectance;
- (bool)acceptsLights;
- (id)lights;
- (void)setBehaviors:(id)arg1;
- (id)behaviors;
- (void)setVelocityStretch:(double)arg1;
- (double)velocityStretch;
- (double)mass;
- (void)setMass:(double)arg1;
- (void)setCoefficientOfRestitution:(double)arg1;
- (void)setMomentOfInertia:(double)arg1;
- (double)coefficientOfRestitution;
- (double)momentOfInertia;
- (bool)getRendererInfo:(struct _CARenderRendererInfo { int x1; unsigned int x2; unsigned int x3; }*)arg1 size:(unsigned long long)arg2;
- (void)web_disableAllActions;
- (long long)compareTextEffectsOrdering:(id)arg1;
- (bool)uiHasFilterWithName:(id)arg1;
- (void)setPerspectiveDistance:(double)arg1;

@end