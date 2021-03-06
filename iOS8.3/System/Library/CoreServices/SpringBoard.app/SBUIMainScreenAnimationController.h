/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationController.h>

@interface SBUIMainScreenAnimationController : SBUIAnimationController {

	char _needsToClearBulletinWindowOrientation;

}
-(id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 ;
-(void)_noteAnimationDidCommit:(char)arg1 withDuration:(double)arg2 afterDelay:(double)arg3 ;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(void)_dismissBannerAnimated:(char)arg1 ;
-(void)_removeWallpaperAnimationPriorityWithFactory:(id)arg1 ;
-(char)_shouldDismissBanner;
-(void)__startAnimation;
-(void)_clearBulletinWindowOverrideOrientationIfNecessary;
-(void)dealloc;
-(void)beginAnimation;
@end

