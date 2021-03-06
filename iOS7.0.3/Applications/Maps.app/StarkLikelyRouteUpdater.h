/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/MKETAUpdaterDelegate.h>

@class NSHashTable, StarkLikelyRoute, VKAttributedRoute, MKETAUpdater;

@interface StarkLikelyRouteUpdater : NSObject <MKETAUpdaterDelegate> {

	NSHashTable* _observers;
	StarkLikelyRoute* _likelyRoute;
	VKAttributedRoute* _attributedRoute;
	MKETAUpdater* _etaUpdater;

}

@property (nonatomic,readonly) StarkLikelyRoute * likelyRoute;              //@synthesize likelyRoute=_likelyRoute - In the implementation block
-(id)likelyRoute;
-(id)initWithLikelyRoute:(id)arg1 ;
-(id)_routeMatch:(id)arg1 ;
-(void)_handleBadRoute;
-(void)_updateWithNewLikelyRoute:(id)arg1 ;
-(void)etaUpdaterUpdatedETA:(id)arg1 ;
-(void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnNewRoute:(id)arg3 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)updateLocation:(id)arg1 ;
@end

