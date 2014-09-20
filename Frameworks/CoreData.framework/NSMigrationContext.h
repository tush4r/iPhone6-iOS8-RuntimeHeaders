/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSPropertyMapping, NSEntityMapping, NSMigrationManager;

@interface NSMigrationContext : NSObject  {
    NSMutableDictionary *_bySourceAssociationTable;
    NSMutableDictionary *_byDestinationAssociationTable;
    NSMutableDictionary *_byMappingBySourceAssociationTable;
    NSMutableDictionary *_byMappingByDestinationAssociationTable;
    NSMigrationManager *_migrationManager;
    NSEntityMapping *_currentMapping;
    unsigned long long _currentStep;
    NSPropertyMapping *_currentPropertyMapping;
}

@property(retain) NSEntityMapping * currentEntityMapping;
@property(retain) NSPropertyMapping * currentPropertyMapping;
@property unsigned long long currentMigrationStep;


- (void)dealloc;
- (id)sourceInstancesForEntityMapping:(id)arg1 destinationInstance:(id)arg2;
- (id)destinationInstancesForEntityMapping:(id)arg1 sourceInstance:(id)arg2;
- (unsigned long long)currentMigrationStep;
- (id)currentPropertyMapping;
- (void)setCurrentEntityMapping:(id)arg1;
- (id)currentEntityMapping;
- (id)initWithMigrationManager:(id)arg1;
- (void)_createAssociationsByDestination:(id)arg1 fromSource:(id)arg2 forEntityMapping:(id)arg3;
- (void)_createAssociationsBySource:(id)arg1 withDestination:(id)arg2 forEntityMapping:(id)arg3;
- (void)setCurrentMigrationStep:(unsigned long long)arg1;
- (void)clearAssociationTables;
- (void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3;
- (void)setCurrentPropertyMapping:(id)arg1;

@end