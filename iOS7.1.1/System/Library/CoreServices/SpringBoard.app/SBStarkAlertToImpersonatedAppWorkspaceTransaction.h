/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:00 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBStarkAlertToAppWorkspaceTransaction.h>

@class SBAlert, SBApplication, SBUIAnimationController;

@interface SBStarkAlertToImpersonatedAppWorkspaceTransaction : SBStarkAlertToAppWorkspaceTransaction {

	SBAlert* _fromAlert;
	SBAlert* _toAlert;
	SBApplication* _toApplication;
	SBUIAnimationController* _animation;

}
-(int)_setupMilestonesFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)selfStarkAlertWillActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)selfStarkAlertDidActivate:(id)arg1 overAlerts:(id)arg2 ;
-(BOOL)_shouldDisallowSuspension;
-(id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 alert:(id)arg4 toApplication:(id)arg5 ;
-(void)_activateAlert;
-(void)_beginAnimation;
-(BOOL)selfStarkAlertDidDeactivate:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
@end

