/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>

@protocol ABPropertyCellDelegate;
@class UITextField, UIResponder, ABPropertyGroupItem;

@interface ABPropertyNameCell : ABContactCell {

	UITextField* _textField;
	UIResponder* _firstResponderItem;
	id<ABPropertyCellDelegate> _delegate;

}

@property (nonatomic,retain) ABPropertyGroupItem * propertyItem; 
@property (nonatomic,readonly) UITextField * textField;                        //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIResponder * firstResponderItem;               //@synthesize firstResponderItem=_firstResponderItem - In the implementation block
@property (assign,nonatomic) id<ABPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setContactStyle:(id)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(id)constantConstraints;
-(UIResponder *)firstResponderItem;
-(ABPropertyGroupItem *)propertyItem;
-(void)textFieldChanged:(id)arg1 ;
-(void)setPropertyItem:(ABPropertyGroupItem *)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<ABPropertyCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<ABPropertyCellDelegate>)delegate;
-(UITextField *)textField;
@end

