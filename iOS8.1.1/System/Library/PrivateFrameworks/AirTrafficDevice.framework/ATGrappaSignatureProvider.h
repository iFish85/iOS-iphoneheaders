/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATSignatureProvider.h>

@class ATGrappaSession, ATDeviceSettings;

@interface ATGrappaSignatureProvider : ATSignatureProvider {

	ATGrappaSession* _grappaSession;
	ATDeviceSettings* _settings;

}
-(id)initWithGrappaSession:(id)arg1 ;
-(id)createSignatureForData:(id)arg1 returnedSignature:(id*)arg2 ;
-(id)verifySignatureForData:(id)arg1 signature:(id)arg2 ;
@end

