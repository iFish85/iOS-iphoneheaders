/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileStore.app/MobileStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileStore/MobileStore-Structs.h>
#import <MobileStore/SKUIApplicationDelegate.h>
#import <MobileStore/SSDownloadManagerObserver.h>
#import <MobileStore/SUPurchaseManagerDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, SKUIApplicationController, SSDownloadManager, MSLaunchNotificationsController, SKUIURL, SULegacyClientBridge, NSString;

@interface MSApplicationDelegate : NSObject <SKUIApplicationDelegate, SSDownloadManagerObserver, SUPurchaseManagerDelegate, UIApplicationDelegate> {

	SKUIApplicationController* _applicationController;
	SSDownloadManager* _downloadManager;
	MSLaunchNotificationsController* _launchNotificationsController;
	SKUIURL* _launchURL;
	SULegacyClientBridge* _legacyBridge;
	int _networkStartCount;
	char _onActiveShouldResumeApplication;
	UIWindow* _window;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)_networkingStartNotification:(id)arg1 ;
-(void)_networkingStopNotification:(id)arg1 ;
-(int)_tabBarStyleWithWidth:(float)arg1 ;
-(id)_newTabBarItemsWithStyle:(int)arg1 ;
-(int)_maximumTabBarItemsForStyle:(int)arg1 ;
-(char)_showsDownloadsTabForDownloadManager:(id)arg1 ;
-(void)_loadApplicationWithLaunchOptions:(id)arg1 ;
-(void)_showExternalURL:(id)arg1 ;
-(id)_newDefaultTabBarItemsWithClientContext:(id)arg1 style:(int)arg2 ;
-(id)_downloadManager;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(char)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2 ;
-(void)applicationDidCustomizeTabBarItems:(id)arg1 ;
-(void)application:(id)arg1 willTransitionToSize:(CGSize)arg2 withTransitionCoordinator:(id)arg3 ;
-(void)application:(id)arg1 didFailToLoadWithError:(id)arg2 ;
-(id)bootstrapScriptURLForApplication:(id)arg1 ;
-(id)application:(id)arg1 navigationControllerWithTabBarItem:(id)arg2 ;
-(void)applicationDidChangeClientContext:(id)arg1 ;
-(void)applicationDidDisplayFirstPage:(id)arg1 ;
@end

