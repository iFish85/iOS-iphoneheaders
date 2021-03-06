/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUAudioController.h>

@class NSNumber, NSArray;

@interface TUTelephonyAudioController : TUAudioController {

	dispatch_queue_sRef _mutedQueue;
	dispatch_queue_sRef _ttyQueue;
	dispatch_queue_sRef _pickableRoutesQueue;
	NSNumber* _isMutedCached;
	NSNumber* _isTTYCached;
	NSArray* _pickableRoutesForTTY;
	NSArray* _pickableRoutesForNonTTY;
	bool _isRequestingMuted;
	bool _isRequestingTTY;
	bool _isRequestingPickableRoutesForTTY;
	bool _isRequestingPickableRoutesForNonTTY;
	unsigned long long _lastMutedRequestScheduleTime;
	unsigned long long _lastTTYRequestScheduleTime;
	unsigned long long _lastTTYPickableRoutesScheduleTime;
	unsigned long long _lastNonTTYPickableRoutesScheduleTime;

}
+(id)sharedSystemController;
+(id)sharedTelephonyAudioController;
-(bool)setMuted:(bool)arg1 ;
-(void)_pickableRoutesDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isMuted;
-(void)_handleUplinkMuteDidChangeNotification:(id)arg1 ;
-(void)_handleCallStatusChanged;
-(bool)isTTY;
-(id)pickableRoutes;
-(id)_pickableRoutesForTTYWithForceNewRequest:(bool)arg1 ;
-(id)_pickableRoutesForNonTTYWithForceNewRequest:(bool)arg1 ;
-(id)pickableRoutesForTTY;
-(id)pickableRoutesForNonTTY;
@end

