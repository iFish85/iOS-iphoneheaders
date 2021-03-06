/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSArray, NSData, NSDictionary, GKMatchRequestInternal, GKDispatchGroup;

@interface GKMatchResponse : GKInternalRepresentation {

	NSString* _rid;
	NSArray* _matches;
	NSData* _sessionToken;
	NSArray* _relayPushes;
	NSData* _cdxTicket;
	int _state;
	NSDictionary* _serverRequest;
	GKMatchRequestInternal* _matchRequest;
	GKDispatchGroup* _matchingGroup;
	int _sequence;

}

@property (retain) NSString * rid;                                     //@synthesize rid=_rid - In the implementation block
@property (retain) NSArray * matches;                                  //@synthesize matches=_matches - In the implementation block
@property (retain) NSData * sessionToken;                              //@synthesize sessionToken=_sessionToken - In the implementation block
@property (retain) NSArray * relayPushes;                              //@synthesize relayPushes=_relayPushes - In the implementation block
@property (retain) NSData * cdxTicket;                                 //@synthesize cdxTicket=_cdxTicket - In the implementation block
@property (assign) GKDispatchGroup * matchingGroup;                    //@synthesize matchingGroup=_matchingGroup - In the implementation block
@property (retain) GKMatchRequestInternal * matchRequest;              //@synthesize matchRequest=_matchRequest - In the implementation block
@property (retain) NSDictionary * serverRequest;                       //@synthesize serverRequest=_serverRequest - In the implementation block
@property (readonly) int sequence;                                     //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) int state;                                //@synthesize state=_state - In the implementation block
+(id)secureCodedPropertyKeys;
-(int)sequence;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(char)isCancelled;
-(char)isFinished;
-(NSArray *)matches;
-(NSData *)cdxTicket;
-(NSArray *)relayPushes;
-(void)setRid:(NSString *)arg1 ;
-(int)_incrementSequence;
-(NSString *)rid;
-(void)setMatches:(NSArray *)arg1 ;
-(void)setRelayPushes:(NSArray *)arg1 ;
-(void)setCdxTicket:(NSData *)arg1 ;
-(NSDictionary *)serverRequest;
-(void)setServerRequest:(NSDictionary *)arg1 ;
-(GKMatchRequestInternal *)matchRequest;
-(void)setMatchRequest:(GKMatchRequestInternal *)arg1 ;
-(GKDispatchGroup *)matchingGroup;
-(void)setMatchingGroup:(GKDispatchGroup *)arg1 ;
-(char)transitionToState:(int)arg1 ;
-(NSData *)sessionToken;
-(void)setSessionToken:(NSData *)arg1 ;
@end

