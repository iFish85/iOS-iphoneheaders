/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iaptransportd/iaptransportd-Structs.h>
#import <iaptransportd/UDPSocketDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSNetService, UDPSocket, NSObject;

@interface IapPortWiFiUDPPort : NSObject <UDPSocketDelegate> {

	NSNetService* _service;
	CIapPortWiFiUDP* _wifiPortPtr;
	UDPSocket* _udpControlSocket;
	UDPSocket* _udpIAPSocket;
	NSObject<OS_dispatch_source>* _validateConnectionTimer;
	NSObject<OS_dispatch_queue>* _validateConnectionTimerQueue;
	NSObject<OS_dispatch_source>* _conectionRequestResponseTimer;
	bool _connectionRequestResponseReceived;

}
-(void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 ;
-(void)udpSocketHasDied:(id)arg1 ;
-(id)initWithService:(id)arg1 portPtr:(CIapPortWiFiUDP*)arg2 isExplicit:(BOOL)arg3 ;
-(void)send:(const char*)arg1 dataLen:(unsigned)arg2 ;
-(void)validateAccessoryConnection:(id)arg1 ;
-(void)dealloc;
@end

