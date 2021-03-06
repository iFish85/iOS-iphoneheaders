/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <Foundation/SSDownloadManagerObserver.h>

@protocol SUDownloadsChildViewController, OS_dispatch_source;
@class SUViewController, SUClientInterface, SUDownloadManager, UIView, NSObject;

@interface SUDownloadsViewController : SUViewController <SSDownloadManagerObserver> {

	SUViewController<SUDownloadsChildViewController>* _childViewController;
	SUClientInterface* _clientInterface;
	SUDownloadManager* _downloadManager;
	UIView* _emptyDownloadQueueView;
	bool _isUsingNetwork;
	NSObject<OS_dispatch_source>* _reloadFromServerTimer;
	bool _isEditing;

}
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(void)downloadManagerNetworkUsageDidChange:(id)arg1 ;
-(id)initWithManagerOptions:(id)arg1 ;
-(void)applicationWillEnterForeground;
-(void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)reload;
-(void)loadView;
-(id)contentScrollView;
-(void)tabBarControllerDidReselectTabBarItem:(id)arg1 ;
-(id)copyScriptViewController;
-(void)_tabConfigurationChanged:(id)arg1 ;
-(id)scriptButtons;
-(void)setScriptButtons:(id)arg1 ;
-(id)initWithClientInterface:(id)arg1 managerOptions:(id)arg2 preorderItemKinds:(id)arg3 ;
-(void)_startReloadFromServerTimer;
-(void)_reloadDataAnimated:(bool)arg1 ;
-(id)_newChildViewController;
-(void)_clientDidStopIgnoringDownloadsNotification:(id)arg1 ;
-(void)_cancelReloadFromServerTimer;
-(void)_setUsingNetwork:(bool)arg1 ;
-(void)updateTabBarItemsAnimated:(bool)arg1 ;
-(void)_updatePurchasedPlaylistButton;
-(void)_reloadEmptyDownloadQueueView;
-(void)_reloadDownloadManagerFromServer;
-(void)_gotoPurchasedPlaylist:(id)arg1 ;
-(id)initWithManagerOptions:(id)arg1 preorderItemKinds:(id)arg2 ;
@end

