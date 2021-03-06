/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, SFWirelessSettingsControllerDelegate;
#import <Sharing/Sharing-Structs.h>
@class NSObject;

@interface SFWirelessSettingsController : NSObject {

	bool _wifiEnabled;
	bool _bluetoothEnabled;
	bool _deviceSupportsWAPI;
	bool _firstCallbackCompleted;
	SFOperationRef _information;
	NSObject<OS_dispatch_semaphore>* _firstCallBackSemaphore;
	<SFWirelessSettingsControllerDelegate>* _delegate;

}

@property (__weak) <SFWirelessSettingsControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isBluetoothEnabled) bool bluetoothEnabled; 
@property (getter=isWifiEnabled) bool wifiEnabled; 
@property (readonly) bool deviceSupportsWAPI; 
-(bool)isWifiEnabled;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(void)setWifiEnabled:(bool)arg1 ;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(void)setBluetoothEnabled:(bool)arg1 ;
-(bool)isBluetoothEnabled;
-(void)repairAppleID;
-(bool)deviceSupportsWAPI;
@end

