/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOBusiness, MKYelpDeal, NSMutableDictionary, NSString;

@interface MKMapItemMetadata : NSObject {

	BOOL _hasCheckedForYelpDeal;
	GEOBusiness* _business;
	MKYelpDeal* _yelpDeal;
	NSMutableDictionary* _imageCache;

}

@property (nonatomic,readonly) GEOBusiness * business;                      //@synthesize business=_business - In the implementation block
@property (nonatomic,retain) MKYelpDeal * yelpDeal;                         //@synthesize yelpDeal=_yelpDeal - In the implementation block
@property (assign,nonatomic) BOOL hasCheckedForYelpDeal;                    //@synthesize hasCheckedForYelpDeal=_hasCheckedForYelpDeal - In the implementation block
@property (nonatomic,readonly) NSString * yelpID; 
@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
-(NSString *)yelpID;
-(BOOL)hasCheckedForYelpDeal;
-(void)setYelpDeal:(MKYelpDeal *)arg1 ;
-(void)setHasCheckedForYelpDeal:(BOOL)arg1 ;
-(MKYelpDeal *)yelpDeal;
-(id)initWithBusiness:(id)arg1 ;
-(void)addImage:(id)arg1 forURL:(id)arg2 ;
-(id)imageForURL:(id)arg1 ;
-(NSMutableDictionary *)imageCache;
-(GEOBusiness *)business;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
@end

