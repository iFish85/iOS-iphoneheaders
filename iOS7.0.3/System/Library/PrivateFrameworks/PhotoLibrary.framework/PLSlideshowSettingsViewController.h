/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <iTunesStoreUI/MPMediaPickerControllerDelegate.h>

@protocol PLSlideshowSettingsViewControllerDelegate;
@class NSArray, MPMediaPickerController, PLSlideshowTransitionsViewController, PLSlideshowAirPlayRoutesViewController, UITableView, UITableViewCell, NSString, MPMediaItemCollection;

@interface PLSlideshowSettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, MPMediaPickerControllerDelegate> {

	NSArray* _airplayRoutes;
	unsigned _selectedAirplayRouteIndex;
	NSArray* _transitionKeys;
	NSArray* _alternateTransitionLocalizations;
	MPMediaPickerController* _mediaPicker;
	PLSlideshowTransitionsViewController* _transitionsController;
	PLSlideshowAirPlayRoutesViewController* _airPlayRoutesController;
	UITableView* _table;
	UITableViewCell* _transitionCell;
	UITableViewCell* _selectedMusicCell;
	UITableViewCell* _playMusicSwitchCell;
	BOOL _slideshowShouldPlayMusic;
	<PLSlideshowSettingsViewControllerDelegate>* _delegate;
	NSString* _selectedTransition;
	MPMediaItemCollection* _slideshowMusicCollection;

}

@property (assign,nonatomic) <PLSlideshowSettingsViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * selectedTransition;                                         //@synthesize selectedTransition=_selectedTransition - In the implementation block
@property (assign,nonatomic) BOOL slideshowShouldPlayMusic;                                       //@synthesize slideshowShouldPlayMusic=_slideshowShouldPlayMusic - In the implementation block
@property (nonatomic,retain) MPMediaItemCollection * slideshowMusicCollection;                    //@synthesize slideshowMusicCollection=_slideshowMusicCollection - In the implementation block
+(id)AppleTVPushTransitions;
+(id)iPhoneTransitions;
+(int)_uiTransitionForTransitionKey:(id)arg1 ;
+(id)TVOutTransitions;
+(id)iPadTransitions;
-(void)mediaPickerDidCancel:(id)arg1 ;
-(void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)contentSizeForViewInPopoverView;
-(void)loadView;
-(void)updateTransitionKeys:(id)arg1 ;
-(void)_preheatMediaPicker;
-(void)setSelectedTransition:(id)arg1 ;
-(void)setSlideshowShouldPlayMusic:(BOOL)arg1 ;
-(void)setSlideshowMusicCollection:(id)arg1 ;
-(int)_mainSection;
-(void)_updateSettingsInfo;
-(id)_selectedAirplayRoute;
-(void)applySlideshowSettings:(id)arg1 ;
-(BOOL)_includeAirPlaySection;
-(int)_airPlaySection;
-(int)_buttonSection;
-(void)_playMusicSwitchValueDidChange:(id)arg1 ;
-(id)_selectedMusic;
-(void)_playButtonWasPressed:(id)arg1 ;
-(id)slideshowSettings;
-(id)initWithAirplayRoutes:(id)arg1 selectedRouteIndex:(unsigned)arg2 ;
-(BOOL)slideshowShouldPlayMusic;
-(id)slideshowMusicCollection;
-(id)selectedTransition;
@end

