/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIKeyboardImplGeometryDelegate
@property (assign,getter=isMinimized,nonatomic) char minimized; 
@required
-(char)isActive;
-(char)isMinimized;
-(char)shouldSaveMinimizationState;
-(void)setMinimized:(char)arg1;
-(char)canDismiss;
-(void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(char)arg2;
-(void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(char)arg2;

@end

