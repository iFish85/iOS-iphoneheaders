/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:10:40 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLComposeServiceViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Social/SLMicroBlogMentionsDelegate.h>
#import <Social/SLMicroBlogAccountsTableViewControllerDelegate.h>
#import <Social/SLSheetPlaceViewControllerDelegate.h>

@protocol SLMicroBlogSheetDelegate;
@class NSObject, NSString, SLMicroBlogMentionsViewController, NSArray, SLMicroBlogUserRecord, SLComposeSheetConfigurationItem, SLMicroBlogAccountsTableViewController, SLSheetPlaceViewController, SLPlace;

@interface SLMicroBlogComposeViewController : SLComposeServiceViewController <UITextViewDelegate, SLMicroBlogMentionsDelegate, SLMicroBlogAccountsTableViewControllerDelegate, SLSheetPlaceViewControllerDelegate> {

	NSObject*<SLMicroBlogSheetDelegate> _microBlogSheetDelegate;
	NSString* _serviceAccountTypeIdentifier;
	SLMicroBlogMentionsViewController* _mentionsViewController;
	unsigned _mentionStartLocation;
	char _mentionPendingStart;
	char _rotatedDuringAccountsPopover;
	char _usingLocationOverride;
	NSArray* _accountUserRecords;
	NSArray* _accountIdentifiers;
	SLMicroBlogUserRecord* _selectedAccountUserRecord;
	SLComposeSheetConfigurationItem* _accountConfigurationItem;
	SLComposeSheetConfigurationItem* _locationConfigurationItem;
	SLMicroBlogAccountsTableViewController* _accountViewController;
	SLSheetPlaceViewController* _placeViewController;
	SLPlace* _currentPlace;
	int _shortenedURLCost;
	int _maxURLLength;
	char _isPresentingPlaces;

}

@property (__weak) NSObject*<SLMicroBlogSheetDelegate> microBlogSheetDelegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceBundle;
-(void)setGeotagStatus:(int)arg1 ;
-(void)placeViewController:(id)arg1 didSelectPlace:(id)arg2 ;
-(void)placeViewController:(id)arg1 willDisappear:(char)arg2 ;
-(void)_presentPlaceViewController;
-(void)didSelectPost;
-(id)configurationItems;
-(char)isContentValid;
-(void)presentationAnimationDidFinish;
-(id)_placeViewController;
-(void)updateShortenedURLCost;
-(NSObject*<SLMicroBlogSheetDelegate>)microBlogSheetDelegate;
-(void)noteLocationInfoChanged:(id)arg1 ;
-(void)updateGeotagStatus;
-(void)_beginLoadingAccountProfileImages;
-(void)_presentAccountPickerController;
-(void)_performLocationAction;
-(id)_accountConfigurationItem;
-(id)_locationConfigurationItem;
-(void)_presentNoAccountsAlertIfNecessaryAndReady;
-(void)presentNoAccountsAlert;
-(int)characterCountForEnteredText:(id)arg1 attachments:(id)arg2 ;
-(int)_charactersRemainingWithText:(id)arg1 ;
-(id)completeText:(id)arg1 withAttachments:(id)arg2 ;
-(int)_characterCountForText:(id)arg1 ;
-(char)_countMediaAttachmentsTowardCharacterCount;
-(id)_mentionsSearchString;
-(void)_presentMentionsViewControllerWithSearchString:(id)arg1 ;
-(void)applyMention:(id)arg1 ;
-(void)_dismissMentionsViewController;
-(void)_presentMentionsViewControllerIfApplicableForSearchString:(id)arg1 ;
-(void)mentionsViewController:(id)arg1 finishedWithResult:(id)arg2 ;
-(void)accountsViewController:(id)arg1 didSelectAccountUserRecord:(id)arg2 ;
-(void)appWillEnterForeground:(id)arg1 ;
-(void)setMicroBlogSheetDelegate:(NSObject*<SLMicroBlogSheetDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
@end
