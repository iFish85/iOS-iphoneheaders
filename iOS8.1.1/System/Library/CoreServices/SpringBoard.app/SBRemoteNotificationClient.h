/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/NSCoding.h>

@class NSString, NSData, NSDate;

@interface SBRemoteNotificationClient : NSObject <NSCoding> {

	NSString* _bundleIdentifier;
	NSString* _environment;
	NSData* _lastKnownDeviceToken;
	NSDate* _missingDate;
	BOOL _backgroundDeliveryDisabled;
	long long _dayOfLastNewsstandPush;
	unsigned long long _dailyCountOfNewsstandPushes;
	BOOL _backgroundAppRefreshAllowed;
	BOOL _wantsPush;
	NSString* _pushDisabledReason;

}

@property (nonatomic,retain,readonly) NSString * bundleIdentifier;                                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * environment;                                                             //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSData * lastKnownDeviceToken;                                                      //@synthesize lastKnownDeviceToken=_lastKnownDeviceToken - In the implementation block
@property (nonatomic,retain) NSDate * missingDate;                                                               //@synthesize missingDate=_missingDate - In the implementation block
@property (assign,nonatomic) BOOL backgroundDeliveryDisabled;                                                    //@synthesize backgroundDeliveryDisabled=_backgroundDeliveryDisabled - In the implementation block
@property (assign,nonatomic) long long dayOfLastNewsstandPush;                                                   //@synthesize dayOfLastNewsstandPush=_dayOfLastNewsstandPush - In the implementation block
@property (assign,nonatomic) unsigned long long dailyCountOfNewsstandPushes;                                     //@synthesize dailyCountOfNewsstandPushes=_dailyCountOfNewsstandPushes - In the implementation block
@property (getter=isNewsstandApplication,nonatomic,readonly) BOOL newsstandApplication; 
@property (nonatomic,readonly) BOOL supportsBackgroundAppRefresh; 
@property (getter=isPushEnabled,nonatomic,readonly) BOOL pushEnabled; 
@property (nonatomic,retain) NSString * pushDisabledReason;                                                      //@synthesize pushDisabledReason=_pushDisabledReason - In the implementation block
@property (assign,getter=isBackgroundAppRefreshAllowed,nonatomic) BOOL backgroundAppRefreshAllowed;              //@synthesize backgroundAppRefreshAllowed=_backgroundAppRefreshAllowed - In the implementation block
@property (assign,getter=doesWantPush,nonatomic) BOOL wantsPush;                                                 //@synthesize wantsPush=_wantsPush - In the implementation block
-(BOOL)isNewsstandApplication;
-(BOOL)supportsBackgroundAppRefresh;
-(BOOL)backgroundAppRefreshAllowedForBundleIdentifier:(id)arg1 ;
-(BOOL)wantsPushWithCoder:(id)arg1 ;
-(BOOL)doesWantPush;
-(BOOL)allowsUserNotifications;
-(void)setPushDisabledReason:(NSString *)arg1 ;
-(BOOL)isPushEnabled;
-(BOOL)isNewsstandPushEnabled;
-(void)setBackgroundAppRefreshAllowed:(BOOL)arg1 ;
-(NSData *)lastKnownDeviceToken;
-(void)setLastKnownDeviceToken:(NSData *)arg1 ;
-(NSDate *)missingDate;
-(void)setMissingDate:(NSDate *)arg1 ;
-(BOOL)backgroundDeliveryDisabled;
-(void)setBackgroundDeliveryDisabled:(BOOL)arg1 ;
-(long long)dayOfLastNewsstandPush;
-(void)setDayOfLastNewsstandPush:(long long)arg1 ;
-(unsigned long long)dailyCountOfNewsstandPushes;
-(void)setDailyCountOfNewsstandPushes:(unsigned long long)arg1 ;
-(NSString *)pushDisabledReason;
-(BOOL)isBackgroundAppRefreshAllowed;
-(void)setWantsPush:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)environment;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setEnvironment:(NSString *)arg1 ;
-(id)application;
@end

