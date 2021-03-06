/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FamilyNotification.framework/familynotificationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <familynotificationd/NotificationProviderDelegate.h>

@class NSMutableDictionary, NSLock, BulletinBoardProvider;

@interface NotificationController : NSObject <NotificationProviderDelegate> {

	NSMutableDictionary* _notificationsByUUID;
	NSMutableDictionary* _notificationsByClient;
	NSLock* _notificationsLock;
	BulletinBoardProvider* _bbProvider;

}
+(id)sharedController;
-(void)removeNotificationWithIdentifier:(id)arg1 fromClient:(id)arg2 ;
-(void)removeAllNotificationsFromClient:(id)arg1 ;
-(id)pendingNotificationsForClient:(id)arg1 ;
-(void)provider:(id)arg1 didActivateNotificationWithUUID:(id)arg2 activationType:(unsigned long long)arg3 ;
-(void)cullPendingNotificationsToCount:(long long)arg1 notifyProvider:(BOOL)arg2 ;
-(id)allPendingNotifications;
-(void)provider:(id)arg1 didClearNotificationsWithUUIDs:(id)arg2 ;
-(void)readPersistedNotificationCache;
-(void)writePersistedNotificationCache;
-(id)providerForNotification:(id)arg1 ;
-(void)_removeNotification:(id)arg1 notifyProvider:(BOOL)arg2 ;
-(id)_allPendingNotificationsSortedByDate;
-(id)_persistedCacheURL;
-(id)xpcConnectionForClientWithMachServiceName:(id)arg1 ;
-(void)provider:(id)arg1 didDismissNotificationWithUUID:(id)arg2 ;
-(id)init;
-(void)start;
-(void)deliverNotification:(id)arg1 ;
@end

