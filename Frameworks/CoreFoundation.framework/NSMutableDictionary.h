/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableDictionary : NSDictionary  {
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithSharedKeySet:(id)arg1;
+ (id)nonRetainingKeyAndValueDictionary;
+ (id)retainingKeyDictionary;
+ (id)nonRetainingDictionary;
+ (id)_dictionaryWithContentsOfDictionaries:(id)arg1;

- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)removeObjectsForKeys:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)removeAllObjects;
- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)setEntriesFromDictionary:(id)arg1;
- (void)replaceObjects:(id)arg1 forKeys:(id)arg2;
- (void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)removeKeysForObject:(id)arg1;
- (void)removeEntriesPassingTest:(id)arg1;
- (void)removeEntriesInDictionary:(id)arg1;
- (void)addObjects:(id)arg1 forKeys:(id)arg2;
- (void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)_mutate;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (void)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)__addObject:(id)arg1 forKey:(id)arg2;
- (void)invert;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (Class)classForCoder;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (void)_web_setBool:(bool)arg1 forKey:(id)arg2;
- (void)_web_setInt:(int)arg1 forKey:(id)arg2;
- (id)bs_takeObjectForKey:(id)arg1;
- (void)bs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (void)sbs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (void)MCSetUnionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetIntersectionRestriction:(id)arg1 values:(id)arg2;
- (void)MCSetValueRestriction:(id)arg1 value:(id)arg2;
- (void)MCDeleteBoolRestriction:(id)arg1;
- (void)MCSetBoolRestriction:(id)arg1 value:(bool)arg2;
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;
- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;
- (id)MCMutableDictionaryContainingValidatedKeysAndClasses:(id)arg1 removeKeys:(bool)arg2 outError:(id*)arg3;
- (id)MCValidateAndRemoveNonZeroLengthStringWithKey:(id)arg1 isRequired:(bool)arg2 outError:(id*)arg3;
- (id)MCValidateAndRemoveObjectOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;
- (id)MCValidateAndRemoveArrayOfClass:(Class)arg1 withKey:(id)arg2 isRequired:(bool)arg3 outError:(id*)arg4;
- (void)_web_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedInt:(unsigned int)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedLongLong:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_webkit_setLongLong:(long long)arg1 forKey:(id)arg2;
- (void)_webkit_setBool:(bool)arg1 forKey:(id)arg2;
- (void)_webkit_setFloat:(float)arg1 forKey:(id)arg2;
- (void)_webkit_setInt:(int)arg1 forKey:(id)arg2;
- (void)bw_addEntriesFromDictionaryWithRecursion:(id)arg1;
- (void)addEntriesFromDictionaryWithRecursion:(id)arg1;

@end
