/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSURL, NSData, NSDate, NSDictionary;

@interface RadioManagedTrack : NSManagedObject

@property (assign,nonatomic) long long storeID; 
@property (nonatomic,@dynamic,copy) NSString * album; 
@property (nonatomic,copy) NSURL * albumURL; 
@property (assign,nonatomic) long long albumID; 
@property (nonatomic,@dynamic,copy) NSString * artist; 
@property (nonatomic,copy) NSURL * artworkURL; 
@property (nonatomic,copy) NSData * artworkURLData; 
@property (nonatomic,copy) NSString * copyrightText; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) BOOL isExplicit; 
@property (assign,nonatomic) int likeStatus; 
@property (assign,nonatomic) BOOL inWishList; 
@property (nonatomic,copy) NSDate * wishListDate; 
@property (nonatomic,copy) NSURL * previewURL; 
@property (nonatomic,@dynamic,copy) NSString * title; 
@property (nonatomic,copy) NSString * offerBuyParameters; 
@property (nonatomic,copy) NSString * offerFormattedPrice; 
@property (assign,nonatomic) float offerPrice; 
@property (assign,nonatomic) int offerType; 
@property (nonatomic,retain) NSData * adData; 
@property (assign,nonatomic) long long dateFetched; 
@property (assign,nonatomic) long long shuffleSeed; 
@property (nonatomic,copy) NSDictionary * trackInfo; 
@property (assign,nonatomic) long long beforePromoClipID; 
@property (assign,nonatomic) long long afterPromoClipID; 
@property (nonatomic,copy) NSDictionary * promoContent; 
@property (nonatomic,copy) NSString * debugMessage; 
@property (nonatomic,copy) NSDate * dateAdded; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(BOOL)inWishList;
-(long long)storeID;
-(id)artworkURL;
-(id)previewURL;
-(int)likeStatus;
-(BOOL)isExplicit;
-(void)setLikeStatus:(int)arg1 ;
-(id)adData;
-(long long)beforePromoClipID;
-(long long)afterPromoClipID;
-(id)trackInfo;
-(id)offerBuyParameters;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)dictionaryRepresentation;
-(id)artworkURLData;
-(id)feedbackDictionaryRepresentation;
-(void)setAdData:(id)arg1 ;
-(void)setArtworkURL:(id)arg1 ;
-(void)setArtworkURLData:(id)arg1 ;
-(void)setInWishList:(BOOL)arg1 ;
-(void)setWishListDate:(id)arg1 ;
-(void)setStoreID:(long long)arg1 ;
-(void)setTrackInfo:(id)arg1 ;
-(void)setPreviewURL:(id)arg1 ;
-(void)setAlbumID:(long long)arg1 ;
-(void)setIsExplicit:(BOOL)arg1 ;
-(void)setOfferBuyParameters:(id)arg1 ;
-(void)setOfferPrice:(float)arg1 ;
-(void)setOfferFormattedPrice:(id)arg1 ;
-(void)setDateFetched:(long long)arg1 ;
-(void)setShuffleSeed:(long long)arg1 ;
-(void)setDebugMessage:(id)arg1 ;
-(void)setBeforePromoClipID:(long long)arg1 ;
-(void)setAfterPromoClipID:(long long)arg1 ;
-(void)setPromoContent:(id)arg1 ;
-(id)_keyForActionTextStyle:(int)arg1 ;
-(long long)dateFetched;
-(long long)shuffleSeed;
-(id)debugMessage;
-(int)_offerTypeForOfferTypeString:(id)arg1 ;
-(id)_offerTypeStringForOfferType:(int)arg1 ;
-(id)actionTextForStyle:(int)arg1 ;
-(long long)albumID;
-(id)albumURL;
-(id)copyrightText;
-(id)promoContent;
-(id)offerFormattedPrice;
-(float)offerPrice;
-(void)setActionText:(id)arg1 forStyle:(int)arg2 ;
-(void)setAlbumURL:(id)arg1 ;
-(void)setCopyrightText:(id)arg1 ;
-(void)setOfferType:(int)arg1 ;
-(id)wishListDate;
-(id)dateAdded;
-(void)setDateAdded:(id)arg1 ;
-(int)offerType;
@end

