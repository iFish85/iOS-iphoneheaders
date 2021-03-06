/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomAdditionalProtocol.h>
#import <SymptomEvaluator/AdditionalInfoProtocol.h>

@interface UnexpectedThresholdHandler : NSObject <SymptomAdditionalProtocol, AdditionalInfoProtocol> {

	unsigned long long _requiredPresenceTime;
	unsigned long long _thresholdCountThisInterfaceInstance;
	unsigned long long _fallbackCountThisInterfaceInstance;
	bool _reported;

}
+(id)sharedInstance;
+(void)reset;
+(int)configure:(id)arg1 ;
+(id)evaluate:(id)arg1 forThreshold:(int)arg2 ;
+(bool)noteSymptom:(id)arg1 ;
+(id)generateAdditionalInfo:(id)arg1 ;
-(id)init;
-(id)description;
-(void)reset;
-(int)configure:(id)arg1 ;
-(id)evaluate:(id)arg1 forThreshold:(int)arg2 ;
-(bool)noteSymptom:(id)arg1 ;
-(id)generateAdditionalInfo:(id)arg1 ;
@end

