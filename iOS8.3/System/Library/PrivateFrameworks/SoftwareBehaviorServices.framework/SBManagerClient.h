/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:33:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/SoftwareBehaviorServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareBehaviorServices/SoftwareBehaviorServices-Structs.h>
#import <SoftwareBehaviorServices/SBManagerClientInterface.h>

@protocol SBManagerClientDelegate;
@class NSXPCConnection;

@interface SBManagerClient : NSObject <SBManagerClientInterface> {

	NSXPCConnection* _serverConnection;
	id<SBManagerClientDelegate> _delegate;
	char _connected;
	char _serverIsExiting;
	int _clientType;
	dispatch_queue_sRef _queue;

}

@property (assign,nonatomic) id<SBManagerClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int clientType;                                    //@synthesize clientType=_clientType - In the implementation block
@property (assign) dispatch_queue_sRef queue;                                   //@synthesize queue=_queue - In the implementation block
-(id)_remoteInterface;
-(void)dealloc;
-(void)setDelegate:(id<SBManagerClientDelegate>)arg1 ;
-(id)init;
-(id<SBManagerClientDelegate>)delegate;
-(void)invalidate;
-(dispatch_queue_sRef)queue;
-(void)setQueue:(dispatch_queue_sRef)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setSoftwareBehaviorID:(id)arg1 withBundle:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)isSoftwareBehaviorBundleSupported:(/*^block*/id)arg1 ;
-(void)copySoftwareBehaviorValue:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)checkForSoftwareBehaviorBundleUpdate:(/*^block*/id)arg1 ;
-(id)initWithDelegate:(id)arg1 clientType:(int)arg2 ;
-(void)setClientType:(int)arg1 ;
-(void)connectToServerIfNecessary;
-(void)_invalidateConnection;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 connectIfNecessary:(char)arg2 ;
-(void)_setClientType;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)noteConnectionDropped;
-(void)noteServerExiting;
-(int)clientType;
@end

