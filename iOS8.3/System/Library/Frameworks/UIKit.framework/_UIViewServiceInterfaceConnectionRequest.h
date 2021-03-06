/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:02 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, _UIRemoteViewService, NSObject, NSError, _UIAsyncInvocation, BKSProcessAssertion, NSXPCConnection;

@interface _UIViewServiceInterfaceConnectionRequest : NSObject {

	/*^block*/id _connectionHandler;
	NSString* _serviceBundleIdentifier;
	_UIRemoteViewService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	char _isCancelled;
	NSError* _cancellationError;
	_UIAsyncInvocation* _cancellationInvocation;
	int _sessionRequestNotifyToken;
	BKSProcessAssertion* _serviceProcessAssertion;
	NSXPCConnection* _serviceSessionConnection;
	int __automatic_invalidation_retainCount;
	char __automatic_invalidation_invalidated;

}
+(id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
+(id)connectToViewService:(id)arg1 connectionHandler:(/*^block*/id)arg2 ;
-(id)retain;
-(void)dealloc;
-(unsigned)retainCount;
-(char)_tryRetain;
-(char)_isDeallocating;
-(int)__automatic_invalidation_logic;
-(void)_cancelUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)_cancelWithError:(id)arg1 ;
-(void)_launchService;
-(void)_createPlugInProcessAssertion;
-(void)_createProcessAssertion;
-(void)_createAndEstablishConnection;
-(void)_createProcessAssertionForPID:(int)arg1 aquiredHandler:(/*^block*/id)arg2 ;
-(void)_establishConnection;
-(void)_didConnectToService;
-(oneway void)release;
@end

