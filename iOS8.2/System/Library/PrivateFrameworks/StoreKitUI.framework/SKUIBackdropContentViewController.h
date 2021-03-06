/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController;

@interface SKUIBackdropContentViewController : UIViewController {

	int _backdropViewPrivateStyle;
	UIViewController* _contentViewController;

}

@property (assign,nonatomic) int backdropViewPrivateStyle;                          //@synthesize backdropViewPrivateStyle=_backdropViewPrivateStyle - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
-(void)loadView;
-(UIViewController *)contentViewController;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)setBackdropViewPrivateStyle:(int)arg1 ;
-(int)backdropViewPrivateStyle;
@end

