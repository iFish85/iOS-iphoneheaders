/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSHashTable, NSProtocolChecker, NSMutableDictionary, NSString;

@interface IDSDaemonListener : NSObject <IDSDaemonListenerProtocol> {

	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSHashTable* _handlers;
	NSProtocolChecker* _protocol;
	NSMutableDictionary* _topicToAccountDictionaries;
	NSMutableDictionary* _topicToEnabledAccounts;
	NSMutableDictionary* _accountToDevices;
	char _setupComplete;
	char _postedSetupComplete;
	char _hidingDisconnect;

}

@property (nonatomic,readonly) char isSetupComplete; 
@property (nonatomic,readonly) char hasPostedSetupComplete; 
@property (assign,setter=_setHidingDisconnect:,nonatomic) char _hidingDisconnect; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)accountAdded:(id)arg1 ;
-(void)accountEnabled:(id)arg1 onService:(id)arg2 ;
-(void)accountDisabled:(id)arg1 onService:(id)arg2 ;
-(void)account:(id)arg1 accountInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 dependentDevicesUpdated:(id)arg2 ;
-(void)account:(id)arg1 localDeviceAdded:(id)arg2 ;
-(void)account:(id)arg1 localDeviceRemoved:(id)arg2 ;
-(void)device:(id)arg1 nsuuidChanged:(id)arg2 ;
-(void)continuityDidUpdateState:(int)arg1 ;
-(void)continuityDidLosePeer:(id)arg1 ;
-(void)continuityDidStartAdvertisingOfType:(int)arg1 ;
-(void)continuityDidStopAdvertisingOfType:(int)arg1 ;
-(void)continuityDidFailToStartAdvertisingOfType:(int)arg1 withError:(id)arg2 ;
-(void)continuityDidStartScanningForType:(int)arg1 ;
-(void)continuityDidStopScanningForType:(int)arg1 ;
-(void)continuityDidFailToStartScanningForType:(int)arg1 withError:(id)arg2 ;
-(void)continuityDidDiscoverType:(int)arg1 withData:(id)arg2 fromPeer:(id)arg3 ;
-(void)continuityDidDiscoverPeerWithData:(id)arg1 fromPeer:(id)arg2 ;
-(void)continuityDidConnectToPeer:(id)arg1 withError:(id)arg2 ;
-(void)continuityDidDisconnectFromPeer:(id)arg1 withError:(id)arg2 ;
-(void)_callHandlersWithBlockOnIvarQueue:(/*^block*/id)arg1 ;
-(void)_callHandlersWithBlockOnIvarQueue:(/*^block*/id)arg1 cleanup:(/*^block*/id)arg2 ;
-(void)_removeAccountOnIvarQueue:(id)arg1 ;
-(void)_callHandlersWithBlock:(/*^block*/id)arg1 ;
-(void)_deferredSetupOnIvarQueue:(id)arg1 ;
-(void)_callHandlersAsyncWithBlock:(/*^block*/id)arg1 ;
-(id)accountDictionariesForService:(id)arg1 ;
-(id)enabledAccountsForService:(id)arg1 ;
-(id)dependentDevicesForAccount:(id)arg1 ;
-(void)setupComplete:(char)arg1 info:(id)arg2 ;
-(void)accountRemoved:(id)arg1 ;
-(char)_hidingDisconnect;
-(void)_noteDisconnected;
-(void)addHandler:(id)arg1 ;
-(void)removeHandler:(id)arg1 ;
-(void)_setHidingDisconnect:(char)arg1 ;
-(char)isSetupComplete;
-(char)hasPostedSetupComplete;
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2 ;
-(void)account:(id)arg1 aliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2 ;
-(void)account:(id)arg1 profileChanged:(id)arg2 ;
-(void)account:(id)arg1 loginChanged:(id)arg2 ;
-(void)account:(id)arg1 displayNameChanged:(id)arg2 ;
-(void)refreshRegistrationForAccount:(id)arg1 ;
-(void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2 ;
-(void)xpcObject:(id)arg1 objectContext:(id)arg2 ;
@end

