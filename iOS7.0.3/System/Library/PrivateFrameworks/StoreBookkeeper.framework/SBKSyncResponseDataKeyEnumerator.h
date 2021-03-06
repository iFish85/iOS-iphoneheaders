/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class SBKSyncResponseData, SBKSyncTransaction, NSEnumerator;

@interface SBKSyncResponseDataKeyEnumerator : NSObject {

	BOOL _resolvedConflictsNeedSyncToServer;
	SBKSyncResponseData* _responseData;
	SBKSyncTransaction* _transaction;
	/*^block*/ id _completionBlock;
	NSEnumerator* _updatedKeysEnumerator;
	NSEnumerator* _conflictedKeysEnumerator;
	NSEnumerator* _deletedKeysEnumerator;

}

@property (retain) SBKSyncResponseData * responseData;                   //@synthesize responseData=_responseData - In the implementation block
@property (retain) SBKSyncTransaction * transaction;                     //@synthesize transaction=_transaction - In the implementation block
@property (copy) id completionBlock;                                     //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) BOOL resolvedConflictsNeedSyncToServer;               //@synthesize resolvedConflictsNeedSyncToServer=_resolvedConflictsNeedSyncToServer - In the implementation block
@property (retain) NSEnumerator * updatedKeysEnumerator;                 //@synthesize updatedKeysEnumerator=_updatedKeysEnumerator - In the implementation block
@property (retain) NSEnumerator * conflictedKeysEnumerator;              //@synthesize conflictedKeysEnumerator=_conflictedKeysEnumerator - In the implementation block
@property (retain) NSEnumerator * deletedKeysEnumerator;                 //@synthesize deletedKeysEnumerator=_deletedKeysEnumerator - In the implementation block
-(/*^block*/ id)completionBlock;
-(id)responseData;
-(void)setCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setResponseData:(id)arg1 ;
-(void)setTransaction:(id)arg1 ;
-(id)transaction;
-(id)initWithResponseData:(id)arg1 ;
-(void)enumerateKeysInResponseForTransaction:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_processNextKey;
-(void)_processUpdatedKey:(id)arg1 isConflict:(BOOL)arg2 isDirty:(BOOL*)arg3 ;
-(void)_processDeletedKey:(id)arg1 isDirty:(BOOL*)arg2 ;
-(BOOL)resolvedConflictsNeedSyncToServer;
-(void)setResolvedConflictsNeedSyncToServer:(BOOL)arg1 ;
-(id)updatedKeysEnumerator;
-(void)setUpdatedKeysEnumerator:(id)arg1 ;
-(id)conflictedKeysEnumerator;
-(void)setConflictedKeysEnumerator:(id)arg1 ;
-(id)deletedKeysEnumerator;
-(void)setDeletedKeysEnumerator:(id)arg1 ;
-(void).cxx_destruct;
@end

