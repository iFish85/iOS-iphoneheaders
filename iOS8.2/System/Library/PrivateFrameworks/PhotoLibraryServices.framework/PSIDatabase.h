/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:49 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSDictionary, NSObject, PSITokenizer, NSString;

@interface PSIDatabase : NSObject {

	sqlite3Ref _db;
	NSDictionary* _preparedStatements;
	CFDictionaryRef _groupObjectsById;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _searchQueue;
	PSITokenizer* _tokenizer;
	int _options;
	int _queryCounter;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) int options;                  //@synthesize options=_options - In the implementation block
+(void)dropDatabaseAtPath:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(sqlite3Ref)_openDatabaseAtPath:(id)arg1 options:(int)arg2 ;
+(void)_dropDatabase:(sqlite3Ref)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSString *)path;
-(int)options;
-(void)dropDatabaseWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPath:(id)arg1 options:(int)arg2 ;
-(void)addAssets:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeAssetsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)query:(id)arg1 searchString:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(void)_inqPrepareAndExecuteStatement:(const char*)arg1 ;
-(sqlite3_stmtRef)_inqPrepareStatement:(const char*)arg1 ;
-(void)_inqPerformBatch:(/*^block*/id)arg1 ;
-(void)_inqRemoveUUID:(id)arg1 isInBatch:(char)arg2 ;
-(unsigned long long)_inqAddUUID:(id)arg1 string:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 isInBatch:(char)arg5 ;
-(id)_inqNewContentStringForGroupId:(unsigned long long)arg1 ;
-(CFArrayRef)_inqNewAssetUUIDsForAssetIds:(const void*)arg1 count:(long)arg2 ;
-(sqlite3_stmtRef)_inqPreparedContainsStatementWithPrefix:(const char*)arg1 matchingIds:(const void*)arg2 count:(long)arg3 ;
-(void)_inqExecutePreparedStatement:(sqlite3_stmtRef)arg1 withStatementBlock:(/*^block*/id)arg2 ;
-(id)_inqNewTokens:(id)arg1 forIndexing:(char)arg2 outCopyRanges:(id*)arg3 ;
-(CFSetRef)_inqNewGroupIdsMatchingToken:(id)arg1 ;
-(id)_inqNewGroupArraysFromGroupIdSets:(id)arg1 forQuery:(id)arg2 ;
-(void)_query:(id)arg1 recursiveAddToGroupResults:(id)arg2 aggregate:(id)arg3 atIndex:(unsigned)arg4 outOf:(unsigned)arg5 inGroupArrays:(id)arg6 ;
-(void)_inqRecycleGroups;
-(void*)_inqNewGroupsFromDeleteOperation:(char)arg1 matchingGroupIds:(const void*)arg2 count:(long)arg3 ;
-(unsigned long long)_inqAssetIdForUUID:(id)arg1 insertIfNeeded:(char)arg2 ;
-(unsigned long long)_inqGroupIdForCategory:(short)arg1 owningGroupId:(unsigned long long)arg2 contentString:(id)arg3 insertIfNeeded:(char)arg4 outCopyTokens:(id*)arg5 ;
-(void)_inqUpdatePrefixTreeWithGroupId:(unsigned long long)arg1 tokens:(id)arg2 ;
-(void)_inqUpdateGATableWithGroupId:(unsigned long long)arg1 assetId:(unsigned long long)arg2 ;
-(CFSetRef)_inqNewGroupIdsForAssetId:(unsigned long long)arg1 ;
-(void)_inqExecutePreparedStatement:(sqlite3_stmtRef)arg1 allowError:(int)arg2 withStatementBlock:(/*^block*/id)arg3 ;
-(id)_inqDequeueGroupObjectWithId:(unsigned long long)arg1 isCachedGroup:(char*)arg2 ;
-(CFArrayRef)_inqNewAssetIdsForGroupId:(unsigned long long)arg1 ;
-(void)addAsset:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeAssetWithUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)newQueryWithSearchText:(id)arg1 ;
-(void)group:(id)arg1 fetchOwningContentString:(char)arg2 assetUUIDs:(NSRange)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
