/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <coreauthd/MechanismBase.h>
#import <coreauthd/LABiometricClient.h>

@protocol LARemoteUI;
@class NSNumber;

@interface MechanismTouchId : MechanismBase <LABiometricClient> {

	unsigned _failures;
	NSNumber* _failureLimit;
	id<LARemoteUI> _remoteUiDelegate;

}

@property (__weak) id<LARemoteUI> remoteUiDelegate;              //@synthesize remoteUiDelegate=_remoteUiDelegate - In the implementation block
-(char)isAvailableWithError:(id*)arg1 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_startBiometry;
-(id<LARemoteUI>)remoteUiDelegate;
-(void)setRemoteUiDelegate:(id<LARemoteUI>)arg1 ;
-(void)_stopBiometry;
-(void)biometryLost;
-(id)init;
-(void)willFinish;
-(void)matchResult:(id)arg1 ;
-(void)statusMessage:(int)arg1 ;
@end
