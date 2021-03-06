/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockScreenViewControllerDelegate.h>
#import <SpringBoard/SBUIBiometricEventObserver.h>
#import <SpringBoard/SBUIBiometricEventMonitorDelegate.h>

@class SBLockScreenViewControllerBase, SBPasscodeEntryAlertViewController, SBPasscodeLockDisableAssertion, NSMutableSet, NSHashTable, NSString;

@interface SBLockScreenManager : NSObject <SBLockScreenViewControllerDelegate, SBUIBiometricEventObserver, SBUIBiometricEventMonitorDelegate> {

	SBLockScreenViewControllerBase* _lockScreenViewController;
	char _isUILocked;
	char _isWaitingToLockUI;
	char _appRequestedPasscodeEntry;
	char _uiHasBeenLockedOnce;
	char _uiUnlocking;
	SBPasscodeEntryAlertViewController* _passcodeEntryController;
	SBPasscodeLockDisableAssertion* _disablePasscodeLockWhileUIUnlockedAssertion;
	NSMutableSet* _disableLockScreenIfPossibleAssertions;
	NSHashTable* _disableUnlockAssertions;
	char _isInLostMode;
	unsigned _failedMesaUnlockAttempts;
	char _bioAuthenticatedWhileMenuButtonDown;
	NSMutableSet* _bioUnlockingDisabledRequesters;

}

@property (nonatomic,readonly) SBLockScreenViewControllerBase * lockScreenViewController;              //@synthesize lockScreenViewController=_lockScreenViewController - In the implementation block
@property (readonly) char isUILocked;                                                                  //@synthesize isUILocked=_isUILocked - In the implementation block
@property (readonly) char isWaitingToLockUI;                                                           //@synthesize isWaitingToLockUI=_isWaitingToLockUI - In the implementation block
@property (readonly) char bioAuthenticatedWhileMenuButtonDown;                                         //@synthesize bioAuthenticatedWhileMenuButtonDown=_bioAuthenticatedWhileMenuButtonDown - In the implementation block
@property (assign,getter=isUIUnlocking,nonatomic) char UIUnlocking;                                    //@synthesize uiUnlocking=_uiUnlocking - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstanceCreateIfNeeded:(char)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(char)isUILocked;
-(SBLockScreenViewControllerBase *)lockScreenViewController;
-(void)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(char)hasUIEverBeenLocked;
-(void)activateLostModeForRemoteLock:(char)arg1 ;
-(void)lockUIFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)applicationRequestedDeviceUnlock;
-(char)shouldLockUIAfterEndingCall;
-(char)isUIUnlocking;
-(char)isInLostMode;
-(void)remoteLock:(char)arg1 ;
-(void)enableLostModePlugin;
-(void)_addDisableUnlockAssertion:(id)arg1 ;
-(void)_removeDisableUnlockAssertion:(id)arg1 ;
-(char)attemptUnlockWithPasscode:(id)arg1 ;
-(void)_bioAuthenticated:(id)arg1 ;
-(char)bioAuthenticatedWhileMenuButtonDown;
-(void)setBioUnlockingDisabled:(char)arg1 forRequester:(id)arg2 ;
-(void)cancelApplicationRequestedDeviceLockEntry;
-(void)exitLostModeIfNecessaryFromRemoteRequest:(char)arg1 ;
-(void)updateSpringBoardStatusBarForLockScreenTeardown;
-(void)addLockScreenDisableAssertion:(id)arg1 ;
-(void)removeLockScreenDisableAssertion:(id)arg1 ;
-(char)isWaitingToLockUI;
-(void)startUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(id)_newLockScreenController;
-(void)activationChanged:(id)arg1 ;
-(void)_deviceLockedChanged:(id)arg1 ;
-(void)_lockUI;
-(void)_handleExternalUIUnlock:(id)arg1 ;
-(void)_deviceBlockedChanged:(id)arg1 ;
-(void)_resetOrRestoreStateChanged:(id)arg1 ;
-(void)_lockScreenDimmed:(id)arg1 ;
-(void)_frontmostDisplayChanged:(id)arg1 ;
-(char)_shouldLockAfterEndingTelephonyCall;
-(char)_shouldLockAfterEndingFaceTimeCall;
-(void)_activateLockScreenAnimated:(char)arg1 automatically:(char)arg2 inScreenOffMode:(char)arg3 dimInAnimation:(char)arg4 dismissNotificationCenter:(char)arg5 ;
-(void)_postLockCompletedNotification:(char)arg1 ;
-(void)_sendUILockStateChangedNotification;
-(char)_shouldAutoUnlockFromUnlockSource:(int)arg1 ;
-(void)setUIUnlocking:(char)arg1 ;
-(void)_lockFeaturesForRemoteLock:(char)arg1 ;
-(void)_setUILocked:(char)arg1 ;
-(id)init;
-(char)handleKeyHIDEvent:(IOHIDEventRef)arg1 ;
-(void)unlockUIFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)_relockUIForButtonPress:(char)arg1 afterCall:(char)arg2 ;
-(char)handleMenuButtonTap;
-(void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned)arg2 ;
-(char)biometricEventMonitorShouldRelockAfterBioUnlock:(id)arg1 ;
@end

