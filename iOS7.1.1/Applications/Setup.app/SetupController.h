/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BuddyControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Setup/EmergencyDialerDelegate.h>

@class UIWindow, UIView, UITapGestureRecognizer, NSMutableArray, BuddyLanguageController, PSListController, UIActionSheet, UINavigationController, NSString, iForgotView, NSTimer, PCPersistentTimer, UIAlertView, NSMutableDictionary, EmergencyDialer, NSMutableIndexSet, UIViewController;

@interface SetupController : NSObject <BuddyControllerDelegate, UINavigationControllerDelegate, UIActionSheetDelegate, EmergencyDialerDelegate> {

	UIWindow* _window;
	UIView* _windowView;
	UITapGestureRecognizer* _menuButtonRecognizer;
	NSMutableArray* _buddyControllers;
	BuddyLanguageController* _languageController;
	PSListController* _wifiController;
	BOOL _wifiControllerInAdvancedMode;
	UIActionSheet* _menuButtonSheetWithStartOver;
	UIActionSheet* _menuButtonSheetNoStartOver;
	BOOL _displayEmergencyDialer;
	UINavigationController* _nav;
	NSString* _languageAtStartup;
	BOOL _shouldAnimateLanguageScreen;
	BOOL _languageScreenHasUnlocked;
	BOOL _shouldIgnoreiTunesLanguagePushOnResume;
	BOOL _buddyUiFinished;
	BOOL _buddyDone;
	BOOL _languageAlertDelegateReady;
	BOOL _earlyExitAllowed;
	BOOL _wifiWillPush;
	iForgotView* _iForgotView;
	BOOL _networkReachable;
	BOOL _isConnectedOverWifi;
	BOOL _supportsCellularActivation;
	BOOL _supportsCellularActivationInitialized;
	NSTimer* _wifiTimeoutTimer;
	BOOL _showingWifiTimeoutSpinner;
	BOOL _appleIDConfigurationDownloadStarted;
	BOOL _appleIDConfigurationDownloaded;
	BOOL _appleIDServiceEnabled;
	BOOL _appleIDWifiSkipAlertShown;
	BOOL _appleIDConfigured;
	PCPersistentTimer* _inactivityTimer;
	UIAlertView* _wifiAlert;
	UIAlertView* _languageAlert;
	UIAlertView* _iPadHomeButtonAlertWithStartOver;
	UIAlertView* _iPadHomeButtonAlertNoStartOver;
	UIAlertView* _eraseAlert;
	UIAlertView* _badWifiAlert;
	int _systemTimeUpdateStatus;
	NSMutableArray* _controllersToRemove;
	NSMutableDictionary* _accountInfo;
	EmergencyDialer* _emergencyDialer;
	SBSAlertItemsSuppressionAssertionRef _sbAlertItemsSuppressionAssertion;
	BOOL _startOverPermitted;
	BOOL _shouldRereadCloudConfigurationForControllersToSkip;
	NSString* _iCloudAppleIdFromActivation;
	NSMutableIndexSet* _viewControllerIndexesToRemoveOnPush;
	UIViewController* _topViewControllerForRemovingIndexes;
	id _cloudConfigurationChangeNotificationObserver;

}

