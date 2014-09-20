/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}

@property(readonly) unsigned long long count;

+ (id)setWithArray:(id)arg1;
+ (id)setWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)setWithObjects:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)setWithObject:(id)arg1;
+ (id)setWithSet:(id)arg1;
+ (id)set;
+ (id)setWithSet:(id)arg1 copyItems:(bool)arg2;
+ (id)setWithOrderedSet:(id)arg1;
+ (id)setWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)setWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (id)setWithArray:(id)arg1 copyItems:(bool)arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)newSetWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
+ (id)setWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
+ (bool)supportsSecureCoding;

- (id)initWithOrderedSet:(id)arg1;
- (bool)isSubsetOfOrderedSet:(id)arg1;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned long long)countForObject:(id)arg1;
- (id)setByAddingObject:(id)arg1;
- (id)initWithSet:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id)arg2;
- (id)setByAddingObjectsFromArray:(id)arg1;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)member:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(bool)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)intersectsSet:(id)arg1;
- (bool)isSubsetOfSet:(id)arg1;
- (bool)isEqualToSet:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)setByAddingObjectsFromSet:(id)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (id)initWithArray:(id)arg1;
- (id)objectsPassingTest:(id)arg1;
- (id)objectEnumerator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)allObjects;
- (id)anyObject;
- (id)initWithObjects:(id)arg1;
- (bool)containsObject:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)members:(id)arg1 notFoundMarker:(id)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)objectPassingTest:(id)arg1;
- (void)getObjects:(id*)arg1 count:(unsigned long long)arg2;
- (id)initWithOrderedSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)objectWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (void)__applyValues:(int (*)())arg1 context:(void*)arg2;
- (bool)__getValue:(id*)arg1 forObj:(id)arg2;
- (unsigned long long)_cfTypeID;
- (bool)intersectsOrderedSet:(id)arg1;
- (id)initWithOrderedSet:(id)arg1 copyItems:(bool)arg2;
- (id)initWithArray:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 copyItems:(bool)arg3;
- (id)initWithSet:(id)arg1 copyItems:(bool)arg2;
- (id)objectsWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (void)getObjects:(id*)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (bool)isNSSet__;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)_distinctUnionOfSetsForKeyPath:(id)arg1;
- (id)_distinctUnionOfObjectsForKeyPath:(id)arg1;
- (id)_distinctUnionOfArraysForKeyPath:(id)arg1;
- (id)_minForKeyPath:(id)arg1;
- (id)_maxForKeyPath:(id)arg1;
- (id)_countForKeyPath:(id)arg1;
- (id)_avgForKeyPath:(id)arg1;
- (id)_sumForKeyPath:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sortedArrayUsingDescriptors:(id)arg1;
- (id)filteredSetUsingPredicate:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)__imSetByApplyingBlock:(id)arg1;
- (void)__imForEach:(id)arg1;
- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)arg1;

@end