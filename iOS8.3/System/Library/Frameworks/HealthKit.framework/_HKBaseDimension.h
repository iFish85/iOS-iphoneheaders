/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:52:27 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/_HKDimension.h>
#import <HealthKit/_HKFactor.h>

@class NSString, HKBaseUnit, HKUnit;

@interface _HKBaseDimension : _HKDimension <_HKFactor> {

	NSString* _name;
	HKBaseUnit* _reducibleBaseUnit;
	HKUnit* _reducedUnit;
	double _reductionCoefficient;

}

@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) HKBaseUnit * reducibleBaseUnit;              //@synthesize reducibleBaseUnit=_reducibleBaseUnit - In the implementation block
@property (nonatomic,retain) HKUnit * reducedUnit;                        //@synthesize reducedUnit=_reducedUnit - In the implementation block
@property (assign,nonatomic) double reductionCoefficient;                 //@synthesize reductionCoefficient=_reductionCoefficient - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pressure;
+(id)_uniquedDefinedDimensionWithName:(id)arg1 ;
+(id)_uniquedDimensionWithName:(id)arg1 configuration:(/*^block*/id)arg2 ;
+(id)conductance;
+(id)nullDimension;
+(id)length;
+(id)time;
+(id)mass;
+(id)energy;
+(id)temperature;
+(id)volume;
-(id)_initWithName:(id)arg1 ;
-(id)_baseDimensions;
-(char)canBeReduced;
-(HKUnit *)reducedUnit;
-(void)setReducibleBaseUnit:(HKBaseUnit *)arg1 ;
-(void)setReducedUnit:(HKUnit *)arg1 ;
-(id)unitString;
-(HKBaseUnit *)reducibleBaseUnit;
-(double)reductionCoefficient;
-(void)setReductionCoefficient:(double)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSString *)name;
@end

