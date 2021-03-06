/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface ABPostalNameContactEditingCell : ABContactCell <UITextFieldDelegate> {

	UITextField* _editingTextField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCardGroupItem:(id)arg1 ;
-(id)firstResponderItem;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)textFieldDidEndEditing:(id)arg1 ;
@end

