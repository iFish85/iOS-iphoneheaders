/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSLock;

@interface BSXPCConnectionListenerManager : NSObject {

	NSObject*<OS_dispatch_queue> _listeningQueue;
	NSMutableDictionary* _services;
	NSLock* _servicesLock;
	NSObject*<OS_dispatch_queue> _defaultHandlerQueue;

}
+(id)sharedInstance;
+(id)defaultHandlerQueue;
+(void)stopListeningForService:(id)arg1 ;
+(void)listenForService:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(id)_defaultHandlerQueue;
-(void)_addService:(id)arg1 withHandler:(id)arg2 onQueue:(id)arg3 ;
-(void)_removeService:(id)arg1 ;
@end

