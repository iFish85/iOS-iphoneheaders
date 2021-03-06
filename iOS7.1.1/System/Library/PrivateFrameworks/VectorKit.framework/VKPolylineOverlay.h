/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <GeoServices/GEOAttributedRoute.h>
#import <VectorKit/VKOverlay.h>
#import <VectorKit/GEOMapAccessRestrictions.h>

@class GEOMapRegion, NSMutableArray, GEOZilchDecoder, VKTrafficSegmentsAlongRoute, GEORoute, NSArray;

@interface VKPolylineOverlay : GEOAttributedRoute <VKOverlay, GEOMapAccessRestrictions> {

	GEOMapRegion* _boundingMapRegion;
	NSMutableArray* _sections;
	NSMutableArray* _snappedPaths;
	GEOZilchDecoder* _zilchDecoder;
	CFSetRef _observers;
	unsigned _firstVisiblePoint;
	bool _isReadyForSnapping;
	bool _allowsNetworkTileLoad;
	unordered_map<VKPolylineOverlaySection *, std::__1::vector<VGLRect, vk_allocator<VGLRect> >, std::__1::hash<VKPolylineOverlaySection *>, std::__1::equal_to<VKPolylineOverlaySection *>, vk_allocator<std::__1::pair<VKPolylineOverlaySection *const, std::__1::vector<VGLRect, vk_allocator<VGLRect> > > > >* _sectionToRectsMap;
	double _trafficTimeStamp;
	VKTrafficSegmentsAlongRoute* _trafficSegments;

}

@property (nonatomic,readonly) GEORoute * geoRoute; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (assign,nonatomic) unsigned firstVisiblePoint;                                   //@synthesize firstVisiblePoint=_firstVisiblePoint - In the implementation block
@property (assign,nonatomic) bool allowsNetworkTileLoad;                                   //@synthesize allowsNetworkTileLoad=_allowsNetworkTileLoad - In the implementation block
@property (nonatomic,readonly) unsigned long long trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned long long trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,readonly) NSArray * sections;                                         //@synthesize sections=_sections - In the implementation block
@property (nonatomic,readonly) VKTrafficSegmentsAlongRoute * trafficSegments;              //@synthesize trafficSegments=_trafficSegments - In the implementation block
@property (nonatomic,readonly) double trafficTimeStamp;                                    //@synthesize trafficTimeStamp=_trafficTimeStamp - In the implementation block
@property (nonatomic,readonly) CGPoint coordinate; 
@property (nonatomic,readonly) GEOMapRegion * boundingMapRegion;                           //@synthesize boundingMapRegion=_boundingMapRegion - In the implementation block
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)sections;
-(void)addObserver:(id)arg1 ;
-(unsigned)pointCount;
-(CGPoint)coordinate;
-(id)boundingMapRegion;
-(id)initWithRoute:(id)arg1 ;
-(NSRange)sectionRangeForBounds:(VKEdgeInsets)arg1 ;
-(id)geoRoute;
-(void)forEachSnappedPath:(/*^block*/ id)arg1 ;
-(bool)allowsNetworkTileLoad;
-(bool)supportsSnapping;
-(bool)updateRectsForPainter:(id)arg1 keysInView:(id)arg2 tiles:(id)arg3 shouldSnapToRoads:(bool)arg4 ;
-(id)getPathsForPainter:(id)arg1 keysInView:(id)arg2 tiles:(id)arg3 shouldSnapToRoads:(bool)arg4 snappingCompletionHandler:(/*^block*/ id)arg5 ;
-(double)trafficTimeStamp;
-(id)trafficSegments;
-(void)_buildSectionsFromRoute:(id)arg1 ;
-(void)updateTraffic;
-(void)clearPathsForObserver:(id)arg1 ;
-(unsigned long long)trafficColorsCount;
-(unsigned*)trafficColors;
-(unsigned long long)trafficColorOffsetsCount;
-(unsigned*)trafficColorOffsets;
-(void)_setNeedsLayout;
-(void)calibrate:(RouteCalibration*)arg1 from:(unsigned)arg2 to:(unsigned)arg3 forDistance:(unsigned)arg4 ;
-(bool)resetTrafficWithRoute:(id)arg1 WithStep:(RouteCalibration*)arg2 trafficWalking:(TrafficWalking*)arg3 routeIndex:(int*)arg4 ;
-(bool)_meetsMinimumPathLengthBetweenStart:(unsigned)arg1 end:(unsigned)arg2 ;
-(void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 localRects:(const vector<VGLRect, vk_allocator<VGLRect> >*)arg3 ;
-(void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 ;
-(void)_snapPaths:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)_addPaths:(id)arg1 forObserver:(id)arg2 ;
-(void)_addPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 ;
-(CGPoint)coordinateAtIndex:(unsigned long long)arg1 ;
-(void)setFirstVisiblePoint:(unsigned)arg1 ;
-(void)updateSnappedPathsForLocation:(id)arg1 ;
-(bool)isSnappingForSceneTiles;
-(void)attributedRouteHasChanged;
-(unsigned)firstVisiblePoint;
-(void)setAllowsNetworkTileLoad:(bool)arg1 ;
@end

