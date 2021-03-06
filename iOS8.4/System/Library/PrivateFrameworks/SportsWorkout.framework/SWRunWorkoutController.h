/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/CLLocationManagerDelegate.h>

@class SWRunSensor, SWRemote, SWRunWorkout, NSString, SWRunWorkoutPreset, NSMutableArray, CLLocationManager, NSTimer, CLLocation, SWIntervalSnapshotObserver, SWFastestDistanceWindowObserver, SWDataControllerSnapshotObserver, SWUserInteractionSnapshotObserver, SWDataController, NSDictionary;

@interface SWRunWorkoutController : NSObject <CLLocationManagerDelegate> {

	SWRunSensor* _sensor;
	SWRemote* _remote;
	SWRunWorkout* _workout;
	NSString* _workoutState;
	BOOL _hasEverStarted;
	BOOL _hasFiredBeginningWorkoutPrompt;
	BOOL _sensorBatteryIsLowNotificationSent;
	SWRunWorkoutPreset* _preset;
	BOOL _isWalk;
	NSMutableArray* _workoutObservers;
	CLLocationManager* _locationManager;
	NSTimer* _workoutObserverTimer;
	unsigned long long _previousObservedElapsedTimeInSeconds;
	float _previousObservedPaceInSecondsPerMile;
	float _previousObservedDistanceInMiles;
	float _previousObservedCalories;
	CLLocation* _previousObservedLocation;
	SWIntervalSnapshotObserver* _mileSnapshotObserver;
	SWIntervalSnapshotObserver* _kmSnapshotObserver;
	SWIntervalSnapshotObserver* _tenSecondSnapshotObserver;
	SWFastestDistanceWindowObserver* _fastestMileObserver;
	SWFastestDistanceWindowObserver* _fastestKilometerObserver;
	SWDataControllerSnapshotObserver* _dataControllerSnapshotObserver;
	SWUserInteractionSnapshotObserver* _userInteractionSnapshotObserver;
	SWDataController* _dataController;

}

@property (nonatomic,readonly) SWRunSensor * sensor;                           //@synthesize sensor=_sensor - In the implementation block
@property (nonatomic,readonly) SWRemote * remote;                              //@synthesize remote=_remote - In the implementation block
@property (nonatomic,readonly) NSString * workoutState;                        //@synthesize workoutState=_workoutState - In the implementation block
@property (nonatomic,readonly) NSDictionary * workoutData; 
@property (nonatomic,readonly) BOOL hasEverStarted;                            //@synthesize hasEverStarted=_hasEverStarted - In the implementation block
@property (nonatomic,readonly) SWDataController * dataController;              //@synthesize dataController=_dataController - In the implementation block
@property (nonatomic,retain) SWRunWorkoutPreset * preset; 
@property (assign,nonatomic) BOOL isCalibration; 
@property (nonatomic,readonly) BOOL isCalibratedForWalk; 
@property (nonatomic,readonly) BOOL isCalibratedForRun; 
@property (nonatomic,readonly) BOOL canBeUsedForRunCalibration; 
@property (nonatomic,readonly) BOOL canBeUsedForWalkCalibration; 
@property (nonatomic,readonly) float minCalibrationDistanceMiles; 
@property (nonatomic,readonly) float maxCalibrationDistanceMiles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)__takeWorkoutInProgressFileLock;
+(void)__releaseWorkoutInProgressFileLock;
+(void)enableSDA;
+(void)disableSDA;
+(float)kmToMiles:(float)arg1 ;
+(id)distanceDisplayUnitsForPreferences;
+(id)__systemVersion;
+(id)__uniqueIdentifier;
+(BOOL)isWorkoutInProgressOnSystem;
+(id)defaultController;
+(void)resetDefaultController;
+(BOOL)shouldUseKilometersForPaceWithWorkoutSummary:(id)arg1 ;
+(BOOL)shouldUseKilometersForDistanceWithWorkoutSummary:(id)arg1 ;
+(float)milesToKm:(float)arg1 ;
+(float)secondsPerMileToSecondsPerKm:(float)arg1 ;
+(float)secondsPerKmToSecondsPerMile:(float)arg1 ;
+(float)lbsToKgs:(float)arg1 ;
+(float)kgsToLbs:(float)arg1 ;
+(id)goalTypeForString:(id)arg1 ;
+(id)distanceUnitForString:(id)arg1 ;
-(void)_postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(SWRemote *)remote;
-(BOOL)canBeUsedForWalkCalibration;
-(BOOL)canBeUsedForRunCalibration;
-(void)resetCalibration;
-(NSDictionary *)workoutData;
-(void)activateWorkout;
-(void)pauseWorkout;
-(SWRunSensor *)sensor;
-(BOOL)isCalibration;
-(void)setIsCalibration:(BOOL)arg1 ;
-(id)initWithSensor:(id)arg1 remote:(id)arg2 ;
-(BOOL)_shouldRecordLocation;
-(void)registerWorkoutObserver:(id)arg1 ;
-(void)refreshSettings;
-(void)togglePauseResumeWorkoutFromHeadset;
-(void)playOnDemandPrompt;
-(void)endWorkout;
-(void)_postNotificationName:(id)arg1 ;
-(void)_updateWorkoutObserversForOldState:(id)arg1 newState:(id)arg2 ;
-(void)_setWorkoutState:(id)arg1 ;
-(void)_beginSearchingForSensorAfterLink;
-(void)_remoteCommandIssued:(id)arg1 ;
-(void)_linkStateChangedNotification:(id)arg1 ;
-(void)_searchStateChangedNotification:(id)arg1 ;
-(void)_updateWorkoutObserversForUserEvent:(id)arg1 ;
-(void)_startWorkoutObserverTimer;
-(void)_cancelWorkoutObserverTimer;
-(void)_updateWorkoutObserversForTimer:(id)arg1 ;
-(void)unlinkRemote;
-(void)prepareToActivateWorkout;
-(void)setPreset:(SWRunWorkoutPreset *)arg1 ;
-(SWRunWorkoutPreset *)preset;
-(void)stopVoicePrompts;
-(BOOL)isCalibratedForWalk;
-(BOOL)isCalibratedForRun;
-(float)minCalibrationDistanceMiles;
-(float)maxCalibrationDistanceMiles;
-(BOOL)saveCalibrationData;
-(BOOL)saveCalibrationDataWithAdjustedDistanceInMiles:(float)arg1 ;
-(void)unregisterWorkoutObserver:(id)arg1 ;
-(NSString *)workoutState;
-(BOOL)hasEverStarted;
-(SWDataController *)dataController;
@end

