/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUClientController.h>
#import <iTunesStoreUI/SKUIPassbookLoaderDelegate.h>
#import <iTunesStoreUI/SUTabBarControllerDelegate.h>

@class SUMediaPlayerViewController, NSString, SUPlaceholderViewController, SKUIURL, SUSectionsResponse, ISOperation, SKUIPassbookLoader, SUPreviewOverlayViewController, SUTabBarController, NSURL, UINavigationController;

@interface SUClientApplicationController : SUClientController <SKUIPassbookLoaderDelegate, SUTabBarControllerDelegate> {

	SUMediaPlayerViewController* _activeMediaPlayer;
	NSString* _exitStoreButtonTitle;
	SUPlaceholderViewController* _fetchSectionsPlaceholder;
	int _ignoreDownloadQueueChangeCount;
	SKUIURL* _launchURL;
	SUSectionsResponse* _lastBackgroundSectionsResponse;
	SUSectionsResponse* _lastSectionsResponse;
	ISOperation* _loadSectionsOperation;
	id _locationObserver;
	SKUIPassbookLoader* _passbookLoader;
	NSString* _preMediaDefaultPNG;
	SUPreviewOverlayViewController* _previewOverlay;
	char _reloadForStorefrontChangeAfterAccountSetup;
	char _reloadSectionsOnNextLaunch;
	char _shouldPrepareUserInterfaceWhenActivated;
	SUTabBarController* _tabBarController;

}

@property (getter=isIgnoringDownloadQueueChanges,nonatomic,readonly) char ignoringDownloadQueueChanges; 
@property (nonatomic,readonly) NSString * defaultPNGNameForSuspend; 
@property (nonatomic,readonly) NSURL * launchURL; 
@property (getter=wasLaunchedFromLibrary,nonatomic,readonly) char launchedFromLibrary; 
@property (getter=isTabBarControllerLoaded,nonatomic,readonly) char tabBarControllerLoaded; 
@property (nonatomic,readonly) SUTabBarController * tabBarController; 
@property (nonatomic,readonly) UINavigationController * topNavigationController; 
@property (assign,nonatomic) char shouldPrepareUserInterfaceWhenActivated;                                                                          //@synthesize shouldPrepareUserInterfaceWhenActivated=_shouldPrepareUserInterfaceWhenActivated - In the implementation block
@property (nonatomic,copy) NSString * exitStoreButtonTitle;                                                                                         //@synthesize exitStoreButtonTitle=_exitStoreButtonTitle - In the implementation block
@property (setter=_setActiveMediaPlayer:,getter=_activeMediaPlayer,nonatomic,retain) SUMediaPlayerViewController * _activeMediaPlayer;              //@synthesize activeMediaPlayer=_activeMediaPlayer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(void)setSharedController:(id)arg1 ;
-(void)tearDownUI;
-(void)resignActive;
-(void)becomeActive;
-(void)dealloc;
-(double)defaultImageSnapshotExpiration;
-(SUTabBarController *)tabBarController;
-(void)cancelAllOperations;
-(void)_showPreviewOverlayAnimated:(char)arg1 ;
-(void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(char)arg2 ;
-(void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(char)arg2 ;
-(void)returnToLibraryForClientInterface:(id)arg1 ;
-(id)previewOverlayForClientInterface:(id)arg1 ;
-(id)tabBarControllerForClientInterface:(id)arg1 ;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(id)presentationViewControllerForPassbookLoader:(id)arg1 ;
-(void)passbookLoaderDidFinish:(id)arg1 ;
-(char)openClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3 ;
-(id)copySuspendSettings;
-(void)exitStoreAfterDialogsDismiss;
-(id)initWithClientInterface:(id)arg1 ;
-(id)overlayBackgroundViewController;
-(char)tabBarController:(id)arg1 shouldShowSection:(id)arg2 ;
-(char)presentOverlayBackgroundViewController:(id)arg1 ;
-(void)dismissOverlayBackgroundViewController;
-(id)_previewOverlayViewController;
-(char)selectSectionWithIdentifier:(id)arg1 ;
-(char)isTabBarControllerLoaded;
-(NSString *)exitStoreButtonTitle;
-(void)_reloadForNetworkTypeChange:(id)arg1 ;
-(char)dismissTopViewControllerAnimated:(char)arg1 ;
-(char)wasLaunchedFromLibrary;
-(void)returnToLibrary;
-(void)_selectFooterSectionNotification:(id)arg1 ;
-(void)_storeFrontChangedNotification:(id)arg1 ;
-(void)_accountControllerDisappearedNotification:(id)arg1 ;
-(void)_cancelLoadSectionsOperation;
-(void)setupUI;
-(void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1 ;
-(char)_loadSectionsAllowingCache:(char)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_presentSectionFetchUI;
-(void)_handleFinishedLoadSectionsOperation:(id)arg1 ;
-(UINavigationController *)topNavigationController;
-(void)_cancelSuspendAfterDialogsDismissed;
-(void)_dialogDidFinishNotification:(id)arg1 ;
-(id)_resumableViewController;
-(char)_reloadForStorefrontChange;
-(void)_retrySectionsAfterNetworkTransition;
-(char)_showWildcatAccountViewController:(id)arg1 animated:(char)arg2 ;
-(void)_handleAccountURL:(id)arg1 ;
-(void)_defaultHandleApplicationURLRequestProperties:(id)arg1 ;
-(NSURL *)launchURL;
-(void)_handleSectionsLoadFailedWithError:(id)arg1 ;
-(void)_reloadWithSectionsResponse:(id)arg1 ;
-(void)presentExternalURLViewController:(id)arg1 ;
-(char)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2 ;
-(NSString *)defaultPNGNameForSuspend;
-(void)bagDidLoadNotification:(id)arg1 ;
-(char)displayClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3 ;
-(char)presentAccountViewController:(id)arg1 showNavigationBar:(char)arg2 animated:(char)arg3 ;
-(SUMediaPlayerViewController *)_activeMediaPlayer;
-(void)_setupTabBarController;
-(void)_openClientURL:(id)arg1 ;
-(id)_showPageForExternalOriginatedURLBagKey:(id)arg1 ;
-(id)_newTabBarController;
-(char)shouldPrepareUserInterfaceWhenActivated;
-(void)_handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3 ;
-(void)_handleDonationURL:(id)arg1 ;
-(void)_handleAddPassbookPassURL:(id)arg1 ;
-(char)_displayClientURL:(id)arg1 ;
-(void)_restorePreMediaPlayerSettings;
-(id)_accountViewController;
-(void)_cancelSectionFetchPlaceholder;
-(void)beginIgnoringDownloadQueueChanges;
-(void)endIgnoringDownloadQueueChanges;
-(char)isIgnoringDownloadQueueChanges;
-(void)prepareUserInterface;
-(void)setExitStoreButtonTitle:(NSString *)arg1 ;
-(id)showMainPageForItemKind:(id)arg1 sectionIdentifiers:(id)arg2 ;
-(void)_setActiveMediaPlayer:(id)arg1 ;
-(void)setShouldPrepareUserInterfaceWhenActivated:(char)arg1 ;
@end

