/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBackgroundProvidersViewControllerDelegate.h>
#import <SpringBoard/SBStarkControlBarDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class SBStarkBackgroundViewController, SBStarkBackgroundWindow, SBStarkControlBarViewController, SBStarkControlBarWindow, UITapGestureRecognizer, SBStarkScreenFocusController, SBStarkFakeIconOperationController;

@interface SBStarkHomeController : NSObject <SBStarkBackgroundProvidersViewControllerDelegate, SBStarkControlBarDelegate, UIGestureRecognizerDelegate> {

	SBStarkBackgroundViewController* _backgroundViewController;
	SBStarkBackgroundWindow* _backgroundWindow;
	SBStarkControlBarViewController* _controlBarViewController;
	SBStarkControlBarWindow* _controlBarWindow;
	BOOL _minimized;
	UITapGestureRecognizer* _backGestureRecognizer;
	BOOL _showingNowPlaying;
	BOOL _backgroundHidden;
	SBStarkScreenFocusController* _focusController;
	SBStarkFakeIconOperationController* _fakeIconOperationController;

}

@property (assign,nonatomic) <UIStatusBarStyleDelegate> * statusBarStyleDelegate; 
@property (nonatomic,retain) SBStarkScreenFocusController * focusController;                                //@synthesize focusController=_focusController - In the implementation block
@property (nonatomic,retain) SBStarkFakeIconOperationController * fakeIconOperationController;              //@synthesize fakeIconOperationController=_fakeIconOperationController - In the implementation block
@property (nonatomic,readonly) BOOL isShowingClock; 
-(void)starkControlBarDidAdjustHighestVisiblePoint:(id)arg1 ;
-(void)setFakeIconOperationController:(id)arg1 ;
-(void)starkControlBarDidTriggerAutoHideAction:(id)arg1 ;
-(void)setLauncherHidden:(BOOL)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3 ;
-(id)statusBarStyleDelegate;
-(void)setStatusBarStyleDelegate:(id)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 forReason:(id)arg2 withAnimationFactory:(id)arg3 ;
-(void)updateStatusBarWithRequestedStyle:(int)arg1 animationFactory:(id)arg2 ;
-(id)focusController;
-(void)setFocusController:(id)arg1 ;
-(id)fakeIconOperationController;
-(void)updateAutoHideDelay;
-(void)_setMinimized:(BOOL)arg1 force:(BOOL)arg2 withAnimationFactory:(id)arg3 fallbackToDefaultAnimationFactory:(BOOL)arg4 ;
-(void)setMinimized:(BOOL)arg1 force:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)isShowingClock;
-(void)starkBackgroundProvidersViewController:(id)arg1 willStartWithAnimation:(BOOL)arg2 ;
-(void)starkBackgroundProvidersViewController:(id)arg1 didStartWithAnimation:(BOOL)arg2 ;
-(void)starkBackgroundProvidersViewControllerWillAnimateInInitially:(id)arg1 ;
-(void)setBackgroundHidden:(BOOL)arg1 withAnimationFactory:(id)arg2 ;
-(void)setMinimized:(BOOL)arg1 force:(BOOL)arg2 withAnimationFactory:(id)arg3 ;
-(void)handleHomeButtonAction;
-(void)beginRevealWithAnimation:(BOOL)arg1 ;
-(void)switchBackgroundProviderToNowPlaying;
-(id)initWithScreen:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_performBackGesture:(id)arg1 ;
@end

