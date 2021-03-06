/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCTransferQueueDelegate.h>
#import <CloudDocsDaemon/BRCLifeCycle.h>

@protocol OS_dispatch_queue;
@class BRCTransferQueue, BRCLocalContainer, NSMutableDictionary, NSObject, NSString;

@interface BRCVersionDownloader : NSObject <BRCTransferQueueDelegate, BRCLifeCycle> {

	BRCTransferQueue* _transferQueue;
	BRCLocalContainer* _container;
	NSMutableDictionary* _multiplexerForDesiredKeys;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)suspend;
-(void)resume;
-(void)close;
-(BOOL)isDownloadingItemID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)dumpToContext:(id)arg1 ;
-(void)cancelDownloadForItemID:(id)arg1 ;
-(void)signalNeedsDownloads;
-(void)_downloadCompletedForItemID:(id)arg1 etag:(id)arg2 downloadedObject:(id)arg3 error:(id)arg4 ;
-(BOOL)_scheduleDownloadForItem:(id)arg1 ;
-(void)_scheduleAllDownloads;
-(void)transferQueueDidRequestOperations:(id)arg1 ;
-(id)initWithLocalContainer:(id)arg1 ;
-(id)multiplexerForDesiredKeys:(id)arg1 ;
-(BOOL)isDownloadingAddition:(id)arg1 ;
-(id)cancelAllDownloads;
@end

