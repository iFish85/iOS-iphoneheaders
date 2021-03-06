/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:36:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTrafficDevice/ATEnvironmentMonitorObserver.h>
#import <AirTrafficDevice/ATSessionObserver.h>
#import <AirTrafficDevice/ATRestoreAssetLinkDelegate.h>

@protocol OS_dispatch_queue;
@class ATRestoreAssetLink, ATStoreAssetLink, ATAssetManager, NSObject, MSVXPCTransaction, ATSession, NSString;

@interface ATRestoreManager : NSObject <ATEnvironmentMonitorObserver, ATSessionObserver, ATRestoreAssetLinkDelegate> {

	ATRestoreAssetLink* _restoreLink;
	ATRestoreAssetLink* _applicationDataRestoreLink;
	ATStoreAssetLink* _storeLink;
	ATAssetManager* _assetManager;
	NSObject*<OS_dispatch_queue> _queue;
	char _cancelled;
	MSVXPCTransaction* _xpcTransaction;
	ATSession* _restoreSession;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)_start;
-(void)resume;
-(void)sessionDidFinish:(id)arg1 ;
-(void)restoreAssetLinkDidCancelRestore:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(char)restoreSessionActive;
-(id)_dataClasses;
@end

