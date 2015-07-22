/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RURadioAVPlayer.h>

@interface MusicAVPlayer : RURadioAVPlayer
+(id)sharedAVPlayer;
-(void)reloadWithPlaybackContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_connectAVPlayer;
-(id)_expectedAssetTypesForPlaybackMode:(long long)arg1 ;
-(BOOL)_shouldSwitchToAudioPlaybackWhenTransitioningFromVideo;
-(BOOL)hasVolumeControl;
-(void)_streamingDownloadSessionControllerDidFailDownloadSessionNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_musicPlayer_defaultsDidChangeNotification:(id)arg1 ;
-(void)beginPlayback;
-(void)beginOrTogglePlayback;
-(void)seekAlbum:(int)arg1 ;
-(void)seekPlaylist:(int)arg1 ;
@end
