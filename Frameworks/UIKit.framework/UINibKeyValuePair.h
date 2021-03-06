/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UINibKeyValuePair : NSObject  {
    id object;
    NSString *keyPath;
    id value;
}

@property(readonly) id object;
@property(readonly) NSString * keyPath;
@property(readonly) id value;


- (id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3;
- (void)apply;
- (void)applyForSimulator;
- (id)object;
- (id)value;
- (id)keyPath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
