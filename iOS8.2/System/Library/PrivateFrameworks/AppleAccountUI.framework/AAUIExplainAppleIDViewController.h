/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIScrollView, UIView, UILabel, UIButton;

@interface AAUIExplainAppleIDViewController : UIViewController {

	UIScrollView* _scrollView;
	UIView* _contentView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _goToSettingsButton;
	char _shouldShowInviteeInstructions;

}

@property (assign,nonatomic) char shouldShowInviteeInstructions;              //@synthesize shouldShowInviteeInstructions=_shouldShowInviteeInstructions - In the implementation block
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(char)shouldShowInviteeInstructions;
-(void)setShouldShowInviteeInstructions:(char)arg1 ;
-(float)_heightForText:(id)arg1 constrainedToWidth:(float)arg2 ;
@end

