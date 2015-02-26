/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBHUDView.h>

@interface SBVolumeHUDView : SBHUDView {

	int _mode;
	BOOL _headphonesPresent;
	float _euVolumeLimit;

}

@property (assign,nonatomic) int mode;                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL headphonesPresent;              //@synthesize headphonesPresent=_headphonesPresent - In the implementation block
@property (assign,nonatomic) float EUVolumeLimit;                 //@synthesize euVolumeLimit=_euVolumeLimit - In the implementation block
+(float)volumeStepUpForCurrentVolume:(float)arg1 euVolumeLimit:(float)arg2 ;
+(BOOL)wouldShowAtLeastAYellowBlockForVolume:(float)arg1 euVolumeLimit:(float)arg2 ;
+(float)volumeStepDownForCurrentVolume:(float)arg1 euVolumeLimit:(float)arg2 ;
-(id)_blockColorForValue:(float)arg1 ;
-(void)_updateBlockView:(id)arg1 value:(float)arg2 blockSize:(CGSize)arg3 point:(CGPoint)arg4 ;
-(void)setHeadphonesPresent:(BOOL)arg1 ;
-(void)setEUVolumeLimit:(float)arg1 ;
-(BOOL)headphonesPresent;
-(float)EUVolumeLimit;
-(void)_updateLabels;
-(id)init;
-(void)setProgress:(float)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)_updateImage;
@end
