/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:01:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <PhotoLibrary/ABPeoplePickerNavigationControllerDelegate.h>
#import <PhotoLibrary/MFContactsSearchConsumer.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol PLComposeRecipientViewControllerDelegate;
@class PLComposeRecipientView, UIScrollView, MFContactsSearchManager, MFContactsSearchResultsModel, MFSearchShadowView, NSArray, NSNumber, UITableView, UIPopoverController, NSString;

@interface PLComposeRecipientViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate, MFContactsSearchConsumer, UITableViewDelegate, UITableViewDataSource, UIPopoverControllerDelegate> {

	PLComposeRecipientView* _recipientView;
	UIScrollView* _recipientContainerView;
	CGRect _keyboardFrame;
	unsigned _maxExpandRows;
	id<PLComposeRecipientViewControllerDelegate> _delegate;
	MFContactsSearchManager* _searchManager;
	MFContactsSearchResultsModel* _searchResultsModel;
	MFSearchShadowView* _shadowView;
	NSArray* _searchResults;
	NSNumber* _currentSearchTaskID;
	UITableView* _searchResultsTable;
	UIPopoverController* _searchResultsPopoverController;
	UIPopoverController* _peoplePickerPopoverController;
	struct {
		unsigned showingPeoplePicker : 1;
		unsigned showingSearchResultsTable : 1;
		unsigned offsettingForResultsTable : 1;
		unsigned wasFirstResponder : 1;
	}  _flags;
	NSArray* _properties;

}

@property (assign,nonatomic) id<PLComposeRecipientViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PLComposeRecipientView * recipientView;                           //@synthesize recipientView=_recipientView - In the implementation block
@property (assign,nonatomic) unsigned maxExpandRows;                                             //@synthesize maxExpandRows=_maxExpandRows - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)recordRecentInvitationRecipient:(id)arg1 displayName:(id)arg2 date:(id)arg3 ;
-(id)recipients;
-(void)makeRecipientViewResignFirstResponder;
-(void)makeRecipientViewFirstResponder;
-(void)_searchForRecipientWithText:(id)arg1 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(id)_searchManager;
-(void)_setSearchResults:(id)arg1 ;
-(char)shouldShowCardForPerson:(void*)arg1 peoplePicker:(id)arg2 ;
-(void)consumeSearchResults:(id)arg1 type:(unsigned)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(unsigned)arg1 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 identifier:(int)arg3 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)composeRecipientViewReturnPressed:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 requestDeleteRecipientAtIndex:(int)arg2 ;
-(char)composeRecipientViewIsShowingPeoplePicker:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PLComposeRecipientViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<PLComposeRecipientViewControllerDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidUnload;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(char)isRecipientViewFirstResponder;
-(void)_keyboardSizeDidChange:(id)arg1 ;
-(void)_presentSearchResultsPopover;
-(void)_updateViewsLayoutAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_forceDismissPeoplePickerPopover;
-(char)_searchResultsShowInPopover;
-(void)_updateSearchResultsTableVisibility;
-(id)_newSearchResultsTable;
-(id)_newShadowView;
-(void)_dismissPeoplePicker:(id)arg1 ;
-(void)setMaxExpandRows:(unsigned)arg1 ;
-(PLComposeRecipientView *)recipientView;
-(unsigned)maxExpandRows;
-(void*)_addressBook;
@end

