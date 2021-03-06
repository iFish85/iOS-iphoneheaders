/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/NSCoding.h>
#import <GameCenterFoundation/NSSecureCoding.h>

@class GKLeaderboardSetInternal, NSString, NSArray;

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding> {

	GKLeaderboardSetInternal* _internal;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain,readonly) NSString * groupIdentifier; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,retain,readonly) NSArray * leaderboardIdentifiers; 
@property (retain) GKLeaderboardSetInternal * internal;                              //@synthesize internal=_internal - In the implementation block
+(char)supportsSecureCoding;
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(void)loadLeaderboardSetsForGame:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadLeaderboardSetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)miniImageURL;
-(id)imageURL;
-(GKLeaderboardSetInternal *)internal;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKLeaderboardSetInternal *)arg1 ;
-(void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadLeaderboardsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadLeaderboardsForGame:(id)arg1 forPlayer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

