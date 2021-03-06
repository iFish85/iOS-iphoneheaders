/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol DATask;
@class DAAccount, NSMutableArray, NSMutableSet, NSTimer, NSArray;

@interface DATaskManager : NSObject {

	DAAccount* _account;
	NSMutableArray* _queuedExclusiveTasks;
	<DATask>* _activeExclusiveTask;
	NSMutableSet* _independentTasks;
	NSMutableSet* _heldIndependentTasks;
	NSMutableSet* _modalHeldIndependentTasks;
	NSMutableArray* _queuedTasks;
	<DATask>* _activeQueuedTask;
	<DATask>* _modalHeldActiveQueuedTask;
	NSMutableArray* _queuedModalTasks;
	<DATask>* _activeModalTask;
	int _state;
	NSTimer* _managerIdleTimer;
	NSTimer* _userInitiatedSyncTimer;
	NSTimer* _powerLogIdleTimer;
	BOOL _didLogSyncStart;

}

@property (assign) DAAccount * account;                        //@synthesize account=_account - In the implementation block
@property (readonly) <DATask> * activeModalTask;               //@synthesize activeModalTask=_activeModalTask - In the implementation block
@property (readonly) <DATask> * activeQueuedTask;              //@synthesize activeQueuedTask=_activeQueuedTask - In the implementation block
@property (readonly) NSArray * queuedTasks;                    //@synthesize queuedTasks=_queuedTasks - In the implementation block
@property (readonly) NSArray * allTasks; 
-(id)user;
-(id)password;
-(void)dealloc;
-(id)init;
-(id)server;
-(id)_getQueuedExclusiveTasks;
-(void)_schedulePerformTask:(id)arg1 ;
-(void)_makeStateTransition;
-(void)_requestCancelTasksWithReason:(int)arg1 ;
-(id)_getIndependentTasks;
-(id)_getHeldIndependentTasks;
-(id)_getQueuedTasks;
-(void)_cancelTasksWithReason:(int)arg1 ;
-(id)_powerLogInfoDictionary;
-(BOOL)_taskForcesNetworking:(id)arg1 ;
-(BOOL)_taskInQueueForcesNetworkConnection:(id)arg1 ;
-(void)_releasePowerAssertionForTask:(id)arg1 ;
-(void)_performTask:(id)arg1 ;
-(void)_startModal:(id)arg1 ;
-(void)_reactivateHeldTasks;
-(void)_scheduleStartModal:(id)arg1 ;
-(BOOL)_hasTasksForcingNetworkConnection;
-(void)_useOpportunisticSocketsAgain;
-(void)_clearUserInitiatedSyncTimer;
-(void)_logSyncEnd;
-(id)_getModalHeldIndependentTasks;
-(id)_getQueuedModalTasks;
-(void)_retainPowerAssertionForTask:(id)arg1 ;
-(void)_scheduleSelector:(SEL)arg1 withArgument:(id)arg2 ;
-(BOOL)_useFakeDescriptions;
-(id)activeQueuedTask;
-(id)queuedTasks;
-(BOOL)useSSL;
-(void)submitExclusiveTask:(id)arg1 toFrontOfQueue:(BOOL)arg2 ;
-(id)stateString;
-(void)submitQueuedTask:(id)arg1 ;
-(void)cancelTask:(id)arg1 ;
-(void)submitIndependentTask:(id)arg1 ;
-(id)identityPersist;
-(id)accountPersistentUUID;
-(void)submitExclusiveTask:(id)arg1 ;
-(void)cancelAllTasks;
-(void)taskRequestModal:(id)arg1 ;
-(void)taskEndModal:(id)arg1 ;
-(void)taskDidFinish:(id)arg1 ;
-(void)_populateVersionDescriptions;
-(id)activeModalTask;
-(void)cancelTask:(id)arg1 withUnderlyingError:(id)arg2 ;
-(id)allTasks;
-(BOOL)taskIsModal:(id)arg1 ;
-(id)_version;
-(void)taskManagerDidAddTask:(id)arg1 ;
-(void)taskManagerWillRemoveTask:(id)arg1 ;
-(BOOL)_hasTasksIndicatingARunningSync;
-(id)account;
-(id)accountID;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(id)arg1 ;
-(void)shutdown;
-(int)port;
-(id)userAgent;
-(id)deviceType;
@end

