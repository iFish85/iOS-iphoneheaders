/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface NSNotificationQueue : NSObject {

	id _notificationCenter;
	id _asapQueue;
	id _asapObs;
	id _idleQueue;
	id _idleObs;

}
+(id)defaultQueue;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned)arg2 ;
-(id)initWithNotificationCenter:(id)arg1 ;
-(void)_flushNotificationQueue;
-(void)dequeueNotificationsMatching:(id)arg1 coalesceMask:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(void)enqueueNotification:(id)arg1 postingStyle:(unsigned)arg2 coalesceMask:(unsigned)arg3 forModes:(id)arg4 ;
@end

