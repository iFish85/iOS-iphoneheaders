/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WLOTcpServerDelegate, OS_dispatch_queue;
@class NSObject;

@interface WLOTcpServer : NSObject {

	int _port;
	int _sockd;
	id<WLOTcpServerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _listenQueue;

}

@property (assign,nonatomic,__weak) id<WLOTcpServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> listenQueue;              //@synthesize listenQueue=_listenQueue - In the implementation block
@property (assign,nonatomic) int port;                                              //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) int sockd;                                             //@synthesize sockd=_sockd - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<WLOTcpServerDelegate>)arg1 ;
-(id<WLOTcpServerDelegate>)delegate;
-(int)port;
-(void)setPort:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)listenQueue;
-(void)_listen:(int)arg1 ;
-(int)sockd;
-(void)setSockd:(int)arg1 ;
-(id)initWithPort:(int)arg1 ;
-(void)listen;
-(void)setListenQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

