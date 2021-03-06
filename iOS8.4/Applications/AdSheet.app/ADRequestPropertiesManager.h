/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ADRequestPropertiesManager : NSObject {

	char _hasDeterminedRoamingStatus;
	char _internationalRoaming;
	NSString* _iTunesStorefront;
	NSString* _hardwareName;
	NSString* _osVersion;
	NSString* _homeCarrierMCC;
	NSString* _homeCarrierMNC;
	NSString* _currentCarrierMCC;
	NSString* _currentCarrierMNC;

}

@property (nonatomic,readonly) char hasDeterminedRoamingStatus;              //@synthesize hasDeterminedRoamingStatus=_hasDeterminedRoamingStatus - In the implementation block
@property (nonatomic,readonly) NSString * iTunesStorefront;                  //@synthesize iTunesStorefront=_iTunesStorefront - In the implementation block
@property (nonatomic,readonly) NSString * hardwareName;                      //@synthesize hardwareName=_hardwareName - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                         //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * homeCarrierMCC;                        //@synthesize homeCarrierMCC=_homeCarrierMCC - In the implementation block
@property (nonatomic,copy) NSString * homeCarrierMNC;                        //@synthesize homeCarrierMNC=_homeCarrierMNC - In the implementation block
@property (nonatomic,copy) NSString * currentCarrierMCC;                     //@synthesize currentCarrierMCC=_currentCarrierMCC - In the implementation block
@property (nonatomic,copy) NSString * currentCarrierMNC;                     //@synthesize currentCarrierMNC=_currentCarrierMNC - In the implementation block
@property (assign,nonatomic) char internationalRoaming;                      //@synthesize internationalRoaming=_internationalRoaming - In the implementation block
+(id)sharedManager;
-(NSString *)iTunesStorefront;
-(void)reloadStorefront:(/*^block*/id)arg1 ;
-(char)hasDeterminedRoamingStatus;
-(id)requestPropertiesForClient:(id)arg1 ;
-(void)_gatherTelephonyData;
-(void)setITunesStorefront:(NSString *)arg1 ;
-(char)_hasRequiredProperties;
-(void)_considerPostingRequiredPropertiesAcquired;
-(void)setHomeCarrierMNC:(NSString *)arg1 ;
-(void)setHomeCarrierMCC:(NSString *)arg1 ;
-(void)setCurrentCarrierMNC:(NSString *)arg1 ;
-(void)setCurrentCarrierMCC:(NSString *)arg1 ;
-(void)setInternationalRoaming:(char)arg1 ;
-(void)setHasDeterminedRoamingStatus:(char)arg1 ;
-(NSString *)homeCarrierMCC;
-(NSString *)homeCarrierMNC;
-(NSString *)currentCarrierMCC;
-(NSString *)currentCarrierMNC;
-(char)internationalRoaming;
-(id)_contentRestrictions;
-(id)init;
-(NSString *)osVersion;
-(NSString *)hardwareName;
@end

