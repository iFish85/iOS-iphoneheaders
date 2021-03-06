/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSUDownloadSessionDelegate, OS_dispatch_group, OS_dispatch_queue;
@class TSUDownloadManager, NSObject, NSMutableSet, NSMutableDictionary, TSUBasicProgress, NSError, NSString, TSUProgress;

@interface TSUDownloadSession : NSObject {

	bool _isCancelled;
	TSUDownloadManager* _manager;
	<TSUDownloadSessionDelegate>* _delegate;
	bool _didFinishInitialization;
	NSObject<OS_dispatch_group>* _initializationGroup;
	NSObject<OS_dispatch_queue>* _accessQueue;
	NSObject<OS_dispatch_queue>* _delegateQueue;
	NSMutableSet* _remainingTasks;
	NSMutableDictionary* _taskProgress;
	double _lastProgressValue;
	NSObject<OS_dispatch_group>* _completionGroup;
	TSUBasicProgress* _progress;
	NSError* _error;
	NSString* _sessionDescription;
	long long _totalBytesDownloaded;
	long long _totalBytesExpectedToBeDownloaded;

}

@property (nonatomic,readonly) bool isActive; 
@property (nonatomic,readonly) NSString * sessionDescription;                           //@synthesize sessionDescription=_sessionDescription - In the implementation block
@property (nonatomic,readonly) TSUProgress * progress;                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) long long totalBytesDownloaded;                          //@synthesize totalBytesDownloaded=_totalBytesDownloaded - In the implementation block
@property (nonatomic,readonly) long long totalBytesExpectedToBeDownloaded;              //@synthesize totalBytesExpectedToBeDownloaded=_totalBytesExpectedToBeDownloaded - In the implementation block
@property (nonatomic,readonly) bool isCancelled;                                        //@synthesize isCancelled=_isCancelled - In the implementation block
-(void)didFinishInitialization;
-(void)cancelRemainingTasksNotifyingDelegate:(bool)arg1 ;
-(long long)totalBytesExpectedToBeDownloaded;
-(void)headRequestForDownloadItem:(id)arg1 taskProgress:(id)arg2 ;
-(void)updateTaskProgress:(id)arg1 withTotalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3 ;
-(void)updateProgressAndNotifyDelegate;
-(long long)totalBytesDownloaded;
-(void)notifyCompletionWithQueue:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)waitUntilTimeout:(unsigned long long)arg1 ;
-(id)initWithManager:(id)arg1 downloadItems:(id)arg2 description:(id)arg3 willRequestDownload:(bool)arg4 delegate:(id)arg5 ;
-(bool)hasActiveTaskWithDescription:(id)arg1 ;
-(void)taskWithDescription:(id)arg1 didCompleteWithError:(id)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)taskWithDescription:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(id)sessionDescription;
-(void)dealloc;
-(id)init;
-(id)description;
-(bool)isActive;
-(bool)isCancelled;
-(void)cancel;
-(id)progress;
-(void).cxx_destruct;
@end

