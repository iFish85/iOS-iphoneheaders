/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, NSMutableArray, NSLock, NSError, NSString;

@interface GKUpdateGroup : NSObject {

	NSObject*<OS_dispatch_queue> _targetQueue;
	NSMutableArray* _notifiers;
	NSObject*<OS_dispatch_group> _dispatchGroup;
	NSLock* _lock;
	NSError* _error;
	NSString* _name;

}

@property (retain) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) int updateCount; 
@property (retain) NSLock * lock;                                                     //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> targetQueue;                //@synthesize targetQueue=_targetQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * notifiers;                              //@synthesize notifiers=_notifiers - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
@property (nonatomic,retain) NSString * name;                                         //@synthesize name=_name - In the implementation block
+(id)updateGroup;
+(id)updateGroupWithName:(id)arg1 ;
+(id)updateGroupForTargetQueue:(id)arg1 ;
+(id)updateGroupWithName:(id)arg1 taregetQueue:(id)arg2 ;
-(int)updateCount;
-(void)dealloc;
-(NSLock *)lock;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)perform:(/*^block*/id)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(void)applyUpdates;
-(void)join:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 targetQueue:(id)arg2 ;
-(NSMutableArray *)notifiers;
-(void)performOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)cancelUpdates;
-(void)setNotifiers:(NSMutableArray *)arg1 ;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)wait;
-(NSError *)error;
@end
