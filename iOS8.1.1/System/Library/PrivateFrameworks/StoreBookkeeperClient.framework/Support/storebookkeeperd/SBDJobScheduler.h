/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface SBDJobScheduler : NSObject {

	NSString* _domain;

}

@property (copy) NSString * domain;              //@synthesize domain=_domain - In the implementation block
+(void)initializeBackgroundTaskAgentWithJobRunner:(/*^block*/id)arg1 ;
+(id)jobSchedulerForDomain:(id)arg1 ;
+(void)addBackgroundJob:(id)arg1 nextJobTimeInterval:(double)arg2 ;
+(void)__initializeBackgroundTaskAgentWithJobRunner:(/*^block*/id)arg1 ;
-(void)schdeuleUpdateJobWithTimeInterval:(double)arg1 replaceExisting:(BOOL)arg2 ;
-(BOOL)hasScheduledJob:(double*)arg1 ;
-(void)removeScheduledJobs;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
@end
