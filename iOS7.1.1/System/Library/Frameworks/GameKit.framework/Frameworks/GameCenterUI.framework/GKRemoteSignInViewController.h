/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKRemoteViewController.h>
#import <GameCenterUI/SignInServiceViewControllerDelegate.h>

@class GKGame;

@interface GKRemoteSignInViewController : GKRemoteViewController <SignInServiceViewControllerDelegate>

@property (nonatomic,retain) GKGame * game; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)remoteViewControllerIsCanceling;
-(bool)serviceNeedsLocalPlayer;
-(void)populateInitialStateForRemoteView:(id)arg1 ;
-(void)unlockRotation;
-(id)_managingHostedAuthenticateViewController;
@end

