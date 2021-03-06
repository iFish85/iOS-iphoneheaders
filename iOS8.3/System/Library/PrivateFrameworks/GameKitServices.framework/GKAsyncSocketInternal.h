/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:50:38 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameKitServices/GameKitServices-Structs.h>
#import <GameKitServices/GKAsyncSocket.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableData, NSString;

@interface GKAsyncSocketInternal : GKAsyncSocket {

	NSObject*<OS_dispatch_source> _receiveSource;
	NSObject*<OS_dispatch_source> _sendSource;
	char _sendSourceSuspended;
	char _invalidated;
	int _connectionSocket;
	NSMutableData* _dataToSend;
	/*^block*/id _receiveDataHandler;
	/*^block*/id _connectedHandler;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSObject*<OS_dispatch_queue> _targetQueue;
	NSString* _socketName;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)setTargetQueue:(id)arg1 ;
-(void)setReceiveDataHandler:(/*^block*/id)arg1 ;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setConnectedHandler:(/*^block*/id)arg1 ;
-(void)setSocketName:(id)arg1 ;
-(void)tcpConnectSockAddr:(const sockaddr*)arg1 port:(unsigned short)arg2 ;
-(id)socketName;
-(void)tcpAttachSocketDescriptor:(int)arg1 ;
-(/*^block*/id)receiveDataHandler;
-(id)targetQueue;
-(/*^block*/id)connectedHandler;
-(void)receiveData;
-(void)sendData;
-(char)setupSourcesWithSocket:(int)arg1 receiveEventHandler:(/*^block*/id)arg2 sendEventHandler:(/*^block*/id)arg3 ;
-(void)closeConnectionNow;
@end

