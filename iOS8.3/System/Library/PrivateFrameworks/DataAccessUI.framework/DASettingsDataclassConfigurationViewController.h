/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:25:54 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassConfigurationViewController.h>
#import <UIKit/UIModalViewDelegate.h>

@class DAAccount, NSString;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController <UIModalViewDelegate> {

	DAAccount* _daAccount;
	char _haveRegisteredForAccountsChanged;

}

@property (nonatomic,retain) DAAccount * daAccount;                 //@synthesize daAccount=_daAccount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(id)accountDescriptionForFirstTimeSetup;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(char)shouldVerifyBeforeAccountSave;
-(id)otherSpecifiers;
-(Class)accountInfoControllerClass;
-(void)cancelButtonClicked:(id)arg1 ;
-(DAAccount *)daAccount;
-(id)_navTitle;
-(void)_listenForAccountsChangedNotifications;
-(id)accountFromSpecifier;
-(void)reloadAccount;
-(void)setDaAccount:(DAAccount *)arg1 ;
-(void)_accountsChanged:(id)arg1 ;
-(id)specifiers;
@end

