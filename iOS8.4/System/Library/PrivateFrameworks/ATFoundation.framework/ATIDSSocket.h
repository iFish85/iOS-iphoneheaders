/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATSocket.h>

@class IDSDeviceConnection, IDSDevice, ATIDSService;

@interface ATIDSSocket : ATSocket {

	IDSDeviceConnection* _deviceConnection;
	unsigned _wifiWriteBufferSize;
	unsigned _btWriteBufferSize;
	IDSDevice* _device;
	ATIDSService* _service;
	long long _priority;

}

@property (nonatomic,readonly) IDSDevice * device;                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) ATIDSService * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) long long priority;                  //@synthesize priority=_priority - In the implementation block
-(void)dealloc;
-(long long)priority;
-(void)closeDescriptor;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDevice:(id)arg1 service:(id)arg2 priority:(long long)arg3 ;
-(void)addTransportUpgradeException;
-(void)removeTransportUpgradeException;
-(BOOL)open;
-(ATIDSService *)service;
-(IDSDevice *)device;
@end