@property (nonatomic,copy) NSString * iCloudAppleIdFromActivation;                                 //@synthesize iCloudAppleIdFromActivation=_iCloudAppleIdFromActivation - In the implementation block
@property (assign,getter=isStartOverPermitted,nonatomic) BOOL startOverPermitted;                  //@synthesize startOverPermitted=_startOverPermitted - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * viewControllerIndexesToRemoveOnPush;              //@synthesize viewControllerIndexesToRemoveOnPush=_viewControllerIndexesToRemoveOnPush - In the implementation block
@property (nonatomic,retain) UIViewController * topViewControllerForRemovingIndexes;               //@synthesize topViewControllerForRemovingIndexes=_topViewControllerForRemovingIndexes - In the implementation block
@property (assign,nonatomic) BOOL shouldRereadCloudConfigurationForControllersToSkip;              //@synthesize shouldRereadCloudConfigurationForControllersToSkip=_shouldRereadCloudConfigurationForControllersToSkip - In the implementation block
@property (nonatomic,retain) id cloudConfigurationChangeNotificationObserver;                      //@synthesize cloudConfigurationChangeNotificationObserver=_cloudConfigurationChangeNotificationObserver - In the implementation block
+(id)sharedSetupController;
+(void)localeCheck:(double)arg1 ;
+(void)initialize;
-(void)resign;
-(void)dialerDidDismiss:(id)arg1 ;
-(void)setShouldRereadCloudConfigurationForControllersToSkip:(BOOL)arg1 ;
-(void)setStartOverPermitted:(BOOL)arg1 ;
-(void)_skipControllersSpecifiedByCloudConfigurationConfiguration;
-(BOOL)_restoredFromBackup;
-(void)_inactivityTimerFired:(id)arg1 ;
-(void)stopInactivityTimer;
-(void)checkAndStartInactivityTimer;
-(void)setBuddyComplete:(BOOL)arg1 ;
-(void)suspendApp;
-(BOOL)_restoreFromBackupJustFinished;
-(BOOL)_hasLocaleAndLanguage;
-(void)_refreshLanguage;
-(BOOL)_isBackInBuddyAfterRestoreFromBackup:(BOOL)arg1 ;
-(BOOL)_isBackInBuddyForAppleID;
-(void)_showMiniAlert:(BOOL)arg1 withLanguage:(id)arg2 ;
-(id)_controllerFollowingControllerClass:(Class)arg1 ;
-(id)_viewControllerForBuddyController:(id)arg1 ;
-(BOOL)_isBackInBuddyForActivationOnly;
-(void)menuButtonPressed;
-(BOOL)_restoredOrSetupIniTunes;
-(void)_createNavInAirplaneMode:(BOOL)arg1 ;
-(void)updateLoadingStatus;
-(void)wifiBuddyButtonPressed;
-(void)wifiBuddyJoinFinished:(id)arg1 ;
-(void)batteryStateDidChange;
-(void)wifiNetworkJoinStarted:(id)arg1 ;
-(void)wifiNetworkJoinFailed:(id)arg1 ;
-(void)_clearWifiTimeoutTimer;
-(void)_resetWifiControllerTimeoutSpinner;
-(void)_wifiControllerReallyDone;
-(void)wifiTimeoutFired:(id)arg1 ;
-(void)_showNavBarSpinner;
-(void)_updateAirportNextButton;
-(void)_setSystemTime;
-(void)checkForUpdatedCarrierBundle;
-(id)topBuddyController;
-(BOOL)deviceHasWiFi;
-(BOOL)isStartOverPermitted;
-(void)_finishBuddy;
-(id)_newWifiControllerInstance;
-(void)_modalWifiControllerDone:(id)arg1 ;
-(void)resetBuddyPostActivation:(BOOL)arg1 ;
-(void)_showModalWifiSettings;
-(void)_animateControllerGroup;
-(id)controllerAtLocationServicesFlowPoint;
-(void)_buddyControllerDone:(id)arg1 nextControllerClass:(Class)arg2 nextController:(id)arg3 ;
-(void)buddyControllerDone:(id)arg1 ;
-(void)_languageControllerAlertDone;
-(void)_pushBuddyController:(id)arg1 ;
-(id)_setupStateKey;
-(id)controllerAtCloudConfigFlowPoint;
-(id)controllerAtAppleIDChoiceFlowPoint;
-(id)controllerAtCloudConfigInstallationFlowPoint;
-(BOOL)supportsCellularActivation;
-(void)_wifiControllerDone:(id)arg1 ;
-(BOOL)suspendAppPostActivation;
-(id)viewControllerIndexesToRemoveOnPush;
-(void)setViewControllerIndexesToRemoveOnPush:(id)arg1 ;
-(void)setTopViewControllerForRemovingIndexes:(id)arg1 ;
-(id)topViewControllerForRemovingIndexes;
-(void)buddyWillFinish;
-(void)removeViewControllerFromNavHierarchy:(id)arg1 ;
-(void)_pushBuddyController:(id)arg1 withExtendedInitialization:(BOOL)arg2 ;
-(BOOL)isConnectedOverWiFi;
-(id)controllerAtActivationFlowPoint;
-(id)wifiController;
-(id)controllerAtDeviceRestoreFlowPoint;
-(BOOL)shouldRereadCloudConfigurationForControllersToSkip;
-(void)_languageControllerDone;
-(id)_controllerForClass:(Class)arg1 ;
-(id)popToBuddyControllerWithClass:(Class)arg1 animated:(BOOL)arg2 ;
-(void)_popToWifi;
-(void)buddyControllerDone:(id)arg1 nextControllerClass:(Class)arg2 ;
-(void)countryScanUpdate;
-(void)showiForgot;
-(void)hideiForgot;
-(int)systemTimeUpdateStatus;
-(BOOL)startedInFakeMode;
-(void)_setupSnapshotRemoved;
-(void)_activationStateChanged;
-(void)_registrationDataStatusChanged:(CFDictionaryRef)arg1 ;
-(void)removeViewControllerIndexesFromNavHierarchyOnNextPush:(id)arg1 ;
-(void)deviceRestoreChoiceControllerWantsWifiPicker;
-(void)activationControllerWantsWifiPicker;
-(void)appleIDChoiceControllerWantsModalWifiPicker;
-(void)setAppleIDConfigured;
-(void)disagreeToTerms;
-(id)iCloudAppleIdFromActivation;
-(void)setICloudAppleIdFromActivation:(id)arg1 ;
-(id)cloudConfigurationChangeNotificationObserver;
-(void)setCloudConfigurationChangeNotificationObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)navigationController;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)run;
-(void)resume;
-(void)didPresentAlertView:(id)arg1 ;
-(BOOL)networkReachable;
-(id)accountInfo;
-(void)_setupStateChanged;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)didEnterBackground;
@end

