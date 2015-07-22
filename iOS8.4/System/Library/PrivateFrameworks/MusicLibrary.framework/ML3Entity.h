/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3MusicLibrary;

@interface ML3Entity : NSObject {

	ML3MusicLibrary* _library;
	long long _persistentID;

}

@property (__weak) ML3MusicLibrary * library;              //@synthesize library=_library - In the implementation block
@property (readonly) long long persistentID;               //@synthesize persistentID=_persistentID - In the implementation block
@property (readonly) BOOL existsInLibrary; 
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(id)spotlightPropertyForMPMediaEntityProperty:(id)arg1 ;
+(id)replacerWithProperties:(id)arg1 library:(id)arg2 ;
+(id)aggregateQueryWithUnitQuery:(id)arg1 foreignPersistentIDProperty:(id)arg2 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 ;
+(id)unrestrictedAllItemsQueryWithlibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 ;
+(id)anyInLibrary:(id)arg1 predicate:(id)arg2 ;
+(id)anyInLibrary:(id)arg1 predicate:(id)arg2 options:(long long)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 usingSections:(BOOL)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(BOOL)arg4 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(BOOL)arg4 options:(long long)arg5 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 usingSections:(BOOL)arg4 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirectionMappings:(id)arg4 usingSections:(BOOL)arg5 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 options:(long long)arg3 ;
+(id)directCollectionQueryWithAggregateQuery:(id)arg1 predicate:(id)arg2 usingSections:(BOOL)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4 options:(long long)arg5 ;
+(id)unrestrictedQueryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 ;
+(id)allItemsQueryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(BOOL)arg4 ;
+(id)predicateIncludingSystemwidePredicatesWithPredicate:(id)arg1 library:(id)arg2 options:(long long)arg3 ;
+(long long)revisionTrackingCode;
+(BOOL)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 connection:(id)arg4 ;
+(id)persistentIDColumnForTable:(id)arg1 ;
+(BOOL)incrementRevisionForRevisionTypeContentWithConnection:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3 ;
+(BOOL)_shouldIncrementRevisionForType:(int)arg1 persistentID:(long long)arg2 usingConnection:(id)arg3 ;
+(BOOL)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4 usingConnection:(id)arg5 ;
+(id)unsettableProperties;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)foreignColumnForProperty:(id)arg1 ;
+(BOOL)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 library:(id)arg4 ;
+(id)extraTablesToInsert;
+(BOOL)insertionChangesLibraryContents;
+(BOOL)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4 ;
+(id)allProperties;
+(id)newSelectSQLForProperties:(const id*)arg1 count:(unsigned long long)arg2 predicate:(id)arg3 ;
+(id)disambiguatedSelectSQLForProperty:(id)arg1 ;
+(id)predicateByOptimizingComparisonPredicate:(id)arg1 ;
+(BOOL)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(id)widthLimitedSetValuesQueue;
+(BOOL)setValues:(id)arg1 forProperties:(id)arg2 forEntityPersistentIDs:(id)arg3 inLibrary:(id)arg4 usingConnection:(id)arg5 ;
+(void)_didChangeValueForProperties:(id)arg1 inLibrary:(id)arg2 ;
+(BOOL)libraryContentsChangeForProperty:(id)arg1 ;
+(BOOL)libraryDynamicChangeForProperty:(id)arg1 ;
+(BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5 ;
+(BOOL)_deleteRowForPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 library:(id)arg3 table:(id)arg4 usingColumn:(id)arg5 usingConnection:(id)arg6 ;
+(id)extraTablesToDelete;
+(id)collectionClassesToUpdateBeforeDelete;
+(BOOL)incrementRevisionForRevisionTypeContentWithConnection:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 ;
+(BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 ;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)predisambiguatedProperties;
+(BOOL)incrementRevisionForRevisionTypeContentWithLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3 ;
+(void)enumeratePersistentIDsInLibrary:(id)arg1 matchingPredicate:(id)arg2 orderingTerms:(id)arg3 persistentIDs:(const long long*)arg4 count:(unsigned long long)arg5 options:(long long)arg6 usingBlock:(/*^block*/id)arg7 ;
+(id)subselectStatementForProperty:(id)arg1 ;
+(id)subselectPropertyForProperty:(id)arg1 ;
+(id)newSelectAllEntitiesSQLForProperties:(const id*)arg1 count:(unsigned long long)arg2 predicate:(id)arg3 ;
+(id)defaultFilterPredicates;
+(id)predicateByOptimizingPredicate:(id)arg1 ;
+(id)newWithPersistentID:(long long)arg1 inLibrary:(id)arg2 ;
+(id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 ;
+(id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 ;
+(id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4 ;
+(id)defaultOrderingTerms;
+(id)sectionPropertyForProperty:(id)arg1 ;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(BOOL)removeFromMyLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 ;
+(void)predisambiguateProperties:(id)arg1 toDictionary:(id)arg2 ;
+(id)indexableSQLForProperties:(id)arg1 ;
+(id)orderingSQLForProperties:(id)arg1 directionality:(id)arg2 ;
+(void)enumeratePersistentIDsInLibrary:(id)arg1 afterRevision:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(ML3MusicLibrary *)library;
-(long long)persistentID;
-(id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4 ;
-(id)initWithPersistentID:(long long)arg1 inLibrary:(id)arg2 ;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 ;
-(BOOL)setValues:(id)arg1 forProperties:(id)arg2 ;
-(BOOL)setValues:(id)arg1 forProperties:(id)arg2 usingConnection:(id)arg3 ;
-(id)copyInLibrary:(id)arg1 ;
-(BOOL)existsInLibrary;
-(BOOL)matchesPredicate:(id)arg1 ;
-(id)getValuesForProperties:(id)arg1 ;
-(BOOL)setValues:(const id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)setValues:(id)arg1 forProperties:(id)arg2 async:(BOOL)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(BOOL)setValuesForPropertiesWithDictionary:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)didChangeValueForProperties:(id)arg1 ;
-(BOOL)deleteFromLibrary;
-(void)incrementRevision;
-(void)setLibrary:(ML3MusicLibrary *)arg1 ;
@end
