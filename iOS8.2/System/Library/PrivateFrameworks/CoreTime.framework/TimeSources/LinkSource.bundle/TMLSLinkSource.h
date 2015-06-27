/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreTime.framework/TimeSources/LinkSource.bundle/LinkSource
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LinkSource/LinkSource-Structs.h>
#import <LinkSource/TMLSLinkDelegate.h>

@protocol TMMonotonicClock;
@class NSDictionary, TMLSLink, NSString;

@interface TMLSLinkSource : NSObject <TMLSLinkDelegate> {

	NSDictionary* _lastCompanionTimeUpdate;
	char _coalescingUpdates;
	char _gizmo;
	id<TMMonotonicClock> _clock;
	id _daemonCore;
	TMLSLink* _link;
	NSString* _companionTimeZone;
	SCD_Struct_TM0 _lastRTCSample;

}

@property (nonatomic,retain) id<TMMonotonicClock> clock;                                       //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic,__weak) id daemonCore;                                             //@synthesize daemonCore=_daemonCore - In the implementation block
@property (nonatomic,retain) TMLSLink * link;                                                  //@synthesize link=_link - In the implementation block
@property (assign,nonatomic) SCD_Struct_TM0 lastRTCSample;                                     //@synthesize lastRTCSample=_lastRTCSample - In the implementation block
@property (nonatomic,copy) NSString * companionTimeZone;                                       //@synthesize companionTimeZone=_companionTimeZone - In the implementation block
@property (assign,getter=isLastRTCSampleValid,nonatomic) char lastRTCSampleValid; 
@property (assign,getter=isGizmo,nonatomic) char gizmo;                                        //@synthesize gizmo=_gizmo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLastRTCSampleValid:(char)arg1 ;
-(void)setLastRTCSample:(SCD_Struct_TM0)arg1 ;
-(void)syncAutomaticTimeEnabled;
-(void)link:(id)arg1 didReceiveTimeZone:(id)arg2 forSource:(id)arg3 ;
-(void)syncTimeZone;
-(id)initWithClock:(id)arg1 ;
-(void)setCompanionTimeZone:(NSString *)arg1 ;
-(char)isLastRTCSampleValid;
-(void)publishCommand:(id)arg1 ;
-(SCD_Struct_TM0)lastRTCSample;
-(id)initWithClock:(id)arg1 daemonCore:(id)arg2 ;
-(double)rtcWhenBeyondUncertainty:(double)arg1 ;
-(void)link:(id)arg1 didReceiveTime:(double)arg2 remoteRTC:(double)arg3 uncertainty:(double)arg4 source:(id)arg5 ;
-(void)link:(id)arg1 didReceiveDrift:(double)arg2 ;
-(void)linkDidReceiveReset:(id)arg1 ;
-(void)link:(id)arg1 didReceiveAutomaticTimeEnabled:(char)arg2 ;
-(void)link:(id)arg1 didSyncLocalRTC:(double)arg2 remoteRTC:(double)arg3 uncertainty:(double)arg4 ;
-(id)daemonCore;
-(void)setDaemonCore:(id)arg1 ;
-(void)systemTimeZoneChanged;
-(void)systemTimeChanged:(id)arg1 ;
-(NSString *)companionTimeZone;
-(id)timeAtRtc:(double)arg1 ;
-(char)isGizmo;
-(void)setGizmo:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)dictionary;
-(void)significantTimeChange;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setLink:(TMLSLink *)arg1 ;
-(TMLSLink *)link;
-(void)setClock:(id<TMMonotonicClock>)arg1 ;
-(id<TMMonotonicClock>)clock;
@end
