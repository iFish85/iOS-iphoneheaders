/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAVItem.h>

@class NSArray, RadioTrack, RadioStation, NSString;

@interface RURadioAVItem : MPAVItem {

	NSArray* _buyOffers;
	RadioTrack* _radioTrack;
	BOOL _isInWishList;
	BOOL _heartbeatInvalid;
	RadioStation* _station;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationName;
	NSString* _stationStringID;

}

@property (assign,nonatomic) BOOL isInWishList;                                            //@synthesize isInWishList=_isInWishList - In the implementation block
@property (nonatomic,retain) RadioStation * station;                                       //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) NSString * stationHash;                                     //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) long long stationID;                                        //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) NSString * stationName;                                     //@synthesize stationName=_stationName - In the implementation block
@property (nonatomic,readonly) NSString * stationStringID;                                 //@synthesize stationStringID=_stationStringID - In the implementation block
@property (assign,getter=isHeartbeatInvalid,nonatomic) BOOL heartbeatInvalid;              //@synthesize heartbeatInvalid=_heartbeatInvalid - In the implementation block
@property (nonatomic,readonly) BOOL _canUseStoreAdamIDForSubscriptionAdamID; 
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(long long)storeItemInt64ID;
-(id)chapterTimeMarkers;
-(id)artworkTimeMarkers;
-(id)urlTimeMarkers;
-(BOOL)isCloudItem;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isExplicitTrack;
-(BOOL)isStreamable;
-(id)mainTitle;
-(BOOL)supportsSettingCurrentTime;
-(id)titlesForTime:(double)arg1 ;
-(id)chapterTimeMarkerForTime:(double)arg1 ;
-(id)localizedAttributedPositionInPlaylistStringWithRegularTextAttributes:(id)arg1 emphasizedTextAttributes:(id)arg2 ;
-(id)localizedPositionInPlaylistString;
-(void)_loadMediaItemWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reevaluateType;
-(long long)albumStoreID;
-(id)buyOffers;
-(id)copyrightText;
-(BOOL)isLikedStateEnabled;
-(BOOL)supportsLikedState;
-(long long)storeSubscriptionAdamID;
-(BOOL)usesSubscriptionLease;
-(RadioStation *)station;
-(NSString *)stationStringID;
-(NSString *)stationHash;
-(long long)stationID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(id)title;
-(void)setStation:(RadioStation *)arg1 ;
-(void)setIsInWishList:(BOOL)arg1 ;
-(BOOL)isInWishList;
-(BOOL)isRadioItem;
-(id)radioTrack;
-(unsigned long long)persistentID;
-(id)artist;
-(id)mediaItem;
-(id)album;
-(id)initWithRadioTrack:(id)arg1 ;
-(void)_radioRequestDidFinishNotification:(id)arg1 ;
-(void)_internalIsInWishlistDidChangeNotification:(id)arg1 ;
-(void)_applyLoudnessInfoForVolumeNormalization;
-(BOOL)_canUseStoreAdamIDForSubscriptionAdamID;
-(id)aggregateDictionaryItemType;
-(unsigned long long)mpuReporting_itemType;
-(BOOL)mpuReporting_shouldReportPlayEventsToStore;
-(id)mpuReporting_trackInfo;
-(void)addDerivedStationForArtist:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_beginUsingPlaybackLease;
-(BOOL)isHeartbeatInvalid;
-(void)setHeartbeatInvalid:(BOOL)arg1 ;
-(NSString *)stationName;
-(id)MPU_contentItemIdentifierCollection;
@end

