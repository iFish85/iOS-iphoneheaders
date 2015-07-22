/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/BKOutputAction.h>

@interface BKPrintOutputAction : BKOutputAction {

	char _presentsFromBarButtonItem;
	char _isPortrait;

}

@property (assign,nonatomic) char presentsFromBarButtonItem;              //@synthesize presentsFromBarButtonItem=_presentsFromBarButtonItem - In the implementation block
+(char)deviceHasCapability;
-(void)setupPrintInteractionController:(id)arg1 printInfo:(id)arg2 ;
-(char)presentsFromBarButtonItem;
-(void)willPresentPrintInteractionController:(id)arg1 ;
-(void)didCompletePresentingPrintInteractionController:(id)arg1 ;
-(void)deviceDidRotate:(id)arg1 ;
-(void)presentPrintInteractionController:(id)arg1 ;
-(void)setPresentsFromBarButtonItem:(char)arg1 ;
-(void)performAction:(id)arg1 ;
-(void)cancel;
-(id)title;
@end
