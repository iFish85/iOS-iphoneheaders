/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:51 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccountSettingsUI.bundle/AccountSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <AccountSettingsUI/ACUISettingsPluginParentProtocol.h>
#import <AccountSettingsUI/ACUIViewControllerAccountChangeObserver.h>

@class ACAccountStore, NSArray, NSMutableArray, PSSpecifier, NSMutableDictionary, ACUISettingsPluginManager, NSString;

@interface ACUISettingsController : PSListController <ACUISettingsPluginParentProtocol, ACUIViewControllerAccountChangeObserver> {

	ACAccountStore* _accountStore;
	NSArray* _accounts;
	NSMutableArray* _accountSpecifiers;
	PSSpecifier* _accountGroupSpecifier;
	PSSpecifier* _addAccountSpecifier;
	NSArray* _loadingInProgressSpecifiers;
	NSArray* _lazyLoadedSpecifiers;
	NSMutableDictionary* _pluginToSpecifiersMap;
	BOOL _isLazyLoadingPluginSpecifiers;
	ACUISettingsPluginManager* _settingsPluginManager;
	id _accountStoreDidChangeObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_specifiersForAccountsGroup;
-(BOOL)_shouldGroupAccountsOfType:(id)arg1 ;
-(id)_addAccountSpecifier;
-(BOOL)_lockMailAccounts;
-(id)_specifierForScheduleSettings;
-(BOOL)_isAccount:(id)arg1 inList:(id)arg2 ;
-(void)_fetchLazyLoadedSpecifiers;
-(id)_sortedAccountTypeIDs;
-(void)_unlockMailAccounts;
-(id)_specifiersForLoadingMessage;
-(id)_visibleAccountTypeIDs;
-(id)_loadAccounts;
-(id)_specifiersForPluginProvidedSettings;
-(BOOL)_isAccountModificationDisabledByRestrictions;
-(id)_specifierForCollectionCellLinkingToAccounts:(id)arg1 ofType:(id)arg2 ;
-(id)_settingsPluginManager;
-(void)_accountCellWasTappedWithSpecifier:(id)arg1 ;
-(id)_scheduleSettingsModeForSpecifier:(id)arg1 ;
-(void)_scheduleSettingsCellWasTappedWithSpecifier:(id)arg1 ;
-(id)_specifiersForSettingsProvidedByPlugin:(id)arg1 ;
-(BOOL)_isAccountList:(id)arg1 identicalToAccountList:(id)arg2 ;
-(id)_specifierForUnavailablityWarning;
-(id)_specifierForAccount:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)navigationItem;
-(void)specifiersDidChangeForPlugin:(id)arg1 ;
-(void)viewController:(id)arg1 didFinishRemovingAccountWithSuccess:(BOOL)arg2 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(id)_accounts;
-(id)_accountStore;
-(id)specifiers;
-(void)_accountStoreDidChange:(id)arg1 ;
@end

