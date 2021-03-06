/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UITableViewController.h>
#import <MobileCal/InboxTableViewDelegate.h>
#import <MobileCal/CalendarMessageCellDelegate.h>

@protocol InboxRepliedSectionViewControllerDelegate;
@class CalendarModel, NSArray, NSMutableArray;

@interface InboxRepliedSectionViewController : UITableViewController <InboxTableViewDelegate, CalendarMessageCellDelegate> {

	CalendarModel* _model;
	NSArray* _occurrenceInfos;
	NSMutableArray* _itemCache;
	BOOL _needsRefresh;
	float _minimumContentHeight;
	BOOL _viewIsVisible;
	<InboxRepliedSectionViewControllerDelegate>* _inboxRepliedSectionDelegate;

}

@property (assign,nonatomic,__weak) <InboxRepliedSectionViewControllerDelegate> * inboxRepliedSectionDelegate;              //@synthesize inboxRepliedSectionDelegate=_inboxRepliedSectionDelegate - In the implementation block
-(void)performAction:(int)arg1 forCell:(id)arg2 ;
-(void)_refreshIfNeeded;
-(id)_eventForIndexPath:(id)arg1 ;
-(id)noContentStringForInboxTableView:(id)arg1 ;
-(void)setInboxRepliedSectionDelegate:(id)arg1 ;
-(void)_updateCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_cellFrameDictionaryForIndexPath:(id)arg1 ;
-(id)_notificationForIndexPath:(id)arg1 ;
-(id)_itemForIndexPath:(id)arg1 ;
-(id)_eventForItem:(id)arg1 ;
-(id)inboxRepliedSectionDelegate;
-(id)initWithModel:(id)arg1 ;
-(void)_eventStoreChanged:(id)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)title;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void).cxx_destruct;
-(void)_localeChanged:(id)arg1 ;
@end

