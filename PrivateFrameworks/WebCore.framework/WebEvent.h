/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSString, NSArray;

@interface WebEvent : NSObject  {
    int _type;
    double _timestamp;
    struct CGPoint { 
        double x; 
        double y; 
    } _locationInWindow;
    NSString *_characters;
    NSString *_charactersIgnoringModifiers;
    unsigned int _modifierFlags;
    bool_keyRepeating;
    bool_popupVariant;
    unsigned long long _keyboardFlags;
    unsigned short _keyCode;
    bool_tabKey;
    int _characterSet;
    float _deltaX;
    float _deltaY;
    unsigned int _touchCount;
    NSArray *_touchLocations;
    NSArray *_touchIdentifiers;
    NSArray *_touchPhases;
    bool_isGesture;
    float _gestureScale;
    float _gestureRotation;
    bool_wasHandled;
}

@property(readonly) int type;
@property(readonly) double timestamp;
@property(readonly) struct CGPoint { double x1; double x2; } locationInWindow;
@property(retain,readonly) NSString * characters;
@property(retain,readonly) NSString * charactersIgnoringModifiers;
@property(readonly) unsigned int modifierFlags;
@property(getter=isKeyRepeating,readonly) bool keyRepeating;
@property(getter=isPopupVariant,readonly) bool popupVariant;
@property(readonly) unsigned long long keyboardFlags;
@property(readonly) unsigned short keyCode;
@property(getter=isTabKey,readonly) bool tabKey;
@property(readonly) int characterSet;
@property(readonly) float deltaX;
@property(readonly) float deltaY;
@property(readonly) unsigned int touchCount;
@property(retain,readonly) NSArray * touchLocations;
@property(retain,readonly) NSArray * touchIdentifiers;
@property(retain,readonly) NSArray * touchPhases;
@property(readonly) bool isGesture;
@property(readonly) float gestureScale;
@property(readonly) float gestureRotation;
@property bool wasHandled;


- (bool)isTabKey;
- (unsigned long long)keyboardFlags;
- (bool)isPopupVariant;
- (id)_modiferFlagsDescription;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(bool)arg6 isPopupVariant:(bool)arg7 keyCode:(unsigned short)arg8 isTabKey:(bool)arg9 characterSet:(int)arg10;
- (id)_eventDescription;
- (id)_touchPhasesDescription;
- (id)_touchIdentifiersDescription;
- (id)_touchLocationsDescription:(id)arg1;
- (id)_characterSetDescription;
- (id)_touchPhaseDescription:(int)arg1;
- (bool)isKeyRepeating;
- (unsigned int)touchCount;
- (bool)isGesture;
- (float)gestureRotation;
- (float)gestureScale;
- (id)charactersIgnoringModifiers;
- (void)setWasHandled:(bool)arg1;
- (float)deltaY;
- (float)deltaX;
- (unsigned short)keyCode;
- (int)characterSet;
- (id)_typeDescription;
- (id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint { double x1; double x2; })arg3 modifiers:(unsigned int)arg4 touchCount:(unsigned int)arg5 touchLocations:(id)arg6 touchIdentifiers:(id)arg7 touchPhases:(id)arg8 isGesture:(bool)arg9 gestureScale:(float)arg10 gestureRotation:(float)arg11;
- (id)characters;
- (id).cxx_construct;
- (id)touchPhases;
- (id)touchIdentifiers;
- (id)touchLocations;
- (struct CGPoint { double x1; double x2; })locationInWindow;
- (id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(struct CGPoint { double x1; double x2; })arg2 deltaX:(float)arg3 deltaY:(float)arg4;
- (bool)wasHandled;
- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(bool)arg6 withFlags:(unsigned long long)arg7 keyCode:(unsigned short)arg8 isTabKey:(bool)arg9 characterSet:(int)arg10;
- (unsigned int)modifierFlags;
- (int)type;
- (double)timestamp;
- (id)description;
- (void)dealloc;

@end