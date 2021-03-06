/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/nanomapscd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanomapscd/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSMutableDictionary, NSHashTable, NSLock, NSObject, NSString;

@interface NMDeviceConnection : NSObject <IDSServiceDelegate> {

	IDSService* _idsService;
	NSMutableDictionary* _replyCallbackBlocks;
	NSMutableDictionary* _replyExpectingMessageMetadata;
	NSMutableDictionary* _messageObservers;
	NSHashTable* _observers;
	char _connected;
	NSLock* _replyCallbackBlocksLock;
	NSLock* _observersLock;
	NSObject*<OS_dispatch_queue> _queue;
	NSLock* _messageQueuesLock;
	NSMutableDictionary* _messageQueues;
	NSMutableDictionary* _inFlightMessageMetadata;
	NSLock* _inFlightMessageMetadataLock;
	NSString* _receiverProcessUUID;
	NSLock* _receiverProcessUUIDLock;

}

@property (getter=isConnected,nonatomic,readonly) char connected;              //@synthesize connected=_connected - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sendMessage:(id)arg1 options:(id)arg2 ;
-(void)_updateConnectionStatus;
-(id)_messageQueueForType:(int)arg1 ;
-(void)_sendMessage:(id)arg1 options:(id)arg2 force:(char)arg3 timeSpentEnqueued:(double)arg4 withReply:(/*^block*/id)arg5 ;
-(void)_sendReply:(id)arg1 forMessage:(id)arg2 options:(id)arg3 force:(char)arg4 timeSpentEnqueued:(double)arg5 ;
-(void)sendMessage:(id)arg1 options:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)_dequeueNextMessageIfNecessaryForType:(int)arg1 ;
-(void)_updateReceiverProcessUUID:(id)arg1 ;
-(void)setMessageQueue:(id)arg1 forType:(int)arg2 ;
-(void)sendReply:(id)arg1 forMessage:(id)arg2 options:(id)arg3 ;
-(id)addMessageObserverForType:(int)arg1 callback:(/*^block*/id)arg2 ;
-(void)removeMessageObserver:(id)arg1 forType:(int)arg2 ;
-(void)addConnectionObserver:(id)arg1 ;
-(void)removeConnectionObserver:(id)arg1 ;
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(char)isConnected;
@end

