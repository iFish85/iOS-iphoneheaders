/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBConferenceManager : NSObject {

	char _hasFaceTimeCapability;
	MGNotificationTokenStructRef _faceTimeCapabilityUpdateToken;

}
+(id)sharedInstance;
+(void)initialize;
-(char)activeFaceTimeCallExists;
-(void)endFaceTime;
-(char)inFaceTime;
-(char)faceTimeInvitationExists;
-(char)hasFaceTimeCapability;
-(char)canStartFaceTime;
-(void)_faceTimeStateChanged:(id)arg1 ;
-(void)_faceTimeCapabilityChanged:(id)arg1 ;
-(id)incomingFaceTimeCall;
-(id)activeFaceTimeCall;
-(id)currentFaceTimeCall;
-(void)updateStatusBarForChat:(id)arg1 ;
-(void)_updateStatusBarForChat:(id)arg1 ;
-(id)_faceTimeApp;
-(char)faceTimeIsAvailable;
-(id)currentCallRemoteUserId;
-(id)currentCallStatusDisplayString;
-(void)dealloc;
-(id)init;
-(void)invitedToIMAVChat:(id)arg1 ;
@end

