/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:34 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HKSample.h>

@class NSArray, HKQuantity;

@interface HKWorkout : HKSample {

	unsigned _workoutActivityType;
	double _duration;
	NSArray* _workoutEvents;
	HKQuantity* _totalEnergyBurned;
	HKQuantity* _totalDistance;
	unsigned _goalType;
	HKQuantity* _goal;

}

@property (readonly) unsigned workoutActivityType; 
@property (copy,readonly) NSArray * workoutEvents;                                                 //@synthesize workoutEvents=_workoutEvents - In the implementation block
@property (readonly) double duration; 
@property (readonly) HKQuantity * totalEnergyBurned; 
@property (readonly) HKQuantity * totalDistance; 
@property (assign,setter=_setGoalType:,getter=_goalType,nonatomic) unsigned goalType;              //@synthesize goalType=_goalType - In the implementation block
@property (setter=_setGoal:,getter=_goal,nonatomic,retain) HKQuantity * goal;                      //@synthesize goal=_goal - In the implementation block
+(id)_workoutWithActivityType:(unsigned)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalEnergyBurned:(id)arg6 totalDistance:(id)arg7 goalType:(unsigned)arg8 goal:(id)arg9 metadata:(id)arg10 config:(/*^block*/id)arg11 ;
+(id)_workoutWithActivityType:(unsigned)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalEnergyBurned:(id)arg6 totalDistance:(id)arg7 goalType:(unsigned)arg8 goal:(id)arg9 metadata:(id)arg10 ;
+(id)_stringFromWorkoutActivityType:(unsigned)arg1 ;
+(char)_isConcreteObjectClass;
+(id)workoutWithActivityType:(unsigned)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7 ;
+(id)_activityTypeMappings;
+(id)workoutWithActivityType:(unsigned)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)workoutWithActivityType:(unsigned)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7 ;
+(unsigned)_workoutActivityTypeFromString:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)_workoutWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 workoutType:(id)arg7 activityType:(unsigned)arg8 workoutEvents:(id)arg9 duration:(double)arg10 totalEnergyBurned:(id)arg11 totalDistance:(id)arg12 goalType:(unsigned)arg13 goal:(id)arg14 ;
-(id)_validateConfiguration;
-(id)_validateWorkoutEvents:(id)arg1 ;
-(void)_enumerateActiveTimePeriods:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(HKQuantity *)totalDistance;
-(void)_setDuration:(double)arg1 ;
-(NSArray *)workoutEvents;
-(void)_setTotalEnergyBurned:(id)arg1 ;
-(void)_setTotalDistance:(id)arg1 ;
-(void)_setWorkoutActivityType:(unsigned)arg1 ;
-(void)_setGoalType:(unsigned)arg1 ;
-(unsigned)workoutActivityType;
-(unsigned)_goalType;
-(HKQuantity *)totalEnergyBurned;
-(id)_goal;
-(void)_setWorkoutEvents:(id)arg1 ;
-(void)_setGoal:(id)arg1 ;
-(double)_totalEnergyBurnedInCanonicalUnit;
-(double)_totalDistanceInCanonicalUnit;
-(double)_goalInCanonicalUnit;
@end
