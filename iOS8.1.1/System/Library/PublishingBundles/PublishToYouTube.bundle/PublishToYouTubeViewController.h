/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PublishingBundles/PublishToYouTube.bundle/PublishToYouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <PublishToYouTube/YTAuthenticatorDelegate.h>

@protocol PublishToYouTubeAgentDelegate;
@class UIAlertView, YTCategoriesRequest, NSArray, NSURL, NSString, ACAccountStore, UITableView, UIView, CategoryCell, NSMutableArray, PLTableViewEditableCell, UITableViewCell, UIPickerView, PublishContainerView, PublishFooterTextView, UIButton;

@interface PublishToYouTubeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDelegate, YTAuthenticatorDelegate> {

	id<PublishToYouTubeAgentDelegate> _delegate;
	UIAlertView* _loginPopup;
	YTCategoriesRequest* _request;
	NSArray* _categories;
	int _categoriesRequestRetryCount;
	UIAlertView* _categoriesErrorAlert;
	UIAlertView* _authenticationFailedAlert;
	UIAlertView* _accountAlert;
	UIAlertView* _captchaRequiredAlert;
	NSURL* _captchaURL;
	NSString* _cachedAccountName;
	ACAccountStore* _captchaAccountStore;
	UITableView* _table;
	UIView* _containerView;
	CategoryCell* _categoryCell;
	NSMutableArray* _tagCells;
	PLTableViewEditableCell* _titleCell;
	PLTableViewEditableCell* _descriptionCell;
	PLTableViewEditableCell* _optionCells[2];
	UITableViewCell* _accessCells[3];
	UITableViewCell* _accountCell;
	UIPickerView* _picker;
	UIView* _pickerContainer;
	PublishContainerView* _footerContainerView;
	PublishFooterTextView* _footerTextView;
	UIButton* _footerLinkView;
	BOOL _showingPicker;
	float _descriptionHeight;
	BOOL _publishEnabled;
	NSString* _defaultCategory;
	BOOL _publishDidCancel;
	BOOL _userDidStartEditing;
	BOOL _showHDSection;
	BOOL _enableHDSection;
	int _option;
	int _access;
	long long _hdSize;
	long long _sdSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)publish;
-(int)option;
-(int)access;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)_showPicker;
-(void)_hidePicker;
-(void)editableCellDidBeginEditing:(id)arg1 ;
-(void)editableCellReturnPressed:(id)arg1 ;
-(void)editableCell:(id)arg1 textChanged:(id)arg2 ;
-(void)editableTagCellEndOfTagCharacterPressed:(id)arg1 ;
-(void)automaticKeyboardDidShow:(id)arg1 ;
-(void)automaticKeyboardDidHide:(id)arg1 ;
-(void)_updateAccountCell;
-(void)_addNewTagCell;
-(void)_unshrinkView;
-(void)_shrinkView;
-(void)orderOutKeyboard;
-(long long)_indexOfBlankTagCellOtherThan:(id)arg1 ;
-(void)resignResponder;
-(void)sheetReturnKeyPressed:(id)arg1 ;
-(void)authenticatorNeedsAccountAndPassword:(id)arg1 ;
-(void)categoriesRequest:(id)arg1 receivedCategories:(id)arg2 ;
-(void)categoriesRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initShowingHDSection:(BOOL)arg1 enableHDSection:(BOOL)arg2 hdSize:(long long)arg3 sdSize:(long long)arg4 ;
-(id)publishData;
-(void)setEnableHDUploadOption:(BOOL)arg1 ;
-(id)publishTitle;
-(void)containerViewFrameDidChangeWithSplitKeyboard:(BOOL)arg1 ;
-(void)_authenticationStateChanged:(id)arg1 ;
-(void)_cleanupCategoriesRequest;
-(void)_requestCategories;
-(id)_singleCharacterTag;
-(void)termsOfUsePressed:(id)arg1 ;
-(id)_tagsString;
-(id)xmlDataForTitle:(id)arg1 description:(id)arg2 tags:(id)arg3 category:(id)arg4 ;
-(id)_categoryCell;
-(void)_selectComedyPickerRow;
-(id)_accountString;
-(void)_setCategories:(id)arg1 ;
-(void)_updateNavigationBarWithTitleText:(id)arg1 ;
-(void)_showLoginPopup;
@end
