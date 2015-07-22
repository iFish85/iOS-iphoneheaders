/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SyncProtocol <NSObject>
@required
-(void)sync:(/*^block*/id)arg1;
-(void)moveCallsFromTempDatabase;
-(void)appendTransactions:(id)arg1;
-(void)clearSyncToken:(/*^block*/id)arg1;
-(void)migrateCallDB:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)bootUp:(/*^block*/id)arg1;
-(void)hello:(id)arg1;

@end
