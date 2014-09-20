/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLEntity, NSMutableDictionary, NSMutableArray, NSNumber;

@interface _NSSQLTableMigrationDescription : NSObject  {
    NSSQLEntity *_rootEntity;
    NSSQLEntity *_sourceRootEntity;
    int _migrationType;
    NSMutableArray *_addedEntityMigrations;
    NSMutableArray *_removedEntityMigrations;
    NSMutableArray *_copiedEntityMigrations;
    NSMutableArray *_transformedEntityMigrations;
    NSMutableDictionary *_migrationByEntity;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableDictionary *_tempTableNames;
    NSNumber *_hasTransformedTableSchema;
}

@property(readonly) int migrationType;
@property(readonly) NSSQLEntity * rootEntity;


- (id)description;
- (void)dealloc;
- (void)appendStatementsToCompleteMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToPerformMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToCreateOrDropTables:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToRenameTables:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)addEntityMigrationDescription:(id)arg1;
- (id)initWithRootEntity:(id)arg1 migrationType:(int)arg2;
- (id)_retainedRemovedSubEntitiesOfEntity:(id)arg1;
- (id)newCopyAndInsertStatementForToOne:(id)arg1 toManyToMany:(id)arg2 fromTableName:(id)arg3 invertColumns:(bool)arg4 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg5;
- (id)createDeleteStatementForEntityMigrations:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createUpdateStatementForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createFEKUpdateStatementsForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createInsertStatementForEntityMigration:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)_tempNameForTableName:(id)arg1;
- (bool)_hasTransformedTableSchema;
- (id)_sourceRootEntity;
- (id)_transformedManyToManys;
- (id)_removedManyToManys;
- (id)_addedManyToManys;
- (int)migrationType;
- (id)rootEntity;

@end