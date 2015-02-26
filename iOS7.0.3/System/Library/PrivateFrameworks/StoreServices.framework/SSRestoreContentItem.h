/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSNumber, NSString, NSMutableDictionary;

@interface SSRestoreContentItem : NSObject {

	NSNumber* _accountID;
	NSString* _appleID;
	NSString* _bundleID;
	NSNumber* _cloudMatchStatus;
	BOOL _isRestore;
	NSMutableDictionary* _properties;

}

@property (nonatomic,copy) NSString * bundleID;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * cloudItemID; 
@property (nonatomic,retain) NSNumber * cloudMatchStatus; 
@property (nonatomic,copy) NSString * downloadKind; 
@property (nonatomic,copy) NSString * podcastEpisodeGUID; 
@property (nonatomic,copy) NSString * storeAccountAppleID; 
@property (nonatomic,retain) NSNumber * storeAccountID; 
@property (nonatomic,copy) NSString * storeFrontID; 
@property (nonatomic,retain) NSNumber * storeItemID; 
@property (nonatomic,copy) NSString * storeSoftwareVersionID; 
@property (assign,getter=isDRMFree,nonatomic) BOOL DRMFree; 
@property (nonatomic,copy) NSString * storeFlavor; 
@property (nonatomic,copy) NSString * videoDimensions; 
-(id)bundleID;
-(void)setValue:(id)arg1 forDownloadProperty:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)initWithRestoreDownload:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(id)podcastEpisodeGUID;
-(void)setPodcastEpisodeGUID:(id)arg1 ;
-(id)_initSSRestoreContentItem;
-(void)setValue:(id)arg1 forAssetProperty:(id)arg2 ;
-(id)_restoreKeyForAssetProperty:(id)arg1 ;
-(id)_restoreKeyForDownloadProperty:(id)arg1 ;
-(void)setBundleID:(id)arg1 ;
-(void)setStoreAccountAppleID:(id)arg1 ;
-(void)setStoreAccountID:(id)arg1 ;
-(void)setCloudMatchStatus:(id)arg1 ;
-(id)cloudItemID;
-(id)cloudMatchStatus;
-(id)copyRestoreDictionary;
-(id)downloadKind;
-(BOOL)isDRMFree;
-(void)setCloudItemID:(id)arg1 ;
-(void)setDownloadKind:(id)arg1 ;
-(void)setDRMFree:(BOOL)arg1 ;
-(void)setStoreFlavor:(id)arg1 ;
-(void)setStoreFrontID:(id)arg1 ;
-(void)setStoreItemID:(id)arg1 ;
-(void)setStoreSoftwareVersionID:(id)arg1 ;
-(void)setVideoDimensions:(id)arg1 ;
-(id)storeAccountAppleID;
-(id)storeAccountID;
-(id)storeFlavor;
-(id)storeItemID;
-(id)storeSoftwareVersionID;
-(id)videoDimensions;
-(id)storeFrontID;
@end
