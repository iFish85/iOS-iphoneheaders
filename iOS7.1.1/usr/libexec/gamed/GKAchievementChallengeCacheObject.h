/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKChallengeCacheObject.h>

@class NSDate, NSString, NSNumber;

@interface GKAchievementChallengeCacheObject : GKChallengeCacheObject

@property (nonatomic,@dynamic,retain) NSDate * date; 
@property (assign,nonatomic,@dynamic) float percentComplete; 
@property (nonatomic,@dynamic,retain) NSString * title; 
@property (nonatomic,@dynamic,retain) NSString * achievedDescription; 
@property (nonatomic,@dynamic,retain) NSString * unachievedDescription; 
@property (nonatomic,@dynamic,retain) NSNumber * maximumPoints; 
@property (assign,nonatomic,@dynamic) BOOL hidden; 
@property (assign,nonatomic,@dynamic) BOOL replayable; 
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(Class)classForInternalRepresentation;
-(BOOL)hasDetails;
-(id)internalRepresentation;
@end

