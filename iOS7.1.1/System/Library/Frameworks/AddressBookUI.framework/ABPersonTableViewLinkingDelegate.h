/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPersonLinkingUIDelegate.h>

@class NSMutableArray, ABPersonTableViewDataSource, ABPersonViewControllerHelper, NSArray;

@interface ABPersonTableViewLinkingDelegate : NSObject <ABPersonLinkingUIDelegate> {

	NSMutableArray* _linkedInfos;
	long long _currentIndexInLinkedInfos;
	bool _ignoresReloadLinkedInfos;
	bool _shouldAllowLinkingAnotherContact;
	bool _hasLinkChanges;
	bool _shouldShowLinkingUIOnCard;
	bool _showsLinkedPeople;
	bool _appearsInLinkingPeoplePicker;
	bool _updateShouldAllowLinkingAnotherContact;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonViewControllerHelper* _helper;

}

@property (nonatomic,readonly) NSArray * linkedInfos;                                  //@synthesize linkedInfos=_linkedInfos - In the implementation block
@property (assign,nonatomic) bool shouldShowLinkedPeople;                              //@synthesize showsLinkedPeople=_showsLinkedPeople - In the implementation block
@property (assign,nonatomic) bool shouldShowLinkingUIOnCard;                           //@synthesize shouldShowLinkingUIOnCard=_shouldShowLinkingUIOnCard - In the implementation block
@property (assign,nonatomic) bool appearsInLinkingPeoplePicker;                        //@synthesize appearsInLinkingPeoplePicker=_appearsInLinkingPeoplePicker - In the implementation block
@property (assign,nonatomic) bool updateShouldAllowLinkingAnotherContact;              //@synthesize updateShouldAllowLinkingAnotherContact=_updateShouldAllowLinkingAnotherContact - In the implementation block
@property (nonatomic,readonly) bool hasLinkChanges;                                    //@synthesize hasLinkChanges=_hasLinkChanges - In the implementation block
@property (assign,nonatomic) ABPersonTableViewDataSource * dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) ABPersonViewControllerHelper * helper;                  //@synthesize helper=_helper - In the implementation block
-(id)helper;
-(void)setShouldShowLinkedPeople:(bool)arg1 ;
-(void)setShouldShowLinkingUIOnCard:(bool)arg1 ;
-(void)setAppearsInLinkingPeoplePicker:(bool)arg1 ;
-(bool)shouldShowLinkedPeople;
-(void)setUpdateShouldAllowLinkingAnotherContact:(bool)arg1 ;
-(id)initWithHelper:(id)arg1 ;
-(bool)shouldAllowLinkingAnotherContact;
-(long long)numberOfLinkedCardRows;
-(bool)shouldIncludeLinkingUISectionWhenEditing:(bool)arg1 ;
-(id)sourceNameForCardAtRow:(long long)arg1 ;
-(id)personNameForCardAtRow:(long long)arg1 ;
-(bool)manuallyUnlinkCardAtRow:(long long)arg1 ;
-(bool)canUnlinkCardAtRow:(long long)arg1 ;
-(bool)shouldShowLinkingUIOnCard;
-(long long)indexOfLinkedInfoAtRow:(long long)arg1 ;
-(id)newLinkedInfoForPerson:(id)arg1 ;
-(bool)reloadLinkedInfos;
-(bool)isLinkedCard;
-(void)_finalizeLinkChanges;
-(id)linkedInfoAtRow:(long long)arg1 ;
-(bool)appearsInLinkingPeoplePicker;
-(void)forceUseLinkedInfos:(id)arg1 currentIndexInLinkedInfos:(long long)arg2 ;
-(bool)manuallyLinkPerson:(id)arg1 ;
-(bool)shouldAllowLinkingPersonWithRecordID:(int)arg1 ;
-(id)newPersonViewControllerForLinkedCardAtRow:(long long)arg1 ;
-(id)newPeoplePickerForLinking;
-(id)sourceNameForCurrentCard;
-(void)reloadLinkingUI;
-(id)allNonUnifiedPeople;
-(bool)hasLinkChanges;
-(id)linkedInfos;
-(bool)updateShouldAllowLinkingAnotherContact;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
@end

