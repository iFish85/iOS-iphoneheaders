/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSSet, NSDictionary, NSArray, NSMutableDictionary, NSObject, NSMapTable;

@interface PHChange : NSObject {

	NSSet* _insertedObjectIDs;
	NSSet* _changedObjectIDs;
	NSSet* _deletedObjectIDs;
	NSDictionary* _changedAttributesByOID;
	NSDictionary* _changedRelationshipsByOID;
	NSArray* _changedObjectIDsArray;
	NSMutableDictionary* _changeDetailsForObjects;
	NSMutableDictionary* _collectionChangeDetailsForObjects;
	NSObject*<OS_dispatch_queue> _changeDetailIsolation;
	NSMapTable* _changeHandlingMap;
	char _unknownMergeEvent;

}
+(id)handlerQueue;
+(void)pl_simulateChangeWithAssetContainerList:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)insertedObjectIDs;
-(id)updatedObjectIDs;
-(id)deletedObjectIDs;
-(void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(char)arg2 ;
-(void)preloadChangeDetailsForFetchResults:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)changeDetailsForObject:(id)arg1 ;
-(id)changeDetailsForFetchResult:(id)arg1 ;
-(char)contentChangedForPHAssetOID:(id)arg1 ;
-(id)init;
-(id)description;
@end

