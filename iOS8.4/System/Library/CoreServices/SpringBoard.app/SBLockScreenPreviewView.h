/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIView, SBFLockScreenDateView, SBLegibilityView, UILabel, _UILegibilityLabel, SBFakeStatusBarView, SBFLockScreenSimpleDateFormatter, _UILegibilitySettings;

@interface SBLockScreenPreviewView : UIView {

	UIView* _wallpaperView;
	SBFLockScreenDateView* _dateView;
	SBLegibilityView* _cameraView;
	UILabel* _slideToUnlockView;
	_UILegibilityLabel* _slideToUnlockLegibilityLabel;
	SBFakeStatusBarView* _statusBar;
	SBFLockScreenSimpleDateFormatter* _dateFormatter;
	_UILegibilitySettings* _legibilitySettings;

}
+(id)preview;
-(id)_legibilityPrototypeSettings;
-(void)_layoutSlideToUnlockView;
-(id)initWithFrame:(CGRect)arg1 legibilitySettings:(id)arg2 ;
-(void)_setupWallpaperView;
-(void)_setupDateView;
-(void)_setupSlideToUnlockView;
-(void)_setupCameraView;
-(void)_setupStatusBar;
-(void)_layoutStatusBar;
-(void)_layoutCameraView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_layoutDateView;
-(void)_layoutWallpaperView;
@end
