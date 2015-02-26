/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AXEditableTextCell.h>

@class UIStepper, UILabel;

@interface AXEditableTableCellWithStepper : AXEditableTextCell {

	UIStepper* _stepper;
	UILabel* _secondsLabel;

}

@property (nonatomic,retain) UIStepper * stepper;                 //@synthesize stepper=_stepper - In the implementation block
@property (nonatomic,retain) UILabel * secondsLabel;              //@synthesize secondsLabel=_secondsLabel - In the implementation block
-(void)setStepper:(id)arg1 ;
-(id)secondsLabel;
-(void)setSecondsLabel:(id)arg1 ;
-(id)_stepperValueFormatString;
-(id)stepper;
-(void)_stepperChanged:(id)arg1 ;
-(void)_updateSecondsLabel;
-(id)_formattedStringForStepperValue:(double)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end
