/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMMediaItem.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSArray, NSURL, UIImage, NSObject, AVPlayerItem, AVURLAsset, NSString;

@interface MTPlayerItem : NSObject <IMMediaItem> {

	struct {
		unsigned chaptersLoaded : 1;
		unsigned videoChecked : 1;
	}  _playerItemFlags;
	char _isVideo;
	double _duration;
	double _bookmarkTime;
	NSArray* _chapters;
	NSURL* _url;
	UIImage* _artwork;
	NSObject*<OS_dispatch_queue> _chapterLoadingQueue;
	AVPlayerItem* _item;
	NSDictionary* _userInfo;
	AVURLAsset* _asset;
	/*^block*/id _bookmarkTimeBlock;
	double _currentTime;

}

@property (nonatomic,retain) AVPlayerItem * item;                       //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) AVURLAsset * asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id bookmarkTimeBlock;                        //@synthesize bookmarkTimeBlock=_bookmarkTimeBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double currentTime;                        //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) NSArray * chapters;                      //@synthesize chapters=_chapters - In the implementation block
@property (nonatomic,readonly) NSArray * timeChapters; 
@property (nonatomic,readonly) NSArray * metadataChapters; 
-(id)episode;
-(id)podcastUuid;
-(void)loadChapters;
-(NSArray *)timeChapters;
-(NSArray *)metadataChapters;
-(id)initWithUrl:(id)arg1 ;
-(id)titleChapters;
-(id)urlChapters;
-(id)artworkChapters;
-(id)bookmarkTimeBlock;
-(void)setBookmarkTimeBlock:(id)arg1 ;
-(id)initWithPlayerItem:(id)arg1 ;
-(double)bookmarkTime;
-(id)podcastTitle;
-(double)availableDuration;
-(id)nowPlayingInfo;
-(void)setArtwork:(id)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(double)duration;
-(AVPlayerItem *)item;
-(id)url;
-(void)setDuration:(double)arg1 ;
-(id)title;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setItem:(AVPlayerItem *)arg1 ;
-(AVURLAsset *)asset;
-(void)setAsset:(AVURLAsset *)arg1 ;
-(char)isVideo;
-(void)setBookmarkTime:(double)arg1 ;
-(NSArray *)chapters;
-(id)artwork;
-(id)feedURL;
-(id)podcast;
-(id)author;
-(id)assetURL;
-(double)currentTime;
@end

