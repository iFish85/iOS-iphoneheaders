/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MessageBodyLoader.h>

@protocol MessageBodyLoader
@required
-(oneway void)beginAddingNewMessagesForStore:(id)arg1;
-(oneway void)disableNetworkFetching;
-(oneway void)enableNetworkFetching;
-(oneway void)addSingleMessageClient:(id)arg1;
-(oneway void)removeSingleMessageClient:(id)arg1;
-(oneway void)addMessages:(id)arg1;
-(oneway void)stopAddingNewMessagesForStore:(id)arg1;
-(oneway void)userViewingMessages:(id)arg1;
-(oneway void)userStoppedViewingMessages;
-(oneway void)resume;
-(oneway void)pause;
-(oneway void)addMessage:(id)arg1;
@end


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableArray, NSMutableSet, NSCountedSet, MFActivityMonitor, NSObject;

@interface MessageBodyLoader : NSObject <MessageBodyLoader> {

	NSMutableArray* _clients;
	NSMutableArray* _newMessages;
	NSMutableSet* _newMessageSet;
	NSCountedSet* _newMessageMailboxQuota;
	NSMutableArray* _userViewingMessages;
	MFActivityMonitor* _currentMonitor;
	NSCountedSet* _watchedUids;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSObject<OS_dispatch_semaphore>* _waitReply;
	int _noNetworkFetching;
	int _isPaused;
	unsigned _isRunning : 1;
	unsigned _isWaitingForTask : 1;
	unsigned _shouldProcessQueues : 1;
	int _powerAssertionLock;
	unsigned _holdingPowerAssertion : 1;

}

@property (readonly) BOOL isPaused; 
+(void)_setSharedLoaderForTesting:(id)arg1 ;
+(id)copySummaryForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
+(void)applicationWillSuspend;
+(void)startup;
+(id)sharedLoader;
+(void)applicationWillResume;
-(void)_dumpDiagnosticInformation:(id)arg1 ;
-(oneway void)beginAddingNewMessagesForStore:(id)arg1 ;
-(void)_messageFlagsChanged:(id)arg1 ;
-(void)_messagesAdded:(id)arg1 ;
-(oneway void)disableNetworkFetching;
-(oneway void)enableNetworkFetching;
-(oneway void)addSingleMessageClient:(id)arg1 ;
-(oneway void)removeSingleMessageClient:(id)arg1 ;
-(void)_messagesWillBeCompacted:(id)arg1 ;
-(void)_setIsRunning:(BOOL)arg1 ;
-(BOOL)networkFetchingAllowed;
-(void)_finishedCullingMessageList:(id)arg1 ;
-(void)_getNextClientOrMessage;
-(void)_getNextClientOrMessageFinished:(id)arg1 ;
-(void)_tryProcessingQueues;
-(void)_clientLoadFinished:(id)arg1 ;
-(void)_messageLoadFinished:(id)arg1 ;
-(oneway void)addMessages_nts:(id)arg1 ;
-(void)_removeNewMessages_nts:(id)arg1 ;
-(void)_nts_insertClient:(id)arg1 ;
-(void)_nts_removeClient:(id)arg1 ;
-(oneway void)addMessages:(id)arg1 ;
-(void)_blockingMessage;
-(oneway void)stopAddingNewMessagesForStore:(id)arg1 ;
-(oneway void)userViewingMessages:(id)arg1 ;
-(oneway void)userStoppedViewingMessages;
-(void)_removeNewMessages:(id)arg1 ;
-(void)_removeViewingMessages:(id)arg1 ;
-(void)_waitUntilNotRunning;
-(BOOL)isPaused;
-(void)dealloc;
-(id)init;
-(void)applicationWillSuspend;
-(void)_start;
-(oneway void)resume;
-(BOOL)_isRunning;
-(oneway void)pause;
-(oneway void)addMessage:(id)arg1 ;
-(void)retainPowerAssertion;
-(void)releasePowerAssertion;
-(oneway void)startup;
-(void)applicationWillResume;
@end

