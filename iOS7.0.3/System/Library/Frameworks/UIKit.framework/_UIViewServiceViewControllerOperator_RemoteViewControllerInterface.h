/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIViewServiceViewControllerOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface,_UIViewServiceUIBehaviorInterface>
@required
-(void)__setContentSize:(id)arg1;
-(void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(BOOL)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(BOOL)arg5 replyHandler:(/*^block*/ id)arg6;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(int)arg2 statusBarHeight:(float)arg3 completionHandler:(/*^block*/ id)arg4;
-(void)__hostViewDidAppear:(BOOL)arg1;
-(void)__hostViewWillDisappear:(BOOL)arg1;
-(void)__hostViewDidDisappear:(BOOL)arg1;
-(void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned)arg1 newHostingHandleReplyHandler:(/*^block*/ id)arg2;
-(void)__setServiceInPopover:(BOOL)arg1;
-(void)__hostWillEnterForeground;
-(void)__hostDidEnterBackground;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(int)arg1;
-(void)__hostDidChangeStatusBarHeight:(float)arg1;
-(void)__hostWillRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
-(void)__hostDidRotateFromInterfaceOrientation:(int)arg1 skipSelf:(BOOL)arg2;
-(void)__hostDidPromoteFirstResponder;
-(void)__hostedActionSheetDidPresent;
-(void)__hostedActionSheetClickedButtonAtIndex:(int)arg1;
-(void)__hostedActionSheetDidDismissWithClickedButtonIndex:(int)arg1;
-(void)__scrollToTopFromTouchAtViewLocation:(id)arg1 resultHandler:(/*^block*/ id)arg2;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(BOOL)arg3;
-(void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(int)arg2;
-(void)__textServiceDidDismiss;
-(void)__dimmingViewWasTapped;
-(void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(/*^block*/ id)arg3;
-(void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
@end

