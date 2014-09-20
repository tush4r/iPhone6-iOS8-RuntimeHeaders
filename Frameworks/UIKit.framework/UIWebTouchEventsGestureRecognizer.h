/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIWebTouchEventsGestureRecognizerDelegate>, NSMutableArray;

@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer  {
    id _touchTarget;
    SEL _touchAction;
    <UIWebTouchEventsGestureRecognizerDelegate> *_webTouchDelegate;
    bool_passedHitTest;
    bool_defaultPrevented;
    double _originalGestureDistance;
    double _originalGestureAngle;
    struct _UIWebTouchEvent { 
        int type; 
        double timestamp; 
        struct CGPoint { 
            double x; 
            double y; 
        } locationInScreenCoordinates; 
        struct CGPoint { 
            double x; 
            double y; 
        } locationInDocumentCoordinates; 
        double scale; 
        double rotation; 
        boolinJavaScriptGesture; 
        struct _UIWebTouchPoint {} *touchPoints; 
        unsigned int touchPointCount; 
    } _lastTouchEvent;
}

@property(getter=isDefaultPrevented) bool defaultPrevented;
@property(readonly) const struct _UIWebTouchEvent { int x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; double x5; double x6; boolx7; struct _UIWebTouchPoint {} *x8; unsigned int x9; }* lastTouchEvent;
@property(readonly) int type;
@property(readonly) struct CGPoint { double x1; double x2; } locationInWindow;
@property(readonly) NSMutableArray * touchLocations;
@property(readonly) NSMutableArray * touchIdentifiers;
@property(readonly) NSMutableArray * touchPhases;
@property(readonly) bool inJavaScriptGesture;
@property(readonly) double scale;
@property(readonly) double rotation;

+ (void)initialize;

- (void)setDefaultPrevented:(bool)arg1;
- (bool)isDefaultPrevented;
- (bool)inJavaScriptGesture;
- (id)touchPhases;
- (id)touchIdentifiers;
- (id)touchLocations;
- (struct CGPoint { double x1; double x2; })locationInWindow;
- (const struct _UIWebTouchEvent { int x1; double x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; double x5; double x6; boolx7; struct _UIWebTouchPoint {} *x8; unsigned int x9; }*)lastTouchEvent;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 touchDelegate:(id)arg3;
- (void)_processTouches:(id)arg1 withEvent:(id)arg2 type:(int)arg3;
- (void)_recordTouches:(id)arg1 type:(int)arg2;
- (void)reset;
- (double)rotation;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (int)type;
- (double)scale;
- (void)dealloc;

@end