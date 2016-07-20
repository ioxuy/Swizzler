//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDStoreSQLStatementsDescriptor.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface GDStoreSQLV1 : NSObject <GDStoreSQLStatementsDescriptor>
{
    NSDictionary *_entities;
    NSMutableDictionary *_manyRelationshipTable;
    NSMutableDictionary *_statements;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_insertStatementCache;
}

- (BOOL)isReservedKeyword:(id)arg1;
- (id)objectType;
- (id)objectID;
- (id)fetchRequestStatement:(id)arg1 managedObjectContext:(id)arg2 parameters:(id *)arg3 error:(id *)arg4;
- (id)fetchEntityStatementForEntity:(id)arg1 objectID:(long long)arg2 fetchedProperties:(id *)arg3;
- (id)getParentSelection:(id)arg1;
- (void)getChildrenOfEntity:(id)arg1 andFill:(id)arg2;
- (id)createIndexStatementsForEntity:(id)arg1;
- (id)fetchToManyRelationshipStatementForRelationship:(id)arg1 objectID:(long long)arg2 attributes:(id)arg3;
- (id)fetchToOneRelationshipStatementForRelationship:(id)arg1 entity:(id)arg2 destinationEntity:(id)arg3 attributes:(id)arg4;
- (id)deleteStatementSimpleForToManyRelationship:(id)arg1;
- (id)insertStatementForToManyRelationship:(id)arg1;
- (id)deleteStatementForToManyRelationship:(id)arg1;
- (id)createToManyTableStatementForRelationship:(id)arg1;
- (void)initialiseToManyTables:(id)arg1;
- (id)columnNameForInverseRelationship:(id)arg1;
- (id)tableNameForToManyRelationship:(id)arg1;
- (id)deleteStatementForEntity:(id)arg1;
- (id)updateStatementForEntity:(id)arg1 changedProperties:(id)arg2;
- (id)insertStatementForEntity:(id)arg1;
- (id)createTableStatementForEntity:(id)arg1;
- (id)escapeIdentifier:(id)arg1;
- (int)storeVersion;
- (BOOL)isSingleTableInheritanceEnabled;
- (id)entityWithName:(id)arg1;
- (id)entityForDescription:(id)arg1;
- (void)dealloc;
- (id)initWithEntities:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

