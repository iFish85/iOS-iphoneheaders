/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <GeoServices/GEOComposedRoute.h>

@protocol MKAnnotation;
@class GEOComposedRouteStep, NSArray, NSString, NSMapTable, NSMutableArray, MNRouteSet, NSDictionary;

@interface MNRoute : GEOComposedRoute {

	unsigned _mode;
	SCD_Struct_RA2* _mapPoints;
	double* _distancesFromStart;
	double* _distancesFromEnd;
	double _distanceFromRequestToStart;
	GEOComposedRouteStep* _step;
	GEOComposedRouteStep* _previousStep;
	GEOComposedRouteStep* _highlightedStep;
	SCD_Struct_RA6 _boundingMapRect;
	id<MKAnnotation> _annotation;
	SCD_Struct_RA2 _coordinate;
	SCD_Struct_RA2 _preferredCoordinate;
	float _coordinateOffset;
	NSRange _uniqueRange;
	int _orientation;
	int _preferredOrientation;
	NSArray* _viaWaypoints;
	NSString* _key;
	NSMapTable* _turnAnglesLookup;
	NSRange _uniquePointRange;
	NSMutableArray* _trafficIncidentsOnRoute;
	MNRouteSet* _routeSet;

}

@property (nonatomic,readonly) float meanCourseDegsForCompleteRoute; 
@property (nonatomic,readonly) float meanCourseDegsForUniqueRoute; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,__weak,readonly) MNRouteSet * routeSet;                                   //@synthesize routeSet=_routeSet - In the implementation block
@property (nonatomic,readonly) double distanceFromRequestToStart;                              //@synthesize distanceFromRequestToStart=_distanceFromRequestToStart - In the implementation block
@property (nonatomic,readonly) id<MKAnnotation> annotation;                                    //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) unsigned mode;                                                  //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RA2* mapPoints;                                      //@synthesize mapPoints=_mapPoints - In the implementation block
@property (nonatomic,readonly) double* distancesFromStart;                                     //@synthesize distancesFromStart=_distancesFromStart - In the implementation block
@property (nonatomic,readonly) double* distancesFromEnd;                                       //@synthesize distancesFromEnd=_distancesFromEnd - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RA2 startCoordinate; 
@property (nonatomic,readonly) SCD_Struct_RA2 endCoordinate; 
@property (nonatomic,readonly) SCD_Struct_RA2 midPoint; 
@property (nonatomic,retain) GEOComposedRouteStep * step;                                      //@synthesize step=_step - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * previousStep;                            //@synthesize previousStep=_previousStep - In the implementation block
@property (nonatomic,retain) GEOComposedRouteStep * highlightedStep;                           //@synthesize highlightedStep=_highlightedStep - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * firstStep; 
@property (nonatomic,readonly) GEOComposedRouteStep * lastStep; 
@property (nonatomic,readonly) NSString * accessibilityExpandedDistance; 
@property (nonatomic,readonly) NSString * expandedDistance; 
@property (nonatomic,readonly) NSString * abbreviatedDistance; 
@property (nonatomic,readonly) unsigned durationSeconds; 
@property (nonatomic,readonly) NSString * expandedTravelTime; 
@property (nonatomic,readonly) NSString * abbreviatedTravelTime; 
@property (nonatomic,readonly) char displaysDistanceInMetric; 
@property (nonatomic,readonly) char displaysYardsForShortDistances; 
@property (nonatomic,retain) NSArray * viaWaypoints;                                           //@synthesize viaWaypoints=_viaWaypoints - In the implementation block
@property (nonatomic,readonly) NSString * key;                                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSArray * trafficIncidentsOnRoute;                              //@synthesize trafficIncidentsOnRoute=_trafficIncidentsOnRoute - In the implementation block
@property (assign,nonatomic) SCD_Struct_RA2 coordinate;                                        //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) SCD_Struct_RA2 preferredCoordinate;                               //@synthesize preferredCoordinate=_preferredCoordinate - In the implementation block
@property (assign,nonatomic) float coordinateOffset;                                           //@synthesize coordinateOffset=_coordinateOffset - In the implementation block
@property (assign,nonatomic) NSRange uniqueRange;                                              //@synthesize uniqueRange=_uniqueRange - In the implementation block
@property (assign,nonatomic) int orientation;                                                  //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) int preferredOrientation;                                         //@synthesize preferredOrientation=_preferredOrientation - In the implementation block
@property (assign,nonatomic) NSRange uniquePointRange;                                         //@synthesize uniquePointRange=_uniquePointRange - In the implementation block
@property (getter=isAlternateTransportType,readonly) char alternateTransportType; 
+(void)updateLocationAndOrientationOfAlternateRouteAnnotationRepresentations:(id)arg1 forRoutes:(id)arg2 ;
+(id)_nameForMode:(unsigned)arg1 ;
+(void)_getIndexesOfSeparationPointOfRouteA:(id)arg1 fromRouteB:(id)arg2 indexA:(unsigned*)arg3 indexB:(unsigned*)arg4 threshold:(float)arg5 reversed:(char)arg6 ;
+(id)_uniqueRangesFor2Routes:(id)arg1 ;
+(id)_uniqueRangesFor3Routes:(id)arg1 ;
+(void)_setUniqueRangesForRoutes:(id)arg1 ;
+(void)_setMidCoordinateForRoute:(id)arg1 ;
+(void)_setOrientationsForRoutes:(id)arg1 ;
-(NSString *)abbreviatedTravelTime;
-(NSString *)expandedTravelTime;
-(NSString *)expandedDistance;
-(NSString *)accessibilityExpandedDistance;
-(id)abbreviatedTravelTimeForInterval:(unsigned)arg1 ;
-(MNRouteSet *)routeSet;
-(SCD_Struct_RA6)boundingRectForRoute;
-(SCD_Struct_RA2*)mapPoints;
-(char)displaysDistanceInMetric;
-(char)displaysYardsForShortDistances;
-(int)cameraFocusStyleForStep:(id)arg1 ;
-(id)travelTimeForInterval:(unsigned)arg1 ;
-(id)initWithRoute:(id)arg1 routeSet:(id)arg2 origin:(id)arg3 ;
-(unsigned)durationSeconds;
-(SCD_Struct_RA6)boundingRectForStep:(id)arg1 ;
-(SCD_Struct_RA6)boundingRectForStep:(id)arg1 fromPoint:(unsigned)arg2 ;
-(GEOComposedRouteStep *)previousStep;
-(char)isAlternateTransportType;
-(double)distanceFromRequestToStart;
-(int)preferredOrientation;
-(void)setUniquePointRange:(NSRange)arg1 ;
-(NSArray *)trafficIncidentsOnRoute;
-(void)commontInitWithRouteSet:(id)arg1 origin:(id)arg2 ;
-(SCD_Struct_RA2)_mkCoordAt:(unsigned)arg1 ;
-(NSArray *)viaWaypoints;
-(id)_timeForSeconds:(unsigned)arg1 withTraffic:(char)arg2 abbreviated:(char)arg3 ;
-(void)populateIncidentsFromETARoute:(id)arg1 incidentsOffset:(unsigned)arg2 ;
-(void)setUniqueRange:(NSRange)arg1 ;
-(GEOComposedRouteStep *)firstStep;
-(GEOComposedRouteStep *)lastStep;
-(NSString *)abbreviatedDistance;
-(SCD_Struct_RA2)startCoordinate;
-(SCD_Struct_RA2)endCoordinate;
-(SCD_Struct_RA2)midPoint;
-(SCD_Struct_RA2)closestMapPointToMapPoint:(SCD_Struct_RA2)arg1 ;
-(double*)distancesFromStart;
-(double*)distancesFromEnd;
-(GEOComposedRouteStep *)highlightedStep;
-(void)setHighlightedStep:(GEOComposedRouteStep *)arg1 ;
-(SCD_Struct_RA2)preferredCoordinate;
-(void)setPreferredCoordinate:(SCD_Struct_RA2)arg1 ;
-(float)coordinateOffset;
-(void)setCoordinateOffset:(float)arg1 ;
-(NSRange)uniqueRange;
-(void)setPreferredOrientation:(int)arg1 ;
-(void)setViaWaypoints:(NSArray *)arg1 ;
-(NSRange)uniquePointRange;
-(float)meanCourseDegsForRange:(NSRange)arg1 ;
-(float)meanCourseDegsForUniqueRoute;
-(float)meanCourseDegsForCompleteRoute;
-(id)departureDateForContext:(int)arg1 ;
-(id)mainStreet;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)key;
-(int)orientation;
-(unsigned)mode;
-(void)setOrientation:(int)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id<MKAnnotation>)annotation;
-(id)arrivalDate;
-(GEOComposedRouteStep *)step;
-(SCD_Struct_RA2)coordinate;
-(void)setCoordinate:(SCD_Struct_RA2)arg1 ;
-(void)setStep:(GEOComposedRouteStep *)arg1 ;
@end

