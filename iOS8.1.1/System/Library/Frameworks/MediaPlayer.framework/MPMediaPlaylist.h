/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPMediaItemCollection.h>

@class NSArray, MPMediaQuery, NSString;

@interface MPMediaPlaylist : MPMediaItemCollection {

	NSArray* _representativeArtists;
	MPMediaQuery* _seedTracksQuery;

}

@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long playlistAttributes; 
@property (nonatomic,readonly) NSArray * seedItems; 
+(void)_createFilterableDictionary;
+(BOOL)canFilterByProperty:(id)arg1 ;
+(BOOL)_isValidPlaylistProperty:(id)arg1 ;
-(id)identifierURLScheme;
-(id)artworkCatalogsWithMaximumCount:(unsigned long long)arg1 ;
-(id)initWithMultiverseIdentifier:(id)arg1 ;
-(id)initWithPersistentID:(unsigned long long)arg1 ;
-(id)seedTracksQuery;
-(BOOL)isCloudMix;
-(unsigned long long)playlistAttributes;
-(NSArray *)seedItems;
-(id)representativeArtists;
-(BOOL)canPlayUsingNetworkType:(long long)arg1 ;
-(id)representativeItem;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)items;
-(unsigned long long)mediaTypes;
-(id)valueForProperty:(id)arg1 ;
-(unsigned long long)persistentID;
-(BOOL)existsInLibrary;
-(id)multiverseIdentifier;
@end
