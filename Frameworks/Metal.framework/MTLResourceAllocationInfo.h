/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class NSString;

@interface MTLResourceAllocationInfo : NSObject <NSCopying, NSCoding> {
    bool_pageoffRequired;
    bool_purgeable;
    NSString *_memoryPool;
    unsigned long long _virtualSize;
    unsigned long long _residentSize;
    unsigned long long _dirtySize;
    unsigned long long _uniqueIdentifier;
}

@property(readonly) NSString * memoryPool;
@property(readonly) unsigned long long virtualSize;
@property(readonly) unsigned long long residentSize;
@property(readonly) unsigned long long dirtySize;
@property(readonly) bool pageoffRequired;
@property(readonly) bool purgeable;
@property(readonly) unsigned long long uniqueIdentifier;


- (unsigned long long)uniqueIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)virtualSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)pageoffRequired;
- (unsigned long long)dirtySize;
- (unsigned long long)residentSize;
- (id)memoryPool;
- (bool)purgeable;

@end
