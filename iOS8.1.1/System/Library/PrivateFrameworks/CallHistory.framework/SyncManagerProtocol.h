/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SyncManagerProtocol <NSObject>
@required
-(void)insert:(id)arg1;
-(id)fetchObjectsWithLimits:(id)arg1;
-(void)insertWithoutTransaction:(id)arg1;
-(void)updateAllObjects:(id)arg1;
-(void)updateObjects:(id)arg1;
-(void)deleteObjectsWithUniqueIds:(id)arg1;
-(void)deleteObjectsWithLimits:(id)arg1;
-(double)timerIncoming;
-(double)timerOutgoing;
-(double)timerLifetime;
-(void)resetTimers;
-(void)insertRecordsWithoutTransactions:(id)arg1;
-(id)fetchObjectWithUniqueId:(id)arg1;
-(void)deleteObjectWithUniqueId:(id)arg1;
-(void)deleteAllObjects;
-(id)fetchAllObjects;

@end
