/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>
#import <CloudDocsDaemon/BRCModule.h>

@protocol OS_dispatch_group;
@class BRCCountedSet, NSMutableSet, NSObject, NSString;

@interface BRCApplyScheduler : BRCFSSchedulerBase <BRCModule> {

	BRCCountedSet* _coordinatedWriters;
	NSMutableSet* _watchingFaults;
	BOOL _applyCountReachedMax;
	NSObject*<OS_dispatch_group> _writerGroup;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> writerGroup;              //@synthesize writerGroup=_writerGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isCancelled; 
-(void)_close;
-(id)initWithAccountSession:(id)arg1 ;
-(void)_schedule;
-(void)_describe:(id)arg1 zone:(id)arg2 now:(long long)arg3 context:(id)arg4 ;
-(void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 ;
-(void)deleteExpiredThrottles;
-(BOOL)_scheduleOne:(id)arg1 ;
-(void)_handleWatchingFaults;
-(void)_retriedThrottleID:(long long)arg1 zone:(id)arg2 kind:(unsigned)arg3 ;
-(unsigned long long)_writeCoordinationCount;
-(void)rescheduleSuspendedThrottlesForZone:(id)arg1 state:(int)arg2 ;
-(void)updateThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 kind:(unsigned)arg4 ;
-(void)createThrottleID:(long long)arg1 zone:(id)arg2 itemID:(id)arg3 state:(int)arg4 kind:(unsigned)arg5 ;
-(void)didCreateMissingParentID:(id)arg1 zone:(id)arg2 ;
-(void)didReparentOrKillItemID:(id)arg1 parentItemID:(id)arg2 zone:(id)arg3 ;
-(void)repopulateThrottlesForZone:(id)arg1 ;
-(void)monitorFaultingForContainer:(id)arg1 ;
-(BOOL)startWriteCoordinationInZone:(id)arg1 ;
-(void)endWriteCoordinationInZone:(id)arg1 ;
-(void)didSyncDownZone:(id)arg1 requestID:(unsigned long long)arg2 upToRank:(long long)arg3 caughtUpWithServer:(BOOL)arg4 ;
-(NSObject*<OS_dispatch_group>)writerGroup;
@end

