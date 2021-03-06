/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/NSXPCListenerDelegate.h>
#import <ATFoundation/ATSessionObserver.h>

@class NSXPCListener, NSMutableArray, ATSession, NSString;

@interface ATSessionProxyListener : NSObject <NSXPCListenerDelegate, ATSessionObserver> {

	NSXPCListener* _listener;
	NSMutableArray* _connections;
	ATSession* _session;

}

@property (nonatomic,readonly) ATSession * session;                 //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 ;
-(void)start;
-(void)stop;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)sessionDidFinish:(id)arg1 ;
-(ATSession *)session;
@end

