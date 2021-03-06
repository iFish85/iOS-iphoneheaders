/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:14:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/AXElementInteractionUIServer.axuiservice/AXElementInteractionUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXElementInteractionUIServer/AXElementInteractionUIServer-Structs.h>
#import <UIKit/UIViewController.h>

@class AXElementInteractionCursorView;

@interface AXElementInteractionViewController : UIViewController {

	CGPathRef _cursorPath;
	AXElementInteractionCursorView* _cursorView;

}

@property (nonatomic,retain) AXElementInteractionCursorView * cursorView;              //@synthesize cursorView=_cursorView - In the implementation block
-(void)setCursorPath:(CGPathRef)arg1 ;
-(AXElementInteractionCursorView *)cursorView;
-(void)setCursorFrame:(CGRect)arg1 ;
-(void)setCursorHidden:(BOOL)arg1 ;
-(void)_updateCursorPath;
-(void)setCursorView:(AXElementInteractionCursorView *)arg1 ;
-(void)loadView;
@end

