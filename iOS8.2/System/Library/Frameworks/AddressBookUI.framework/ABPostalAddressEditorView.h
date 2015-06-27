/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <AddressBookUI/ABCountryPickerControllerDelegate.h>
#import <AddressBookUI/ABText.h>

@protocol ABPresenterDelegate;
@class NSString, NSDictionary, CNPostalAddress, CNContactStyle, UITableView, NSArray, NSMutableDictionary, UIColor;

@interface ABPostalAddressEditorView : UIControl <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, ABCountryPickerControllerDelegate, ABText> {

	CNPostalAddress* _address;
	NSDictionary* _valueTextAttributes;
	id<ABPresenterDelegate> _delegate;
	CNContactStyle* _contactStyle;
	UITableView* _tableView;
	NSDictionary* _addressFormats;
	NSArray* _cellsLayout;
	NSMutableDictionary* _textFields;

}

@property (nonatomic,copy) CNPostalAddress * address; 
@property (nonatomic,copy) UIColor * separatorColor; 
@property (nonatomic,readonly) int lineCount; 
@property (assign,nonatomic) id<ABPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNContactStyle * contactStyle;                 //@synthesize contactStyle=_contactStyle - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSDictionary * addressFormats;                   //@synthesize addressFormats=_addressFormats - In the implementation block
@property (nonatomic,copy) NSArray * cellsLayout;                           //@synthesize cellsLayout=_cellsLayout - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * textFields;                //@synthesize textFields=_textFields - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * ab_text; 
@property (nonatomic,copy) NSDictionary * ab_textAttributes; 
-(void)setContactStyle:(CNContactStyle *)arg1 ;
-(CNContactStyle *)contactStyle;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(void)setAb_text:(NSString *)arg1 ;
-(id)_countryCode;
-(void)countryPickerDidCancel:(id)arg1 ;
-(void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2 ;
-(int)lineCount;
-(NSArray *)cellsLayout;
-(void)_invalidateCellsLayout;
-(void)setCellsLayout:(NSArray *)arg1 ;
-(id)_cellsLayoutForCountryCode:(id)arg1 ;
-(void)_setAddressValue:(id)arg1 forKey:(id)arg2 ;
-(id)_addressValueForKey:(id)arg1 ;
-(id)_addressPlaceholderForKey:(id)arg1 ;
-(void)textFieldChanged:(id)arg1 ;
-(void)_setupCountryPickerOnLine:(id)arg1 ;
-(void)_setupCoutryPickerOnTextField:(id)arg1 ;
-(id)_normalizeCountryCodeToISO:(id)arg1 ;
-(NSDictionary *)addressFormats;
-(NSString *)ab_text;
-(NSDictionary *)ab_textAttributes;
-(void)setAddressFormats:(NSDictionary *)arg1 ;
-(CNPostalAddress *)address;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<ABPresenterDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<ABPresenterDelegate>)delegate;
-(char)becomeFirstResponder;
-(char)isFirstResponder;
-(void)setEnabled:(char)arg1 ;
-(char)canBecomeFirstResponder;
-(CGSize)intrinsicContentSize;
-(UIColor *)separatorColor;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(NSMutableDictionary *)textFields;
-(UITableView *)tableView;
-(void)setAddress:(CNPostalAddress *)arg1 ;
-(void)setTextFields:(NSMutableDictionary *)arg1 ;
@end
