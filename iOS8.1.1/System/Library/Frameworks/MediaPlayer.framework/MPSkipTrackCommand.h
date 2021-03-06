/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemoteCommand.h>

@interface MPSkipTrackCommand : MPRemoteCommand {

	BOOL _adPreventsDisplay;
	SCD_Struct_MP22 _skipLimit;

}

@property (assign,nonatomic) BOOL adPreventsDisplay;                 //@synthesize adPreventsDisplay=_adPreventsDisplay - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP22 skipLimit;              //@synthesize skipLimit=_skipLimit - In the implementation block
-(SCD_Struct_MP22)skipLimit;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setAdPreventsDisplay:(BOOL)arg1 ;
-(void)setSkipLimit:(SCD_Struct_MP22)arg1 ;
-(BOOL)adPreventsDisplay;
@end

