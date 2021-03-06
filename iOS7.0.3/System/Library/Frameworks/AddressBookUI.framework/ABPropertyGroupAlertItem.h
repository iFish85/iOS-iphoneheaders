/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPropertyGroupItem.h>

@interface ABPropertyGroupAlertItem : ABPropertyGroupItem

@property (getter=isTone,nonatomic,readonly) BOOL tone; 
@property (getter=isVibration,nonatomic,readonly) BOOL vibration; 
-(BOOL)isEquivalentToItem:(id)arg1 whenEditing:(BOOL)arg2 ;
-(BOOL)canRemove;
-(id)displayLabel;
-(BOOL)isTone;
-(id)_toneManger;
-(id)_vibrationManager;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)isVibration;
-(id)description;
@end

