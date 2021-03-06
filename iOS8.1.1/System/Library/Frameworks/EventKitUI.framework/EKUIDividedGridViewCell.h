/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:12 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UITextLabel, EKUIDividedGridViewController, NSLayoutConstraint;

@interface EKUIDividedGridViewCell : UIView {

	BOOL _selected;
	UITextLabel* _label;
	EKUIDividedGridViewController* _viewController;
	NSLayoutConstraint* _widthConstraint;

}

@property (retain) UITextLabel * label;                                         //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL selected;                                     //@synthesize selected=_selected - In the implementation block
@property (__weak) EKUIDividedGridViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (__weak) NSLayoutConstraint * widthConstraint;                        //@synthesize widthConstraint=_widthConstraint - In the implementation block
-(id)init;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(UITextLabel *)label;
-(void)setViewController:(EKUIDividedGridViewController *)arg1 ;
-(EKUIDividedGridViewController *)viewController;
-(void)setLabel:(UITextLabel *)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(BOOL)selected;
-(void)setWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

