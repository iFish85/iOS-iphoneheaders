/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:47:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/ADPeerRemoteConnectionDelegate.h>

@protocol OS_dispatch_queue, ADSharedDataConnectionDelegate;
@class NSObject, ADSharedData, ADPeerRemoteConnection, NSString;

@interface ADSharedDataConnection : NSObject <ADPeerRemoteConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<ADSharedDataConnectionDelegate> _delegate;
	ADSharedData* _data;
	ADPeerRemoteConnection* _peerConnection;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)remoteConnection:(id)arg1 handlePBSubclass:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)peerBuildVersion;
-(id)peerType;
-(void)getSharedDataFromPeerUseCache:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestDataRemotely:(/*^block*/id)arg1 ;
-(void)_dataDidUpdate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

