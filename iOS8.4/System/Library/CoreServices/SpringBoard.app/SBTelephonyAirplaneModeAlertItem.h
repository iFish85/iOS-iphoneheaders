/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBLaunchAlertItem.h>

@interface SBTelephonyAirplaneModeAlertItem : SBLaunchAlertItem {

	BOOL _wasDeviceLocked;

}

@property (assign,nonatomic) BOOL wasDeviceLocked;              //@synthesize wasDeviceLocked=_wasDeviceLocked - In the implementation block
-(void)setWasDeviceLocked:(BOOL)arg1 ;
-(BOOL)wasDeviceLocked;
-(BOOL)dismissOnLock;
-(BOOL)reappearsAfterLock;
@end

