/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SoundPickerDelegate;
@class TKTonePicker;

@interface SoundPicker : UIViewController {

	TKTonePicker* _ringtonePicker;
	<SoundPickerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <SoundPickerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)willShowWithSoundIdentifier:(id)arg1 ;
-(void)confirm;
-(id)selectedSoundIdentifier;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)dismiss;
-(void)ringtonePicker:(id)arg1 selectedRingtoneWithIdentifier:(id)arg2 ;
@end

