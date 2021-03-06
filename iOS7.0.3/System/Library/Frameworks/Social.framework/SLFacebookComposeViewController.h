/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLComposeServiceViewController.h>
#import <Social/SLPlaceDataSourceDelegate.h>
#import <Social/SLSheetPlaceViewControllerDelegate.h>
#import <Social/SLFacebookAudienceViewControllerDelegate.h>
#import <Social/SLFacebookAlbumChooserViewControllerDelegate.h>
#import <Social/SLFacebookVideoOptionsDelegate.h>

@protocol SLFacebookAudienceViewController;
@class SLFacebookSession, ACAccountStore, SLSheetPlaceViewController, UIViewController, SLFacebookAlbumChooserViewController, SLFacebookVideoOptionsViewController, SLFacebookPost, SLFacebookPostPrivacyManager, SLFacebookPlaceManager, SLFacebookAlbumManager, ALAssetsLibrary, SLSheetAction, SLVideoQualityOption, ACAccount;

@interface SLFacebookComposeViewController : SLComposeServiceViewController <SLPlaceDataSourceDelegate, SLSheetPlaceViewControllerDelegate, SLFacebookAudienceViewControllerDelegate, SLFacebookAlbumChooserViewControllerDelegate, SLFacebookVideoOptionsDelegate> {

	BOOL _wasPresented;
	BOOL _hasAccessToAccount;
	BOOL _hasCheckedAccess;
	BOOL _hasShowedLocationDeniedAlert;
	SLFacebookSession* _session;
	ACAccountStore* _accountStore;
	SLSheetPlaceViewController* _placeViewController;
	UIViewController<SLFacebookAudienceViewController>* _audienceViewController;
	SLFacebookAlbumChooserViewController* _albumChooserViewController;
	SLFacebookVideoOptionsViewController* _videoOptionsViewController;
	SLFacebookPost* _post;
	SLFacebookPostPrivacyManager* _postPrivacyManager;
	SLFacebookPlaceManager* _placeManager;
	SLFacebookAlbumManager* _albumManager;
	ALAssetsLibrary* _assetsLibrary;
	SLSheetAction* _privacySheetAction;
	SLSheetAction* _albumSheetAction;
	SLSheetAction* _placeSheetAction;
	SLSheetAction* _videoOptionsAction;
	SLVideoQualityOption* _selectedVideoQualityOption;
	struct {
		unsigned showAlbumAction : 1;
		unsigned showPrivacyAction : 1;
		unsigned showPlaceAction : 1;
		unsigned showVideoDetailAction : 1;
	}  _actionFlags;
	/*^block*/ id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (@dynamic,retain) ACAccountStore * accountStore; 
@property (readonly) ACAccount * privilegedAccount; 
+(id)serviceBundle;
-(void)setAccountStore:(id)arg1 ;
-(id)accountStore;
-(BOOL)validateText:(id)arg1 ;
-(void)albumChooserViewController:(id)arg1 didSelectAlbum:(id)arg2 ;
-(id)albumManager;
-(void)placeManager:(id)arg1 failedWithError:(id)arg2 ;
-(void)placeManager:(id)arg1 updatedPlaces:(id)arg2 ;
-(void)videoOptionsViewController:(id)arg1 didSelectVideoQualityOption:(id)arg2 ;
-(void)placeViewController:(id)arg1 didSelectPlace:(id)arg2 ;
-(void)audienceViewController:(id)arg1 didSelectPostPrivacySetting:(id)arg2 ;
-(id)privilegedAccount;
-(void)_presentAudienceViewController;
-(void)_presentPlaceViewController;
-(void)_presentAlbumViewController;
-(void)_presentVideoOptionsViewController;
-(id)_videoOptionsAction;
-(id)_albumSheetAction;
-(id)_placeSheetAction;
-(id)_privacySheetAction;
-(void)_presentFacebookDisabledAlert;
-(void)_handlePostPrivacyResultWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)handleImagePostWithURL;
-(id)_videoOptionIdentifer;
-(void)_setVideoSizeOptionIdentifier:(id)arg1 ;
-(BOOL)_isLocationAuthorizationDenied;
-(void)_setPlace:(id)arg1 ;
-(id)_videoQualityOption;
-(BOOL)hasAccountAccess;
-(void)_presentNoAccountsAlert;
-(void)_updateAudienceButtonForPrivacySettingType:(int)arg1 name:(id)arg2 ;
-(BOOL)canPost;
-(void)setupCommonUI;
-(void)callCompletionHandlerWithResult:(int)arg1 ;
-(void)sheetPresentationAnimationDidFinish;
-(id)init;
-(void)didReceiveMemoryWarning;
-(/*^block*/ id)completionHandler;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)send;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(void)createPreviewIfNeeded;
-(id)sheetActions;
-(void).cxx_destruct;
@end

