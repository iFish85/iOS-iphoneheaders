/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <CoreRoutine/CoreRoutine-Structs.h>
@class GEOBatchReverseGeocodeRequest, NSObject, NSMutableArray;

@interface _RTBatchSliceGeocoder : NSObject {

	GEOBatchReverseGeocodeRequest* _batchRequest;
	NSObject<OS_dispatch_semaphore>* _semaphore;
	NSMutableArray* _placeResults;
	NSRange _range;

}

@property (nonatomic,retain) GEOBatchReverseGeocodeRequest * batchRequest;              //@synthesize batchRequest=_batchRequest - In the implementation block
@property (assign,nonatomic) NSRange range;                                             //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_semaphore> * semaphore;               //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) NSMutableArray * placeResults;                             //@synthesize placeResults=_placeResults - In the implementation block
-(void)dealloc;
-(id)init;
-(void)cancel;
-(NSRange)range;
-(void).cxx_destruct;
-(void)setRange:(NSRange)arg1 ;
-(void)_cancelRequest:(id)arg1 ;
-(void)setSemaphore:(id)arg1 ;
-(void)setBatchRequest:(id)arg1 ;
-(id)batchRequest;
-(id)semaphore;
-(void)geocodeLocations:(id)arg1 ;
-(void)setPlaceResults:(id)arg1 ;
-(id)placeResults;
@end

