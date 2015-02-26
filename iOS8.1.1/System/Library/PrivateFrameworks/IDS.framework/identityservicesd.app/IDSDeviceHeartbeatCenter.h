/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <identityservicesd/IMSystemMonitorListener.h>

@class NSDate, IMTimer, NSMutableDictionary;

@interface IDSDeviceHeartbeatCenter : NSObject <IMSystemMonitorListener> {

	NSDate* _getDependantHeartbeatDate;
	IMTimer* _getDependantHeartbeatTimer;
	NSMutableDictionary* _usersToHeartbeatDatesMap;
	BOOL _isSetup;

}
+(id)sharedInstance;
-(void)checkHeartbeat;
-(void)accountsChanged;
-(double)getDependantTimeInterval;
-(void)updateExpiry:(double)arg1 forUser:(id)arg2 ;
-(void)_startGetDependantHeartbeat;
-(void)__updateHeartbeat;
-(void)invalidateTimer;
-(void)_serverGetDependantHeartBeatTimerHit:(id)arg1 ;
-(void)_serverGetDependantHeartBeat:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)printInfo;
-(void)systemDidWake;
-(void)setup;
@end
