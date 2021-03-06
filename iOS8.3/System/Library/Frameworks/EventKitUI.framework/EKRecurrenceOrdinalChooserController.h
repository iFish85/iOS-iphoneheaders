/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:47:07 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKRecurrenceChooserController.h>
#import <EventKitUI/EKRecurrenceOrdinalPickerViewControllerDelegate.h>

@class EKRecurrenceOrdinalPickerViewController, UITableViewCell, NSString;

@interface EKRecurrenceOrdinalChooserController : EKRecurrenceChooserController <EKRecurrenceOrdinalPickerViewControllerDelegate> {

	EKRecurrenceOrdinalPickerViewController* _pickerViewController;
	UITableViewCell* _cell;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDate:(id)arg1 ;
-(id)cellForRow:(int)arg1 ;
-(float)heightForRow:(int)arg1 ;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(void)frequencyPickerUpdated:(id)arg1 ;
-(int)numberOfRows;
-(int)frequency;
@end

