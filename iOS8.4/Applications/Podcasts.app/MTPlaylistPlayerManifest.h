/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTRefreshablePlayerManifest.h>

@class NSManagedObjectID, NSString, NSDate;

@interface MTPlaylistPlayerManifest : MTRefreshablePlayerManifest {

	NSManagedObjectID* _playlistId;
	NSString* _uuid;
	NSDate* _generatedDate;

}
-(id)fetchEpisodeUuids;
-(id)playlistUuid;
-(id)_playlistInCtx:(id)arg1 ;
-(id)initWithPlaylistUuid:(id)arg1 initialEpisodeUuid:(id)arg2 ;
-(unsigned)hash;
-(id)sortDescriptors;
-(void)setCurrentItem:(id)arg1 ;
@end

