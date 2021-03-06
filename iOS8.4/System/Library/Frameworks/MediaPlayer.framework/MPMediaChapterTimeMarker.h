/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPTimeMarker.h>

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker {

	unsigned long long _chapterIndex;
	NSArray* _chapters;
	BOOL _hasArtworkAtPlaybackTime;

}

@property (assign,nonatomic) unsigned long long chapterIndex;              //@synthesize chapterIndex=_chapterIndex - In the implementation block
@property (nonatomic,retain) NSArray * chapters;                           //@synthesize chapters=_chapters - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkAtPlaybackTime;                //@synthesize hasArtworkAtPlaybackTime=_hasArtworkAtPlaybackTime - In the implementation block
-(BOOL)hasArtworkAtPlaybackTime;
-(void)setChapterIndex:(unsigned long long)arg1 ;
-(void)setHasArtworkAtPlaybackTime:(BOOL)arg1 ;
-(unsigned long long)chapterIndex;
-(NSArray *)chapters;
-(void)setChapters:(NSArray *)arg1 ;
@end

