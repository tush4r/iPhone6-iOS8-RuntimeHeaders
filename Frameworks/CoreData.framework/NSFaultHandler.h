/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSFaultHandler : NSObject  {
}

+ (void)initialize;
+ (bool)accessInstanceVariablesDirectly;

- (void)_fireFirstAndSecondLevelFaultsForObject:(id)arg1 withContext:(id)arg2;
- (void)turnObject:(id)arg1 intoFaultWithContext:(id)arg2;
- (void)fulfillFault:(id)arg1 withContext:(id)arg2;
- (id)fulfillFault:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)fulfillFault:(id)arg1 withContext:(id)arg2 forIndex:(unsigned long long)arg3;
- (id)initWithPersistenceStore:(id)arg1;
- (id)retainedFulfillAggregateFaultForObject:(id)arg1 andRelationship:(id)arg2 withContext:(id)arg3;

@end
