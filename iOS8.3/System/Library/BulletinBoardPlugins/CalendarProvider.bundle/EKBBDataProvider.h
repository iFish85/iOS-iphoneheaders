/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:13:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarProvider/BBDataProvider.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSCalendar, NSTimer, EKEventStore, EKTravelEngine, NSString;

@interface EKBBDataProvider : NSObject <BBDataProvider> {

	NSObject*<OS_dispatch_queue> _alertQueue;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSMutableDictionary* _alerts;
	NSMutableDictionary* _alertRecordIDsToAlertInfos;
	NSObject*<OS_dispatch_source> _travelAdviceRefreshTimer;
	NSCalendar* _gregorianCalendar;
	NSTimer* _syncTimer;
	char _pendingChanges;
	NSObject*<OS_dispatch_queue> _eventStoreQueue;
	EKEventStore* _eventStore;
	EKTravelEngine* _travelEngine;
	NSObject*<OS_dispatch_source> _eventStoreIdleTimerSource;
	char _ignoreLowLevelDatabaseChangedNotifications;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userActivityUserInfoForEvent:(id)arg1 ;
+(id)timeMessageForAdvice:(id)arg1 ;
+(id)_reminderForBulletinRequest:(id)arg1 eventStore:(id)arg2 ;
+(id)_messageForTravelAdvice:(id)arg1 eventLocation:(id)arg2 ;
+(id)_directionsModeForAlertInfo:(id)arg1 ;
+(id)_representationForRequest:(id)arg1 eventIfExists:(id)arg2 displayTimeZone:(id)arg3 ;
+(char)_date:(id)arg1 isWithinEightMinutesOfDate:(id)arg2 ;
+(id)_trafficLevelMessageForAdvice:(id)arg1 ;
-(char)supportsAlerts;
-(char)supportsTravelAdvice;
-(void)eventStoreWillClose;
-(void)clearAlerts:(id)arg1 ;
-(void)performCalendarItemForBulletin:(id)arg1 action:(/*^block*/id)arg2 ;
-(char)allowsLocationAlerts;
-(id)defaultURLForAlertInfo:(id)arg1 ;
-(id)emptyModalTitle;
-(id)actionButtonTitleForAlertInfo:(id)arg1 ;
-(id)viewButtonTitleForAlertInfo:(id)arg1 ;
-(id)modalMessageForAlertInfo:(id)arg1 ;
-(id)entityScheme;
-(void)clearAllAlerts;
-(void)acknowledgeAlerts:(id)arg1 ;
-(void)removeAlerts:(id)arg1 ;
-(id)modalTitleForAlertInfo:(id)arg1 ;
-(id)actionButtonColorForAlertInfo:(id)arg1 ;
-(char)shouldCompleteReminderWhenCustomActionExecuted:(id)arg1 ;
-(id)messageStringForAlert:(id)arg1 ;
-(void)alarmsDidFire:(id)arg1 ;
-(id)expirationDateForAlertInfo:(id)arg1 ;
-(void)bulletinClosed:(id)arg1 ;
-(void)_killEventStoreIdleTimer;
-(void)_alarmsDidFire:(id)arg1 ;
-(id)_findAlarmForCalendarItem:(id)arg1 matchingExternalID:(id)arg2 ;
-(void)_eventStoreChangedNotification:(id)arg1 ;
-(void)_resetEventStoreIdleTimer;
-(void)_withdrawAlertBulletin:(id)arg1 ;
-(void)_bulletinRequestAcknowledged:(id)arg1 alertInfo:(id)arg2 performActions:(/*^block*/id)arg3 ;
-(void)_addAlertModalContent:(id)arg1 bulletin:(id)arg2 ;
-(void)acknowledgeAlert:(id)arg1 performActions:(/*^block*/id)arg2 ;
-(void)_setEventRepresentationForAlertInfo:(id)arg1 onBulletin:(id)arg2 ;
-(id)_bulletinRequestWithAlertInfo:(id)arg1 ;
-(void)_setUpTravelAdviceTimer;
-(void)_refreshTravelAdviceNotificationMessages;
-(id)eventStore;
-(unsigned)allowedEntityTypes;
-(void)_killSyncTimer;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)_syncTimerFired:(id)arg1 ;
-(void)_syncDidEnd;
-(void)_resetSyncTimer;
-(void)_databaseChanged;
-(void)_syncDidStart;
-(void)_receivedTravelAdvice:(id)arg1 forEventWithExternalURL:(id)arg2 ;
-(void)_calDatabaseChangedNotificationReceived;
-(void)dealloc;
-(id)init;
-(id)sortDescriptors;
-(id)sectionIdentifier;
-(void)dataProviderDidLoad;
-(char)syncsBulletinDismissal;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)bulletinsFilteredBy:(unsigned)arg1 count:(unsigned)arg2 lastCleared:(id)arg3 ;
-(void)databaseChanged:(id)arg1 ;
-(void)_localeDidChange:(id)arg1 ;
-(id)alerts;
@end

