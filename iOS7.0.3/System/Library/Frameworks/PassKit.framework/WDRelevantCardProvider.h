/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/CLLocationManagerDelegate.h>

@class PDDatabaseManager, CLLocationManager, CLLocation, NSDate, NSTimer, NSArray, NSMutableSet, SBSCardItemsController;

@interface WDRelevantCardProvider : NSObject <CLLocationManagerDelegate> {

	PDDatabaseManager* _databaseManager;
	CLLocationManager* _proximityManager;
	CLLocation* _lastLocation;
	CLLocation* _roughLocation;
	int _locationSearchState;
	NSDate* _locationSearchStartDate;
	NSTimer* _locationSearchTimer;
	NSArray* _lastBeacons;
	int _beaconSearchState;
	NSTimer* _beaconSearchTimer;
	NSMutableSet* _dateRelevantCards;
	NSMutableSet* _proxPendingCards;
	SBSCardItemsController* _cardItemsController;
	int _springBoardRegistrationStatus;

}
-(id)initWithDatabaseManager:(id)arg1 ;
-(void)startObservingEvents;
-(void)recomputeRelevantCards;
-(void)_clearLocationSearchTimer;
-(void)_clearBeaconSearchTimer;
-(void)_registerOrUnregisterForSpringBoardEvents;
-(void)_startCardSearchUpdatingWithCachedProximity:(BOOL)arg1 refreshingProximity:(BOOL)arg2 ;
-(void)_unscheduleEagerRecalculation;
-(void)_clearPersistedProximityInfo;
-(void)_addDateRelevantAndLocationPendingCardsForStyle:(int)arg1 locationAvailable:(BOOL)arg2 ;
-(void)_loadPersistedLocationInfoIfNecessary;
-(void)_updateAndSendRelevantCards;
-(void)_startLocationSearchIfNecessary;
-(void)_startBeaconSearchIfNecessary;
-(BOOL)_isDoingLocationSearch;
-(BOOL)_proxPendingPassExistsWithLocation;
-(BOOL)_handleNewLocation:(id)arg1 forceAcceptance:(BOOL)arg2 from:(id)arg3 ;
-(void)_beginLocationSearchTimer;
-(void)_performProximitySearchAfterDelayingForAuthorization:(/*^block*/ id)arg1 ;
-(BOOL)_locationIsNewEnoughAndHasGoodAccuracy:(id)arg1 ;
-(void)_stopLocationSearch;
-(void)_locationSearchTimerFired:(id)arg1 ;
-(BOOL)_isDoingBeaconSearch;
-(BOOL)_proxPendingPassExistsWithBeacon;
-(void)_beginBeaconSearchTimer;
-(void)_stopBeaconSearch;
-(void)_beaconSearchTimerFired:(id)arg1 ;
-(void)_handleNewBeacons:(id)arg1 ;
-(id)_groupForPass:(id)arg1 inGroups:(id)arg2 ;
-(void)_insertPass:(id)arg1 intoGroups:(id)arg2 forDate:(id)arg3 ;
-(BOOL)_findMatchingLocation:(id*)arg1 beacon:(id*)arg2 forPass:(id)arg3 passStyleRadius:(double)arg4 usingNearbyLocations:(id)arg5 ;
-(void)_insertPass:(id)arg1 intoGroups:(id)arg2 forLocation:(id)arg3 ;
-(void)_insertPass:(id)arg1 intoGroups:(id)arg2 forBeacon:(id)arg3 ;
-(void)_sendGroups:(id)arg1 ;
-(BOOL)_shouldScheduleEagerRecalculation;
-(void)_scheduleEagerRecalculationWithPasses:(id)arg1 fenceLocation:(BOOL)arg2 minRadius:(double)arg3 beaconUUIDs:(id)arg4 ;
-(void)_handleSignifigantTimeChangedEvent;
-(void)_handleDimmedEvent:(BOOL)arg1 ;
-(void)_relevantCardExpirationTimerFired;
-(void)_tearDownExitFenceTimerFired;
-(void)dealloc;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3 ;
-(void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

