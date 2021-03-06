/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SLPlaceDataSource
@property (__weak) NSObject<SLPlaceDataSourceDelegate> * delegate; 
@required
-(id)currentLocation;
-(void)fetchPlaces;
-(void)cancelPlaceFetch;
-(void)fetchPlacesWithSearchString:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id)delegate;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
@end

