/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:11 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSSet, LiveUsage;

@interface Process : NSManagedObject

@property (nonatomic,retain) NSString * bundleName; 
@property (nonatomic,retain) NSDate * firstTimeStamp; 
@property (nonatomic,retain) NSString * procName; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSSet * hasLiveUsage; 
@property (nonatomic,retain) LiveUsage * hintLiveUsage; 
@end
