/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet  {
    int _cd_rc;
    NSArray *_underlyingArray;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)accessInstanceVariablesDirectly;

- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id)arg3;
- (oneway void)release;
- (id)descriptionWithLocale:(id)arg1;
- (id)managedObjectIDAtIndex:(unsigned long long)arg1;
- (id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(id)arg2;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (id)initWithArray:(id)arg1;
- (id)objectEnumerator;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)allObjects;
- (id)array;
- (bool)containsObject:(id)arg1;
- (id)description;
- (unsigned long long)retainCount;
- (bool)isEqual:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)retain;
- (bool)isEqualToOrderedSet:(id)arg1;
- (unsigned long long)indexOfManagedObjectForObjectID:(id)arg1;
- (id)arrayFromObjectIDs;
- (id)newArrayFromObjectIDs;
- (Class)classForArchiver;
- (void)getObjects:(id*)arg1;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(id)arg3;
- (unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (void)willRead;

@end
